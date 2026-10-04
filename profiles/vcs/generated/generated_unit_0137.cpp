#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0137[4085] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 9, 0,
    10, 0, 11, 0, 12, 0, 13, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0, 27, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0, 0, 34, 0,
    35, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51,
    0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 67, 0, 0, 68, 0, 69, 0, 70, 0, 71,
    0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 94, 0,
    95, 0, 0, 96, 0, 97, 0, 98, 0, 0, 99, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 112,
    0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 121, 0, 122, 0,
    123, 0, 124, 0, 125, 0, 0, 126, 0, 127, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 133, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 0, 148,
    0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 0, 155, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0,
    0, 0, 167, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231, 0, 232,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0,
    0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 240, 241, 0, 0, 242,
    0, 0, 0, 243, 0, 0, 244, 0, 245, 0, 246, 0, 0, 247, 248, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252,
    0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 258, 259, 0,
    260, 0, 261, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0,
    0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 273, 0, 274, 0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 278,
    0, 0, 0, 279, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0,
    285, 0, 286, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0,
    293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 299, 300, 0, 0, 301,
    0, 302, 303, 0, 0, 304, 0, 305, 306, 0, 307, 0, 308, 0, 0, 0, 309, 0, 310, 0, 311, 0, 312, 0, 0, 313, 314, 0, 0, 0, 0, 0,
    0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 0, 318, 319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 334, 0, 335,
    0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 364, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0,
    0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 381, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0,
    0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0,
    394, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 403, 0,
    0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 412, 0, 413, 0, 0, 414, 0,
    415, 0, 416, 0, 417, 0, 0, 418, 0, 419, 0, 420, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0,
    0, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0,
    0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0,
    448, 449, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0,
    0, 0, 0, 0, 0, 0, 0, 457, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 466, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 472, 0, 473, 0, 474, 0, 475, 0, 0,
    0, 476, 0, 0, 0, 477, 478, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0,
    485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0,
    0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 495, 0, 496, 0, 0, 0, 497, 0, 0, 498, 0, 499, 0, 0, 500,
    0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0,
    0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0,
    0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 519,
    0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 524, 525, 0, 0, 0, 0,
    0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0,
    530, 0, 531, 0, 532, 0, 0, 533, 534, 0, 535, 0, 0, 536, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0,
    542, 0, 543, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 548, 0, 0, 0, 549,
    0, 550, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0,
    0, 560, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0,
    0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 571, 0, 0,
    0, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 577, 578, 0, 579,
    0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 583, 0, 584, 0, 0, 0, 585, 0, 586, 0,
    0, 587, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 592, 0, 593, 0, 0, 0, 0, 594, 0, 0, 595, 0,
    0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 602, 0, 603, 0,
    604, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608,
    0, 0, 609, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 613, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0,
    0, 617, 0, 0, 618, 0, 619, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 625,
    0, 0, 626, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0, 632, 0,
    0, 0, 0, 633, 0, 0, 0, 634, 0, 635, 0, 636, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 0, 641,
    0, 0, 642, 0, 0, 643, 0, 0, 644, 0, 0, 645, 0, 0, 646, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 655,
    0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 0, 661, 0, 0, 662, 0, 663, 0, 0, 664, 0, 665, 0, 0, 666, 0, 667, 0, 0, 0, 668,
    0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    680, 0, 681, 0, 0, 682, 0, 0, 683, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 694, 0, 695, 0, 696, 0, 697, 0,
    0, 0, 698, 0, 699, 0, 700, 0, 0, 701, 0, 702, 0, 0, 0, 703, 0, 704, 0, 0, 0, 705, 0, 0, 706, 707, 0, 0, 0, 0, 0, 708,
    0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0,
    0, 0, 714, 0, 715, 0, 0, 0, 716, 0, 0, 717, 0, 0, 718, 0, 719, 0, 0, 0, 720, 0, 0, 721, 0, 0, 0, 722, 0, 0, 723, 0,
    0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 727, 0, 728, 0, 729, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 732, 0, 733, 0, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0,
    0, 736, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 740, 0, 0, 741, 0, 742, 0, 0, 0,
    743, 0, 744, 0, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 747, 0, 748, 0, 749, 750, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 755, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0,
    758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 760, 0, 0, 761, 0, 762, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 764,
    0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 768, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 774, 0, 775, 0, 776, 0, 777, 0, 778, 0, 779, 0, 780, 0, 781, 0, 782,
    0, 0, 783, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 787, 0, 0, 0, 788, 0, 0, 0,
    789, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 793, 0, 0, 0, 794, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0, 0,
    797, 0, 0, 0, 798, 0, 0, 799, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804,
    0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 807, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809,
    0, 0, 810, 811, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 814,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 817, 0, 0, 818, 0,
    819, 0, 0, 0, 820, 0, 821, 0, 822, 0, 0, 0, 0, 0, 0, 823, 0, 0, 824, 0, 0, 0, 0, 0, 0, 825, 0, 826, 0, 0, 0, 827,
    0, 0, 0, 828, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 834, 0, 0, 0, 835,
    0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 0, 840, 0, 0, 0, 841, 0, 0, 0, 842, 0, 0, 0, 843,
    0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 850, 0, 0, 851, 852, 0,
    0, 853, 0, 854, 0, 0, 855, 0, 856, 0, 857, 0, 858, 0, 859, 0, 0, 860, 0, 861, 0, 0, 862, 0, 863, 0, 864, 0, 865, 0, 0, 866,
    0, 867, 0, 868, 0, 869, 0, 870, 0, 871, 0, 0, 872, 0, 873, 0, 0, 874, 0, 875, 0, 876, 0, 877, 0, 878, 0, 0, 879, 0, 0, 880,
    881, 0, 0, 882, 0, 0, 0, 883, 0, 0, 0, 884, 0, 0, 0, 885, 0, 0, 0, 886, 0, 887, 0, 0, 0, 888, 0, 0, 0, 889, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 891, 0, 892, 0, 0, 893, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    895, 896, 0, 0, 0, 897, 0, 0, 0, 898, 899, 0, 900, 0, 901, 0, 902, 0, 0, 0, 903,
};
void recomp_unit_0137_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A28004u;
        entry_id = (entry_delta < 16340u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0137[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A28004;
    case 2u: goto L_08A2800C;
    case 3u: goto L_08A28024;
    case 4u: goto L_08A2802C;
    case 5u: goto L_08A28034;
    case 6u: goto L_08A2803C;
    case 7u: goto L_08A2805C;
    case 8u: goto L_08A28064;
    case 9u: goto L_08A2807C;
    case 10u: goto L_08A28084;
    case 11u: goto L_08A2808C;
    case 12u: goto L_08A28094;
    case 13u: goto L_08A2809C;
    case 14u: goto L_08A280A8;
    case 15u: goto L_08A280B4;
    case 16u: goto L_08A280BC;
    case 17u: goto L_08A280C8;
    case 18u: goto L_08A280D8;
    case 19u: goto L_08A280E4;
    case 20u: goto L_08A280F8;
    case 21u: goto L_08A2810C;
    case 22u: goto L_08A28124;
    case 23u: goto L_08A28130;
    case 24u: goto L_08A28150;
    case 25u: goto L_08A28158;
    case 26u: goto L_08A2816C;
    case 27u: goto L_08A28178;
    case 28u: goto L_08A28180;
    case 29u: goto L_08A281A8;
    case 30u: goto L_08A281BC;
    case 31u: goto L_08A281D4;
    case 32u: goto L_08A281E8;
    case 33u: goto L_08A281F0;
    case 34u: goto L_08A281FC;
    case 35u: goto L_08A28204;
    case 36u: goto L_08A2820C;
    case 37u: goto L_08A2821C;
    case 38u: goto L_08A28224;
    case 39u: goto L_08A28234;
    case 40u: goto L_08A28238;
    case 41u: goto L_08A28254;
    case 42u: goto L_08A28260;
    case 43u: goto L_08A2826C;
    case 44u: goto L_08A28298;
    case 45u: goto L_08A282A0;
    case 46u: goto L_08A282B0;
    case 47u: goto L_08A282C4;
    case 48u: goto L_08A282D4;
    case 49u: goto L_08A282E4;
    case 50u: goto L_08A282F0;
    case 51u: goto L_08A28300;
    case 52u: goto L_08A28318;
    case 53u: goto L_08A28320;
    case 54u: goto L_08A28328;
    case 55u: goto L_08A28330;
    case 56u: goto L_08A2833C;
    case 57u: goto L_08A28350;
    case 58u: goto L_08A28358;
    case 59u: goto L_08A28370;
    case 60u: goto L_08A28378;
    case 61u: goto L_08A28380;
    case 62u: goto L_08A283A0;
    case 63u: goto L_08A283A8;
    case 64u: goto L_08A283C0;
    case 65u: goto L_08A283C8;
    case 66u: goto L_08A283D0;
    case 67u: goto L_08A283DC;
    case 68u: goto L_08A283E8;
    case 69u: goto L_08A283F0;
    case 70u: goto L_08A283F8;
    case 71u: goto L_08A28400;
    case 72u: goto L_08A28410;
    case 73u: goto L_08A28418;
    case 74u: goto L_08A28428;
    case 75u: goto L_08A28440;
    case 76u: goto L_08A28454;
    case 77u: goto L_08A2845C;
    case 78u: goto L_08A28474;
    case 79u: goto L_08A28490;
    case 80u: goto L_08A2849C;
    case 81u: goto L_08A284B4;
    case 82u: goto L_08A284C0;
    case 83u: goto L_08A284CC;
    case 84u: goto L_08A284E0;
    case 85u: goto L_08A284EC;
    case 86u: goto L_08A28504;
    case 87u: goto L_08A28514;
    case 88u: goto L_08A2852C;
    case 89u: goto L_08A28544;
    case 90u: goto L_08A28558;
    case 91u: goto L_08A28560;
    case 92u: goto L_08A2856C;
    case 93u: goto L_08A28574;
    case 94u: goto L_08A2857C;
    case 95u: goto L_08A28584;
    case 96u: goto L_08A28590;
    case 97u: goto L_08A28598;
    case 98u: goto L_08A285A0;
    case 99u: goto L_08A285AC;
    case 100u: goto L_08A285B0;
    case 101u: goto L_08A285CC;
    case 102u: goto L_08A285D8;
    case 103u: goto L_08A285E4;
    case 104u: goto L_08A28610;
    case 105u: goto L_08A28618;
    case 106u: goto L_08A28628;
    case 107u: goto L_08A28638;
    case 108u: goto L_08A28640;
    case 109u: goto L_08A28658;
    case 110u: goto L_08A28660;
    case 111u: goto L_08A28678;
    case 112u: goto L_08A28680;
    case 113u: goto L_08A28688;
    case 114u: goto L_08A28690;
    case 115u: goto L_08A286A4;
    case 116u: goto L_08A286B4;
    case 117u: goto L_08A286BC;
    case 118u: goto L_08A286D4;
    case 119u: goto L_08A286DC;
    case 120u: goto L_08A286E8;
    case 121u: goto L_08A286F4;
    case 122u: goto L_08A286FC;
    case 123u: goto L_08A28704;
    case 124u: goto L_08A2870C;
    case 125u: goto L_08A28714;
    case 126u: goto L_08A28720;
    case 127u: goto L_08A28728;
    case 128u: goto L_08A28730;
    case 129u: goto L_08A2873C;
    case 130u: goto L_08A28754;
    case 131u: goto L_08A28768;
    case 132u: goto L_08A28770;
    case 133u: goto L_08A2877C;
    case 134u: goto L_08A28788;
    case 135u: goto L_08A287A4;
    case 136u: goto L_08A287B0;
    case 137u: goto L_08A287C8;
    case 138u: goto L_08A287D4;
    case 139u: goto L_08A287E0;
    case 140u: goto L_08A287F4;
    case 141u: goto L_08A28800;
    case 142u: goto L_08A28818;
    case 143u: goto L_08A28828;
    case 144u: goto L_08A28840;
    case 145u: goto L_08A28858;
    case 146u: goto L_08A2886C;
    case 147u: goto L_08A28874;
    case 148u: goto L_08A28880;
    case 149u: goto L_08A28888;
    case 150u: goto L_08A28890;
    case 151u: goto L_08A28898;
    case 152u: goto L_08A288A4;
    case 153u: goto L_08A288AC;
    case 154u: goto L_08A288B4;
    case 155u: goto L_08A288C0;
    case 156u: goto L_08A288C4;
    case 157u: goto L_08A288E0;
    case 158u: goto L_08A288EC;
    case 159u: goto L_08A288F8;
    case 160u: goto L_08A28924;
    case 161u: goto L_08A2892C;
    case 162u: goto L_08A2893C;
    case 163u: goto L_08A2894C;
    case 164u: goto L_08A28954;
    case 165u: goto L_08A2896C;
    case 166u: goto L_08A28974;
    case 167u: goto L_08A2898C;
    case 168u: goto L_08A28994;
    case 169u: goto L_08A2899C;
    case 170u: goto L_08A289A4;
    case 171u: goto L_08A289B8;
    case 172u: goto L_08A289C8;
    case 173u: goto L_08A289D0;
    case 174u: goto L_08A289E8;
    case 175u: goto L_08A289F0;
    case 176u: goto L_08A28A1C;
    case 177u: goto L_08A28A24;
    case 178u: goto L_08A28A2C;
    case 179u: goto L_08A28A44;
    case 180u: goto L_08A28A4C;
    case 181u: goto L_08A28A54;
    case 182u: goto L_08A28A5C;
    case 183u: goto L_08A28A64;
    case 184u: goto L_08A28A6C;
    case 185u: goto L_08A28A98;
    case 186u: goto L_08A28AA0;
    case 187u: goto L_08A28AA8;
    case 188u: goto L_08A28AC0;
    case 189u: goto L_08A28AC8;
    case 190u: goto L_08A28AD0;
    case 191u: goto L_08A28AD8;
    case 192u: goto L_08A28AE0;
    case 193u: goto L_08A28AE8;
    case 194u: goto L_08A28B14;
    case 195u: goto L_08A28B1C;
    case 196u: goto L_08A28B24;
    case 197u: goto L_08A28B3C;
    case 198u: goto L_08A28B44;
    case 199u: goto L_08A28B4C;
    case 200u: goto L_08A28B54;
    case 201u: goto L_08A28B5C;
    case 202u: goto L_08A28B64;
    case 203u: goto L_08A28B90;
    case 204u: goto L_08A28B98;
    case 205u: goto L_08A28BA0;
    case 206u: goto L_08A28BB8;
    case 207u: goto L_08A28BC0;
    case 208u: goto L_08A28BC8;
    case 209u: goto L_08A28BD0;
    case 210u: goto L_08A28BD8;
    case 211u: goto L_08A28BE0;
    case 212u: goto L_08A28C0C;
    case 213u: goto L_08A28C14;
    case 214u: goto L_08A28C1C;
    case 215u: goto L_08A28C34;
    case 216u: goto L_08A28C3C;
    case 217u: goto L_08A28C44;
    case 218u: goto L_08A28C4C;
    case 219u: goto L_08A28C54;
    case 220u: goto L_08A28C5C;
    case 221u: goto L_08A28C88;
    case 222u: goto L_08A28C90;
    case 223u: goto L_08A28C98;
    case 224u: goto L_08A28CB0;
    case 225u: goto L_08A28CB8;
    case 226u: goto L_08A28CC0;
    case 227u: goto L_08A28CC8;
    case 228u: goto L_08A28CD0;
    case 229u: goto L_08A28CD8;
    case 230u: goto L_08A28CE0;
    case 231u: goto L_08A28CF8;
    case 232u: goto L_08A28D00;
    case 233u: goto L_08A28D34;
    case 234u: goto L_08A28DFC;
    case 235u: goto L_08A28E08;
    case 236u: goto L_08A28E34;
    case 237u: goto L_08A28E4C;
    case 238u: goto L_08A28E54;
    case 239u: goto L_08A28E64;
    case 240u: goto L_08A28E70;
    case 241u: goto L_08A28E74;
    case 242u: goto L_08A28E80;
    case 243u: goto L_08A28E90;
    case 244u: goto L_08A28E9C;
    case 245u: goto L_08A28EA4;
    case 246u: goto L_08A28EAC;
    case 247u: goto L_08A28EB8;
    case 248u: goto L_08A28EBC;
    case 249u: goto L_08A28ECC;
    case 250u: goto L_08A28ED4;
    case 251u: goto L_08A28EEC;
    case 252u: goto L_08A28F00;
    case 253u: goto L_08A28F14;
    case 254u: goto L_08A28F20;
    case 255u: goto L_08A28F38;
    case 256u: goto L_08A28F5C;
    case 257u: goto L_08A28F64;
    case 258u: goto L_08A28F78;
    case 259u: goto L_08A28F7C;
    case 260u: goto L_08A28F84;
    case 261u: goto L_08A28F8C;
    case 262u: goto L_08A28FA0;
    case 263u: goto L_08A28FA8;
    case 264u: goto L_08A28FBC;
    case 265u: goto L_08A28FC4;
    case 266u: goto L_08A28FD4;
    case 267u: goto L_08A28FE4;
    case 268u: goto L_08A28FEC;
    case 269u: goto L_08A2900C;
    case 270u: goto L_08A29020;
    case 271u: goto L_08A29034;
    case 272u: goto L_08A29048;
    case 273u: goto L_08A2904C;
    case 274u: goto L_08A29054;
    case 275u: goto L_08A2905C;
    case 276u: goto L_08A29064;
    case 277u: goto L_08A29070;
    case 278u: goto L_08A29080;
    case 279u: goto L_08A29090;
    case 280u: goto L_08A29094;
    case 281u: goto L_08A2909C;
    case 282u: goto L_08A290C8;
    case 283u: goto L_08A290DC;
    case 284u: goto L_08A290F8;
    case 285u: goto L_08A29104;
    case 286u: goto L_08A2910C;
    case 287u: goto L_08A29120;
    case 288u: goto L_08A2912C;
    case 289u: goto L_08A29148;
    case 290u: goto L_08A29154;
    case 291u: goto L_08A2916C;
    case 292u: goto L_08A29178;
    case 293u: goto L_08A29184;
    case 294u: goto L_08A291A0;
    case 295u: goto L_08A291B8;
    case 296u: goto L_08A291C0;
    case 297u: goto L_08A291D4;
    case 298u: goto L_08A291DC;
    case 299u: goto L_08A291F0;
    case 300u: goto L_08A291F4;
    case 301u: goto L_08A29200;
    case 302u: goto L_08A29208;
    case 303u: goto L_08A2920C;
    case 304u: goto L_08A29218;
    case 305u: goto L_08A29220;
    case 306u: goto L_08A29224;
    case 307u: goto L_08A2922C;
    case 308u: goto L_08A29234;
    case 309u: goto L_08A29244;
    case 310u: goto L_08A2924C;
    case 311u: goto L_08A29254;
    case 312u: goto L_08A2925C;
    case 313u: goto L_08A29268;
    case 314u: goto L_08A2926C;
    case 315u: goto L_08A29288;
    case 316u: goto L_08A29294;
    case 317u: goto L_08A292A0;
    case 318u: goto L_08A292B0;
    case 319u: goto L_08A292B4;
    case 320u: goto L_08A292C0;
    case 321u: goto L_08A292D0;
    case 322u: goto L_08A292F0;
    case 323u: goto L_08A29300;
    case 324u: goto L_08A2935C;
    case 325u: goto L_08A2936C;
    case 326u: goto L_08A29374;
    case 327u: goto L_08A293A0;
    case 328u: goto L_08A29478;
    case 329u: goto L_08A294E8;
    case 330u: goto L_08A29564;
    case 331u: goto L_08A2956C;
    case 332u: goto L_08A295EC;
    case 333u: goto L_08A295F4;
    case 334u: goto L_08A295F8;
    case 335u: goto L_08A29600;
    case 336u: goto L_08A29610;
    case 337u: goto L_08A2961C;
    case 338u: goto L_08A29670;
    case 339u: goto L_08A29680;
    case 340u: goto L_08A296B4;
    case 341u: goto L_08A296C0;
    case 342u: goto L_08A296F0;
    case 343u: goto L_08A29718;
    case 344u: goto L_08A2974C;
    case 345u: goto L_08A2975C;
    case 346u: goto L_08A29770;
    case 347u: goto L_08A297A8;
    case 348u: goto L_08A297B4;
    case 349u: goto L_08A297BC;
    case 350u: goto L_08A297E0;
    case 351u: goto L_08A2984C;
    case 352u: goto L_08A29894;
    case 353u: goto L_08A298D4;
    case 354u: goto L_08A298E8;
    case 355u: goto L_08A298FC;
    case 356u: goto L_08A29AE4;
    case 357u: goto L_08A29B40;
    case 358u: goto L_08A29B50;
    case 359u: goto L_08A29B58;
    case 360u: goto L_08A29B7C;
    case 361u: goto L_08A29B84;
    case 362u: goto L_08A29BA4;
    case 363u: goto L_08A29BAC;
    case 364u: goto L_08A29BBC;
    case 365u: goto L_08A29BC0;
    case 366u: goto L_08A29BD0;
    case 367u: goto L_08A29BF4;
    case 368u: goto L_08A29BFC;
    case 369u: goto L_08A29C14;
    case 370u: goto L_08A29C28;
    case 371u: goto L_08A29C48;
    case 372u: goto L_08A29C60;
    case 373u: goto L_08A29C74;
    case 374u: goto L_08A29C94;
    case 375u: goto L_08A29CA4;
    case 376u: goto L_08A29CB8;
    case 377u: goto L_08A29D08;
    case 378u: goto L_08A29D28;
    case 379u: goto L_08A29D3C;
    case 380u: goto L_08A29D4C;
    case 381u: goto L_08A29D54;
    case 382u: goto L_08A29D5C;
    case 383u: goto L_08A29D68;
    case 384u: goto L_08A29D78;
    case 385u: goto L_08A29D88;
    case 386u: goto L_08A29D98;
    case 387u: goto L_08A29DA8;
    case 388u: goto L_08A29DBC;
    case 389u: goto L_08A29DC8;
    case 390u: goto L_08A29DD4;
    case 391u: goto L_08A29DE0;
    case 392u: goto L_08A29DEC;
    case 393u: goto L_08A29DF8;
    case 394u: goto L_08A29E04;
    case 395u: goto L_08A29E0C;
    case 396u: goto L_08A29E18;
    case 397u: goto L_08A29E20;
    case 398u: goto L_08A29E28;
    case 399u: goto L_08A29E30;
    case 400u: goto L_08A29E44;
    case 401u: goto L_08A29E5C;
    case 402u: goto L_08A29E68;
    case 403u: goto L_08A29E7C;
    case 404u: goto L_08A29E98;
    case 405u: goto L_08A29EB8;
    case 406u: goto L_08A29ED4;
    case 407u: goto L_08A29EF4;
    case 408u: goto L_08A29F10;
    case 409u: goto L_08A29F2C;
    case 410u: goto L_08A29F48;
    case 411u: goto L_08A29F54;
    case 412u: goto L_08A29F68;
    case 413u: goto L_08A29F70;
    case 414u: goto L_08A29F7C;
    case 415u: goto L_08A29F84;
    case 416u: goto L_08A29F8C;
    case 417u: goto L_08A29F94;
    case 418u: goto L_08A29FA0;
    case 419u: goto L_08A29FA8;
    case 420u: goto L_08A29FB0;
    case 421u: goto L_08A29FC0;
    case 422u: goto L_08A29FC8;
    case 423u: goto L_08A29FE0;
    case 424u: goto L_08A29FEC;
    case 425u: goto L_08A29FFC;
    case 426u: goto L_08A2A00C;
    case 427u: goto L_08A2A014;
    case 428u: goto L_08A2A01C;
    case 429u: goto L_08A2A024;
    case 430u: goto L_08A2A02C;
    case 431u: goto L_08A2A034;
    case 432u: goto L_08A2A03C;
    case 433u: goto L_08A2A044;
    case 434u: goto L_08A2A054;
    case 435u: goto L_08A2A06C;
    case 436u: goto L_08A2A078;
    case 437u: goto L_08A2A09C;
    case 438u: goto L_08A2A0A8;
    case 439u: goto L_08A2A0B4;
    case 440u: goto L_08A2A0D8;
    case 441u: goto L_08A2A0E4;
    case 442u: goto L_08A2A0F0;
    case 443u: goto L_08A2A120;
    case 444u: goto L_08A2A128;
    case 445u: goto L_08A2A14C;
    case 446u: goto L_08A2A158;
    case 447u: goto L_08A2A160;
    case 448u: goto L_08A2A184;
    case 449u: goto L_08A2A188;
    case 450u: goto L_08A2A190;
    case 451u: goto L_08A2A19C;
    case 452u: goto L_08A2A1B4;
    case 453u: goto L_08A2A1C0;
    case 454u: goto L_08A2A1E4;
    case 455u: goto L_08A2A1F0;
    case 456u: goto L_08A2A1FC;
    case 457u: goto L_08A2A220;
    case 458u: goto L_08A2A224;
    case 459u: goto L_08A2A240;
    case 460u: goto L_08A2A258;
    case 461u: goto L_08A2A260;
    case 462u: goto L_08A2A2A8;
    case 463u: goto L_08A2A2D0;
    case 464u: goto L_08A2A2D8;
    case 465u: goto L_08A2A2E0;
    case 466u: goto L_08A2A308;
    case 467u: goto L_08A2A310;
    case 468u: goto L_08A2A31C;
    case 469u: goto L_08A2A348;
    case 470u: goto L_08A2A350;
    case 471u: goto L_08A2A358;
    case 472u: goto L_08A2A360;
    case 473u: goto L_08A2A368;
    case 474u: goto L_08A2A370;
    case 475u: goto L_08A2A378;
    case 476u: goto L_08A2A388;
    case 477u: goto L_08A2A398;
    case 478u: goto L_08A2A39C;
    case 479u: goto L_08A2A3A4;
    case 480u: goto L_08A2A3B0;
    case 481u: goto L_08A2A3BC;
    case 482u: goto L_08A2A3C8;
    case 483u: goto L_08A2A3D4;
    case 484u: goto L_08A2A3E8;
    case 485u: goto L_08A2A404;
    case 486u: goto L_08A2A414;
    case 487u: goto L_08A2A430;
    case 488u: goto L_08A2A43C;
    case 489u: goto L_08A2A460;
    case 490u: goto L_08A2A46C;
    case 491u: goto L_08A2A488;
    case 492u: goto L_08A2A498;
    case 493u: goto L_08A2A4B4;
    case 494u: goto L_08A2A4C0;
    case 495u: goto L_08A2A4C8;
    case 496u: goto L_08A2A4D0;
    case 497u: goto L_08A2A4E0;
    case 498u: goto L_08A2A4EC;
    case 499u: goto L_08A2A4F4;
    case 500u: goto L_08A2A500;
    case 501u: goto L_08A2A50C;
    case 502u: goto L_08A2A51C;
    case 503u: goto L_08A2A534;
    case 504u: goto L_08A2A540;
    case 505u: goto L_08A2A564;
    case 506u: goto L_08A2A570;
    case 507u: goto L_08A2A57C;
    case 508u: goto L_08A2A5A0;
    case 509u: goto L_08A2A5AC;
    case 510u: goto L_08A2A5B8;
    case 511u: goto L_08A2A5E4;
    case 512u: goto L_08A2A5F0;
    case 513u: goto L_08A2A614;
    case 514u: goto L_08A2A620;
    case 515u: goto L_08A2A62C;
    case 516u: goto L_08A2A650;
    case 517u: goto L_08A2A65C;
    case 518u: goto L_08A2A668;
    case 519u: goto L_08A2A680;
    case 520u: goto L_08A2A68C;
    case 521u: goto L_08A2A6B0;
    case 522u: goto L_08A2A6BC;
    case 523u: goto L_08A2A6C8;
    case 524u: goto L_08A2A6EC;
    case 525u: goto L_08A2A6F0;
    case 526u: goto L_08A2A70C;
    case 527u: goto L_08A2A724;
    case 528u: goto L_08A2A72C;
    case 529u: goto L_08A2A778;
    case 530u: goto L_08A2A784;
    case 531u: goto L_08A2A78C;
    case 532u: goto L_08A2A794;
    case 533u: goto L_08A2A7A0;
    case 534u: goto L_08A2A7A4;
    case 535u: goto L_08A2A7AC;
    case 536u: goto L_08A2A7B8;
    case 537u: goto L_08A2A7C0;
    case 538u: goto L_08A2A7CC;
    case 539u: goto L_08A2A7D8;
    case 540u: goto L_08A2A7E8;
    case 541u: goto L_08A2A7F8;
    case 542u: goto L_08A2A804;
    case 543u: goto L_08A2A80C;
    case 544u: goto L_08A2A818;
    case 545u: goto L_08A2A828;
    case 546u: goto L_08A2A860;
    case 547u: goto L_08A2A868;
    case 548u: goto L_08A2A870;
    case 549u: goto L_08A2A880;
    case 550u: goto L_08A2A888;
    case 551u: goto L_08A2A894;
    case 552u: goto L_08A2A8A4;
    case 553u: goto L_08A2A8B8;
    case 554u: goto L_08A2A8E8;
    case 555u: goto L_08A2A8F0;
    case 556u: goto L_08A2A94C;
    case 557u: goto L_08A2A958;
    case 558u: goto L_08A2A968;
    case 559u: goto L_08A2A970;
    case 560u: goto L_08A2A988;
    case 561u: goto L_08A2A994;
    case 562u: goto L_08A2A9A4;
    case 563u: goto L_08A2A9B4;
    case 564u: goto L_08A2A9E0;
    case 565u: goto L_08A2A9F4;
    case 566u: goto L_08A2AA14;
    case 567u: goto L_08A2AA24;
    case 568u: goto L_08A2AA2C;
    case 569u: goto L_08A2AA5C;
    case 570u: goto L_08A2AA64;
    case 571u: goto L_08A2AA78;
    case 572u: goto L_08A2AA98;
    case 573u: goto L_08A2AAA8;
    case 574u: goto L_08A2AAB4;
    case 575u: goto L_08A2AABC;
    case 576u: goto L_08A2AAEC;
    case 577u: goto L_08A2AAF4;
    case 578u: goto L_08A2AAF8;
    case 579u: goto L_08A2AB00;
    case 580u: goto L_08A2AB0C;
    case 581u: goto L_08A2AB18;
    case 582u: goto L_08A2AB50;
    case 583u: goto L_08A2AB5C;
    case 584u: goto L_08A2AB64;
    case 585u: goto L_08A2AB74;
    case 586u: goto L_08A2AB7C;
    case 587u: goto L_08A2AB88;
    case 588u: goto L_08A2AB9C;
    case 589u: goto L_08A2ABA8;
    case 590u: goto L_08A2ABB4;
    case 591u: goto L_08A2ABC8;
    case 592u: goto L_08A2ABD4;
    case 593u: goto L_08A2ABDC;
    case 594u: goto L_08A2ABF0;
    case 595u: goto L_08A2ABFC;
    case 596u: goto L_08A2AC10;
    case 597u: goto L_08A2AC1C;
    case 598u: goto L_08A2AC30;
    case 599u: goto L_08A2AC40;
    case 600u: goto L_08A2AC54;
    case 601u: goto L_08A2AC68;
    case 602u: goto L_08A2AC74;
    case 603u: goto L_08A2AC7C;
    case 604u: goto L_08A2AC84;
    case 605u: goto L_08A2AC8C;
    case 606u: goto L_08A2ACB8;
    case 607u: goto L_08A2ACF0;
    case 608u: goto L_08A2AD00;
    case 609u: goto L_08A2AD0C;
    case 610u: goto L_08A2AD14;
    case 611u: goto L_08A2AD30;
    case 612u: goto L_08A2AD40;
    case 613u: goto L_08A2AD4C;
    case 614u: goto L_08A2AD54;
    case 615u: goto L_08A2AD60;
    case 616u: goto L_08A2AD78;
    case 617u: goto L_08A2AD88;
    case 618u: goto L_08A2AD94;
    case 619u: goto L_08A2AD9C;
    case 620u: goto L_08A2ADA8;
    case 621u: goto L_08A2ADC0;
    case 622u: goto L_08A2ADD0;
    case 623u: goto L_08A2ADDC;
    case 624u: goto L_08A2ADF8;
    case 625u: goto L_08A2AE00;
    case 626u: goto L_08A2AE0C;
    case 627u: goto L_08A2AE14;
    case 628u: goto L_08A2AE1C;
    case 629u: goto L_08A2AE48;
    case 630u: goto L_08A2AE64;
    case 631u: goto L_08A2AE74;
    case 632u: goto L_08A2AE7C;
    case 633u: goto L_08A2AE90;
    case 634u: goto L_08A2AEA0;
    case 635u: goto L_08A2AEA8;
    case 636u: goto L_08A2AEB0;
    case 637u: goto L_08A2AEBC;
    case 638u: goto L_08A2AECC;
    case 639u: goto L_08A2AEDC;
    case 640u: goto L_08A2AEEC;
    case 641u: goto L_08A2AF00;
    case 642u: goto L_08A2AF0C;
    case 643u: goto L_08A2AF18;
    case 644u: goto L_08A2AF24;
    case 645u: goto L_08A2AF30;
    case 646u: goto L_08A2AF3C;
    case 647u: goto L_08A2AF40;
    case 648u: goto L_08A2AF68;
    case 649u: goto L_08A2AF70;
    case 650u: goto L_08A2AF98;
    case 651u: goto L_08A2AFA4;
    case 652u: goto L_08A2AFB0;
    case 653u: goto L_08A2AFDC;
    case 654u: goto L_08A2AFF8;
    case 655u: goto L_08A2B000;
    case 656u: goto L_08A2B008;
    case 657u: goto L_08A2B010;
    case 658u: goto L_08A2B018;
    case 659u: goto L_08A2B020;
    case 660u: goto L_08A2B028;
    case 661u: goto L_08A2B034;
    case 662u: goto L_08A2B040;
    case 663u: goto L_08A2B048;
    case 664u: goto L_08A2B054;
    case 665u: goto L_08A2B05C;
    case 666u: goto L_08A2B068;
    case 667u: goto L_08A2B070;
    case 668u: goto L_08A2B080;
    case 669u: goto L_08A2B090;
    case 670u: goto L_08A2B0A0;
    case 671u: goto L_08A2B0B0;
    case 672u: goto L_08A2B0C0;
    case 673u: goto L_08A2B0D0;
    case 674u: goto L_08A2B0E0;
    case 675u: goto L_08A2B108;
    case 676u: goto L_08A2B110;
    case 677u: goto L_08A2B13C;
    case 678u: goto L_08A2B14C;
    case 679u: goto L_08A2B15C;
    case 680u: goto L_08A2B184;
    case 681u: goto L_08A2B18C;
    case 682u: goto L_08A2B198;
    case 683u: goto L_08A2B1A4;
    case 684u: goto L_08A2B1B0;
    case 685u: goto L_08A2B1C0;
    case 686u: goto L_08A2B1D8;
    case 687u: goto L_08A2B1E4;
    case 688u: goto L_08A2B1F4;
    case 689u: goto L_08A2B224;
    case 690u: goto L_08A2B230;
    case 691u: goto L_08A2B238;
    case 692u: goto L_08A2B254;
    case 693u: goto L_08A2B25C;
    case 694u: goto L_08A2B264;
    case 695u: goto L_08A2B26C;
    case 696u: goto L_08A2B274;
    case 697u: goto L_08A2B27C;
    case 698u: goto L_08A2B28C;
    case 699u: goto L_08A2B294;
    case 700u: goto L_08A2B29C;
    case 701u: goto L_08A2B2A8;
    case 702u: goto L_08A2B2B0;
    case 703u: goto L_08A2B2C0;
    case 704u: goto L_08A2B2C8;
    case 705u: goto L_08A2B2D8;
    case 706u: goto L_08A2B2E4;
    case 707u: goto L_08A2B2E8;
    case 708u: goto L_08A2B300;
    case 709u: goto L_08A2B310;
    case 710u: goto L_08A2B330;
    case 711u: goto L_08A2B340;
    case 712u: goto L_08A2B34C;
    case 713u: goto L_08A2B37C;
    case 714u: goto L_08A2B38C;
    case 715u: goto L_08A2B394;
    case 716u: goto L_08A2B3A4;
    case 717u: goto L_08A2B3B0;
    case 718u: goto L_08A2B3BC;
    case 719u: goto L_08A2B3C4;
    case 720u: goto L_08A2B3D4;
    case 721u: goto L_08A2B3E0;
    case 722u: goto L_08A2B3F0;
    case 723u: goto L_08A2B3FC;
    case 724u: goto L_08A2B408;
    case 725u: goto L_08A2B420;
    case 726u: goto L_08A2B44C;
    case 727u: goto L_08A2B488;
    case 728u: goto L_08A2B490;
    case 729u: goto L_08A2B498;
    case 730u: goto L_08A2B4A4;
    case 731u: goto L_08A2B4BC;
    case 732u: goto L_08A2B4CC;
    case 733u: goto L_08A2B4D4;
    case 734u: goto L_08A2B4E8;
    case 735u: goto L_08A2B4F8;
    case 736u: goto L_08A2B508;
    case 737u: goto L_08A2B50C;
    case 738u: goto L_08A2B544;
    case 739u: goto L_08A2B554;
    case 740u: goto L_08A2B560;
    case 741u: goto L_08A2B56C;
    case 742u: goto L_08A2B574;
    case 743u: goto L_08A2B584;
    case 744u: goto L_08A2B58C;
    case 745u: goto L_08A2B59C;
    case 746u: goto L_08A2B5B4;
    case 747u: goto L_08A2B5BC;
    case 748u: goto L_08A2B5C4;
    case 749u: goto L_08A2B5CC;
    case 750u: goto L_08A2B5D0;
    case 751u: goto L_08A2B5D8;
    case 752u: goto L_08A2B5EC;
    case 753u: goto L_08A2B628;
    case 754u: goto L_08A2B630;
    case 755u: goto L_08A2B640;
    case 756u: goto L_08A2B648;
    case 757u: goto L_08A2B674;
    case 758u: goto L_08A2B684;
    case 759u: goto L_08A2B6B4;
    case 760u: goto L_08A2B6C0;
    case 761u: goto L_08A2B6CC;
    case 762u: goto L_08A2B6D4;
    case 763u: goto L_08A2B6EC;
    case 764u: goto L_08A2B700;
    case 765u: goto L_08A2B70C;
    case 766u: goto L_08A2B71C;
    case 767u: goto L_08A2B72C;
    case 768u: goto L_08A2B738;
    case 769u: goto L_08A2B748;
    case 770u: goto L_08A2B750;
    case 771u: goto L_08A2B768;
    case 772u: goto L_08A2B7A4;
    case 773u: goto L_08A2B7B8;
    case 774u: goto L_08A2B7C0;
    case 775u: goto L_08A2B7C8;
    case 776u: goto L_08A2B7D0;
    case 777u: goto L_08A2B7D8;
    case 778u: goto L_08A2B7E0;
    case 779u: goto L_08A2B7E8;
    case 780u: goto L_08A2B7F0;
    case 781u: goto L_08A2B7F8;
    case 782u: goto L_08A2B800;
    case 783u: goto L_08A2B80C;
    case 784u: goto L_08A2B814;
    case 785u: goto L_08A2B844;
    case 786u: goto L_08A2B854;
    case 787u: goto L_08A2B864;
    case 788u: goto L_08A2B874;
    case 789u: goto L_08A2B884;
    case 790u: goto L_08A2B894;
    case 791u: goto L_08A2B8A4;
    case 792u: goto L_08A2B8B4;
    case 793u: goto L_08A2B8C4;
    case 794u: goto L_08A2B8D4;
    case 795u: goto L_08A2B8E4;
    case 796u: goto L_08A2B8F4;
    case 797u: goto L_08A2B904;
    case 798u: goto L_08A2B914;
    case 799u: goto L_08A2B920;
    case 800u: goto L_08A2B928;
    case 801u: goto L_08A2B970;
    case 802u: goto L_08A2B9A4;
    case 803u: goto L_08A2B9D0;
    case 804u: goto L_08A2BA00;
    case 805u: goto L_08A2BA0C;
    case 806u: goto L_08A2BA40;
    case 807u: goto L_08A2BA4C;
    case 808u: goto L_08A2BA54;
    case 809u: goto L_08A2BA80;
    case 810u: goto L_08A2BA8C;
    case 811u: goto L_08A2BA90;
    case 812u: goto L_08A2BABC;
    case 813u: goto L_08A2BAF4;
    case 814u: goto L_08A2BB00;
    case 815u: goto L_08A2BB2C;
    case 816u: goto L_08A2BB58;
    case 817u: goto L_08A2BB70;
    case 818u: goto L_08A2BB7C;
    case 819u: goto L_08A2BB84;
    case 820u: goto L_08A2BB94;
    case 821u: goto L_08A2BB9C;
    case 822u: goto L_08A2BBA4;
    case 823u: goto L_08A2BBC0;
    case 824u: goto L_08A2BBCC;
    case 825u: goto L_08A2BBE8;
    case 826u: goto L_08A2BBF0;
    case 827u: goto L_08A2BC00;
    case 828u: goto L_08A2BC10;
    case 829u: goto L_08A2BC20;
    case 830u: goto L_08A2BC30;
    case 831u: goto L_08A2BC40;
    case 832u: goto L_08A2BC50;
    case 833u: goto L_08A2BC60;
    case 834u: goto L_08A2BC70;
    case 835u: goto L_08A2BC80;
    case 836u: goto L_08A2BC90;
    case 837u: goto L_08A2BCA0;
    case 838u: goto L_08A2BCB0;
    case 839u: goto L_08A2BCC0;
    case 840u: goto L_08A2BCD0;
    case 841u: goto L_08A2BCE0;
    case 842u: goto L_08A2BCF0;
    case 843u: goto L_08A2BD00;
    case 844u: goto L_08A2BD10;
    case 845u: goto L_08A2BD20;
    case 846u: goto L_08A2BD30;
    case 847u: goto L_08A2BD40;
    case 848u: goto L_08A2BD50;
    case 849u: goto L_08A2BD60;
    case 850u: goto L_08A2BD6C;
    case 851u: goto L_08A2BD78;
    case 852u: goto L_08A2BD7C;
    case 853u: goto L_08A2BD88;
    case 854u: goto L_08A2BD90;
    case 855u: goto L_08A2BD9C;
    case 856u: goto L_08A2BDA4;
    case 857u: goto L_08A2BDAC;
    case 858u: goto L_08A2BDB4;
    case 859u: goto L_08A2BDBC;
    case 860u: goto L_08A2BDC8;
    case 861u: goto L_08A2BDD0;
    case 862u: goto L_08A2BDDC;
    case 863u: goto L_08A2BDE4;
    case 864u: goto L_08A2BDEC;
    case 865u: goto L_08A2BDF4;
    case 866u: goto L_08A2BE00;
    case 867u: goto L_08A2BE08;
    case 868u: goto L_08A2BE10;
    case 869u: goto L_08A2BE18;
    case 870u: goto L_08A2BE20;
    case 871u: goto L_08A2BE28;
    case 872u: goto L_08A2BE34;
    case 873u: goto L_08A2BE3C;
    case 874u: goto L_08A2BE48;
    case 875u: goto L_08A2BE50;
    case 876u: goto L_08A2BE58;
    case 877u: goto L_08A2BE60;
    case 878u: goto L_08A2BE68;
    case 879u: goto L_08A2BE74;
    case 880u: goto L_08A2BE80;
    case 881u: goto L_08A2BE84;
    case 882u: goto L_08A2BE90;
    case 883u: goto L_08A2BEA0;
    case 884u: goto L_08A2BEB0;
    case 885u: goto L_08A2BEC0;
    case 886u: goto L_08A2BED0;
    case 887u: goto L_08A2BED8;
    case 888u: goto L_08A2BEE8;
    case 889u: goto L_08A2BEF8;
    case 890u: goto L_08A2BF28;
    case 891u: goto L_08A2BF30;
    case 892u: goto L_08A2BF38;
    case 893u: goto L_08A2BF44;
    case 894u: goto L_08A2BF54;
    case 895u: goto L_08A2BF84;
    case 896u: goto L_08A2BF88;
    case 897u: goto L_08A2BF98;
    case 898u: goto L_08A2BFA8;
    case 899u: goto L_08A2BFAC;
    case 900u: goto L_08A2BFB4;
    case 901u: goto L_08A2BFBC;
    case 902u: goto L_08A2BFC4;
    case 903u: goto L_08A2BFD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A28004:
    ctx.gpr[31] = (0x08A2800Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 435u, 0x08A1AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2800Cu) goto L_08A2800C;
    return;
L_08A2800C:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2803C;
      }
      goto L_08A28024;
    }
L_08A28024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A2802C;
    }
L_08A2802C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28034;
    }
L_08A28034:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A2803C;
    }
L_08A2803C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[31] = (0x08A2805Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 155u, 0x08A1CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2805Cu) goto L_08A2805C;
    return;
L_08A2805C:
    ctx.gpr[31] = (0x08A28064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 34u, 0x08960350u>(ctx, &aot_mem) && ctx.pc == 0x08A28064u) goto L_08A28064;
    return;
L_08A28064:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08A2807Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2807Cu) goto L_08A2807C;
    return;
L_08A2807C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28084;
    }
L_08A28084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 736u, 0x08A27DD4u>(ctx, &aot_mem); return;
      }
      goto L_08A2808C;
    }
L_08A2808C:
    ctx.gpr[31] = (0x08A28094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A28094u) goto L_08A28094;
    return;
L_08A28094:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A283C8;
      }
      goto L_08A2809C;
    }
L_08A2809C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[31] = (0x08A280A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08A280A8u) goto L_08A280A8;
    return;
L_08A280A8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A280B4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A280B4u) goto L_08A280B4;
    return;
L_08A280B4:
    ctx.gpr[31] = (0x08A280BCu);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem) && ctx.pc == 0x08A280BCu) goto L_08A280BC;
    return;
L_08A280BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A280C8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A280C8u) goto L_08A280C8;
    return;
L_08A280C8:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A280D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 434u, 0x08A1AC54u>(ctx, &aot_mem) && ctx.pc == 0x08A280D8u) goto L_08A280D8;
    return;
L_08A280D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A280E4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08A280E4u) goto L_08A280E4;
    return;
L_08A280E4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16468u << 16u);
      if (branch_taken) {
          goto L_08A2810C;
      }
      goto L_08A280F8;
    }
L_08A280F8:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16468u << 16u);
    goto L_08A2810C;
L_08A2810C:
    ctx.gpr[4] = (ctx.gpr[4] | 15208u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A28124u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 419u, 0x08A1AB28u>(ctx, &aot_mem) && ctx.pc == 0x08A28124u) goto L_08A28124;
    return;
L_08A28124:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A28130u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 417u, 0x08A1AAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A28130u) goto L_08A28130;
    return;
L_08A28130:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A28150u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08A28150u) goto L_08A28150;
    return;
L_08A28150:
    ctx.gpr[31] = (0x08A28158u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 434u, 0x08A1AC54u>(ctx, &aot_mem) && ctx.pc == 0x08A28158u) goto L_08A28158;
    return;
L_08A28158:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2816Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 355u, 0x08A1A684u>(ctx, &aot_mem) && ctx.pc == 0x08A2816Cu) goto L_08A2816C;
    return;
L_08A2816C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A28178u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08A28178u) goto L_08A28178;
    return;
L_08A28178:
    ctx.gpr[31] = (0x08A28180u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08A28180u) goto L_08A28180;
    return;
L_08A28180:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A281A8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 528u, 0x088934F4u>(ctx, &aot_mem) && ctx.pc == 0x08A281A8u) goto L_08A281A8;
    return;
L_08A281A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A281D4;
      }
      goto L_08A281BC;
    }
L_08A281BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A28260;
      }
      goto L_08A281D4;
    }
L_08A281D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A281E8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(532));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 138u, 0x08AF8918u>(ctx, &aot_mem) && ctx.pc == 0x08A281E8u) goto L_08A281E8;
    return;
L_08A281E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28260;
      }
      goto L_08A281F0;
    }
L_08A281F0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7660)));
    ctx.gpr[31] = (0x08A281FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A281FCu) goto L_08A281FC;
    return;
L_08A281FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28238;
      }
      goto L_08A28204;
    }
L_08A28204:
    ctx.gpr[31] = (0x08A2820Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A2820Cu) goto L_08A2820C;
    return;
L_08A2820C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28234;
      }
      goto L_08A2821C;
    }
L_08A2821C:
    ctx.gpr[31] = (0x08A28224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A28224u) goto L_08A28224;
    return;
L_08A28224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28238;
      }
      goto L_08A28234;
    }
L_08A28234:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7656)));
    goto L_08A28238;
L_08A28238:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28260;
      }
      goto L_08A28254;
    }
L_08A28254:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A28260;
L_08A28260:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[31] = (0x08A2826Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08A2826Cu) goto L_08A2826C;
    return;
L_08A2826C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A28298u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem) && ctx.pc == 0x08A28298u) goto L_08A28298;
    return;
L_08A28298:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28320;
      }
      goto L_08A282A0;
    }
L_08A282A0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[31] = (0x08A282B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08A282B0u) goto L_08A282B0;
    return;
L_08A282B0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A282C4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A282C4u) goto L_08A282C4;
    return;
L_08A282C4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x08A282D4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08A282D4u) goto L_08A282D4;
    return;
L_08A282D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A282E4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A282E4u) goto L_08A282E4;
    return;
L_08A282E4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A282F0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A282F0u) goto L_08A282F0;
    return;
L_08A282F0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A28300u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 435u, 0x08A1AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28300u) goto L_08A28300;
    return;
L_08A28300:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28328;
      }
      goto L_08A28318;
    }
L_08A28318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28350;
      }
      goto L_08A28320;
    }
L_08A28320:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28328;
    }
L_08A28328:
    ctx.gpr[31] = (0x08A28330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem) && ctx.pc == 0x08A28330u) goto L_08A28330;
    return;
L_08A28330:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A2833Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 351u, 0x08A1A61Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2833Cu) goto L_08A2833C;
    return;
L_08A2833C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28378;
      }
      goto L_08A28350;
    }
L_08A28350:
    ctx.gpr[31] = (0x08A28358u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 435u, 0x08A1AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28358u) goto L_08A28358;
    return;
L_08A28358:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28380;
      }
      goto L_08A28370;
    }
L_08A28370:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28378;
    }
L_08A28378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28380;
    }
L_08A28380:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x08A283A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 155u, 0x08A1CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A283A0u) goto L_08A283A0;
    return;
L_08A283A0:
    ctx.gpr[31] = (0x08A283A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 34u, 0x08960350u>(ctx, &aot_mem) && ctx.pc == 0x08A283A8u) goto L_08A283A8;
    return;
L_08A283A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08A283C0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x08A283C0u) goto L_08A283C0;
    return;
L_08A283C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A283C8;
    }
L_08A283C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 736u, 0x08A27DD4u>(ctx, &aot_mem); return;
      }
      goto L_08A283D0;
    }
L_08A283D0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[31] = (0x08A283DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08A283DCu) goto L_08A283DC;
    return;
L_08A283DC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A283E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A283E8u) goto L_08A283E8;
    return;
L_08A283E8:
    ctx.gpr[31] = (0x08A283F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A283F0u) goto L_08A283F0;
    return;
L_08A283F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28440;
      }
      goto L_08A283F8;
    }
L_08A283F8:
    ctx.gpr[31] = (0x08A28400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A28400u) goto L_08A28400;
    return;
L_08A28400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28428;
      }
      goto L_08A28410;
    }
L_08A28410:
    ctx.gpr[31] = (0x08A28418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A28418u) goto L_08A28418;
    return;
L_08A28418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28440;
      }
      goto L_08A28428;
    }
L_08A28428:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16824u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A28454;
      }
      goto L_08A28440;
    }
L_08A28440:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16824u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A28454;
L_08A28454:
    ctx.gpr[31] = (0x08A2845Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem) && ctx.pc == 0x08A2845Cu) goto L_08A2845C;
    return;
L_08A2845C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A28474u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 459u, 0x08A1ADECu>(ctx, &aot_mem) && ctx.pc == 0x08A28474u) goto L_08A28474;
    return;
L_08A28474:
    ctx.gpr[4] = (16417u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 63344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[31] = (0x08A28490u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 419u, 0x08A1AB28u>(ctx, &aot_mem) && ctx.pc == 0x08A28490u) goto L_08A28490;
    return;
L_08A28490:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A2849Cu);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 417u, 0x08A1AAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A2849Cu) goto L_08A2849C;
    return;
L_08A2849C:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A284B4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 431u, 0x08A1AC10u>(ctx, &aot_mem) && ctx.pc == 0x08A284B4u) goto L_08A284B4;
    return;
L_08A284B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A284C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08A284C0u) goto L_08A284C0;
    return;
L_08A284C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A284CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 434u, 0x08A1AC54u>(ctx, &aot_mem) && ctx.pc == 0x08A284CCu) goto L_08A284CC;
    return;
L_08A284CC:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A284E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 355u, 0x08A1A684u>(ctx, &aot_mem) && ctx.pc == 0x08A284E0u) goto L_08A284E0;
    return;
L_08A284E0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A284ECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08A284ECu) goto L_08A284EC;
    return;
L_08A284EC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(576), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A28504u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem) && ctx.pc == 0x08A28504u) goto L_08A28504;
    return;
L_08A28504:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28544;
      }
      goto L_08A28514;
    }
L_08A28514:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A285D8;
      }
      goto L_08A2852C;
    }
L_08A2852C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A285D8;
      }
      goto L_08A28544;
    }
L_08A28544:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A28558u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(580));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 138u, 0x08AF8918u>(ctx, &aot_mem) && ctx.pc == 0x08A28558u) goto L_08A28558;
    return;
L_08A28558:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A285D8;
      }
      goto L_08A28560;
    }
L_08A28560:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7660)));
    ctx.gpr[31] = (0x08A2856Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A2856Cu) goto L_08A2856C;
    return;
L_08A2856C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A285B0;
      }
      goto L_08A28574;
    }
L_08A28574:
    ctx.gpr[31] = (0x08A2857Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A2857Cu) goto L_08A2857C;
    return;
L_08A2857C:
    ctx.gpr[31] = (0x08A28584u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 466u, 0x08A1AE64u>(ctx, &aot_mem) && ctx.pc == 0x08A28584u) goto L_08A28584;
    return;
L_08A28584:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A285AC;
      }
      goto L_08A28590;
    }
L_08A28590:
    ctx.gpr[31] = (0x08A28598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A28598u) goto L_08A28598;
    return;
L_08A28598:
    ctx.gpr[31] = (0x08A285A0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 466u, 0x08A1AE64u>(ctx, &aot_mem) && ctx.pc == 0x08A285A0u) goto L_08A285A0;
    return;
L_08A285A0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A285B0;
      }
      goto L_08A285AC;
    }
L_08A285AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7656)));
    goto L_08A285B0;
L_08A285B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A285D8;
      }
      goto L_08A285CC;
    }
L_08A285CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A285D8;
L_08A285D8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[31] = (0x08A285E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08A285E4u) goto L_08A285E4;
    return;
L_08A285E4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A28610u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem) && ctx.pc == 0x08A28610u) goto L_08A28610;
    return;
L_08A28610:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28688;
      }
      goto L_08A28618;
    }
L_08A28618:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[31] = (0x08A28628u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08A28628u) goto L_08A28628;
    return;
L_08A28628:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A28638u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A28638u) goto L_08A28638;
    return;
L_08A28638:
    ctx.gpr[31] = (0x08A28640u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 435u, 0x08A1AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28640u) goto L_08A28640;
    return;
L_08A28640:
    ctx.gpr[4] = (16996u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28680;
      }
      goto L_08A28658;
    }
L_08A28658:
    ctx.gpr[31] = (0x08A28660u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 435u, 0x08A1AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28660u) goto L_08A28660;
    return;
L_08A28660:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28690;
      }
      goto L_08A28678;
    }
L_08A28678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28680;
    }
L_08A28680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28688;
    }
L_08A28688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28690;
    }
L_08A28690:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A286A4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 431u, 0x08A1AC10u>(ctx, &aot_mem) && ctx.pc == 0x08A286A4u) goto L_08A286A4;
    return;
L_08A286A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A286B4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 155u, 0x08A1CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A286B4u) goto L_08A286B4;
    return;
L_08A286B4:
    ctx.gpr[31] = (0x08A286BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 34u, 0x08960350u>(ctx, &aot_mem) && ctx.pc == 0x08A286BCu) goto L_08A286BC;
    return;
L_08A286BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08A286D4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x08A286D4u) goto L_08A286D4;
    return;
L_08A286D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A286DC;
    }
L_08A286DC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[31] = (0x08A286E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08A286E8u) goto L_08A286E8;
    return;
L_08A286E8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A286F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A286F4u) goto L_08A286F4;
    return;
L_08A286F4:
    ctx.gpr[31] = (0x08A286FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A286FCu) goto L_08A286FC;
    return;
L_08A286FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28754;
      }
      goto L_08A28704;
    }
L_08A28704:
    ctx.gpr[31] = (0x08A2870Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A2870Cu) goto L_08A2870C;
    return;
L_08A2870C:
    ctx.gpr[31] = (0x08A28714u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 466u, 0x08A1AE64u>(ctx, &aot_mem) && ctx.pc == 0x08A28714u) goto L_08A28714;
    return;
L_08A28714:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2873C;
      }
      goto L_08A28720;
    }
L_08A28720:
    ctx.gpr[31] = (0x08A28728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A28728u) goto L_08A28728;
    return;
L_08A28728:
    ctx.gpr[31] = (0x08A28730u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 466u, 0x08A1AE64u>(ctx, &aot_mem) && ctx.pc == 0x08A28730u) goto L_08A28730;
    return;
L_08A28730:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A28754;
      }
      goto L_08A2873C;
    }
L_08A2873C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A28768;
      }
      goto L_08A28754;
    }
L_08A28754:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A28768;
L_08A28768:
    ctx.gpr[31] = (0x08A28770u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem) && ctx.pc == 0x08A28770u) goto L_08A28770;
    return;
L_08A28770:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2877Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2877Cu) goto L_08A2877C;
    return;
L_08A2877C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A28788u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 459u, 0x08A1ADECu>(ctx, &aot_mem) && ctx.pc == 0x08A28788u) goto L_08A28788;
    return;
L_08A28788:
    ctx.gpr[4] = (16122u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13790u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[31] = (0x08A287A4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 419u, 0x08A1AB28u>(ctx, &aot_mem) && ctx.pc == 0x08A287A4u) goto L_08A287A4;
    return;
L_08A287A4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A287B0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 417u, 0x08A1AAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A287B0u) goto L_08A287B0;
    return;
L_08A287B0:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A287C8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 431u, 0x08A1AC10u>(ctx, &aot_mem) && ctx.pc == 0x08A287C8u) goto L_08A287C8;
    return;
L_08A287C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A287D4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08A287D4u) goto L_08A287D4;
    return;
L_08A287D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A287E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 434u, 0x08A1AC54u>(ctx, &aot_mem) && ctx.pc == 0x08A287E0u) goto L_08A287E0;
    return;
L_08A287E0:
    ctx.gpr[4] = (16712u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A287F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 355u, 0x08A1A684u>(ctx, &aot_mem) && ctx.pc == 0x08A287F4u) goto L_08A287F4;
    return;
L_08A287F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A28800u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08A28800u) goto L_08A28800;
    return;
L_08A28800:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(624), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A28818u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem) && ctx.pc == 0x08A28818u) goto L_08A28818;
    return;
L_08A28818:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28858;
      }
      goto L_08A28828;
    }
L_08A28828:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A288EC;
      }
      goto L_08A28840;
    }
L_08A28840:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A288EC;
      }
      goto L_08A28858;
    }
L_08A28858:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A2886Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(628));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 138u, 0x08AF8918u>(ctx, &aot_mem) && ctx.pc == 0x08A2886Cu) goto L_08A2886C;
    return;
L_08A2886C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A288EC;
      }
      goto L_08A28874;
    }
L_08A28874:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7660)));
    ctx.gpr[31] = (0x08A28880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A28880u) goto L_08A28880;
    return;
L_08A28880:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A288C4;
      }
      goto L_08A28888;
    }
L_08A28888:
    ctx.gpr[31] = (0x08A28890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A28890u) goto L_08A28890;
    return;
L_08A28890:
    ctx.gpr[31] = (0x08A28898u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 466u, 0x08A1AE64u>(ctx, &aot_mem) && ctx.pc == 0x08A28898u) goto L_08A28898;
    return;
L_08A28898:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A288C0;
      }
      goto L_08A288A4;
    }
L_08A288A4:
    ctx.gpr[31] = (0x08A288ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A288ACu) goto L_08A288AC;
    return;
L_08A288AC:
    ctx.gpr[31] = (0x08A288B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 466u, 0x08A1AE64u>(ctx, &aot_mem) && ctx.pc == 0x08A288B4u) goto L_08A288B4;
    return;
L_08A288B4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A288C4;
      }
      goto L_08A288C0;
    }
L_08A288C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7656)));
    goto L_08A288C4;
L_08A288C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A288EC;
      }
      goto L_08A288E0;
    }
L_08A288E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A288EC;
L_08A288EC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[31] = (0x08A288F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08A288F8u) goto L_08A288F8;
    return;
L_08A288F8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A28924u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem) && ctx.pc == 0x08A28924u) goto L_08A28924;
    return;
L_08A28924:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2899C;
      }
      goto L_08A2892C;
    }
L_08A2892C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[31] = (0x08A2893Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08A2893Cu) goto L_08A2893C;
    return;
L_08A2893C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2894Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A2894Cu) goto L_08A2894C;
    return;
L_08A2894C:
    ctx.gpr[31] = (0x08A28954u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 435u, 0x08A1AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28954u) goto L_08A28954;
    return;
L_08A28954:
    ctx.gpr[4] = (16912u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28994;
      }
      goto L_08A2896C;
    }
L_08A2896C:
    ctx.gpr[31] = (0x08A28974u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 435u, 0x08A1AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28974u) goto L_08A28974;
    return;
L_08A28974:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A289A4;
      }
      goto L_08A2898C;
    }
L_08A2898C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28994;
    }
L_08A28994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A2899C;
    }
L_08A2899C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A289A4;
    }
L_08A289A4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A289B8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 431u, 0x08A1AC10u>(ctx, &aot_mem) && ctx.pc == 0x08A289B8u) goto L_08A289B8;
    return;
L_08A289B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A289C8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 155u, 0x08A1CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A289C8u) goto L_08A289C8;
    return;
L_08A289C8:
    ctx.gpr[31] = (0x08A289D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 34u, 0x08960350u>(ctx, &aot_mem) && ctx.pc == 0x08A289D0u) goto L_08A289D0;
    return;
L_08A289D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08A289E8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x08A289E8u) goto L_08A289E8;
    return;
L_08A289E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A289F0;
    }
L_08A289F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A28A1Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 496u, 0x08A1EC30u>(ctx, &aot_mem) && ctx.pc == 0x08A28A1Cu) goto L_08A28A1C;
    return;
L_08A28A1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28A64;
      }
      goto L_08A28A24;
    }
L_08A28A24:
    ctx.gpr[31] = (0x08A28A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 34u, 0x08960350u>(ctx, &aot_mem) && ctx.pc == 0x08A28A2Cu) goto L_08A28A2C;
    return;
L_08A28A2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08A28A44u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28A44u) goto L_08A28A44;
    return;
L_08A28A44:
    ctx.gpr[31] = (0x08A28A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 398u, 0x08A1A980u>(ctx, &aot_mem) && ctx.pc == 0x08A28A4Cu) goto L_08A28A4C;
    return;
L_08A28A4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28A5C;
      }
      goto L_08A28A54;
    }
L_08A28A54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28A5C;
    }
L_08A28A5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28A64;
    }
L_08A28A64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28A6C;
    }
L_08A28A6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A28A98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 597u, 0x08A1F8D4u>(ctx, &aot_mem) && ctx.pc == 0x08A28A98u) goto L_08A28A98;
    return;
L_08A28A98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28AE0;
      }
      goto L_08A28AA0;
    }
L_08A28AA0:
    ctx.gpr[31] = (0x08A28AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 34u, 0x08960350u>(ctx, &aot_mem) && ctx.pc == 0x08A28AA8u) goto L_08A28AA8;
    return;
L_08A28AA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 49u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08A28AC0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28AC0u) goto L_08A28AC0;
    return;
L_08A28AC0:
    ctx.gpr[31] = (0x08A28AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 398u, 0x08A1A980u>(ctx, &aot_mem) && ctx.pc == 0x08A28AC8u) goto L_08A28AC8;
    return;
L_08A28AC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28AD8;
      }
      goto L_08A28AD0;
    }
L_08A28AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28AD8;
    }
L_08A28AD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28AE0;
    }
L_08A28AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28AE8;
    }
L_08A28AE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A28B14u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 12u, 0x08A20118u>(ctx, &aot_mem) && ctx.pc == 0x08A28B14u) goto L_08A28B14;
    return;
L_08A28B14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28B5C;
      }
      goto L_08A28B1C;
    }
L_08A28B1C:
    ctx.gpr[31] = (0x08A28B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 34u, 0x08960350u>(ctx, &aot_mem) && ctx.pc == 0x08A28B24u) goto L_08A28B24;
    return;
L_08A28B24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08A28B3Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28B3Cu) goto L_08A28B3C;
    return;
L_08A28B3C:
    ctx.gpr[31] = (0x08A28B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 398u, 0x08A1A980u>(ctx, &aot_mem) && ctx.pc == 0x08A28B44u) goto L_08A28B44;
    return;
L_08A28B44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28B54;
      }
      goto L_08A28B4C;
    }
L_08A28B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28B54;
    }
L_08A28B54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28B5C;
    }
L_08A28B5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28B64;
    }
L_08A28B64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A28B90u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 144u, 0x08A211D8u>(ctx, &aot_mem) && ctx.pc == 0x08A28B90u) goto L_08A28B90;
    return;
L_08A28B90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28BD8;
      }
      goto L_08A28B98;
    }
L_08A28B98:
    ctx.gpr[31] = (0x08A28BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 34u, 0x08960350u>(ctx, &aot_mem) && ctx.pc == 0x08A28BA0u) goto L_08A28BA0;
    return;
L_08A28BA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 54u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08A28BB8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28BB8u) goto L_08A28BB8;
    return;
L_08A28BB8:
    ctx.gpr[31] = (0x08A28BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 398u, 0x08A1A980u>(ctx, &aot_mem) && ctx.pc == 0x08A28BC0u) goto L_08A28BC0;
    return;
L_08A28BC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28BD0;
      }
      goto L_08A28BC8;
    }
L_08A28BC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28BD0;
    }
L_08A28BD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28BD8;
    }
L_08A28BD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28BE0;
    }
L_08A28BE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A28C0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 195u, 0x08A217FCu>(ctx, &aot_mem) && ctx.pc == 0x08A28C0Cu) goto L_08A28C0C;
    return;
L_08A28C0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C54;
      }
      goto L_08A28C14;
    }
L_08A28C14:
    ctx.gpr[31] = (0x08A28C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 34u, 0x08960350u>(ctx, &aot_mem) && ctx.pc == 0x08A28C1Cu) goto L_08A28C1C;
    return;
L_08A28C1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 55u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08A28C34u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28C34u) goto L_08A28C34;
    return;
L_08A28C34:
    ctx.gpr[31] = (0x08A28C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 398u, 0x08A1A980u>(ctx, &aot_mem) && ctx.pc == 0x08A28C3Cu) goto L_08A28C3C;
    return;
L_08A28C3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C4C;
      }
      goto L_08A28C44;
    }
L_08A28C44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28C4C;
    }
L_08A28C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28C54;
    }
L_08A28C54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28C5C;
    }
L_08A28C5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A28C88u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 487u, 0x08A1B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A28C88u) goto L_08A28C88;
    return;
L_08A28C88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28CD0;
      }
      goto L_08A28C90;
    }
L_08A28C90:
    ctx.gpr[31] = (0x08A28C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 34u, 0x08960350u>(ctx, &aot_mem) && ctx.pc == 0x08A28C98u) goto L_08A28C98;
    return;
L_08A28C98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 56u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08A28CB0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28CB0u) goto L_08A28CB0;
    return;
L_08A28CB0:
    ctx.gpr[31] = (0x08A28CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 398u, 0x08A1A980u>(ctx, &aot_mem) && ctx.pc == 0x08A28CB8u) goto L_08A28CB8;
    return;
L_08A28CB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28CC8;
      }
      goto L_08A28CC0;
    }
L_08A28CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28CC8;
    }
L_08A28CC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28CD0;
    }
L_08A28CD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28CD8;
    }
L_08A28CD8:
    ctx.gpr[31] = (0x08A28CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 34u, 0x08960350u>(ctx, &aot_mem) && ctx.pc == 0x08A28CE0u) goto L_08A28CE0;
    return;
L_08A28CE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08A28CF8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28CF8u) goto L_08A28CF8;
    return;
L_08A28CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28D00;
      }
      goto L_08A28D00;
    }
L_08A28D00:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(960)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(964)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(968)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(972)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(976)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(980)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28D34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1952));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1896), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1900), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1904), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1908), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1912), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1916), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1920), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1924), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1928), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1932), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1936), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1940), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1944), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1948), ctx.gpr[31]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (16720u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(112))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1965), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1876), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1964), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2078), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2077), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2066), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1956), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1957), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-7620), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A28E34;
      }
      goto L_08A28DFC;
    }
L_08A28DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28E34;
      }
      goto L_08A28E08;
    }
L_08A28E08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1984), ctx.gpr[4]);
    goto L_08A28E34;
L_08A28E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2124)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2124), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28E54;
      }
      goto L_08A28E4C;
    }
L_08A28E4C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2124), ctx.gpr[4]);
    goto L_08A28E54;
L_08A28E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2124)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28E70;
      }
      goto L_08A28E64;
    }
L_08A28E64:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2059), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A28E74;
      }
      goto L_08A28E70;
    }
L_08A28E70:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2059), static_cast<std::uint8_t>(0u));
    goto L_08A28E74;
L_08A28E74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2016)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28E80;
      }
      goto L_08A28E80;
    }
L_08A28E80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2059)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28E9C;
      }
      goto L_08A28E90;
    }
L_08A28E90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2016)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28EBC;
      }
      goto L_08A28E9C;
    }
L_08A28E9C:
    ctx.gpr[31] = (0x08A28EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 514u, 0x08AAE8ECu>(ctx, &aot_mem) && ctx.pc == 0x08A28EA4u) goto L_08A28EA4;
    return;
L_08A28EA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28EB8;
      }
      goto L_08A28EAC;
    }
L_08A28EAC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2085), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A28EBC;
      }
      goto L_08A28EB8;
    }
L_08A28EB8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2085), static_cast<std::uint8_t>(0u));
    goto L_08A28EBC;
L_08A28EBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2069)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28F00;
      }
      goto L_08A28ECC;
    }
L_08A28ECC:
    ctx.gpr[31] = (0x08A28ED4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08A28ED4u) goto L_08A28ED4;
    return;
L_08A28ED4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A28EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A28EECu) goto L_08A28EEC;
    return;
L_08A28EEC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A28F00;
L_08A28F00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8360)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B50C;
      }
      goto L_08A28F14;
    }
L_08A28F14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2061)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B50C;
      }
      goto L_08A28F20;
    }
L_08A28F20:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2075)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28FA0;
      }
      goto L_08A28F38;
    }
L_08A28F38:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 4u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28F64;
      }
      goto L_08A28F5C;
    }
L_08A28F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28F7C;
      }
      goto L_08A28F64;
    }
L_08A28F64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A28F7C;
      }
      goto L_08A28F78;
    }
L_08A28F78:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A28F7C;
L_08A28F7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28FA0;
      }
      goto L_08A28F84;
    }
L_08A28F84:
    ctx.gpr[31] = (0x08A28F8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 110u, 0x08A1CA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28F8Cu) goto L_08A28F8C;
    return;
L_08A28F8C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2075), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A28FA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 203u, 0x08A1D1F8u>(ctx, &aot_mem) && ctx.pc == 0x08A28FA0u) goto L_08A28FA0;
    return;
L_08A28FA0:
    ctx.gpr[31] = (0x08A28FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A28FA8u) goto L_08A28FA8;
    return;
L_08A28FA8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28FD4;
      }
      goto L_08A28FBC;
    }
L_08A28FBC:
    ctx.gpr[31] = (0x08A28FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A28FC4u) goto L_08A28FC4;
    return;
L_08A28FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2232)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28FEC;
      }
      goto L_08A28FD4;
    }
L_08A28FD4:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A28FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A28FE4u) goto L_08A28FE4;
    return;
L_08A28FE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1984), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A2B50C;
      }
      goto L_08A28FEC;
    }
L_08A28FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A350;
      }
      goto L_08A2900C;
    }
L_08A2900C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29034;
      }
      goto L_08A29020;
    }
L_08A29020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2904C;
      }
      goto L_08A29034;
    }
L_08A29034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2904C;
      }
      goto L_08A29048;
    }
L_08A29048:
    ctx.gpr[30] = (0u | 1u);
    goto L_08A2904C;
L_08A2904C:
    ctx.gpr[31] = (0x08A29054u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08A29054u) goto L_08A29054;
    return;
L_08A29054:
    ctx.gpr[31] = (0x08A2905Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 442u, 0x0898D354u>(ctx, &aot_mem) && ctx.pc == 0x08A2905Cu) goto L_08A2905C;
    return;
L_08A2905C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29120;
      }
      goto L_08A29064;
    }
L_08A29064:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(89)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29120;
      }
      goto L_08A29070;
    }
L_08A29070:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2069)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2052)));
        goto L_08A29094;
    }
    goto L_08A29080;
L_08A29080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2048)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29120;
      }
      goto L_08A29090;
    }
L_08A29090:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2052)));
    goto L_08A29094;
L_08A29094:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29120;
      }
      goto L_08A2909C;
    }
L_08A2909C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A290DC;
      }
      goto L_08A290C8;
    }
L_08A290C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A290DC;
L_08A290DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29120;
      }
      goto L_08A290F8;
    }
L_08A290F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[31] = (0x08A29104u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 383u, 0x08A1A8A8u>(ctx, &aot_mem) && ctx.pc == 0x08A29104u) goto L_08A29104;
    return;
L_08A29104:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29120;
      }
      goto L_08A2910C;
    }
L_08A2910C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A29120;
L_08A29120:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2085)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29178;
      }
      goto L_08A2912C;
    }
L_08A2912C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29154;
      }
      goto L_08A29148;
    }
L_08A29148:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A29178;
      }
      goto L_08A29154;
    }
L_08A29154:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29178;
      }
      goto L_08A2916C;
    }
L_08A2916C:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A29178;
L_08A29178:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2085)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A291C0;
      }
      goto L_08A29184;
    }
L_08A29184:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A291C0;
      }
      goto L_08A291A0;
    }
L_08A291A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A291C0;
      }
      goto L_08A291B8;
    }
L_08A291B8:
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A291C0;
L_08A291C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A291DC;
      }
      goto L_08A291D4;
    }
L_08A291D4:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A291F4;
      }
      goto L_08A291DC;
    }
L_08A291DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A291F4;
      }
      goto L_08A291F0;
    }
L_08A291F0:
    ctx.gpr[21] = (0u | 0u);
    goto L_08A291F4;
L_08A291F4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08A29208;
      }
      goto L_08A29200;
    }
L_08A29200:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2920C;
      }
      goto L_08A29208;
    }
L_08A29208:
    ctx.gpr[21] = (0u | 0u);
    goto L_08A2920C;
L_08A2920C:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_08A29220;
      }
      goto L_08A29218;
    }
L_08A29218:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A29224;
      }
      goto L_08A29220;
    }
L_08A29220:
    ctx.gpr[21] = (0u | 6u);
    goto L_08A29224;
L_08A29224:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_08A29234;
      }
      goto L_08A2922C;
    }
L_08A2922C:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A29E0C;
      }
      goto L_08A29234;
    }
L_08A29234:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2926C;
      }
      goto L_08A29244;
    }
L_08A29244:
    ctx.gpr[31] = (0x08A2924Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 518u, 0x08AAE910u>(ctx, &aot_mem) && ctx.pc == 0x08A2924Cu) goto L_08A2924C;
    return;
L_08A2924C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2926C;
      }
      goto L_08A29254;
    }
L_08A29254:
    ctx.gpr[31] = (0x08A2925Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 473u, 0x08AAE644u>(ctx, &aot_mem) && ctx.pc == 0x08A2925Cu) goto L_08A2925C;
    return;
L_08A2925C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2926C;
      }
      goto L_08A29268;
    }
L_08A29268:
    ctx.gpr[23] = (0u | 1u);
    goto L_08A2926C;
L_08A2926C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A29288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 382u, 0x0896D754u>(ctx, &aot_mem) && ctx.pc == 0x08A29288u) goto L_08A29288;
    return;
L_08A29288:
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29DE0;
      }
      goto L_08A29294;
    }
L_08A29294:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2648)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2048)));
        goto L_08A292B4;
    }
    goto L_08A292A0;
L_08A292A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2069)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A292C0;
      }
      goto L_08A292B0;
    }
L_08A292B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2048)));
    goto L_08A292B4;
L_08A292B4:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29D54;
      }
      goto L_08A292C0;
    }
L_08A292C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29D54;
      }
      goto L_08A292D0;
    }
L_08A292D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A293A0;
      }
      goto L_08A292F0;
    }
L_08A292F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2935C;
      }
      goto L_08A29300;
    }
L_08A29300:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29610;
      }
      goto L_08A2935C;
    }
L_08A2935C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29374;
      }
      goto L_08A2936C;
    }
L_08A2936C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_08A29610;
      }
      goto L_08A29374;
    }
L_08A29374:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A29610;
      }
      goto L_08A293A0;
    }
L_08A293A0:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29610;
      }
      goto L_08A29478;
    }
L_08A29478:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A294E8;
    }
    goto L_08A294E8;
L_08A294E8:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A29564u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem) && ctx.pc == 0x08A29564u) goto L_08A29564;
    return;
L_08A29564:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A295F8;
      }
      goto L_08A2956C;
    }
L_08A2956C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A295ECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem) && ctx.pc == 0x08A295ECu) goto L_08A295EC;
    return;
L_08A295EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A295F8;
      }
      goto L_08A295F4;
    }
L_08A295F4:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A295F8;
L_08A295F8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29610;
      }
      goto L_08A29600;
    }
L_08A29600:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A29610;
L_08A29610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29670;
      }
      goto L_08A2961C;
    }
L_08A2961C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A296B4;
      }
      goto L_08A29670;
    }
L_08A29670:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A296B4;
      }
      goto L_08A29680;
    }
L_08A29680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A296B4;
L_08A296B4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A296F0;
      }
      goto L_08A296C0;
    }
L_08A296C0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29718;
      }
      goto L_08A296F0;
    }
L_08A296F0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A29718;
L_08A29718:
    ctx.gpr[4] = (16454u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08A2974Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem) && ctx.pc == 0x08A2974Cu) goto L_08A2974C;
    return;
L_08A2974C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29770;
      }
      goto L_08A2975C;
    }
L_08A2975C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08A29770;
L_08A29770:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A29894;
      }
      goto L_08A297A8;
    }
L_08A297A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2984C;
      }
      goto L_08A297B4;
    }
L_08A297B4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2984C;
      }
      goto L_08A297BC;
    }
L_08A297BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A297E0;
    }
    goto L_08A297E0;
L_08A297E0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16496u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A298D4;
      }
      goto L_08A2984C;
    }
L_08A2984C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A298D4;
      }
      goto L_08A29894;
    }
L_08A29894:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A298D4;
L_08A298D4:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29D28;
      }
      goto L_08A298E8;
    }
L_08A298E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(61)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29D28;
      }
      goto L_08A298FC;
    }
L_08A298FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 1u);
    goto L_08A29AE4;
L_08A29AE4:
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(592));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(592));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A29B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 437u, 0x08A1ACB4u>(ctx, &aot_mem) && ctx.pc == 0x08A29B40u) goto L_08A29B40;
    return;
L_08A29B40:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1884), ctx.gpr[19]);
        goto L_08A29B58;
    }
    goto L_08A29B50;
L_08A29B50:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1884), ctx.gpr[19]);
    goto L_08A29B58;
L_08A29B58:
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1880), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(656));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A29B7Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A29B7Cu) goto L_08A29B7C;
    return;
L_08A29B7C:
    ctx.gpr[31] = (0x08A29B84u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 437u, 0x08A1ACB4u>(ctx, &aot_mem) && ctx.pc == 0x08A29B84u) goto L_08A29B84;
    return;
L_08A29B84:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(656));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A29BA4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A29BA4u) goto L_08A29BA4;
    return;
L_08A29BA4:
    ctx.gpr[31] = (0x08A29BACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 437u, 0x08A1ACB4u>(ctx, &aot_mem) && ctx.pc == 0x08A29BACu) goto L_08A29BAC;
    return;
L_08A29BAC:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1880)));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1884)));
      if (branch_taken) {
          goto L_08A29BC0;
      }
      goto L_08A29BBC;
    }
L_08A29BBC:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_08A29BC0;
L_08A29BC0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29AE4;
      }
      goto L_08A29BD0;
    }
L_08A29BD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1888), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(656));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A29BF4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A29BF4u) goto L_08A29BF4;
    return;
L_08A29BF4:
    ctx.gpr[31] = (0x08A29BFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 434u, 0x08A1AC54u>(ctx, &aot_mem) && ctx.pc == 0x08A29BFCu) goto L_08A29BFC;
    return;
L_08A29BFC:
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A29C14u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 355u, 0x08A1A684u>(ctx, &aot_mem) && ctx.pc == 0x08A29C14u) goto L_08A29C14;
    return;
L_08A29C14:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A29C28u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 352u, 0x08A1A638u>(ctx, &aot_mem) && ctx.pc == 0x08A29C28u) goto L_08A29C28;
    return;
L_08A29C28:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(592));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A29C48u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A29C48u) goto L_08A29C48;
    return;
L_08A29C48:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A29C60u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 355u, 0x08A1A684u>(ctx, &aot_mem) && ctx.pc == 0x08A29C60u) goto L_08A29C60;
    return;
L_08A29C60:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A29C74u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A29C74u) goto L_08A29C74;
    return;
L_08A29C74:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08A29C94u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem) && ctx.pc == 0x08A29C94u) goto L_08A29C94;
    return;
L_08A29C94:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1888)));
      if (branch_taken) {
          goto L_08A29CB8;
      }
      goto L_08A29CA4;
    }
L_08A29CA4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_08A29CB8;
L_08A29CB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A29D08u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 420u, 0x08A1AB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29D08u) goto L_08A29D08;
    return;
L_08A29D08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2180)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A29D28;
L_08A29D28:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A29D3Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 431u, 0x08A1AC10u>(ctx, &aot_mem) && ctx.pc == 0x08A29D3Cu) goto L_08A29D3C;
    return;
L_08A29D3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A29D4Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 155u, 0x08A1CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29D4Cu) goto L_08A29D4C;
    return;
L_08A29D4C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2648), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A29D54;
L_08A29D54:
    ctx.gpr[31] = (0x08A29D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 398u, 0x0896D890u>(ctx, &aot_mem) && ctx.pc == 0x08A29D5Cu) goto L_08A29D5C;
    return;
L_08A29D5C:
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29DBC;
      }
      goto L_08A29D68;
    }
L_08A29D68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2648)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29DBC;
      }
      goto L_08A29D78;
    }
L_08A29D78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2069)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29D98;
      }
      goto L_08A29D88;
    }
L_08A29D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2048)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29DBC;
      }
      goto L_08A29D98;
    }
L_08A29D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29E04;
      }
      goto L_08A29DA8;
    }
L_08A29DA8:
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2064), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A29E04;
      }
      goto L_08A29DBC;
    }
L_08A29DBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29DD4;
      }
      goto L_08A29DC8;
    }
L_08A29DC8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2066), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2064), static_cast<std::uint8_t>(0u));
    goto L_08A29DD4;
L_08A29DD4:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A29E04;
      }
      goto L_08A29DE0;
    }
L_08A29DE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29DF8;
      }
      goto L_08A29DEC;
    }
L_08A29DEC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2066), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2064), static_cast<std::uint8_t>(0u));
    goto L_08A29DF8;
L_08A29DF8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2648), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A29E04;
L_08A29E04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29E28;
      }
      goto L_08A29E0C;
    }
L_08A29E0C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A29E20;
      }
      goto L_08A29E18;
    }
L_08A29E18:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A29E28;
      }
      goto L_08A29E20;
    }
L_08A29E20:
    ctx.gpr[4] = (0u | 22u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A29E28;
L_08A29E28:
    ctx.gpr[31] = (0x08A29E30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x08A29E30u) goto L_08A29E30;
    return;
L_08A29E30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A29E44u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 283u, 0x08A1D810u>(ctx, &aot_mem) && ctx.pc == 0x08A29E44u) goto L_08A29E44;
    return;
L_08A29E44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29E7C;
      }
      goto L_08A29E5C;
    }
L_08A29E5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29E7C;
      }
      goto L_08A29E68;
    }
L_08A29E68:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A29F2C;
      }
      goto L_08A29E7C;
    }
L_08A29E7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29EB8;
      }
      goto L_08A29E98;
    }
L_08A29E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5296));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A29F2C;
      }
      goto L_08A29EB8;
    }
L_08A29EB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29EF4;
      }
      goto L_08A29ED4;
    }
L_08A29ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5316));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A29F2C;
      }
      goto L_08A29EF4;
    }
L_08A29EF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29F2C;
      }
      goto L_08A29F10;
    }
L_08A29F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5336));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A29F2C;
L_08A29F2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29F68;
      }
      goto L_08A29F48;
    }
L_08A29F48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29F68;
      }
      goto L_08A29F54;
    }
L_08A29F54:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A29F68;
L_08A29F68:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29FFC;
      }
      goto L_08A29F70;
    }
L_08A29F70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29FFC;
      }
      goto L_08A29F7C;
    }
L_08A29F7C:
    ctx.gpr[31] = (0x08A29F84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 454u, 0x08A1ADB8u>(ctx, &aot_mem) && ctx.pc == 0x08A29F84u) goto L_08A29F84;
    return;
L_08A29F84:
    ctx.gpr[31] = (0x08A29F8Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 445u, 0x08A1AD3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29F8Cu) goto L_08A29F8C;
    return;
L_08A29F8C:
    ctx.gpr[31] = (0x08A29F94u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 447u, 0x08A1AD5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29F94u) goto L_08A29F94;
    return;
L_08A29F94:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A29FA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 454u, 0x08A1ADB8u>(ctx, &aot_mem) && ctx.pc == 0x08A29FA0u) goto L_08A29FA0;
    return;
L_08A29FA0:
    ctx.gpr[31] = (0x08A29FA8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 445u, 0x08A1AD3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29FA8u) goto L_08A29FA8;
    return;
L_08A29FA8:
    ctx.gpr[31] = (0x08A29FB0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 446u, 0x08A1AD54u>(ctx, &aot_mem) && ctx.pc == 0x08A29FB0u) goto L_08A29FB0;
    return;
L_08A29FB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[31] = (0x08A29FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 522u, 0x08AAE934u>(ctx, &aot_mem) && ctx.pc == 0x08A29FC0u) goto L_08A29FC0;
    return;
L_08A29FC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16449u << 16u);
      if (branch_taken) {
          goto L_08A29FFC;
      }
      goto L_08A29FC8;
    }
L_08A29FC8:
    ctx.gpr[4] = (ctx.gpr[4] | 43516u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29FFC;
      }
      goto L_08A29FE0;
    }
L_08A29FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1992)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29FFC;
      }
      goto L_08A29FEC;
    }
L_08A29FEC:
    ctx.gpr[4] = (0u | 16u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1956), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A29FFC;
L_08A29FFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A044;
      }
      goto L_08A2A00C;
    }
L_08A2A00C:
    ctx.gpr[31] = (0x08A2A014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 522u, 0x08AAE934u>(ctx, &aot_mem) && ctx.pc == 0x08A2A014u) goto L_08A2A014;
    return;
L_08A2A014:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A03C;
      }
      goto L_08A2A01C;
    }
L_08A2A01C:
    ctx.gpr[31] = (0x08A2A024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2A024u) goto L_08A2A024;
    return;
L_08A2A024:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A03C;
      }
      goto L_08A2A02C;
    }
L_08A2A02C:
    ctx.gpr[31] = (0x08A2A034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2A034u) goto L_08A2A034;
    return;
L_08A2A034:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A044;
      }
      goto L_08A2A03C;
    }
L_08A2A03C:
    ctx.gpr[4] = (0u | 16u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A2A044;
L_08A2A044:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2080)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A0E4;
      }
      goto L_08A2A054;
    }
L_08A2A054:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2132)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2176)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A0A8;
      }
      goto L_08A2A06C;
    }
L_08A2A06C:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(2176));
    ctx.gpr[31] = (0x08A2A078u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2132)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 365u, 0x08A1A71Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A078u) goto L_08A2A078;
    return;
L_08A2A078:
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[31] = (0x08A2A09Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 356u, 0x08A1A6A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A09Cu) goto L_08A2A09C;
    return;
L_08A2A09C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A260;
      }
      goto L_08A2A0A8;
    }
L_08A2A0A8:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(2176));
    ctx.gpr[31] = (0x08A2A0B4u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2132)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 365u, 0x08A1A71Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A0B4u) goto L_08A2A0B4;
    return;
L_08A2A0B4:
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(804));
    ctx.gpr[31] = (0x08A2A0D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 359u, 0x08A1A6C8u>(ctx, &aot_mem) && ctx.pc == 0x08A2A0D8u) goto L_08A2A0D8;
    return;
L_08A2A0D8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A260;
      }
      goto L_08A2A0E4;
    }
L_08A2A0E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2085)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A190;
      }
      goto L_08A2A0F0;
    }
L_08A2A0F0:
    ctx.gpr[4] = (48934u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(808), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16166u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2132)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A158;
      }
      goto L_08A2A120;
    }
L_08A2A120:
    ctx.gpr[31] = (0x08A2A128u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2132)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 365u, 0x08A1A71Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A128u) goto L_08A2A128;
    return;
L_08A2A128:
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(812), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(812));
    ctx.gpr[31] = (0x08A2A14Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(808));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 356u, 0x08A1A6A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A14Cu) goto L_08A2A14C;
    return;
L_08A2A14C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A188;
      }
      goto L_08A2A158;
    }
L_08A2A158:
    ctx.gpr[31] = (0x08A2A160u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2132)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 365u, 0x08A1A71Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A160u) goto L_08A2A160;
    return;
L_08A2A160:
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(816), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x08A2A184u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(808));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 359u, 0x08A1A6C8u>(ctx, &aot_mem) && ctx.pc == 0x08A2A184u) goto L_08A2A184;
    return;
L_08A2A184:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A2A188;
L_08A2A188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A260;
      }
      goto L_08A2A190;
    }
L_08A2A190:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A260;
      }
      goto L_08A2A19C;
    }
L_08A2A19C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2132)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2128)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A1F0;
      }
      goto L_08A2A1B4;
    }
L_08A2A1B4:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(2128));
    ctx.gpr[31] = (0x08A2A1C0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2132)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 365u, 0x08A1A71Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A1C0u) goto L_08A2A1C0;
    return;
L_08A2A1C0:
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(820), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(820));
    ctx.gpr[31] = (0x08A2A1E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 356u, 0x08A1A6A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A1E4u) goto L_08A2A1E4;
    return;
L_08A2A1E4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A224;
      }
      goto L_08A2A1F0;
    }
L_08A2A1F0:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(2128));
    ctx.gpr[31] = (0x08A2A1FCu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2132)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 365u, 0x08A1A71Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A1FCu) goto L_08A2A1FC;
    return;
L_08A2A1FC:
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(824));
    ctx.gpr[31] = (0x08A2A220u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 359u, 0x08A1A6C8u>(ctx, &aot_mem) && ctx.pc == 0x08A2A220u) goto L_08A2A220;
    return;
L_08A2A220:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A2A224;
L_08A2A224:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A260;
      }
      goto L_08A2A240;
    }
L_08A2A240:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2128)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A260;
      }
      goto L_08A2A258;
    }
L_08A2A258:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2128)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A2A260;
L_08A2A260:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(348));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A2A2A8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 367u, 0x08A1A730u>(ctx, &aot_mem) && ctx.pc == 0x08A2A2A8u) goto L_08A2A2A8;
    return;
L_08A2A2A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2A2D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 365u, 0x0899B1A8u>(ctx, &aot_mem) && ctx.pc == 0x08A2A2D0u) goto L_08A2A2D0;
    return;
L_08A2A2D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A31C;
      }
      goto L_08A2A2D8;
    }
L_08A2A2D8:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A348;
      }
      goto L_08A2A2E0;
    }
L_08A2A2E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2A308u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 453u, 0x08A1ADA4u>(ctx, &aot_mem) && ctx.pc == 0x08A2A308u) goto L_08A2A308;
    return;
L_08A2A308:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A348;
      }
      goto L_08A2A310;
    }
L_08A2A310:
    ctx.gpr[4] = (0u | 23u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2A348;
      }
      goto L_08A2A31C;
    }
L_08A2A31C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(576));
    ctx.gpr[31] = (0x08A2A348u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A348u) goto L_08A2A348;
    return;
L_08A2A348:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B50C;
      }
      goto L_08A2A350;
    }
L_08A2A350:
    ctx.gpr[31] = (0x08A2A358u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 453u, 0x08A1ADA4u>(ctx, &aot_mem) && ctx.pc == 0x08A2A358u) goto L_08A2A358;
    return;
L_08A2A358:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B50C;
      }
      goto L_08A2A360;
    }
L_08A2A360:
    ctx.gpr[31] = (0x08A2A368u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08A2A368u) goto L_08A2A368;
    return;
L_08A2A368:
    ctx.gpr[31] = (0x08A2A370u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 442u, 0x0898D354u>(ctx, &aot_mem) && ctx.pc == 0x08A2A370u) goto L_08A2A370;
    return;
L_08A2A370:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A3E8;
      }
      goto L_08A2A378;
    }
L_08A2A378:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2069)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2052)));
        goto L_08A2A39C;
    }
    goto L_08A2A388;
L_08A2A388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2048)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A3E8;
      }
      goto L_08A2A398;
    }
L_08A2A398:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2052)));
    goto L_08A2A39C;
L_08A2A39C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A3E8;
      }
      goto L_08A2A3A4;
    }
L_08A2A3A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2085)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A3E8;
      }
      goto L_08A2A3B0;
    }
L_08A2A3B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2060)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A3E8;
      }
      goto L_08A2A3BC;
    }
L_08A2A3BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(89)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A3E8;
      }
      goto L_08A2A3C8;
    }
L_08A2A3C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A3E8;
      }
      goto L_08A2A3D4;
    }
L_08A2A3D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1972)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A2A3E8;
L_08A2A3E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1972)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A414;
      }
      goto L_08A2A404;
    }
L_08A2A404:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A2A43C;
      }
      goto L_08A2A414;
    }
L_08A2A414:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1972)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A43C;
      }
      goto L_08A2A430;
    }
L_08A2A430:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A2A43C;
L_08A2A43C:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1972)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A46C;
      }
      goto L_08A2A460;
    }
L_08A2A460:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A2A4C0;
      }
      goto L_08A2A46C;
    }
L_08A2A46C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1972)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A498;
      }
      goto L_08A2A488;
    }
L_08A2A488:
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A2A4C0;
      }
      goto L_08A2A498;
    }
L_08A2A498:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1972)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A4C0;
      }
      goto L_08A2A4B4;
    }
L_08A2A4B4:
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A2A4C0;
L_08A2A4C0:
    ctx.gpr[31] = (0x08A2A4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A2A4C8u) goto L_08A2A4C8;
    return;
L_08A2A4C8:
    ctx.gpr[31] = (0x08A2A4D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 109u, 0x08A1CA04u>(ctx, &aot_mem) && ctx.pc == 0x08A2A4D0u) goto L_08A2A4D0;
    return;
L_08A2A4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A50C;
      }
      goto L_08A2A4E0;
    }
L_08A2A4E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A50C;
      }
      goto L_08A2A4EC;
    }
L_08A2A4EC:
    ctx.gpr[31] = (0x08A2A4F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 454u, 0x08A1ADB8u>(ctx, &aot_mem) && ctx.pc == 0x08A2A4F4u) goto L_08A2A4F4;
    return;
L_08A2A4F4:
    ctx.gpr[4] = (0u | 246u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2A50C;
      }
      goto L_08A2A500;
    }
L_08A2A500:
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A2A50C;
L_08A2A50C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2079)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A5AC;
      }
      goto L_08A2A51C;
    }
L_08A2A51C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2188)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A570;
      }
      goto L_08A2A534;
    }
L_08A2A534:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(2188));
    ctx.gpr[31] = (0x08A2A540u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 365u, 0x08A1A71Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A540u) goto L_08A2A540;
    return;
L_08A2A540:
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08A2A564u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 356u, 0x08A1A6A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A564u) goto L_08A2A564;
    return;
L_08A2A564:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A72C;
      }
      goto L_08A2A570;
    }
L_08A2A570:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(2188));
    ctx.gpr[31] = (0x08A2A57Cu);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 365u, 0x08A1A71Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A57Cu) goto L_08A2A57C;
    return;
L_08A2A57C:
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(852));
    ctx.gpr[31] = (0x08A2A5A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 359u, 0x08A1A6C8u>(ctx, &aot_mem) && ctx.pc == 0x08A2A5A0u) goto L_08A2A5A0;
    return;
L_08A2A5A0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A72C;
      }
      goto L_08A2A5AC;
    }
L_08A2A5AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2085)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A65C;
      }
      goto L_08A2A5B8;
    }
L_08A2A5B8:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A620;
      }
      goto L_08A2A5E4;
    }
L_08A2A5E4:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(2184));
    ctx.gpr[31] = (0x08A2A5F0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 365u, 0x08A1A71Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A5F0u) goto L_08A2A5F0;
    return;
L_08A2A5F0:
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(856));
    ctx.gpr[31] = (0x08A2A614u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 356u, 0x08A1A6A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A614u) goto L_08A2A614;
    return;
L_08A2A614:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A72C;
      }
      goto L_08A2A620;
    }
L_08A2A620:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(2184));
    ctx.gpr[31] = (0x08A2A62Cu);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 365u, 0x08A1A71Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A62Cu) goto L_08A2A62C;
    return;
L_08A2A62C:
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(860), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(860));
    ctx.gpr[31] = (0x08A2A650u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 359u, 0x08A1A6C8u>(ctx, &aot_mem) && ctx.pc == 0x08A2A650u) goto L_08A2A650;
    return;
L_08A2A650:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A72C;
      }
      goto L_08A2A65C;
    }
L_08A2A65C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2079)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A72C;
      }
      goto L_08A2A668;
    }
L_08A2A668:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2184)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A6BC;
      }
      goto L_08A2A680;
    }
L_08A2A680:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(2184));
    ctx.gpr[31] = (0x08A2A68Cu);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 365u, 0x08A1A71Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A68Cu) goto L_08A2A68C;
    return;
L_08A2A68C:
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x08A2A6B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 356u, 0x08A1A6A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A6B0u) goto L_08A2A6B0;
    return;
L_08A2A6B0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A6F0;
      }
      goto L_08A2A6BC;
    }
L_08A2A6BC:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(2184));
    ctx.gpr[31] = (0x08A2A6C8u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 365u, 0x08A1A71Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A6C8u) goto L_08A2A6C8;
    return;
L_08A2A6C8:
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(868));
    ctx.gpr[31] = (0x08A2A6ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 359u, 0x08A1A6C8u>(ctx, &aot_mem) && ctx.pc == 0x08A2A6ECu) goto L_08A2A6EC;
    return;
L_08A2A6EC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A2A6F0;
L_08A2A6F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1972)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A72C;
      }
      goto L_08A2A70C;
    }
L_08A2A70C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2184)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A72C;
      }
      goto L_08A2A724;
    }
L_08A2A724:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2184)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A2A72C;
L_08A2A72C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(340));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(344));
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (15564u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A2A778u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 367u, 0x08A1A730u>(ctx, &aot_mem) && ctx.pc == 0x08A2A778u) goto L_08A2A778;
    return;
L_08A2A778:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A2A784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 518u, 0x08AAE910u>(ctx, &aot_mem) && ctx.pc == 0x08A2A784u) goto L_08A2A784;
    return;
L_08A2A784:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A7A4;
      }
      goto L_08A2A78C;
    }
L_08A2A78C:
    ctx.gpr[31] = (0x08A2A794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 473u, 0x08AAE644u>(ctx, &aot_mem) && ctx.pc == 0x08A2A794u) goto L_08A2A794;
    return;
L_08A2A794:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A7A4;
      }
      goto L_08A2A7A0;
    }
L_08A2A7A0:
    ctx.gpr[23] = (0u | 1u);
    goto L_08A2A7A4;
L_08A2A7A4:
    ctx.gpr[31] = (0x08A2A7ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A7ACu) goto L_08A2A7AC;
    return;
L_08A2A7AC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[31] = (0x08A2A7B8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 433u, 0x08A1AC44u>(ctx, &aot_mem) && ctx.pc == 0x08A2A7B8u) goto L_08A2A7B8;
    return;
L_08A2A7B8:
    ctx.gpr[31] = (0x08A2A7C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 382u, 0x0896D754u>(ctx, &aot_mem) && ctx.pc == 0x08A2A7C0u) goto L_08A2A7C0;
    return;
L_08A2A7C0:
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF24;
      }
      goto L_08A2A7CC;
    }
L_08A2A7CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2648)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AEA8;
      }
      goto L_08A2A7D8;
    }
L_08A2A7D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2069)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2AEA8;
      }
      goto L_08A2A7E8;
    }
L_08A2A7E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AEA8;
      }
      goto L_08A2A7F8;
    }
L_08A2A7F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A8B8;
      }
      goto L_08A2A804;
    }
L_08A2A804:
    ctx.gpr[31] = (0x08A2A80Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A80Cu) goto L_08A2A80C;
    return;
L_08A2A80C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A2A818u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A818u) goto L_08A2A818;
    return;
L_08A2A818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A870;
      }
      goto L_08A2A828;
    }
L_08A2A828:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A2A860u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A2A860u) goto L_08A2A860;
    return;
L_08A2A860:
    ctx.gpr[31] = (0x08A2A868u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 435u, 0x08A1AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A868u) goto L_08A2A868;
    return;
L_08A2A868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB0C;
      }
      goto L_08A2A870;
    }
L_08A2A870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A888;
      }
      goto L_08A2A880;
    }
L_08A2A880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_08A2AB0C;
      }
      goto L_08A2A888;
    }
L_08A2A888:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x08A2A894u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A894u) goto L_08A2A894;
    return;
L_08A2A894:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A2A8A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A8A4u) goto L_08A2A8A4;
    return;
L_08A2A8A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A2AB0C;
      }
      goto L_08A2A8B8;
    }
L_08A2A8B8:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2A8E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A8E8u) goto L_08A2A8E8;
    return;
L_08A2A8E8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB0C;
      }
      goto L_08A2A8F0;
    }
L_08A2A8F0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08A2A94Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 431u, 0x08A1AC10u>(ctx, &aot_mem) && ctx.pc == 0x08A2A94Cu) goto L_08A2A94C;
    return;
L_08A2A94C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A2A958u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A958u) goto L_08A2A958;
    return;
L_08A2A958:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A2A968u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A2A968u) goto L_08A2A968;
    return;
L_08A2A968:
    ctx.gpr[31] = (0x08A2A970u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 436u, 0x08A1AC98u>(ctx, &aot_mem) && ctx.pc == 0x08A2A970u) goto L_08A2A970;
    return;
L_08A2A970:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2AB0C;
      }
      goto L_08A2A988;
    }
L_08A2A988:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[31] = (0x08A2A994u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A994u) goto L_08A2A994;
    return;
L_08A2A994:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A2A9A4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A2A9A4u) goto L_08A2A9A4;
    return;
L_08A2A9A4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A2A9B4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 434u, 0x08A1AC54u>(ctx, &aot_mem) && ctx.pc == 0x08A2A9B4u) goto L_08A2A9B4;
    return;
L_08A2A9B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(960), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(964), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2A9E0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(964));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 387u, 0x08A1A8C8u>(ctx, &aot_mem) && ctx.pc == 0x08A2A9E0u) goto L_08A2A9E0;
    return;
L_08A2A9E0:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A2A9F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A9F4u) goto L_08A2A9F4;
    return;
L_08A2A9F4:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A2AA14u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 354u, 0x08A1A668u>(ctx, &aot_mem) && ctx.pc == 0x08A2AA14u) goto L_08A2AA14;
    return;
L_08A2AA14:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A2AA24u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 352u, 0x08A1A638u>(ctx, &aot_mem) && ctx.pc == 0x08A2AA24u) goto L_08A2AA24;
    return;
L_08A2AA24:
    ctx.gpr[31] = (0x08A2AA2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AA2Cu) goto L_08A2AA2C;
    return;
L_08A2AA2C:
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[31] = (0x08A2AA5Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem) && ctx.pc == 0x08A2AA5Cu) goto L_08A2AA5C;
    return;
L_08A2AA5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2AAF8;
      }
      goto L_08A2AA64;
    }
L_08A2AA64:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1892), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08A2AA78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AA78u) goto L_08A2AA78;
    return;
L_08A2AA78:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08A2AA98u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 354u, 0x08A1A668u>(ctx, &aot_mem) && ctx.pc == 0x08A2AA98u) goto L_08A2AA98;
    return;
L_08A2AA98:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A2AAA8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A2AAA8u) goto L_08A2AAA8;
    return;
L_08A2AAA8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A2AAB4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AAB4u) goto L_08A2AAB4;
    return;
L_08A2AAB4:
    ctx.gpr[31] = (0x08A2AABCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AABCu) goto L_08A2AABC;
    return;
L_08A2AABC:
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[31] = (0x08A2AAECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem) && ctx.pc == 0x08A2AAECu) goto L_08A2AAEC;
    return;
L_08A2AAEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1892)));
      if (branch_taken) {
          goto L_08A2AAF8;
      }
      goto L_08A2AAF4;
    }
L_08A2AAF4:
    ctx.gpr[19] = (0u | 0u);
    goto L_08A2AAF8;
L_08A2AAF8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB0C;
      }
      goto L_08A2AB00;
    }
L_08A2AB00:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A2AB0Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AB0Cu) goto L_08A2AB0C;
    return;
L_08A2AB0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB64;
      }
      goto L_08A2AB18;
    }
L_08A2AB18:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08A2AB50u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 431u, 0x08A1AC10u>(ctx, &aot_mem) && ctx.pc == 0x08A2AB50u) goto L_08A2AB50;
    return;
L_08A2AB50:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A2AB5Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AB5Cu) goto L_08A2AB5C;
    return;
L_08A2AB5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ABA8;
      }
      goto L_08A2AB64;
    }
L_08A2AB64:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ABA8;
      }
      goto L_08A2AB74;
    }
L_08A2AB74:
    ctx.gpr[31] = (0x08A2AB7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AB7Cu) goto L_08A2AB7C;
    return;
L_08A2AB7C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A2AB88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AB88u) goto L_08A2AB88;
    return;
L_08A2AB88:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[31] = (0x08A2AB9Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 431u, 0x08A1AC10u>(ctx, &aot_mem) && ctx.pc == 0x08A2AB9Cu) goto L_08A2AB9C;
    return;
L_08A2AB9C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A2ABA8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2ABA8u) goto L_08A2ABA8;
    return;
L_08A2ABA8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2ABDC;
      }
      goto L_08A2ABB4;
    }
L_08A2ABB4:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A2ABC8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A2ABC8u) goto L_08A2ABC8;
    return;
L_08A2ABC8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08A2ABD4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2ABD4u) goto L_08A2ABD4;
    return;
L_08A2ABD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ABFC;
      }
      goto L_08A2ABDC;
    }
L_08A2ABDC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A2ABF0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A2ABF0u) goto L_08A2ABF0;
    return;
L_08A2ABF0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08A2ABFCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2ABFCu) goto L_08A2ABFC;
    return;
L_08A2ABFC:
    ctx.gpr[4] = (16454u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2AC10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AC10u) goto L_08A2AC10;
    return;
L_08A2AC10:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A2AC1Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AC1Cu) goto L_08A2AC1C;
    return;
L_08A2AC1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08A2AC30u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem) && ctx.pc == 0x08A2AC30u) goto L_08A2AC30;
    return;
L_08A2AC30:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AC54;
      }
      goto L_08A2AC40;
    }
L_08A2AC40:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    goto L_08A2AC54;
L_08A2AC54:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2AD9C;
      }
      goto L_08A2AC68;
    }
L_08A2AC68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AD54;
      }
      goto L_08A2AC74;
    }
L_08A2AC74:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AD54;
      }
      goto L_08A2AC7C;
    }
L_08A2AC7C:
    ctx.gpr[31] = (0x08A2AC84u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 434u, 0x08A1AC54u>(ctx, &aot_mem) && ctx.pc == 0x08A2AC84u) goto L_08A2AC84;
    return;
L_08A2AC84:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AD14;
      }
      goto L_08A2AC8C;
    }
L_08A2AC8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2ACB8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1124));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 387u, 0x08A1A8C8u>(ctx, &aot_mem) && ctx.pc == 0x08A2ACB8u) goto L_08A2ACB8;
    return;
L_08A2ACB8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16496u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08A2ACF0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 354u, 0x08A1A668u>(ctx, &aot_mem) && ctx.pc == 0x08A2ACF0u) goto L_08A2ACF0;
    return;
L_08A2ACF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A2AD00u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 352u, 0x08A1A638u>(ctx, &aot_mem) && ctx.pc == 0x08A2AD00u) goto L_08A2AD00;
    return;
L_08A2AD00:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A2AD0Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AD0Cu) goto L_08A2AD0C;
    return;
L_08A2AD0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ADDC;
      }
      goto L_08A2AD14;
    }
L_08A2AD14:
    ctx.gpr[4] = (16496u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08A2AD30u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 354u, 0x08A1A668u>(ctx, &aot_mem) && ctx.pc == 0x08A2AD30u) goto L_08A2AD30;
    return;
L_08A2AD30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A2AD40u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 352u, 0x08A1A638u>(ctx, &aot_mem) && ctx.pc == 0x08A2AD40u) goto L_08A2AD40;
    return;
L_08A2AD40:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A2AD4Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AD4Cu) goto L_08A2AD4C;
    return;
L_08A2AD4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ADDC;
      }
      goto L_08A2AD54;
    }
L_08A2AD54:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08A2AD60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 434u, 0x08A1AC54u>(ctx, &aot_mem) && ctx.pc == 0x08A2AD60u) goto L_08A2AD60;
    return;
L_08A2AD60:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A2AD78u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 354u, 0x08A1A668u>(ctx, &aot_mem) && ctx.pc == 0x08A2AD78u) goto L_08A2AD78;
    return;
L_08A2AD78:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A2AD88u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 352u, 0x08A1A638u>(ctx, &aot_mem) && ctx.pc == 0x08A2AD88u) goto L_08A2AD88;
    return;
L_08A2AD88:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A2AD94u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AD94u) goto L_08A2AD94;
    return;
L_08A2AD94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ADDC;
      }
      goto L_08A2AD9C;
    }
L_08A2AD9C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08A2ADA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 434u, 0x08A1AC54u>(ctx, &aot_mem) && ctx.pc == 0x08A2ADA8u) goto L_08A2ADA8;
    return;
L_08A2ADA8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A2ADC0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 354u, 0x08A1A668u>(ctx, &aot_mem) && ctx.pc == 0x08A2ADC0u) goto L_08A2ADC0;
    return;
L_08A2ADC0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A2ADD0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 352u, 0x08A1A638u>(ctx, &aot_mem) && ctx.pc == 0x08A2ADD0u) goto L_08A2ADD0;
    return;
L_08A2ADD0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A2ADDCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2ADDCu) goto L_08A2ADDC;
    return;
L_08A2ADDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1972)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2AE74;
      }
      goto L_08A2ADF8;
    }
L_08A2ADF8:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AE74;
      }
      goto L_08A2AE00;
    }
L_08A2AE00:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A2AE0Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AE0Cu) goto L_08A2AE0C;
    return;
L_08A2AE0C:
    ctx.gpr[31] = (0x08A2AE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A2AE14u) goto L_08A2AE14;
    return;
L_08A2AE14:
    ctx.gpr[31] = (0x08A2AE1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AE1Cu) goto L_08A2AE1C;
    return;
L_08A2AE1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16390u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AE7C;
      }
      goto L_08A2AE48;
    }
L_08A2AE48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2AE7C;
      }
      goto L_08A2AE64;
    }
L_08A2AE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A2AE7C;
      }
      goto L_08A2AE74;
    }
L_08A2AE74:
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A2AE7C;
L_08A2AE7C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A2AE90u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 431u, 0x08A1AC10u>(ctx, &aot_mem) && ctx.pc == 0x08A2AE90u) goto L_08A2AE90;
    return;
L_08A2AE90:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A2AEA0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 155u, 0x08A1CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2AEA0u) goto L_08A2AEA0;
    return;
L_08A2AEA0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2648), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A2AEA8;
L_08A2AEA8:
    ctx.gpr[31] = (0x08A2AEB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 398u, 0x0896D890u>(ctx, &aot_mem) && ctx.pc == 0x08A2AEB0u) goto L_08A2AEB0;
    return;
L_08A2AEB0:
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF00;
      }
      goto L_08A2AEBC;
    }
L_08A2AEBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2069)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2AF00;
      }
      goto L_08A2AECC;
    }
L_08A2AECC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2648)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2AF00;
      }
      goto L_08A2AEDC;
    }
L_08A2AEDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1988)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF40;
      }
      goto L_08A2AEEC;
    }
L_08A2AEEC:
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2064), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2AF40;
      }
      goto L_08A2AF00;
    }
L_08A2AF00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF18;
      }
      goto L_08A2AF0C;
    }
L_08A2AF0C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2066), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2064), static_cast<std::uint8_t>(0u));
    goto L_08A2AF18;
L_08A2AF18:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2AF40;
      }
      goto L_08A2AF24;
    }
L_08A2AF24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF3C;
      }
      goto L_08A2AF30;
    }
L_08A2AF30:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2066), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2064), static_cast<std::uint8_t>(0u));
    goto L_08A2AF3C;
L_08A2AF3C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2648), static_cast<std::uint8_t>(0u));
    goto L_08A2AF40;
L_08A2AF40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2AF68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 365u, 0x0899B1A8u>(ctx, &aot_mem) && ctx.pc == 0x08A2AF68u) goto L_08A2AF68;
    return;
L_08A2AF68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AFB0;
      }
      goto L_08A2AF70;
    }
L_08A2AF70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2AF98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 453u, 0x08A1ADA4u>(ctx, &aot_mem) && ctx.pc == 0x08A2AF98u) goto L_08A2AF98;
    return;
L_08A2AF98:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2AFDC;
      }
      goto L_08A2AFA4;
    }
L_08A2AFA4:
    ctx.gpr[4] = (0u | 23u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2AFDC;
      }
      goto L_08A2AFB0;
    }
L_08A2AFB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(576));
    ctx.gpr[31] = (0x08A2AFDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2AFDCu) goto L_08A2AFDC;
    return;
L_08A2AFDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1972)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2B048;
      }
      goto L_08A2AFF8;
    }
L_08A2AFF8:
    ctx.gpr[31] = (0x08A2B000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 522u, 0x08AAE934u>(ctx, &aot_mem) && ctx.pc == 0x08A2B000u) goto L_08A2B000;
    return;
L_08A2B000:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B048;
      }
      goto L_08A2B008;
    }
L_08A2B008:
    ctx.gpr[31] = (0x08A2B010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B010u) goto L_08A2B010;
    return;
L_08A2B010:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B048;
      }
      goto L_08A2B018;
    }
L_08A2B018:
    ctx.gpr[31] = (0x08A2B020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B020u) goto L_08A2B020;
    return;
L_08A2B020:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B048;
      }
      goto L_08A2B028;
    }
L_08A2B028:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2060)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B048;
      }
      goto L_08A2B034;
    }
L_08A2B034:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B048;
      }
      goto L_08A2B040;
    }
L_08A2B040:
    ctx.gpr[4] = (0u | 37u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A2B048;
L_08A2B048:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2228))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B05C;
      }
      goto L_08A2B054;
    }
L_08A2B054:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2228))))));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A2B05C;
L_08A2B05C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1976))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B50C;
      }
      goto L_08A2B068;
    }
L_08A2B068:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B50C;
      }
      goto L_08A2B070;
    }
L_08A2B070:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B110;
      }
      goto L_08A2B080;
    }
L_08A2B080:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B110;
      }
      goto L_08A2B090;
    }
L_08A2B090:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B110;
      }
      goto L_08A2B0A0;
    }
L_08A2B0A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B110;
      }
      goto L_08A2B0B0;
    }
L_08A2B0B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B110;
      }
      goto L_08A2B0C0;
    }
L_08A2B0C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B110;
      }
      goto L_08A2B0D0;
    }
L_08A2B0D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[5] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B110;
      }
      goto L_08A2B0E0;
    }
L_08A2B0E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2B108u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 119u, 0x089990E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2B108u) goto L_08A2B108;
    return;
L_08A2B108:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B1B0;
      }
      goto L_08A2B110;
    }
L_08A2B110:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2B13Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 109u, 0x08A1CA04u>(ctx, &aot_mem) && ctx.pc == 0x08A2B13Cu) goto L_08A2B13C;
    return;
L_08A2B13C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B1A4;
      }
      goto L_08A2B14C;
    }
L_08A2B14C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B198;
      }
      goto L_08A2B15C;
    }
L_08A2B15C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2B184u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 119u, 0x089990E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2B184u) goto L_08A2B184;
    return;
L_08A2B184:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B198;
      }
      goto L_08A2B18C;
    }
L_08A2B18C:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2B50C;
      }
      goto L_08A2B198;
    }
L_08A2B198:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1976))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2B50C;
      }
      goto L_08A2B1A4;
    }
L_08A2B1A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1976))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2B50C;
      }
      goto L_08A2B1B0;
    }
L_08A2B1B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B50C;
      }
      goto L_08A2B1C0;
    }
L_08A2B1C0:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    ctx.gpr[31] = (0x08A2B1D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2B1D8u) goto L_08A2B1D8;
    return;
L_08A2B1D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2B1E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 433u, 0x08A1AC44u>(ctx, &aot_mem) && ctx.pc == 0x08A2B1E4u) goto L_08A2B1E4;
    return;
L_08A2B1E4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1280));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2256));
    ctx.gpr[31] = (0x08A2B1F4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A2B1F4u) goto L_08A2B1F4;
    return;
L_08A2B1F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08A2B224u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A2B224u) goto L_08A2B224;
    return;
L_08A2B224:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B238;
      }
      goto L_08A2B230;
    }
L_08A2B230:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B50C;
      }
      goto L_08A2B238;
    }
L_08A2B238:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1972)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2B25C;
      }
      goto L_08A2B254;
    }
L_08A2B254:
    ctx.gpr[4] = (16400u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A2B25C;
L_08A2B25C:
    ctx.gpr[31] = (0x08A2B264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A2B264u) goto L_08A2B264;
    return;
L_08A2B264:
    ctx.gpr[31] = (0x08A2B26Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 473u, 0x08A1E95Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B26Cu) goto L_08A2B26C;
    return;
L_08A2B26C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B28C;
      }
      goto L_08A2B274;
    }
L_08A2B274:
    ctx.gpr[31] = (0x08A2B27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A2B27Cu) goto L_08A2B27C;
    return;
L_08A2B27C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B50C;
      }
      goto L_08A2B28C;
    }
L_08A2B28C:
    ctx.gpr[31] = (0x08A2B294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A2B294u) goto L_08A2B294;
    return;
L_08A2B294:
    ctx.gpr[31] = (0x08A2B29Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 474u, 0x08A1E968u>(ctx, &aot_mem) && ctx.pc == 0x08A2B29Cu) goto L_08A2B29C;
    return;
L_08A2B29C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B2E4;
      }
      goto L_08A2B2A8;
    }
L_08A2B2A8:
    ctx.gpr[31] = (0x08A2B2B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 109u, 0x08A1CA04u>(ctx, &aot_mem) && ctx.pc == 0x08A2B2B0u) goto L_08A2B2B0;
    return;
L_08A2B2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B2D8;
      }
      goto L_08A2B2C0;
    }
L_08A2B2C0:
    ctx.gpr[31] = (0x08A2B2C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 109u, 0x08A1CA04u>(ctx, &aot_mem) && ctx.pc == 0x08A2B2C8u) goto L_08A2B2C8;
    return;
L_08A2B2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B2E4;
      }
      goto L_08A2B2D8;
    }
L_08A2B2D8:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B2E8;
      }
      goto L_08A2B2E4;
    }
L_08A2B2E4:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7240)));
    goto L_08A2B2E8;
L_08A2B2E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1280)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1284)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08A2B300u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 426u, 0x08A1ABCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2B300u) goto L_08A2B300;
    return;
L_08A2B300:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1296)));
    ctx.gpr[31] = (0x08A2B310u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1300)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 459u, 0x08A1ADECu>(ctx, &aot_mem) && ctx.pc == 0x08A2B310u) goto L_08A2B310;
    return;
L_08A2B310:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1976))))));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B340;
      }
      goto L_08A2B330;
    }
L_08A2B330:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B3C4;
      }
      goto L_08A2B340;
    }
L_08A2B340:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2092)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B37C;
      }
      goto L_08A2B34C;
    }
L_08A2B34C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B3C4;
      }
      goto L_08A2B37C;
    }
L_08A2B37C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2B3C4;
      }
      goto L_08A2B38C;
    }
L_08A2B38C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B3C4;
      }
      goto L_08A2B394;
    }
L_08A2B394:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B3B0;
      }
      goto L_08A2B3A4;
    }
L_08A2B3A4:
    ctx.gpr[4] = (16544u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2B3BC;
      }
      goto L_08A2B3B0;
    }
L_08A2B3B0:
    ctx.gpr[4] = (16563u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A2B3BC;
L_08A2B3BC:
    ctx.gpr[4] = (0u | 35u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A2B3C4;
L_08A2B3C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B508;
      }
      goto L_08A2B3D4;
    }
L_08A2B3D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7244)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B50C;
      }
      goto L_08A2B3E0;
    }
L_08A2B3E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1360), 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1312));
    ctx.gpr[31] = (0x08A2B3F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2B3F0u) goto L_08A2B3F0;
    return;
L_08A2B3F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2B3FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2B3FCu) goto L_08A2B3FC;
    return;
L_08A2B3FC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1312)));
    ctx.gpr[31] = (0x08A2B408u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 419u, 0x08A1AB28u>(ctx, &aot_mem) && ctx.pc == 0x08A2B408u) goto L_08A2B408;
    return;
L_08A2B408:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1316)));
    ctx.gpr[31] = (0x08A2B420u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 417u, 0x08A1AAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B420u) goto L_08A2B420;
    return;
L_08A2B420:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1320)));
    ctx.gpr[4] = (16275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A2B44Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2B44Cu) goto L_08A2B44C;
    return;
L_08A2B44C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1360));
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A2B488u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B488u) goto L_08A2B488;
    return;
L_08A2B488:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B4D4;
      }
      goto L_08A2B490;
    }
L_08A2B490:
    ctx.gpr[31] = (0x08A2B498u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 458u, 0x08A1ADE4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B498u) goto L_08A2B498;
    return;
L_08A2B498:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1376));
    ctx.gpr[31] = (0x08A2B4A4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 432u, 0x08A1AC24u>(ctx, &aot_mem) && ctx.pc == 0x08A2B4A4u) goto L_08A2B4A4;
    return;
L_08A2B4A4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1392));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A2B4BCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 431u, 0x08A1AC10u>(ctx, &aot_mem) && ctx.pc == 0x08A2B4BCu) goto L_08A2B4BC;
    return;
L_08A2B4BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2B4CCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 155u, 0x08A1CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B4CCu) goto L_08A2B4CC;
    return;
L_08A2B4CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B4F8;
      }
      goto L_08A2B4D4;
    }
L_08A2B4D4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1408));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A2B4E8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 431u, 0x08A1AC10u>(ctx, &aot_mem) && ctx.pc == 0x08A2B4E8u) goto L_08A2B4E8;
    return;
L_08A2B4E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1312));
    ctx.gpr[31] = (0x08A2B4F8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 155u, 0x08A1CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B4F8u) goto L_08A2B4F8;
    return;
L_08A2B4F8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-7244), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B50C;
      }
      goto L_08A2B508;
    }
L_08A2B508:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-7244), static_cast<std::uint8_t>(0u));
    goto L_08A2B50C;
L_08A2B50C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A2B544u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 109u, 0x08A1CA04u>(ctx, &aot_mem) && ctx.pc == 0x08A2B544u) goto L_08A2B544;
    return;
L_08A2B544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B560;
      }
      goto L_08A2B554;
    }
L_08A2B554:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-7243), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2B574;
      }
      goto L_08A2B560;
    }
L_08A2B560:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7243)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B574;
      }
      goto L_08A2B56C;
    }
L_08A2B56C:
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-7243), static_cast<std::uint8_t>(0u));
    goto L_08A2B574;
L_08A2B574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7100)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B5CC;
      }
      goto L_08A2B584;
    }
L_08A2B584:
    ctx.gpr[31] = (0x08A2B58Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 109u, 0x08A1CA04u>(ctx, &aot_mem) && ctx.pc == 0x08A2B58Cu) goto L_08A2B58C;
    return;
L_08A2B58C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B5CC;
      }
      goto L_08A2B59C;
    }
L_08A2B59C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2B5C4;
      }
      goto L_08A2B5B4;
    }
L_08A2B5B4:
    ctx.gpr[31] = (0x08A2B5BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 452u, 0x08A1AD90u>(ctx, &aot_mem) && ctx.pc == 0x08A2B5BCu) goto L_08A2B5BC;
    return;
L_08A2B5BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B5D0;
      }
      goto L_08A2B5C4;
    }
L_08A2B5C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B5D0;
      }
      goto L_08A2B5CC;
    }
L_08A2B5CC:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A2B5D0;
L_08A2B5D0:
    ctx.gpr[31] = (0x08A2B5D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 109u, 0x08A1CA04u>(ctx, &aot_mem) && ctx.pc == 0x08A2B5D8u) goto L_08A2B5D8;
    return;
L_08A2B5D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7100), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2B628;
      }
      goto L_08A2B5EC;
    }
L_08A2B5EC:
    ctx.gpr[4] = (0u | 32u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7104), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(275), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2B648;
      }
      goto L_08A2B628;
    }
L_08A2B628:
    ctx.gpr[31] = (0x08A2B630u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 109u, 0x08A1CA04u>(ctx, &aot_mem) && ctx.pc == 0x08A2B630u) goto L_08A2B630;
    return;
L_08A2B630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B648;
      }
      goto L_08A2B640;
    }
L_08A2B640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7104)));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A2B648;
L_08A2B648:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2B674u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 109u, 0x08A1CA04u>(ctx, &aot_mem) && ctx.pc == 0x08A2B674u) goto L_08A2B674;
    return;
L_08A2B674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B844;
      }
      goto L_08A2B684;
    }
L_08A2B684:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B6C0;
      }
      goto L_08A2B6B4;
    }
L_08A2B6B4:
    ctx.gpr[4] = (0u | 29u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2B844;
      }
      goto L_08A2B6C0;
    }
L_08A2B6C0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A2B6CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 453u, 0x08A1ADA4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B6CCu) goto L_08A2B6CC;
    return;
L_08A2B6CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B7B8;
      }
      goto L_08A2B6D4;
    }
L_08A2B6D4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B7B8;
      }
      goto L_08A2B6EC;
    }
L_08A2B6EC:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
      if (branch_taken) {
          goto L_08A2B7A4;
      }
      goto L_08A2B700;
    }
L_08A2B700:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2B70Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 109u, 0x08A1CA04u>(ctx, &aot_mem) && ctx.pc == 0x08A2B70Cu) goto L_08A2B70C;
    return;
L_08A2B70C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1424));
      if (branch_taken) {
          goto L_08A2B7A4;
      }
      goto L_08A2B71C;
    }
L_08A2B71C:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2B72Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2B72Cu) goto L_08A2B72C;
    return;
L_08A2B72C:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A2B738u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2B738u) goto L_08A2B738;
    return;
L_08A2B738:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A2B748u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 353u, 0x08A1A650u>(ctx, &aot_mem) && ctx.pc == 0x08A2B748u) goto L_08A2B748;
    return;
L_08A2B748:
    ctx.gpr[31] = (0x08A2B750u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 435u, 0x08A1AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B750u) goto L_08A2B750;
    return;
L_08A2B750:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2B7A4;
      }
      goto L_08A2B768;
    }
L_08A2B768:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (0u | 32u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(275), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B7B8;
      }
      goto L_08A2B7A4;
    }
L_08A2B7A4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B6EC;
      }
      goto L_08A2B7B8;
    }
L_08A2B7B8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B844;
      }
      goto L_08A2B7C0;
    }
L_08A2B7C0:
    ctx.gpr[31] = (0x08A2B7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A2B7C8u) goto L_08A2B7C8;
    return;
L_08A2B7C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B814;
      }
      goto L_08A2B7D0;
    }
L_08A2B7D0:
    ctx.gpr[31] = (0x08A2B7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A2B7D8u) goto L_08A2B7D8;
    return;
L_08A2B7D8:
    ctx.gpr[31] = (0x08A2B7E0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 475u, 0x08A1E970u>(ctx, &aot_mem) && ctx.pc == 0x08A2B7E0u) goto L_08A2B7E0;
    return;
L_08A2B7E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B814;
      }
      goto L_08A2B7E8;
    }
L_08A2B7E8:
    ctx.gpr[31] = (0x08A2B7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A2B7F0u) goto L_08A2B7F0;
    return;
L_08A2B7F0:
    ctx.gpr[31] = (0x08A2B7F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 475u, 0x08A1E970u>(ctx, &aot_mem) && ctx.pc == 0x08A2B7F8u) goto L_08A2B7F8;
    return;
L_08A2B7F8:
    ctx.gpr[31] = (0x08A2B800u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 466u, 0x08A1AE64u>(ctx, &aot_mem) && ctx.pc == 0x08A2B800u) goto L_08A2B800;
    return;
L_08A2B800:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2B814;
      }
      goto L_08A2B80C;
    }
L_08A2B80C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2069), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A2B814;
L_08A2B814:
    ctx.gpr[4] = (0u | 29u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(275), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A2B844;
L_08A2B844:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2016)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BB70;
      }
      goto L_08A2B854;
    }
L_08A2B854:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B928;
      }
      goto L_08A2B864;
    }
L_08A2B864:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B928;
      }
      goto L_08A2B874;
    }
L_08A2B874:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B928;
      }
      goto L_08A2B884;
    }
L_08A2B884:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B928;
      }
      goto L_08A2B894;
    }
L_08A2B894:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B928;
      }
      goto L_08A2B8A4;
    }
L_08A2B8A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B928;
      }
      goto L_08A2B8B4;
    }
L_08A2B8B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B928;
      }
      goto L_08A2B8C4;
    }
L_08A2B8C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B928;
      }
      goto L_08A2B8D4;
    }
L_08A2B8D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B928;
      }
      goto L_08A2B8E4;
    }
L_08A2B8E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B928;
      }
      goto L_08A2B8F4;
    }
L_08A2B8F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B928;
      }
      goto L_08A2B904;
    }
L_08A2B904:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B928;
      }
      goto L_08A2B914;
    }
L_08A2B914:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7580)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B928;
      }
      goto L_08A2B920;
    }
L_08A2B920:
    ctx.gpr[31] = (0x08A2B928u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 141u, 0x08A1CE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B928u) goto L_08A2B928;
    return;
L_08A2B928:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2848))))));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(112), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2068), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(275), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(528));
    ctx.gpr[31] = (0x08A2B970u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2272));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2B970u) goto L_08A2B970;
    return;
L_08A2B970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(544));
    ctx.gpr[31] = (0x08A2B9A4u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2B9A4u) goto L_08A2B9A4;
    return;
L_08A2B9A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(560));
    ctx.gpr[31] = (0x08A2B9D0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2304));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2B9D0u) goto L_08A2B9D0;
    return;
L_08A2B9D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(272), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
        goto L_08A2BA0C;
    }
    goto L_08A2BA00;
L_08A2BA00:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2BA0C;
      }
      goto L_08A2BA0C;
    }
L_08A2BA0C:
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(576));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1440));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A2BA40u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 431u, 0x08A1AC10u>(ctx, &aot_mem) && ctx.pc == 0x08A2BA40u) goto L_08A2BA40;
    return;
L_08A2BA40:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2BA4Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem) && ctx.pc == 0x08A2BA4Cu) goto L_08A2BA4C;
    return;
L_08A2BA4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BABC;
      }
      goto L_08A2BA54;
    }
L_08A2BA54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(576));
      if (branch_taken) {
          goto L_08A2BA8C;
      }
      goto L_08A2BA80;
    }
L_08A2BA80:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2BA90;
      }
      goto L_08A2BA8C;
    }
L_08A2BA8C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    goto L_08A2BA90;
L_08A2BA90:
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(576));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A2BABCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2BABCu) goto L_08A2BABC;
    return;
L_08A2BABC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2016), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(275), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BB00;
      }
      goto L_08A2BAF4;
    }
L_08A2BAF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[31] = (0x08A2BB00u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1984));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08A2BB00u) goto L_08A2BB00;
    return;
L_08A2BB00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BB58;
      }
      goto L_08A2BB2C;
    }
L_08A2BB2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (0x08A2BB58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(224));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08A2BB58u) goto L_08A2BB58;
    return;
L_08A2BB58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2128)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2184)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2092), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2649), static_cast<std::uint8_t>(0u));
    goto L_08A2BB70;
L_08A2BB70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4213)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BB84;
      }
      goto L_08A2BB7C;
    }
L_08A2BB7C:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7096), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A2BB84;
L_08A2BB84:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BBF0;
      }
      goto L_08A2BB94;
    }
L_08A2BB94:
    ctx.gpr[31] = (0x08A2BB9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 452u, 0x08A1AD90u>(ctx, &aot_mem) && ctx.pc == 0x08A2BB9Cu) goto L_08A2BB9C;
    return;
L_08A2BB9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BBCC;
      }
      goto L_08A2BBA4;
    }
L_08A2BBA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1972)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2BBF0;
      }
      goto L_08A2BBC0;
    }
L_08A2BBC0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1965), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2BBF0;
      }
      goto L_08A2BBCC;
    }
L_08A2BBCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1944)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2BBF0;
      }
      goto L_08A2BBE8;
    }
L_08A2BBE8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1964), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A2BBF0;
L_08A2BBF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2075)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BC00;
    }
L_08A2BC00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BC10;
    }
L_08A2BC10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BC20;
    }
L_08A2BC20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BC30;
    }
L_08A2BC30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BC40;
    }
L_08A2BC40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BC50;
    }
L_08A2BC50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BC60;
    }
L_08A2BC60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BC70;
    }
L_08A2BC70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BC80;
    }
L_08A2BC80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BC90;
    }
L_08A2BC90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BCA0;
    }
L_08A2BCA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BCB0;
    }
L_08A2BCB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BCC0;
    }
L_08A2BCC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BCD0;
    }
L_08A2BCD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BCE0;
    }
L_08A2BCE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BCF0;
    }
L_08A2BCF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BD00;
    }
L_08A2BD00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BD10;
    }
L_08A2BD10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BD20;
    }
L_08A2BD20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BD30;
    }
L_08A2BD30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BD40;
    }
L_08A2BD40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BD50;
    }
L_08A2BD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2048)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BD60;
    }
L_08A2BD60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2066)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BD6C;
    }
L_08A2BD6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BD7C;
      }
      goto L_08A2BD78;
    }
L_08A2BD78:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A2BD7C;
L_08A2BD7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1965)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2BD90;
      }
      goto L_08A2BD88;
    }
L_08A2BD88:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2BDAC;
      }
      goto L_08A2BD90;
    }
L_08A2BD90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2054)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BDBC;
      }
      goto L_08A2BD9C;
    }
L_08A2BD9C:
    ctx.gpr[31] = (0x08A2BDA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 452u, 0x08A1AD90u>(ctx, &aot_mem) && ctx.pc == 0x08A2BDA4u) goto L_08A2BDA4;
    return;
L_08A2BDA4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BDBC;
      }
      goto L_08A2BDAC;
    }
L_08A2BDAC:
    ctx.gpr[31] = (0x08A2BDB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 363u, 0x08A1DF50u>(ctx, &aot_mem) && ctx.pc == 0x08A2BDB4u) goto L_08A2BDB4;
    return;
L_08A2BDB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BE90;
      }
      goto L_08A2BDBC;
    }
L_08A2BDBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1964)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2BDD0;
      }
      goto L_08A2BDC8;
    }
L_08A2BDC8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2BDDC;
      }
      goto L_08A2BDD0;
    }
L_08A2BDD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2054)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BE68;
      }
      goto L_08A2BDDC;
    }
L_08A2BDDC:
    ctx.gpr[31] = (0x08A2BDE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 452u, 0x08A1AD90u>(ctx, &aot_mem) && ctx.pc == 0x08A2BDE4u) goto L_08A2BDE4;
    return;
L_08A2BDE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BE10;
      }
      goto L_08A2BDEC;
    }
L_08A2BDEC:
    ctx.gpr[31] = (0x08A2BDF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x08A2BDF4u) goto L_08A2BDF4;
    return;
L_08A2BDF4:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2BE10;
      }
      goto L_08A2BE00;
    }
L_08A2BE00:
    ctx.gpr[31] = (0x08A2BE08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 388u, 0x08A1E15Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2BE08u) goto L_08A2BE08;
    return;
L_08A2BE08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BE90;
      }
      goto L_08A2BE10;
    }
L_08A2BE10:
    ctx.gpr[31] = (0x08A2BE18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 452u, 0x08A1AD90u>(ctx, &aot_mem) && ctx.pc == 0x08A2BE18u) goto L_08A2BE18;
    return;
L_08A2BE18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BE58;
      }
      goto L_08A2BE20;
    }
L_08A2BE20:
    ctx.gpr[31] = (0x08A2BE28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 466u, 0x08A1AE64u>(ctx, &aot_mem) && ctx.pc == 0x08A2BE28u) goto L_08A2BE28;
    return;
L_08A2BE28:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2BE48;
      }
      goto L_08A2BE34;
    }
L_08A2BE34:
    ctx.gpr[31] = (0x08A2BE3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 466u, 0x08A1AE64u>(ctx, &aot_mem) && ctx.pc == 0x08A2BE3Cu) goto L_08A2BE3C;
    return;
L_08A2BE3C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2BE58;
      }
      goto L_08A2BE48;
    }
L_08A2BE48:
    ctx.gpr[31] = (0x08A2BE50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 408u, 0x08A1E2D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2BE50u) goto L_08A2BE50;
    return;
L_08A2BE50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BE90;
      }
      goto L_08A2BE58;
    }
L_08A2BE58:
    ctx.gpr[31] = (0x08A2BE60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 374u, 0x08A1E030u>(ctx, &aot_mem) && ctx.pc == 0x08A2BE60u) goto L_08A2BE60;
    return;
L_08A2BE60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BE90;
      }
      goto L_08A2BE68;
    }
L_08A2BE68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BE84;
      }
      goto L_08A2BE74;
    }
L_08A2BE74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1964)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BE84;
      }
      goto L_08A2BE80;
    }
L_08A2BE80:
    ctx.gpr[22] = (0u | 1u);
    goto L_08A2BE84;
L_08A2BE84:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A2BE90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 422u, 0x08A1E3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A2BE90u) goto L_08A2BE90;
    return;
L_08A2BE90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2069)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 235u, 0x08A2D72Cu>(ctx, &aot_mem); return;
      }
      goto L_08A2BEA0;
    }
L_08A2BEA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BED0;
      }
      goto L_08A2BEB0;
    }
L_08A2BEB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BED0;
      }
      goto L_08A2BEC0;
    }
L_08A2BEC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BED8;
      }
      goto L_08A2BED0;
    }
L_08A2BED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2BF88;
      }
      goto L_08A2BED8;
    }
L_08A2BED8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BEF8;
      }
      goto L_08A2BEE8;
    }
L_08A2BEE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BF44;
      }
      goto L_08A2BEF8;
    }
L_08A2BEF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_08A2BF38;
      }
      goto L_08A2BF28;
    }
L_08A2BF28:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2BF38;
      }
      goto L_08A2BF30;
    }
L_08A2BF30:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BF88;
      }
      goto L_08A2BF38;
    }
L_08A2BF38:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BF88;
      }
      goto L_08A2BF44;
    }
L_08A2BF44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BF88;
      }
      goto L_08A2BF54;
    }
L_08A2BF54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BF88;
      }
      goto L_08A2BF84;
    }
L_08A2BF84:
    ctx.gpr[22] = (0u | 1u);
    goto L_08A2BF88;
L_08A2BF88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
        goto L_08A2BFAC;
    }
    goto L_08A2BF98;
L_08A2BF98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 20u, 0x08A2C198u>(ctx, &aot_mem); return;
      }
      goto L_08A2BFA8;
    }
L_08A2BFA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    goto L_08A2BFAC;
L_08A2BFAC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 20u, 0x08A2C198u>(ctx, &aot_mem); return;
      }
      goto L_08A2BFB4;
    }
L_08A2BFB4:
    ctx.gpr[31] = (0x08A2BFBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1984)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 453u, 0x08A1ADA4u>(ctx, &aot_mem) && ctx.pc == 0x08A2BFBCu) goto L_08A2BFBC;
    return;
L_08A2BFBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 20u, 0x08A2C198u>(ctx, &aot_mem); return;
      }
      goto L_08A2BFC4;
    }
L_08A2BFC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7096))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 19u, 0x08A2C194u>(ctx, &aot_mem); return;
      }
      goto L_08A2BFD4;
    }
L_08A2BFD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 19u, 0x08A2C194u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 1u, 0x08A2C004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0137(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0137_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_137(Runtime &runtime) {
    runtime.register_generated_unit(137u, 0x08A28000u, 16384u, &recomp_unit_0137, &recomp_unit_0137_entry);
    runtime.register_function(0x08A28004u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2800Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28024u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2802Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28034u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2803Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2805Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28064u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2807Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28084u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2808Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28094u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2809Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2810Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28124u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28130u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28150u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28158u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2816Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28178u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28180u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28204u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2820Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2821Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28224u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28234u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28238u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28254u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28260u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2826Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28298u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28300u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28318u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28320u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28328u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28330u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2833Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28350u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28358u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28370u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28378u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28380u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28400u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28410u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28418u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28428u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28440u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28454u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2845Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28474u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28490u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2849Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A284B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A284C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A284CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A284E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A284ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28504u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28514u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2852Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28544u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28558u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28560u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2856Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28574u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2857Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28584u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28590u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28598u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A285A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A285ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A285B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A285CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A285D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A285E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28610u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28618u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28628u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28638u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28640u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28658u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28660u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28678u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28680u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28688u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28690u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A286A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A286B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A286BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A286D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A286DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A286E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A286F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A286FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28704u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2870Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28714u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28720u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28728u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28730u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2873Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28754u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28768u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28770u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2877Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28788u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A287A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A287B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A287C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A287D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A287E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A287F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28800u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28818u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28828u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28840u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28858u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2886Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28874u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28880u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28888u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28890u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28898u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28924u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2892Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2893Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2894Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28954u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2896Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28974u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2898Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28994u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2899Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A6Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28AA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28AA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28AC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28AC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28AD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28AD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28AE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28AE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28ECCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28ED4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2900Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29020u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29034u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29048u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2904Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29054u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2905Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29064u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29070u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29080u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29090u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29094u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2909Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29104u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2910Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29120u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2912Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29148u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29154u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2916Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29178u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29184u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29200u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29208u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2920Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29218u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29220u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29224u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2922Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29234u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29244u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2924Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29254u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2925Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29268u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2926Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29288u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29294u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29300u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2935Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2936Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29374u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29478u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29564u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2956Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A295ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A295F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A295F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29600u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29610u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2961Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29670u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29680u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29718u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2974Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2975Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29770u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2984Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29894u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A298D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A298E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A298FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29AE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B50u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C60u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29ED4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A00Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A014u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A01Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A024u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A02Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A034u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A03Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A044u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A054u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A06Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A078u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A09Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A120u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A128u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A14Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A158u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A160u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A184u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A188u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A190u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A19Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A220u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A224u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A240u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A258u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A260u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A308u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A310u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A31Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A348u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A350u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A358u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A360u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A368u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A370u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A378u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A388u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A398u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A39Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A404u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A414u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A430u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A43Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A460u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A46Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A488u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A498u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A500u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A50Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A51Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A534u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A540u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A564u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A570u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A57Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A5A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A5ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A5B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A5E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A5F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A614u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A620u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A62Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A650u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A65Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A668u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A680u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A68Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A70Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A724u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A72Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A778u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A784u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A78Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A794u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A804u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A80Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A818u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A828u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A860u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A868u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A870u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A880u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A888u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A894u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A94Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A958u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A968u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A970u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A988u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A994u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AABCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB50u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD60u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AECCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B000u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B008u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B010u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B018u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B020u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B028u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B034u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B040u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B048u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B054u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B05Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B068u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B070u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B080u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B090u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B108u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B110u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B13Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B14Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B15Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B184u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B18Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B198u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B224u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B230u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B238u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B254u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B25Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B264u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B26Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B274u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B27Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B28Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B294u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B29Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B300u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B310u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B330u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B340u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B34Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B37Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B38Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B394u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B408u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B420u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B44Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B488u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B490u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B498u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B508u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B50Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B544u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B554u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B560u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B56Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B574u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B584u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B58Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B59Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B628u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B630u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B640u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B648u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B674u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B684u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B700u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B70Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B71Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B72Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B738u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B748u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B750u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B768u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B800u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B80Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B814u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B844u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B854u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B864u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B874u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B884u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B894u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B904u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B914u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B920u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B928u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B970u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BABCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBCCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC50u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC60u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD50u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD60u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD6Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE50u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE60u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BEA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BEB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BEC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BED0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BED8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BEE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BEF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BF28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BF30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BF38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BF44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BF54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BF84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BF88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BF98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BFA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BFACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BFB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BFBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BFC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BFD4u, &recomp_unit_0137, "recomp_unit_0137");
}
} // namespace psprecomp
