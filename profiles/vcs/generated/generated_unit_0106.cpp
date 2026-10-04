#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0106[4082] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14,
    0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23,
    0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0,
    0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44,
    0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0,
    0, 66, 0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 72,
    0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 85, 86, 0, 0, 87, 0, 88, 0,
    89, 0, 90, 0, 0, 0, 0, 0, 91, 92, 0, 93, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 111, 112, 0, 113, 0, 114, 0, 0, 115, 0,
    116, 0, 117, 0, 118, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 129,
    0, 0, 130, 0, 131, 0, 132, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 140, 141, 0, 142,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 146, 0, 0, 0, 0, 147, 148, 0, 149, 0, 0, 0, 150, 0, 151, 0,
    152, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 166, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0,
    170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 175, 176, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 181,
    0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 195,
    0, 0, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0, 0, 199, 200, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 206,
    0, 0, 0, 207, 208, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 214, 0, 215, 0, 0, 216, 0, 217, 0, 0, 0,
    218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0,
    230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 240,
    0, 241, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 248, 0, 0, 249, 0, 250, 0, 0, 251, 0, 252, 0,
    253, 0, 254, 0, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 259, 0, 260, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 266, 0, 267, 0, 0, 268, 0, 269, 0, 0, 270,
    0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0,
    0, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0,
    0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 0, 307, 0, 308, 0,
    0, 309, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 318,
    0, 0, 0, 0, 319, 0, 320, 0, 321, 0, 0, 0, 0, 322, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 327,
    0, 0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 337, 0, 0, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 341, 0,
    0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 348, 0,
    0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 351, 352, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 357, 0, 358, 0, 0, 359, 0,
    360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0,
    0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 372, 0, 0, 373, 0, 374, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 383, 0,
    0, 384, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 0, 392, 0, 0, 0, 393,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 0, 401, 0, 0,
    0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 412, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0,
    423, 0, 424, 0, 0, 425, 0, 426, 0, 0, 427, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 434,
    0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0,
    0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 452, 0, 453, 0, 454, 455, 0, 0, 456, 0, 0, 457,
    0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465,
    0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476,
    0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0,
    481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 486, 0,
    487, 0, 0, 0, 0, 488, 0, 489, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 494, 0, 0, 495, 0, 0,
    0, 496, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0,
    504, 0, 0, 505, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509, 0, 510, 0, 511, 0, 512, 0, 0, 0, 513, 0, 0, 514,
    0, 515, 516, 0, 0, 517, 0, 0, 518, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0, 0, 524, 0, 0,
    0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    530, 0, 531, 0, 532, 0, 0, 0, 533, 0, 534, 0, 0, 0, 535, 0, 536, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540,
    0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 0, 546,
    0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0, 554, 0, 0, 555, 0, 556, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 559, 0, 560, 561, 0, 562, 0, 0, 0, 0, 0, 563,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0,
    0, 573, 0, 0, 0, 574, 0, 0, 575, 0, 576, 0, 577, 0, 0, 0, 0, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 0, 583, 0, 584,
    0, 585, 0, 586, 0, 0, 0, 587, 0, 0, 588, 0, 589, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 593, 0, 0, 594, 0, 0,
    0, 595, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 598, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 607, 0, 0, 0, 608, 0, 0, 0,
    609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 616, 0,
    0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 0, 620, 0, 621, 0, 622, 0, 0, 623, 0, 624, 0, 625, 0, 0, 0, 0, 0,
    0, 0, 626, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 631, 0, 0, 0, 632, 0, 0, 633, 0, 0, 0, 0, 0,
    0, 634, 0, 0, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 0,
    0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 645, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0,
    648, 0, 0, 649, 0, 0, 650, 0, 0, 651, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 654, 0, 655, 0, 0, 656, 0, 657, 0, 0, 0, 0,
    658, 0, 0, 659, 0, 0, 0, 660, 0, 0, 661, 0, 662, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 667, 0,
    0, 668, 0, 0, 0, 0, 669, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 673, 0, 0, 674, 0, 675, 0, 0, 676, 0, 677, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0,
    0, 0, 688, 0, 689, 0, 0, 0, 0, 690, 0, 0, 691, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0,
    695, 0, 0, 696, 0, 697, 0, 0, 0, 0, 698, 0, 0, 699, 700, 0, 0, 0, 0, 0, 0, 701, 0, 702, 0, 703, 0, 0, 704, 0, 0, 705,
    0, 0, 0, 706, 0, 0, 707, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 711, 0, 712, 0, 0, 0, 0, 713, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0,
    0, 0, 0, 0, 717, 0, 0, 718, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 720, 721, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0, 724,
    0, 0, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 729, 0, 730, 0, 0, 0, 0, 731, 0, 732, 0, 0,
    0, 733, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 737, 0, 738, 0, 0, 739, 0, 740, 0, 741,
    0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 745, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0,
    748, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 751, 0, 752, 0, 753, 0, 0, 0, 754, 0, 755, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0,
    0, 0, 0, 758, 0, 0, 0, 759, 0, 760, 0, 0, 0, 761, 0, 762, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0,
    0, 766, 0, 0, 0, 767, 0, 768, 0, 769, 0, 770, 0, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 773, 0, 0, 0, 0, 0, 774, 0,
    775, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0, 779, 0, 0, 0, 780, 0, 781, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0,
    783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0,
    787, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 791, 0, 0, 0, 0, 792, 0, 793, 794, 0, 795, 796, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 798, 0, 799, 0, 800, 801, 0,
    0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 806, 0,
    0, 807, 0, 808, 0, 809, 0, 0, 0, 0, 0, 0, 810, 0, 0, 811, 0, 812, 0, 813, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 0, 0,
    816, 0, 0, 817, 818, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 821, 0, 822, 0, 0, 0, 823, 0, 0, 824, 0, 0, 0,
    825, 0, 0, 0, 826, 0, 0, 0, 827, 828, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0,
    0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 835, 0, 836, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0,
    0, 840, 0, 841, 0, 0, 0, 842, 0, 0, 0, 843, 0, 0, 0, 844, 0, 845, 0, 0, 846, 0, 847, 0, 0, 0, 0, 848, 0, 0, 0, 849,
    0, 0, 0, 850, 851, 0, 0, 0, 0, 0, 0, 852, 0, 853, 0, 0, 0, 0, 0, 0, 854, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0,
    856, 0, 857, 0, 0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 0, 0, 0, 860, 0, 861, 0, 0, 0, 0, 862,
    0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 0, 0, 865, 0, 0, 0, 866,
    0, 867, 0, 868, 0, 869, 0, 0, 0, 0, 0, 0, 0, 870, 0, 0, 0, 871, 0, 872, 0, 0, 0, 0, 873, 0, 874, 0, 875, 0, 0, 0,
    876, 0, 0, 0, 0, 0, 0, 0, 877, 0, 878, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 880, 0, 881, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 882, 0, 0, 883, 0, 0, 884, 0, 885, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 887, 0, 888, 0, 0, 0, 0, 0,
    889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 891, 0, 892, 0, 0, 0, 893, 0, 0, 0, 0, 0, 0, 0, 894, 0,
    895, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 898, 0, 899, 0, 900, 0,
    0, 0, 901, 0, 0, 0, 0, 0, 0, 0, 902, 0, 903, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 905, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 906, 0, 0, 0, 0, 907, 0, 0, 0, 908, 0, 0, 909, 0, 910, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0, 0,
    912, 0, 913, 0, 0, 0, 0, 0, 914, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 915, 0, 0, 916, 0, 917, 0, 0, 0, 918, 0,
    0, 0, 0, 0, 0, 0, 919, 0, 920, 0, 0, 0, 0, 0, 921, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 922, 0, 923, 0, 924,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 925, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    926, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 927, 0, 0, 0, 0, 0, 0, 0, 0, 928, 929, 0, 0, 0, 0, 0, 0, 0, 930,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 931, 0, 932, 0, 933, 0, 0, 0, 934, 0, 0, 0,
    0, 0, 935, 0, 0, 0, 936, 0, 0, 0, 937, 0, 938, 0, 0, 939, 0, 940,
};
void recomp_unit_0106_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089AC000u;
        entry_id = (entry_delta < 16328u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0106[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089AC000;
    case 2u: goto L_089AC010;
    case 3u: goto L_089AC018;
    case 4u: goto L_089AC028;
    case 5u: goto L_089AC030;
    case 6u: goto L_089AC054;
    case 7u: goto L_089AC064;
    case 8u: goto L_089AC070;
    case 9u: goto L_089AC088;
    case 10u: goto L_089AC0A8;
    case 11u: goto L_089AC0D4;
    case 12u: goto L_089AC0E0;
    case 13u: goto L_089AC0EC;
    case 14u: goto L_089AC0FC;
    case 15u: goto L_089AC108;
    case 16u: goto L_089AC118;
    case 17u: goto L_089AC120;
    case 18u: goto L_089AC130;
    case 19u: goto L_089AC144;
    case 20u: goto L_089AC154;
    case 21u: goto L_089AC164;
    case 22u: goto L_089AC16C;
    case 23u: goto L_089AC17C;
    case 24u: goto L_089AC184;
    case 25u: goto L_089AC1A8;
    case 26u: goto L_089AC1B8;
    case 27u: goto L_089AC1C4;
    case 28u: goto L_089AC1DC;
    case 29u: goto L_089AC1FC;
    case 30u: goto L_089AC228;
    case 31u: goto L_089AC234;
    case 32u: goto L_089AC240;
    case 33u: goto L_089AC250;
    case 34u: goto L_089AC25C;
    case 35u: goto L_089AC26C;
    case 36u: goto L_089AC274;
    case 37u: goto L_089AC288;
    case 38u: goto L_089AC298;
    case 39u: goto L_089AC2A8;
    case 40u: goto L_089AC2B0;
    case 41u: goto L_089AC2C0;
    case 42u: goto L_089AC2C8;
    case 43u: goto L_089AC2EC;
    case 44u: goto L_089AC2FC;
    case 45u: goto L_089AC308;
    case 46u: goto L_089AC320;
    case 47u: goto L_089AC340;
    case 48u: goto L_089AC368;
    case 49u: goto L_089AC378;
    case 50u: goto L_089AC388;
    case 51u: goto L_089AC3A4;
    case 52u: goto L_089AC3B4;
    case 53u: goto L_089AC3C0;
    case 54u: goto L_089AC3C8;
    case 55u: goto L_089AC3D8;
    case 56u: goto L_089AC3E4;
    case 57u: goto L_089AC410;
    case 58u: goto L_089AC41C;
    case 59u: goto L_089AC42C;
    case 60u: goto L_089AC438;
    case 61u: goto L_089AC448;
    case 62u: goto L_089AC4D8;
    case 63u: goto L_089AC4EC;
    case 64u: goto L_089AC56C;
    case 65u: goto L_089AC574;
    case 66u: goto L_089AC584;
    case 67u: goto L_089AC590;
    case 68u: goto L_089AC598;
    case 69u: goto L_089AC5A0;
    case 70u: goto L_089AC5E4;
    case 71u: goto L_089AC5EC;
    case 72u: goto L_089AC5FC;
    case 73u: goto L_089AC608;
    case 74u: goto L_089AC610;
    case 75u: goto L_089AC618;
    case 76u: goto L_089AC628;
    case 77u: goto L_089AC634;
    case 78u: goto L_089AC63C;
    case 79u: goto L_089AC644;
    case 80u: goto L_089AC664;
    case 81u: goto L_089AC6B4;
    case 82u: goto L_089AC6BC;
    case 83u: goto L_089AC6CC;
    case 84u: goto L_089AC6D8;
    case 85u: goto L_089AC6E0;
    case 86u: goto L_089AC6E4;
    case 87u: goto L_089AC6F0;
    case 88u: goto L_089AC6F8;
    case 89u: goto L_089AC700;
    case 90u: goto L_089AC708;
    case 91u: goto L_089AC720;
    case 92u: goto L_089AC724;
    case 93u: goto L_089AC72C;
    case 94u: goto L_089AC738;
    case 95u: goto L_089AC740;
    case 96u: goto L_089AC748;
    case 97u: goto L_089AC758;
    case 98u: goto L_089AC76C;
    case 99u: goto L_089AC778;
    case 100u: goto L_089AC798;
    case 101u: goto L_089AC7A8;
    case 102u: goto L_089AC7B0;
    case 103u: goto L_089AC7C0;
    case 104u: goto L_089AC7D0;
    case 105u: goto L_089AC7F0;
    case 106u: goto L_089AC810;
    case 107u: goto L_089AC824;
    case 108u: goto L_089AC834;
    case 109u: goto L_089AC844;
    case 110u: goto L_089AC854;
    case 111u: goto L_089AC858;
    case 112u: goto L_089AC85C;
    case 113u: goto L_089AC864;
    case 114u: goto L_089AC86C;
    case 115u: goto L_089AC878;
    case 116u: goto L_089AC880;
    case 117u: goto L_089AC888;
    case 118u: goto L_089AC890;
    case 119u: goto L_089AC89C;
    case 120u: goto L_089AC8A4;
    case 121u: goto L_089AC8AC;
    case 122u: goto L_089AC8B4;
    case 123u: goto L_089AC8C4;
    case 124u: goto L_089AC8CC;
    case 125u: goto L_089AC8D8;
    case 126u: goto L_089AC8E0;
    case 127u: goto L_089AC8EC;
    case 128u: goto L_089AC8F4;
    case 129u: goto L_089AC8FC;
    case 130u: goto L_089AC908;
    case 131u: goto L_089AC910;
    case 132u: goto L_089AC918;
    case 133u: goto L_089AC924;
    case 134u: goto L_089AC92C;
    case 135u: goto L_089AC934;
    case 136u: goto L_089AC948;
    case 137u: goto L_089AC954;
    case 138u: goto L_089AC95C;
    case 139u: goto L_089AC968;
    case 140u: goto L_089AC970;
    case 141u: goto L_089AC974;
    case 142u: goto L_089AC97C;
    case 143u: goto L_089AC990;
    case 144u: goto L_089AC9A8;
    case 145u: goto L_089AC9BC;
    case 146u: goto L_089AC9C0;
    case 147u: goto L_089AC9D4;
    case 148u: goto L_089AC9D8;
    case 149u: goto L_089AC9E0;
    case 150u: goto L_089AC9F0;
    case 151u: goto L_089AC9F8;
    case 152u: goto L_089ACA00;
    case 153u: goto L_089ACA08;
    case 154u: goto L_089ACA10;
    case 155u: goto L_089ACA1C;
    case 156u: goto L_089ACA2C;
    case 157u: goto L_089ACA34;
    case 158u: goto L_089ACA3C;
    case 159u: goto L_089ACA44;
    case 160u: goto L_089ACA60;
    case 161u: goto L_089ACA80;
    case 162u: goto L_089ACA88;
    case 163u: goto L_089ACA90;
    case 164u: goto L_089ACAA8;
    case 165u: goto L_089ACAD0;
    case 166u: goto L_089ACAD4;
    case 167u: goto L_089ACADC;
    case 168u: goto L_089ACAF0;
    case 169u: goto L_089ACAF8;
    case 170u: goto L_089ACB00;
    case 171u: goto L_089ACB10;
    case 172u: goto L_089ACB20;
    case 173u: goto L_089ACB30;
    case 174u: goto L_089ACB40;
    case 175u: goto L_089ACB44;
    case 176u: goto L_089ACB48;
    case 177u: goto L_089ACB50;
    case 178u: goto L_089ACB60;
    case 179u: goto L_089ACB6C;
    case 180u: goto L_089ACB74;
    case 181u: goto L_089ACB7C;
    case 182u: goto L_089ACB84;
    case 183u: goto L_089ACB8C;
    case 184u: goto L_089ACB94;
    case 185u: goto L_089ACB9C;
    case 186u: goto L_089ACBA4;
    case 187u: goto L_089ACBB4;
    case 188u: goto L_089ACBC0;
    case 189u: goto L_089ACBC8;
    case 190u: goto L_089ACBD0;
    case 191u: goto L_089ACBD8;
    case 192u: goto L_089ACBE0;
    case 193u: goto L_089ACBE8;
    case 194u: goto L_089ACBF4;
    case 195u: goto L_089ACBFC;
    case 196u: goto L_089ACC0C;
    case 197u: goto L_089ACC1C;
    case 198u: goto L_089ACC24;
    case 199u: goto L_089ACC34;
    case 200u: goto L_089ACC38;
    case 201u: goto L_089ACC40;
    case 202u: goto L_089ACC4C;
    case 203u: goto L_089ACC54;
    case 204u: goto L_089ACC64;
    case 205u: goto L_089ACC74;
    case 206u: goto L_089ACC7C;
    case 207u: goto L_089ACC8C;
    case 208u: goto L_089ACC90;
    case 209u: goto L_089ACC98;
    case 210u: goto L_089ACCA4;
    case 211u: goto L_089ACCB4;
    case 212u: goto L_089ACCC4;
    case 213u: goto L_089ACCCC;
    case 214u: goto L_089ACCD4;
    case 215u: goto L_089ACCDC;
    case 216u: goto L_089ACCE8;
    case 217u: goto L_089ACCF0;
    case 218u: goto L_089ACD00;
    case 219u: goto L_089ACD10;
    case 220u: goto L_089ACD18;
    case 221u: goto L_089ACD28;
    case 222u: goto L_089ACD2C;
    case 223u: goto L_089ACD34;
    case 224u: goto L_089ACD3C;
    case 225u: goto L_089ACD44;
    case 226u: goto L_089ACD4C;
    case 227u: goto L_089ACD5C;
    case 228u: goto L_089ACD6C;
    case 229u: goto L_089ACD78;
    case 230u: goto L_089ACD80;
    case 231u: goto L_089ACD88;
    case 232u: goto L_089ACD90;
    case 233u: goto L_089ACD98;
    case 234u: goto L_089ACDA0;
    case 235u: goto L_089ACDA8;
    case 236u: goto L_089ACDB0;
    case 237u: goto L_089ACDB8;
    case 238u: goto L_089ACDD0;
    case 239u: goto L_089ACDF8;
    case 240u: goto L_089ACDFC;
    case 241u: goto L_089ACE04;
    case 242u: goto L_089ACE0C;
    case 243u: goto L_089ACE14;
    case 244u: goto L_089ACE24;
    case 245u: goto L_089ACE38;
    case 246u: goto L_089ACE44;
    case 247u: goto L_089ACE4C;
    case 248u: goto L_089ACE50;
    case 249u: goto L_089ACE5C;
    case 250u: goto L_089ACE64;
    case 251u: goto L_089ACE70;
    case 252u: goto L_089ACE78;
    case 253u: goto L_089ACE80;
    case 254u: goto L_089ACE88;
    case 255u: goto L_089ACE98;
    case 256u: goto L_089ACEA0;
    case 257u: goto L_089ACEB0;
    case 258u: goto L_089ACEBC;
    case 259u: goto L_089ACEC4;
    case 260u: goto L_089ACECC;
    case 261u: goto L_089ACEE4;
    case 262u: goto L_089ACEEC;
    case 263u: goto L_089ACF30;
    case 264u: goto L_089ACF38;
    case 265u: goto L_089ACF4C;
    case 266u: goto L_089ACF54;
    case 267u: goto L_089ACF5C;
    case 268u: goto L_089ACF68;
    case 269u: goto L_089ACF70;
    case 270u: goto L_089ACF7C;
    case 271u: goto L_089ACF88;
    case 272u: goto L_089ACF94;
    case 273u: goto L_089ACFA0;
    case 274u: goto L_089ACFA8;
    case 275u: goto L_089ACFB4;
    case 276u: goto L_089ACFC0;
    case 277u: goto L_089ACFCC;
    case 278u: goto L_089ACFE8;
    case 279u: goto L_089ACFF8;
    case 280u: goto L_089AD008;
    case 281u: goto L_089AD01C;
    case 282u: goto L_089AD024;
    case 283u: goto L_089AD02C;
    case 284u: goto L_089AD034;
    case 285u: goto L_089AD04C;
    case 286u: goto L_089AD054;
    case 287u: goto L_089AD060;
    case 288u: goto L_089AD068;
    case 289u: goto L_089AD074;
    case 290u: goto L_089AD080;
    case 291u: goto L_089AD09C;
    case 292u: goto L_089AD0B0;
    case 293u: goto L_089AD0BC;
    case 294u: goto L_089AD0C4;
    case 295u: goto L_089AD0E8;
    case 296u: goto L_089AD0F8;
    case 297u: goto L_089AD104;
    case 298u: goto L_089AD114;
    case 299u: goto L_089AD120;
    case 300u: goto L_089AD128;
    case 301u: goto L_089AD13C;
    case 302u: goto L_089AD144;
    case 303u: goto L_089AD14C;
    case 304u: goto L_089AD154;
    case 305u: goto L_089AD15C;
    case 306u: goto L_089AD164;
    case 307u: goto L_089AD170;
    case 308u: goto L_089AD178;
    case 309u: goto L_089AD184;
    case 310u: goto L_089AD18C;
    case 311u: goto L_089AD1A0;
    case 312u: goto L_089AD1B0;
    case 313u: goto L_089AD1B8;
    case 314u: goto L_089AD1CC;
    case 315u: goto L_089AD1D4;
    case 316u: goto L_089AD1E4;
    case 317u: goto L_089AD1F4;
    case 318u: goto L_089AD1FC;
    case 319u: goto L_089AD210;
    case 320u: goto L_089AD218;
    case 321u: goto L_089AD220;
    case 322u: goto L_089AD234;
    case 323u: goto L_089AD238;
    case 324u: goto L_089AD240;
    case 325u: goto L_089AD264;
    case 326u: goto L_089AD274;
    case 327u: goto L_089AD27C;
    case 328u: goto L_089AD288;
    case 329u: goto L_089AD290;
    case 330u: goto L_089AD298;
    case 331u: goto L_089AD2AC;
    case 332u: goto L_089AD2BC;
    case 333u: goto L_089AD2F0;
    case 334u: goto L_089AD32C;
    case 335u: goto L_089AD334;
    case 336u: goto L_089AD33C;
    case 337u: goto L_089AD344;
    case 338u: goto L_089AD358;
    case 339u: goto L_089AD360;
    case 340u: goto L_089AD36C;
    case 341u: goto L_089AD378;
    case 342u: goto L_089AD394;
    case 343u: goto L_089AD3A8;
    case 344u: goto L_089AD3BC;
    case 345u: goto L_089AD3C8;
    case 346u: goto L_089AD3D8;
    case 347u: goto L_089AD3E4;
    case 348u: goto L_089AD3F8;
    case 349u: goto L_089AD408;
    case 350u: goto L_089AD418;
    case 351u: goto L_089AD428;
    case 352u: goto L_089AD42C;
    case 353u: goto L_089AD430;
    case 354u: goto L_089AD438;
    case 355u: goto L_089AD450;
    case 356u: goto L_089AD458;
    case 357u: goto L_089AD464;
    case 358u: goto L_089AD46C;
    case 359u: goto L_089AD478;
    case 360u: goto L_089AD480;
    case 361u: goto L_089AD49C;
    case 362u: goto L_089AD4A8;
    case 363u: goto L_089AD4C0;
    case 364u: goto L_089AD4D0;
    case 365u: goto L_089AD4E8;
    case 366u: goto L_089AD4F8;
    case 367u: goto L_089AD50C;
    case 368u: goto L_089AD518;
    case 369u: goto L_089AD52C;
    case 370u: goto L_089AD534;
    case 371u: goto L_089AD548;
    case 372u: goto L_089AD550;
    case 373u: goto L_089AD55C;
    case 374u: goto L_089AD564;
    case 375u: goto L_089AD570;
    case 376u: goto L_089AD58C;
    case 377u: goto L_089AD598;
    case 378u: goto L_089AD5B0;
    case 379u: goto L_089AD5B8;
    case 380u: goto L_089AD5C0;
    case 381u: goto L_089AD5E4;
    case 382u: goto L_089AD5F0;
    case 383u: goto L_089AD5F8;
    case 384u: goto L_089AD604;
    case 385u: goto L_089AD60C;
    case 386u: goto L_089AD624;
    case 387u: goto L_089AD630;
    case 388u: goto L_089AD638;
    case 389u: goto L_089AD64C;
    case 390u: goto L_089AD658;
    case 391u: goto L_089AD660;
    case 392u: goto L_089AD66C;
    case 393u: goto L_089AD67C;
    case 394u: goto L_089AD690;
    case 395u: goto L_089AD728;
    case 396u: goto L_089AD738;
    case 397u: goto L_089AD74C;
    case 398u: goto L_089AD754;
    case 399u: goto L_089AD75C;
    case 400u: goto L_089AD764;
    case 401u: goto L_089AD774;
    case 402u: goto L_089AD784;
    case 403u: goto L_089AD794;
    case 404u: goto L_089AD7B0;
    case 405u: goto L_089AD7B8;
    case 406u: goto L_089AD7C0;
    case 407u: goto L_089AD7D4;
    case 408u: goto L_089AD800;
    case 409u: goto L_089AD828;
    case 410u: goto L_089AD854;
    case 411u: goto L_089AD860;
    case 412u: goto L_089AD868;
    case 413u: goto L_089AD870;
    case 414u: goto L_089AD8B8;
    case 415u: goto L_089AD8E8;
    case 416u: goto L_089AD914;
    case 417u: goto L_089AD920;
    case 418u: goto L_089AD930;
    case 419u: goto L_089AD940;
    case 420u: goto L_089AD954;
    case 421u: goto L_089AD97C;
    case 422u: goto L_089ADA78;
    case 423u: goto L_089ADA80;
    case 424u: goto L_089ADA88;
    case 425u: goto L_089ADA94;
    case 426u: goto L_089ADA9C;
    case 427u: goto L_089ADAA8;
    case 428u: goto L_089ADAB0;
    case 429u: goto L_089ADAC4;
    case 430u: goto L_089ADAD8;
    case 431u: goto L_089ADB04;
    case 432u: goto L_089ADB60;
    case 433u: goto L_089ADB68;
    case 434u: goto L_089ADB7C;
    case 435u: goto L_089ADBA0;
    case 436u: goto L_089ADBAC;
    case 437u: goto L_089ADBC8;
    case 438u: goto L_089ADBF8;
    case 439u: goto L_089ADC14;
    case 440u: goto L_089ADC20;
    case 441u: goto L_089ADC44;
    case 442u: goto L_089ADC50;
    case 443u: goto L_089ADC5C;
    case 444u: goto L_089ADC68;
    case 445u: goto L_089ADC74;
    case 446u: goto L_089ADCAC;
    case 447u: goto L_089ADCB8;
    case 448u: goto L_089ADD14;
    case 449u: goto L_089ADD1C;
    case 450u: goto L_089ADD30;
    case 451u: goto L_089ADD44;
    case 452u: goto L_089ADD50;
    case 453u: goto L_089ADD58;
    case 454u: goto L_089ADD60;
    case 455u: goto L_089ADD64;
    case 456u: goto L_089ADD70;
    case 457u: goto L_089ADD7C;
    case 458u: goto L_089ADD88;
    case 459u: goto L_089ADD94;
    case 460u: goto L_089ADDA0;
    case 461u: goto L_089ADDB4;
    case 462u: goto L_089ADDC4;
    case 463u: goto L_089ADDD0;
    case 464u: goto L_089ADDF4;
    case 465u: goto L_089ADDFC;
    case 466u: goto L_089ADE08;
    case 467u: goto L_089ADE10;
    case 468u: goto L_089ADE28;
    case 469u: goto L_089ADE98;
    case 470u: goto L_089ADEAC;
    case 471u: goto L_089ADEB4;
    case 472u: goto L_089ADEC0;
    case 473u: goto L_089ADED0;
    case 474u: goto L_089ADEDC;
    case 475u: goto L_089ADEEC;
    case 476u: goto L_089ADEFC;
    case 477u: goto L_089ADF20;
    case 478u: goto L_089ADF40;
    case 479u: goto L_089ADF6C;
    case 480u: goto L_089ADF78;
    case 481u: goto L_089ADF80;
    case 482u: goto L_089ADFAC;
    case 483u: goto L_089ADFB8;
    case 484u: goto L_089ADFD8;
    case 485u: goto L_089ADFEC;
    case 486u: goto L_089ADFF8;
    case 487u: goto L_089AE000;
    case 488u: goto L_089AE014;
    case 489u: goto L_089AE01C;
    case 490u: goto L_089AE02C;
    case 491u: goto L_089AE03C;
    case 492u: goto L_089AE058;
    case 493u: goto L_089AE060;
    case 494u: goto L_089AE068;
    case 495u: goto L_089AE074;
    case 496u: goto L_089AE084;
    case 497u: goto L_089AE094;
    case 498u: goto L_089AE0A4;
    case 499u: goto L_089AE0B0;
    case 500u: goto L_089AE0BC;
    case 501u: goto L_089AE0CC;
    case 502u: goto L_089AE0D8;
    case 503u: goto L_089AE0F0;
    case 504u: goto L_089AE100;
    case 505u: goto L_089AE10C;
    case 506u: goto L_089AE120;
    case 507u: goto L_089AE128;
    case 508u: goto L_089AE138;
    case 509u: goto L_089AE148;
    case 510u: goto L_089AE150;
    case 511u: goto L_089AE158;
    case 512u: goto L_089AE160;
    case 513u: goto L_089AE170;
    case 514u: goto L_089AE17C;
    case 515u: goto L_089AE184;
    case 516u: goto L_089AE188;
    case 517u: goto L_089AE194;
    case 518u: goto L_089AE1A0;
    case 519u: goto L_089AE1A8;
    case 520u: goto L_089AE1B0;
    case 521u: goto L_089AE1CC;
    case 522u: goto L_089AE1D8;
    case 523u: goto L_089AE1E4;
    case 524u: goto L_089AE1F4;
    case 525u: goto L_089AE204;
    case 526u: goto L_089AE220;
    case 527u: goto L_089AE23C;
    case 528u: goto L_089AE24C;
    case 529u: goto L_089AE258;
    case 530u: goto L_089AE280;
    case 531u: goto L_089AE288;
    case 532u: goto L_089AE290;
    case 533u: goto L_089AE2A0;
    case 534u: goto L_089AE2A8;
    case 535u: goto L_089AE2B8;
    case 536u: goto L_089AE2C0;
    case 537u: goto L_089AE2CC;
    case 538u: goto L_089AE2DC;
    case 539u: goto L_089AE2EC;
    case 540u: goto L_089AE2FC;
    case 541u: goto L_089AE308;
    case 542u: goto L_089AE318;
    case 543u: goto L_089AE328;
    case 544u: goto L_089AE360;
    case 545u: goto L_089AE36C;
    case 546u: goto L_089AE37C;
    case 547u: goto L_089AE388;
    case 548u: goto L_089AE3AC;
    case 549u: goto L_089AE3B8;
    case 550u: goto L_089AE3C0;
    case 551u: goto L_089AE3C8;
    case 552u: goto L_089AE3D0;
    case 553u: goto L_089AE3D8;
    case 554u: goto L_089AE3E0;
    case 555u: goto L_089AE3EC;
    case 556u: goto L_089AE3F4;
    case 557u: goto L_089AE434;
    case 558u: goto L_089AE448;
    case 559u: goto L_089AE450;
    case 560u: goto L_089AE458;
    case 561u: goto L_089AE45C;
    case 562u: goto L_089AE464;
    case 563u: goto L_089AE47C;
    case 564u: goto L_089AE4C0;
    case 565u: goto L_089AE4CC;
    case 566u: goto L_089AE4D4;
    case 567u: goto L_089AE4F4;
    case 568u: goto L_089AE52C;
    case 569u: goto L_089AE534;
    case 570u: goto L_089AE560;
    case 571u: goto L_089AE56C;
    case 572u: goto L_089AE578;
    case 573u: goto L_089AE584;
    case 574u: goto L_089AE594;
    case 575u: goto L_089AE5A0;
    case 576u: goto L_089AE5A8;
    case 577u: goto L_089AE5B0;
    case 578u: goto L_089AE5C8;
    case 579u: goto L_089AE5D0;
    case 580u: goto L_089AE5D8;
    case 581u: goto L_089AE5E0;
    case 582u: goto L_089AE5E8;
    case 583u: goto L_089AE5F4;
    case 584u: goto L_089AE5FC;
    case 585u: goto L_089AE604;
    case 586u: goto L_089AE60C;
    case 587u: goto L_089AE61C;
    case 588u: goto L_089AE628;
    case 589u: goto L_089AE630;
    case 590u: goto L_089AE638;
    case 591u: goto L_089AE64C;
    case 592u: goto L_089AE65C;
    case 593u: goto L_089AE668;
    case 594u: goto L_089AE674;
    case 595u: goto L_089AE684;
    case 596u: goto L_089AE694;
    case 597u: goto L_089AE6A4;
    case 598u: goto L_089AE6B0;
    case 599u: goto L_089AE6B8;
    case 600u: goto L_089AE6C4;
    case 601u: goto L_089AE6D0;
    case 602u: goto L_089AE6DC;
    case 603u: goto L_089AE72C;
    case 604u: goto L_089AE740;
    case 605u: goto L_089AE74C;
    case 606u: goto L_089AE758;
    case 607u: goto L_089AE760;
    case 608u: goto L_089AE770;
    case 609u: goto L_089AE780;
    case 610u: goto L_089AE7A0;
    case 611u: goto L_089AE7BC;
    case 612u: goto L_089AE7C4;
    case 613u: goto L_089AE7CC;
    case 614u: goto L_089AE7DC;
    case 615u: goto L_089AE7F0;
    case 616u: goto L_089AE7F8;
    case 617u: goto L_089AE818;
    case 618u: goto L_089AE820;
    case 619u: goto L_089AE830;
    case 620u: goto L_089AE83C;
    case 621u: goto L_089AE844;
    case 622u: goto L_089AE84C;
    case 623u: goto L_089AE858;
    case 624u: goto L_089AE860;
    case 625u: goto L_089AE868;
    case 626u: goto L_089AE888;
    case 627u: goto L_089AE894;
    case 628u: goto L_089AE89C;
    case 629u: goto L_089AE8B8;
    case 630u: goto L_089AE8C4;
    case 631u: goto L_089AE8CC;
    case 632u: goto L_089AE8DC;
    case 633u: goto L_089AE8E8;
    case 634u: goto L_089AE904;
    case 635u: goto L_089AE924;
    case 636u: goto L_089AE92C;
    case 637u: goto L_089AE94C;
    case 638u: goto L_089AE958;
    case 639u: goto L_089AE968;
    case 640u: goto L_089AE978;
    case 641u: goto L_089AE988;
    case 642u: goto L_089AE998;
    case 643u: goto L_089AE9B4;
    case 644u: goto L_089AE9C8;
    case 645u: goto L_089AE9D4;
    case 646u: goto L_089AE9DC;
    case 647u: goto L_089AE9E8;
    case 648u: goto L_089AEA00;
    case 649u: goto L_089AEA0C;
    case 650u: goto L_089AEA18;
    case 651u: goto L_089AEA24;
    case 652u: goto L_089AEA2C;
    case 653u: goto L_089AEA3C;
    case 654u: goto L_089AEA50;
    case 655u: goto L_089AEA58;
    case 656u: goto L_089AEA64;
    case 657u: goto L_089AEA6C;
    case 658u: goto L_089AEA80;
    case 659u: goto L_089AEA8C;
    case 660u: goto L_089AEA9C;
    case 661u: goto L_089AEAA8;
    case 662u: goto L_089AEAB0;
    case 663u: goto L_089AEABC;
    case 664u: goto L_089AEAD4;
    case 665u: goto L_089AEB60;
    case 666u: goto L_089AEB70;
    case 667u: goto L_089AEB78;
    case 668u: goto L_089AEB84;
    case 669u: goto L_089AEB98;
    case 670u: goto L_089AEBA4;
    case 671u: goto L_089AEBB4;
    case 672u: goto L_089AEBC4;
    case 673u: goto L_089AEBD0;
    case 674u: goto L_089AEBDC;
    case 675u: goto L_089AEBE4;
    case 676u: goto L_089AEBF0;
    case 677u: goto L_089AEBF8;
    case 678u: goto L_089AEC2C;
    case 679u: goto L_089AEC48;
    case 680u: goto L_089AEC54;
    case 681u: goto L_089AEC64;
    case 682u: goto L_089AEC98;
    case 683u: goto L_089AECA0;
    case 684u: goto L_089AECAC;
    case 685u: goto L_089AECCC;
    case 686u: goto L_089AECDC;
    case 687u: goto L_089AECF4;
    case 688u: goto L_089AED08;
    case 689u: goto L_089AED10;
    case 690u: goto L_089AED24;
    case 691u: goto L_089AED30;
    case 692u: goto L_089AED40;
    case 693u: goto L_089AED4C;
    case 694u: goto L_089AED6C;
    case 695u: goto L_089AED80;
    case 696u: goto L_089AED8C;
    case 697u: goto L_089AED94;
    case 698u: goto L_089AEDA8;
    case 699u: goto L_089AEDB4;
    case 700u: goto L_089AEDB8;
    case 701u: goto L_089AEDD4;
    case 702u: goto L_089AEDDC;
    case 703u: goto L_089AEDE4;
    case 704u: goto L_089AEDF0;
    case 705u: goto L_089AEDFC;
    case 706u: goto L_089AEE0C;
    case 707u: goto L_089AEE18;
    case 708u: goto L_089AEE20;
    case 709u: goto L_089AEE30;
    case 710u: goto L_089AEE48;
    case 711u: goto L_089AEE5C;
    case 712u: goto L_089AEE64;
    case 713u: goto L_089AEE78;
    case 714u: goto L_089AEEB0;
    case 715u: goto L_089AEEE8;
    case 716u: goto L_089AEEF0;
    case 717u: goto L_089AEF10;
    case 718u: goto L_089AEF1C;
    case 719u: goto L_089AEF28;
    case 720u: goto L_089AEF48;
    case 721u: goto L_089AEF4C;
    case 722u: goto L_089AEF58;
    case 723u: goto L_089AEF60;
    case 724u: goto L_089AEF7C;
    case 725u: goto L_089AEF98;
    case 726u: goto L_089AEFA0;
    case 727u: goto L_089AEFBC;
    case 728u: goto L_089AEFC8;
    case 729u: goto L_089AEFD0;
    case 730u: goto L_089AEFD8;
    case 731u: goto L_089AEFEC;
    case 732u: goto L_089AEFF4;
    case 733u: goto L_089AF004;
    case 734u: goto L_089AF00C;
    case 735u: goto L_089AF020;
    case 736u: goto L_089AF04C;
    case 737u: goto L_089AF058;
    case 738u: goto L_089AF060;
    case 739u: goto L_089AF06C;
    case 740u: goto L_089AF074;
    case 741u: goto L_089AF07C;
    case 742u: goto L_089AF098;
    case 743u: goto L_089AF0A4;
    case 744u: goto L_089AF0BC;
    case 745u: goto L_089AF0D4;
    case 746u: goto L_089AF0E0;
    case 747u: goto L_089AF0F0;
    case 748u: goto L_089AF100;
    case 749u: goto L_089AF114;
    case 750u: goto L_089AF124;
    case 751u: goto L_089AF12C;
    case 752u: goto L_089AF134;
    case 753u: goto L_089AF13C;
    case 754u: goto L_089AF14C;
    case 755u: goto L_089AF154;
    case 756u: goto L_089AF164;
    case 757u: goto L_089AF16C;
    case 758u: goto L_089AF18C;
    case 759u: goto L_089AF19C;
    case 760u: goto L_089AF1A4;
    case 761u: goto L_089AF1B4;
    case 762u: goto L_089AF1BC;
    case 763u: goto L_089AF1CC;
    case 764u: goto L_089AF1D4;
    case 765u: goto L_089AF1F4;
    case 766u: goto L_089AF204;
    case 767u: goto L_089AF214;
    case 768u: goto L_089AF21C;
    case 769u: goto L_089AF224;
    case 770u: goto L_089AF22C;
    case 771u: goto L_089AF24C;
    case 772u: goto L_089AF254;
    case 773u: goto L_089AF260;
    case 774u: goto L_089AF278;
    case 775u: goto L_089AF280;
    case 776u: goto L_089AF290;
    case 777u: goto L_089AF2AC;
    case 778u: goto L_089AF2B4;
    case 779u: goto L_089AF2BC;
    case 780u: goto L_089AF2CC;
    case 781u: goto L_089AF2D4;
    case 782u: goto L_089AF2E4;
    case 783u: goto L_089AF300;
    case 784u: goto L_089AF330;
    case 785u: goto L_089AF364;
    case 786u: goto L_089AF370;
    case 787u: goto L_089AF380;
    case 788u: goto L_089AF390;
    case 789u: goto L_089AF3B4;
    case 790u: goto L_089AF3C4;
    case 791u: goto L_089AF408;
    case 792u: goto L_089AF41C;
    case 793u: goto L_089AF424;
    case 794u: goto L_089AF428;
    case 795u: goto L_089AF430;
    case 796u: goto L_089AF434;
    case 797u: goto L_089AF450;
    case 798u: goto L_089AF464;
    case 799u: goto L_089AF46C;
    case 800u: goto L_089AF474;
    case 801u: goto L_089AF478;
    case 802u: goto L_089AF498;
    case 803u: goto L_089AF4AC;
    case 804u: goto L_089AF4C8;
    case 805u: goto L_089AF4D8;
    case 806u: goto L_089AF4F8;
    case 807u: goto L_089AF504;
    case 808u: goto L_089AF50C;
    case 809u: goto L_089AF514;
    case 810u: goto L_089AF530;
    case 811u: goto L_089AF53C;
    case 812u: goto L_089AF544;
    case 813u: goto L_089AF54C;
    case 814u: goto L_089AF55C;
    case 815u: goto L_089AF56C;
    case 816u: goto L_089AF580;
    case 817u: goto L_089AF58C;
    case 818u: goto L_089AF590;
    case 819u: goto L_089AF59C;
    case 820u: goto L_089AF5BC;
    case 821u: goto L_089AF5CC;
    case 822u: goto L_089AF5D4;
    case 823u: goto L_089AF5E4;
    case 824u: goto L_089AF5F0;
    case 825u: goto L_089AF600;
    case 826u: goto L_089AF610;
    case 827u: goto L_089AF620;
    case 828u: goto L_089AF624;
    case 829u: goto L_089AF638;
    case 830u: goto L_089AF658;
    case 831u: goto L_089AF6C8;
    case 832u: goto L_089AF6E8;
    case 833u: goto L_089AF6F0;
    case 834u: goto L_089AF70C;
    case 835u: goto L_089AF72C;
    case 836u: goto L_089AF734;
    case 837u: goto L_089AF750;
    case 838u: goto L_089AF770;
    case 839u: goto L_089AF778;
    case 840u: goto L_089AF784;
    case 841u: goto L_089AF78C;
    case 842u: goto L_089AF79C;
    case 843u: goto L_089AF7AC;
    case 844u: goto L_089AF7BC;
    case 845u: goto L_089AF7C4;
    case 846u: goto L_089AF7D0;
    case 847u: goto L_089AF7D8;
    case 848u: goto L_089AF7EC;
    case 849u: goto L_089AF7FC;
    case 850u: goto L_089AF80C;
    case 851u: goto L_089AF810;
    case 852u: goto L_089AF82C;
    case 853u: goto L_089AF834;
    case 854u: goto L_089AF850;
    case 855u: goto L_089AF860;
    case 856u: goto L_089AF880;
    case 857u: goto L_089AF888;
    case 858u: goto L_089AF8A4;
    case 859u: goto L_089AF8C0;
    case 860u: goto L_089AF8E0;
    case 861u: goto L_089AF8E8;
    case 862u: goto L_089AF8FC;
    case 863u: goto L_089AF91C;
    case 864u: goto L_089AF95C;
    case 865u: goto L_089AF96C;
    case 866u: goto L_089AF97C;
    case 867u: goto L_089AF984;
    case 868u: goto L_089AF98C;
    case 869u: goto L_089AF994;
    case 870u: goto L_089AF9B4;
    case 871u: goto L_089AF9C4;
    case 872u: goto L_089AF9CC;
    case 873u: goto L_089AF9E0;
    case 874u: goto L_089AF9E8;
    case 875u: goto L_089AF9F0;
    case 876u: goto L_089AFA00;
    case 877u: goto L_089AFA20;
    case 878u: goto L_089AFA28;
    case 879u: goto L_089AFA48;
    case 880u: goto L_089AFA58;
    case 881u: goto L_089AFA60;
    case 882u: goto L_089AFA90;
    case 883u: goto L_089AFA9C;
    case 884u: goto L_089AFAA8;
    case 885u: goto L_089AFAB0;
    case 886u: goto L_089AFAC0;
    case 887u: goto L_089AFAE0;
    case 888u: goto L_089AFAE8;
    case 889u: goto L_089AFB00;
    case 890u: goto L_089AFB34;
    case 891u: goto L_089AFB40;
    case 892u: goto L_089AFB48;
    case 893u: goto L_089AFB58;
    case 894u: goto L_089AFB78;
    case 895u: goto L_089AFB80;
    case 896u: goto L_089AFB98;
    case 897u: goto L_089AFBD4;
    case 898u: goto L_089AFBE8;
    case 899u: goto L_089AFBF0;
    case 900u: goto L_089AFBF8;
    case 901u: goto L_089AFC08;
    case 902u: goto L_089AFC28;
    case 903u: goto L_089AFC30;
    case 904u: goto L_089AFC4C;
    case 905u: goto L_089AFC64;
    case 906u: goto L_089AFC98;
    case 907u: goto L_089AFCAC;
    case 908u: goto L_089AFCBC;
    case 909u: goto L_089AFCC8;
    case 910u: goto L_089AFCD0;
    case 911u: goto L_089AFCE0;
    case 912u: goto L_089AFD00;
    case 913u: goto L_089AFD08;
    case 914u: goto L_089AFD20;
    case 915u: goto L_089AFD54;
    case 916u: goto L_089AFD60;
    case 917u: goto L_089AFD68;
    case 918u: goto L_089AFD78;
    case 919u: goto L_089AFD98;
    case 920u: goto L_089AFDA0;
    case 921u: goto L_089AFDB8;
    case 922u: goto L_089AFDEC;
    case 923u: goto L_089AFDF4;
    case 924u: goto L_089AFDFC;
    case 925u: goto L_089AFE58;
    case 926u: goto L_089AFE80;
    case 927u: goto L_089AFEB4;
    case 928u: goto L_089AFED8;
    case 929u: goto L_089AFEDC;
    case 930u: goto L_089AFEFC;
    case 931u: goto L_089AFF50;
    case 932u: goto L_089AFF58;
    case 933u: goto L_089AFF60;
    case 934u: goto L_089AFF70;
    case 935u: goto L_089AFF88;
    case 936u: goto L_089AFF98;
    case 937u: goto L_089AFFA8;
    case 938u: goto L_089AFFB0;
    case 939u: goto L_089AFFBC;
    case 940u: goto L_089AFFC4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089AC000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
      if (branch_taken) {
          goto L_089AC018;
      }
      goto L_089AC010;
    }
L_089AC010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089AC030;
      }
      goto L_089AC018;
    }
L_089AC018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(160));
        goto L_089AC030;
    }
    goto L_089AC028;
L_089AC028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089AC030;
      }
      goto L_089AC030;
    }
L_089AC030:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_089AC070;
      }
      goto L_089AC054;
    }
L_089AC054:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(417));
    ctx.gpr[31] = (0x089AC064u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089AC064u) goto L_089AC064;
    return;
L_089AC064:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(417)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089AC070;
L_089AC070:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AC088u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 76u, 0x089A8A60u>(ctx, &aot_mem) && ctx.pc == 0x089AC088u) goto L_089AC088;
    return;
L_089AC088:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089AC0A8u);
    ctx.gpr[6] = (0u | 71u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC0A8u) goto L_089AC0A8;
    return;
L_089AC0A8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089AC0D4u);
    ctx.gpr[6] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC0D4u) goto L_089AC0D4;
    return;
L_089AC0D4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AC0E0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x089AC0E0u) goto L_089AC0E0;
    return;
L_089AC0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089AC108;
      }
      goto L_089AC0EC;
    }
L_089AC0EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[31] = (0x089AC0FCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089AC0FCu) goto L_089AC0FC;
    return;
L_089AC0FC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089AC108;
L_089AC108:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AC118u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x089AC118u) goto L_089AC118;
    return;
L_089AC118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC448;
      }
      goto L_089AC120;
    }
L_089AC120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(380)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AC274;
      }
      goto L_089AC130;
    }
L_089AC130:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089AC154;
      }
      goto L_089AC144;
    }
L_089AC144:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089AC154;
L_089AC154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
      if (branch_taken) {
          goto L_089AC16C;
      }
      goto L_089AC164;
    }
L_089AC164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089AC184;
      }
      goto L_089AC16C;
    }
L_089AC16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(160));
        goto L_089AC184;
    }
    goto L_089AC17C;
L_089AC17C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089AC184;
      }
      goto L_089AC184;
    }
L_089AC184:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
      if (branch_taken) {
          goto L_089AC1C4;
      }
      goto L_089AC1A8;
    }
L_089AC1A8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(449));
    ctx.gpr[31] = (0x089AC1B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089AC1B8u) goto L_089AC1B8;
    return;
L_089AC1B8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(449)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089AC1C4;
L_089AC1C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AC1DCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 76u, 0x089A8A60u>(ctx, &aot_mem) && ctx.pc == 0x089AC1DCu) goto L_089AC1DC;
    return;
L_089AC1DC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089AC1FCu);
    ctx.gpr[6] = (0u | 71u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC1FCu) goto L_089AC1FC;
    return;
L_089AC1FC:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089AC228u);
    ctx.gpr[6] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC228u) goto L_089AC228;
    return;
L_089AC228:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AC234u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x089AC234u) goto L_089AC234;
    return;
L_089AC234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089AC25C;
      }
      goto L_089AC240;
    }
L_089AC240:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[31] = (0x089AC250u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089AC250u) goto L_089AC250;
    return;
L_089AC250:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089AC25C;
L_089AC25C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AC26Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x089AC26Cu) goto L_089AC26C;
    return;
L_089AC26C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC448;
      }
      goto L_089AC274;
    }
L_089AC274:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089AC298;
      }
      goto L_089AC288;
    }
L_089AC288:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089AC298;
L_089AC298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
      if (branch_taken) {
          goto L_089AC2B0;
      }
      goto L_089AC2A8;
    }
L_089AC2A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089AC2C8;
      }
      goto L_089AC2B0;
    }
L_089AC2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(160));
        goto L_089AC2C8;
    }
    goto L_089AC2C0;
L_089AC2C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089AC2C8;
      }
      goto L_089AC2C8;
    }
L_089AC2C8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_089AC308;
      }
      goto L_089AC2EC;
    }
L_089AC2EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(481));
    ctx.gpr[31] = (0x089AC2FCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089AC2FCu) goto L_089AC2FC;
    return;
L_089AC2FC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(481)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089AC308;
L_089AC308:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AC320u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 76u, 0x089A8A60u>(ctx, &aot_mem) && ctx.pc == 0x089AC320u) goto L_089AC320;
    return;
L_089AC320:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089AC340u);
    ctx.gpr[6] = (0u | 71u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC340u) goto L_089AC340;
    return;
L_089AC340:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_089AC388;
    }
    goto L_089AC368;
L_089AC368:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x089AC378u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089AC378u) goto L_089AC378;
    return;
L_089AC378:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_089AC388;
L_089AC388:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 3u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC3C8;
      }
      goto L_089AC3A4;
    }
L_089AC3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089AC3B4u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC3B4u) goto L_089AC3B4;
    return;
L_089AC3B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x089AC3C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x089AC3C0u) goto L_089AC3C0;
    return;
L_089AC3C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC410;
      }
      goto L_089AC3C8;
    }
L_089AC3C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089AC3D8u);
    ctx.gpr[6] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC3D8u) goto L_089AC3D8;
    return;
L_089AC3D8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x089AC3E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x089AC3E4u) goto L_089AC3E4;
    return;
L_089AC3E4:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_089AC410;
L_089AC410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089AC438;
      }
      goto L_089AC41C;
    }
L_089AC41C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(513));
    ctx.gpr[31] = (0x089AC42Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089AC42Cu) goto L_089AC42C;
    return;
L_089AC42C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(513)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089AC438;
L_089AC438:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AC448u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x089AC448u) goto L_089AC448;
    return;
L_089AC448:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_089AC4EC;
      }
      goto L_089AC4D8;
    }
L_089AC4D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089AC4EC;
L_089AC4EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089AC56Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem) && ctx.pc == 0x089AC56Cu) goto L_089AC56C;
    return;
L_089AC56C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC5A0;
      }
      goto L_089AC574;
    }
L_089AC574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC610;
      }
      goto L_089AC584;
    }
L_089AC584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC610;
      }
      goto L_089AC590;
    }
L_089AC590:
    ctx.gpr[31] = (0x089AC598u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x089AC598u) goto L_089AC598;
    return;
L_089AC598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC610;
      }
      goto L_089AC5A0;
    }
L_089AC5A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089AC5E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem) && ctx.pc == 0x089AC5E4u) goto L_089AC5E4;
    return;
L_089AC5E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC618;
      }
      goto L_089AC5EC;
    }
L_089AC5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC610;
      }
      goto L_089AC5FC;
    }
L_089AC5FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC610;
      }
      goto L_089AC608;
    }
L_089AC608:
    ctx.gpr[31] = (0x089AC610u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x089AC610u) goto L_089AC610;
    return;
L_089AC610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089AC644;
      }
      goto L_089AC618;
    }
L_089AC618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC63C;
      }
      goto L_089AC628;
    }
L_089AC628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC63C;
      }
      goto L_089AC634;
    }
L_089AC634:
    ctx.gpr[31] = (0x089AC63Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x089AC63Cu) goto L_089AC63C;
    return;
L_089AC63C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089AC644;
      }
      goto L_089AC644;
    }
L_089AC644:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC664:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    ctx.gpr[31] = (0x089AC6B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC6B4u) goto L_089AC6B4;
    return;
L_089AC6B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC6E0;
      }
      goto L_089AC6BC;
    }
L_089AC6BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AC6E0;
      }
      goto L_089AC6CC;
    }
L_089AC6CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC6E0;
      }
      goto L_089AC6D8;
    }
L_089AC6D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089AC6E4;
      }
      goto L_089AC6E0;
    }
L_089AC6E0:
    ctx.gpr[4] = (0u | 0u);
    goto L_089AC6E4;
L_089AC6E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089AC6F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 339u, 0x08B012BCu>(ctx, &aot_mem) && ctx.pc == 0x089AC6F0u) goto L_089AC6F0;
    return;
L_089AC6F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC7B0;
      }
      goto L_089AC6F8;
    }
L_089AC6F8:
    ctx.gpr[31] = (0x089AC700u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC700u) goto L_089AC700;
    return;
L_089AC700:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC724;
      }
      goto L_089AC708;
    }
L_089AC708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(408));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089AC720u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AC720u) goto L_089AC720;
    return;
L_089AC720:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    goto L_089AC724;
L_089AC724:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC7B0;
      }
      goto L_089AC72C;
    }
L_089AC72C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC7A8;
      }
      goto L_089AC738;
    }
L_089AC738:
    ctx.gpr[31] = (0x089AC740u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC740u) goto L_089AC740;
    return;
L_089AC740:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC76C;
      }
      goto L_089AC748;
    }
L_089AC748:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(533))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AC76C;
      }
      goto L_089AC758;
    }
L_089AC758:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AC7A8;
      }
      goto L_089AC76C;
    }
L_089AC76C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089AC7A8;
      }
      goto L_089AC778;
    }
L_089AC778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1728), ctx.gpr[4]);
    ctx.gpr[4] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC7A8;
      }
      goto L_089AC798;
    }
L_089AC798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    goto L_089AC7A8;
L_089AC7A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD2BC;
      }
      goto L_089AC7B0;
    }
L_089AC7B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD2BC;
      }
      goto L_089AC7C0;
    }
L_089AC7C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD2BC;
      }
      goto L_089AC7D0;
    }
L_089AC7D0:
    ctx.gpr[21] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AC7F0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x089AC7F0u) goto L_089AC7F0;
    return;
L_089AC7F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC990;
      }
      goto L_089AC810;
    }
L_089AC810:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[19] = (0u | 10u);
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089AC854;
      }
      goto L_089AC824;
    }
L_089AC824:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 8u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089AC858;
    }
    goto L_089AC834;
L_089AC834:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 9u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089AC858;
    }
    goto L_089AC844;
L_089AC844:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089AC85C;
      }
      goto L_089AC854;
    }
L_089AC854:
    ctx.gpr[4] = (0u | 1u);
    goto L_089AC858;
L_089AC858:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089AC85C;
L_089AC85C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC8B4;
      }
      goto L_089AC864;
    }
L_089AC864:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC890;
      }
      goto L_089AC86C;
    }
L_089AC86C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AC878u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC878u) goto L_089AC878;
    return;
L_089AC878:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089AC888;
      }
      goto L_089AC880;
    }
L_089AC880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 13u);
      if (branch_taken) {
          goto L_089AC990;
      }
      goto L_089AC888;
    }
L_089AC888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 19u);
      if (branch_taken) {
          goto L_089AC990;
      }
      goto L_089AC890;
    }
L_089AC890:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AC89Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC89Cu) goto L_089AC89C;
    return;
L_089AC89C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089AC8AC;
      }
      goto L_089AC8A4;
    }
L_089AC8A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 11u);
      if (branch_taken) {
          goto L_089AC990;
      }
      goto L_089AC8AC;
    }
L_089AC8AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 10u);
      if (branch_taken) {
          goto L_089AC990;
      }
      goto L_089AC8B4;
    }
L_089AC8B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC8CC;
      }
      goto L_089AC8C4;
    }
L_089AC8C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 10u);
      if (branch_taken) {
          goto L_089AC990;
      }
      goto L_089AC8CC;
    }
L_089AC8CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089AC8E0;
      }
      goto L_089AC8D8;
    }
L_089AC8D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 10u);
      if (branch_taken) {
          goto L_089AC990;
      }
      goto L_089AC8E0;
    }
L_089AC8E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AC8ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC8ECu) goto L_089AC8EC;
    return;
L_089AC8EC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089AC8FC;
      }
      goto L_089AC8F4;
    }
L_089AC8F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 8u);
      if (branch_taken) {
          goto L_089AC990;
      }
      goto L_089AC8FC;
    }
L_089AC8FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AC908u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC908u) goto L_089AC908;
    return;
L_089AC908:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089AC918;
      }
      goto L_089AC910;
    }
L_089AC910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 11u);
      if (branch_taken) {
          goto L_089AC990;
      }
      goto L_089AC918;
    }
L_089AC918:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AC924u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC924u) goto L_089AC924;
    return;
L_089AC924:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089AC934;
      }
      goto L_089AC92C;
    }
L_089AC92C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 9u);
      if (branch_taken) {
          goto L_089AC990;
      }
      goto L_089AC934;
    }
L_089AC934:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    ctx.gpr[16] = (0u | 3u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC990;
      }
      goto L_089AC948;
    }
L_089AC948:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AC954u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC954u) goto L_089AC954;
    return;
L_089AC954:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089AC97C;
      }
      goto L_089AC95C;
    }
L_089AC95C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC970;
      }
      goto L_089AC968;
    }
L_089AC968:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 9u);
      if (branch_taken) {
          goto L_089AC974;
      }
      goto L_089AC970;
    }
L_089AC970:
    ctx.gpr[19] = (0u | 11u);
    goto L_089AC974;
L_089AC974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC990;
      }
      goto L_089AC97C;
    }
L_089AC97C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC948;
      }
      goto L_089AC990;
    }
L_089AC990:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AC9A8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x089AC9A8u) goto L_089AC9A8;
    return;
L_089AC9A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(563)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC9C0;
      }
      goto L_089AC9BC;
    }
L_089AC9BC:
    ctx.gpr[16] = (0u | 1u);
    goto L_089AC9C0;
L_089AC9C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(564)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC9D8;
      }
      goto L_089AC9D4;
    }
L_089AC9D4:
    ctx.gpr[23] = (0u | 1u);
    goto L_089AC9D8;
L_089AC9D8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC9F0;
      }
      goto L_089AC9E0;
    }
L_089AC9E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ACA00;
      }
      goto L_089AC9F0;
    }
L_089AC9F0:
    if (ctx.gpr[23] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1360)));
        goto L_089ACA10;
    }
    goto L_089AC9F8;
L_089AC9F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACA2C;
      }
      goto L_089ACA00;
    }
L_089ACA00:
    ctx.gpr[31] = (0x089ACA08u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x089ACA08u) goto L_089ACA08;
    return;
L_089ACA08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD2BC;
      }
      goto L_089ACA10;
    }
L_089ACA10:
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ACA3C;
      }
      goto L_089ACA1C;
    }
L_089ACA1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACA3C;
      }
      goto L_089ACA2C;
    }
L_089ACA2C:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089ACA44;
      }
      goto L_089ACA34;
    }
L_089ACA34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACA90;
      }
      goto L_089ACA3C;
    }
L_089ACA3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD2BC;
      }
      goto L_089ACA44;
    }
L_089ACA44:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ACA88;
      }
      goto L_089ACA60;
    }
L_089ACA60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089ACA80u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACA80u) goto L_089ACA80;
    return;
L_089ACA80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089ACAD4;
      }
      goto L_089ACA88;
    }
L_089ACA88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_089ACAD4;
      }
      goto L_089ACA90;
    }
L_089ACA90:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089ACAA8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x089ACAA8u) goto L_089ACAA8;
    return;
L_089ACAA8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089ACAD0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACAD0u) goto L_089ACAD0;
    return;
L_089ACAD0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_089ACAD4;
L_089ACAD4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_089ACE50;
      }
      goto L_089ACADC;
    }
L_089ACADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[30] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089ACB00;
      }
      goto L_089ACAF0;
    }
L_089ACAF0:
    ctx.gpr[31] = (0x089ACAF8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089ACAF8u) goto L_089ACAF8;
    return;
L_089ACAF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACDFC;
      }
      goto L_089ACB00;
    }
L_089ACB00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089ACB40;
      }
      goto L_089ACB10;
    }
L_089ACB10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 8u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089ACB44;
    }
    goto L_089ACB20;
L_089ACB20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 9u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089ACB44;
    }
    goto L_089ACB30;
L_089ACB30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089ACB48;
      }
      goto L_089ACB40;
    }
L_089ACB40:
    ctx.gpr[4] = (0u | 1u);
    goto L_089ACB44;
L_089ACB44:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089ACB48;
L_089ACB48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACBA4;
      }
      goto L_089ACB50;
    }
L_089ACB50:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_089ACB7C;
      }
      goto L_089ACB60;
    }
L_089ACB60:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_089ACD2C;
      }
      goto L_089ACB6C;
    }
L_089ACB6C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACB9C;
      }
      goto L_089ACB74;
    }
L_089ACB74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 10u);
      if (branch_taken) {
          goto L_089ACD2C;
      }
      goto L_089ACB7C;
    }
L_089ACB7C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_089ACB94;
      }
      goto L_089ACB84;
    }
L_089ACB84:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACD2C;
      }
      goto L_089ACB8C;
    }
L_089ACB8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 9u);
      if (branch_taken) {
          goto L_089ACD2C;
      }
      goto L_089ACB94;
    }
L_089ACB94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 8u);
      if (branch_taken) {
          goto L_089ACD2C;
      }
      goto L_089ACB9C;
    }
L_089ACB9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 11u);
      if (branch_taken) {
          goto L_089ACD2C;
      }
      goto L_089ACBA4;
    }
L_089ACBA4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_089ACBD0;
      }
      goto L_089ACBB4;
    }
L_089ACBB4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_089ACD2C;
      }
      goto L_089ACBC0;
    }
L_089ACBC0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACC98;
      }
      goto L_089ACBC8;
    }
L_089ACBC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACCDC;
      }
      goto L_089ACBD0;
    }
L_089ACBD0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_089ACBE8;
      }
      goto L_089ACBD8;
    }
L_089ACBD8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACC40;
      }
      goto L_089ACBE0;
    }
L_089ACBE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACD2C;
      }
      goto L_089ACBE8;
    }
L_089ACBE8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089ACBF4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089ACBF4u) goto L_089ACBF4;
    return;
L_089ACBF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACC24;
      }
      goto L_089ACBFC;
    }
L_089ACBFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACC24;
      }
      goto L_089ACC0C;
    }
L_089ACC0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACC24;
      }
      goto L_089ACC1C;
    }
L_089ACC1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 8u);
      if (branch_taken) {
          goto L_089ACC38;
      }
      goto L_089ACC24;
    }
L_089ACC24:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089ACC34u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089ACC34u) goto L_089ACC34;
    return;
L_089ACC34:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_089ACC38;
L_089ACC38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACD2C;
      }
      goto L_089ACC40;
    }
L_089ACC40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089ACC4Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089ACC4Cu) goto L_089ACC4C;
    return;
L_089ACC4C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACC7C;
      }
      goto L_089ACC54;
    }
L_089ACC54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACC7C;
      }
      goto L_089ACC64;
    }
L_089ACC64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACC7C;
      }
      goto L_089ACC74;
    }
L_089ACC74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 9u);
      if (branch_taken) {
          goto L_089ACC90;
      }
      goto L_089ACC7C;
    }
L_089ACC7C:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089ACC8Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089ACC8Cu) goto L_089ACC8C;
    return;
L_089ACC8C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_089ACC90;
L_089ACC90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACD2C;
      }
      goto L_089ACC98;
    }
L_089ACC98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACCCC;
      }
      goto L_089ACCA4;
    }
L_089ACCA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACCCC;
      }
      goto L_089ACCB4;
    }
L_089ACCB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACCCC;
      }
      goto L_089ACCC4;
    }
L_089ACCC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 10u);
      if (branch_taken) {
          goto L_089ACCD4;
      }
      goto L_089ACCCC;
    }
L_089ACCCC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[20] = (0u | 1u);
    goto L_089ACCD4;
L_089ACCD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACD2C;
      }
      goto L_089ACCDC;
    }
L_089ACCDC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089ACCE8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089ACCE8u) goto L_089ACCE8;
    return;
L_089ACCE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACD18;
      }
      goto L_089ACCF0;
    }
L_089ACCF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACD18;
      }
      goto L_089ACD00;
    }
L_089ACD00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACD18;
      }
      goto L_089ACD10;
    }
L_089ACD10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 11u);
      if (branch_taken) {
          goto L_089ACD2C;
      }
      goto L_089ACD18;
    }
L_089ACD18:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089ACD28u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089ACD28u) goto L_089ACD28;
    return;
L_089ACD28:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_089ACD2C;
L_089ACD2C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACDB8;
      }
      goto L_089ACD34;
    }
L_089ACD34:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACD5C;
      }
      goto L_089ACD3C;
    }
L_089ACD3C:
    ctx.gpr[31] = (0x089ACD44u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089ACD44u) goto L_089ACD44;
    return;
L_089ACD44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACD5C;
      }
      goto L_089ACD4C;
    }
L_089ACD4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ACDB0;
      }
      goto L_089ACD5C;
    }
L_089ACD5C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_089ACD88;
      }
      goto L_089ACD6C;
    }
L_089ACD6C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_089ACDB8;
      }
      goto L_089ACD78;
    }
L_089ACD78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACDA8;
      }
      goto L_089ACD80;
    }
L_089ACD80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 10u);
      if (branch_taken) {
          goto L_089ACDB8;
      }
      goto L_089ACD88;
    }
L_089ACD88:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_089ACDA0;
      }
      goto L_089ACD90;
    }
L_089ACD90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACDB8;
      }
      goto L_089ACD98;
    }
L_089ACD98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 9u);
      if (branch_taken) {
          goto L_089ACDB8;
      }
      goto L_089ACDA0;
    }
L_089ACDA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 8u);
      if (branch_taken) {
          goto L_089ACDB8;
      }
      goto L_089ACDA8;
    }
L_089ACDA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 11u);
      if (branch_taken) {
          goto L_089ACDB8;
      }
      goto L_089ACDB0;
    }
L_089ACDB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD2BC;
      }
      goto L_089ACDB8;
    }
L_089ACDB8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089ACDD0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x089ACDD0u) goto L_089ACDD0;
    return;
L_089ACDD0:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089ACDF8u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACDF8u) goto L_089ACDF8;
    return;
L_089ACDF8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_089ACDFC;
L_089ACDFC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACE4C;
      }
      goto L_089ACE04;
    }
L_089ACE04:
    ctx.gpr[31] = (0x089ACE0Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089ACE0Cu) goto L_089ACE0C;
    return;
L_089ACE0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACE24;
      }
      goto L_089ACE14;
    }
L_089ACE14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ACE44;
      }
      goto L_089ACE24;
    }
L_089ACE24:
    ctx.gpr[4] = (ctx.gpr[30] & 65535u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089ACE38u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 138u, 0x08A0CDECu>(ctx, &aot_mem) && ctx.pc == 0x089ACE38u) goto L_089ACE38;
    return;
L_089ACE38:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089ACE4C;
      }
      goto L_089ACE44;
    }
L_089ACE44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD2BC;
      }
      goto L_089ACE4C;
    }
L_089ACE4C:
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_089ACE50;
L_089ACE50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACF38;
      }
      goto L_089ACE5C;
    }
L_089ACE5C:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACF38;
      }
      goto L_089ACE64;
    }
L_089ACE64:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_089ACE78;
      }
      goto L_089ACE70;
    }
L_089ACE70:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089ACF38;
      }
      goto L_089ACE78;
    }
L_089ACE78:
    ctx.gpr[31] = (0x089ACE80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089ACE80u) goto L_089ACE80;
    return;
L_089ACE80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACF38;
      }
      goto L_089ACE88;
    }
L_089ACE88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ACF38;
      }
      goto L_089ACE98;
    }
L_089ACE98:
    ctx.gpr[31] = (0x089ACEA0u);
    ctx.gpr[16] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089ACEA0u) goto L_089ACEA0;
    return;
L_089ACEA0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089ACEC4;
      }
      goto L_089ACEB0;
    }
L_089ACEB0:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ACECC;
      }
      goto L_089ACEBC;
    }
L_089ACEBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACF38;
      }
      goto L_089ACEC4;
    }
L_089ACEC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD2BC;
      }
      goto L_089ACECC;
    }
L_089ACECC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089ACEE4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x089ACEE4u) goto L_089ACEE4;
    return;
L_089ACEE4:
    ctx.gpr[31] = (0x089ACEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089ACEECu) goto L_089ACEEC;
    return;
L_089ACEEC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16056u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ACF38;
      }
      goto L_089ACF30;
    }
L_089ACF30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD2BC;
      }
      goto L_089ACF38;
    }
L_089ACF38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(165)));
    ctx.gpr[16] = (0u | 8u);
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089ACF70;
      }
      goto L_089ACF4C;
    }
L_089ACF4C:
    ctx.gpr[31] = (0x089ACF54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 233u, 0x08B00DBCu>(ctx, &aot_mem) && ctx.pc == 0x089ACF54u) goto L_089ACF54;
    return;
L_089ACF54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACF70;
      }
      goto L_089ACF5C;
    }
L_089ACF5C:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[31] = (0x089ACF68u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 138u, 0x08A0CDECu>(ctx, &aot_mem) && ctx.pc == 0x089ACF68u) goto L_089ACF68;
    return;
L_089ACF68:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089ACF70;
L_089ACF70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089ACFA8;
      }
      goto L_089ACF7C;
    }
L_089ACF7C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089ACF88u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x089ACF88u) goto L_089ACF88;
    return;
L_089ACF88:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089ACF94u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 983u, 0x0890BE58u>(ctx, &aot_mem) && ctx.pc == 0x089ACF94u) goto L_089ACF94;
    return;
L_089ACF94:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089ACFA0u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089ACFA0u) goto L_089ACFA0;
    return;
L_089ACFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACFCC;
      }
      goto L_089ACFA8;
    }
L_089ACFA8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089ACFB4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x089ACFB4u) goto L_089ACFB4;
    return;
L_089ACFB4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089ACFC0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 983u, 0x0890BE58u>(ctx, &aot_mem) && ctx.pc == 0x089ACFC0u) goto L_089ACFC0;
    return;
L_089ACFC0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089ACFCCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089ACFCCu) goto L_089ACFCC;
    return;
L_089ACFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089ACFE8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem) && ctx.pc == 0x089ACFE8u) goto L_089ACFE8;
    return;
L_089ACFE8:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089ACFF8u);
    ctx.gpr[5] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089ACFF8u) goto L_089ACFF8;
    return;
L_089ACFF8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089AD008u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x089AD008u) goto L_089AD008;
    return;
L_089AD008:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AD01Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 177u, 0x08AF5564u>(ctx, &aot_mem) && ctx.pc == 0x089AD01Cu) goto L_089AD01C;
    return;
L_089AD01C:
    ctx.gpr[31] = (0x089AD024u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AD024u) goto L_089AD024;
    return;
L_089AD024:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD060;
      }
      goto L_089AD02C;
    }
L_089AD02C:
    ctx.gpr[31] = (0x089AD034u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AD034u) goto L_089AD034;
    return;
L_089AD034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD060;
      }
      goto L_089AD04C;
    }
L_089AD04C:
    ctx.gpr[31] = (0x089AD054u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AD054u) goto L_089AD054;
    return;
L_089AD054:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089AD060;
L_089AD060:
    ctx.gpr[31] = (0x089AD068u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 451u, 0x08911B7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AD068u) goto L_089AD068;
    return;
L_089AD068:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AD074u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 756u, 0x089AB8B4u>(ctx, &aot_mem) && ctx.pc == 0x089AD074u) goto L_089AD074;
    return;
L_089AD074:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AD080u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089AD080u) goto L_089AD080;
    return;
L_089AD080:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (17096u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(776)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AD09Cu);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x089AD09Cu) goto L_089AD09C;
    return;
L_089AD09C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(165)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD0C4;
      }
      goto L_089AD0B0;
    }
L_089AD0B0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089AD0BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 588u, 0x089266D8u>(ctx, &aot_mem) && ctx.pc == 0x089AD0BCu) goto L_089AD0BC;
    return;
L_089AD0BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD240;
      }
      goto L_089AD0C4;
    }
L_089AD0C4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AD14C;
      }
      goto L_089AD0E8;
    }
L_089AD0E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD14C;
      }
      goto L_089AD0F8;
    }
L_089AD0F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089AD14C;
      }
      goto L_089AD104;
    }
L_089AD104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD14C;
      }
      goto L_089AD114;
    }
L_089AD114:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089AD120u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 181u, 0x08AF55ACu>(ctx, &aot_mem) && ctx.pc == 0x089AD120u) goto L_089AD120;
    return;
L_089AD120:
    ctx.gpr[31] = (0x089AD128u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AD128u) goto L_089AD128;
    return;
L_089AD128:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AD13Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26328));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089AD13Cu) goto L_089AD13C;
    return;
L_089AD13C:
    ctx.gpr[31] = (0x089AD144u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 697u, 0x0890EF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089AD144u) goto L_089AD144;
    return;
L_089AD144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD240;
      }
      goto L_089AD14C;
    }
L_089AD14C:
    ctx.gpr[31] = (0x089AD154u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 542u, 0x08B02090u>(ctx, &aot_mem) && ctx.pc == 0x089AD154u) goto L_089AD154;
    return;
L_089AD154:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD178;
      }
      goto L_089AD15C;
    }
L_089AD15C:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD178;
      }
      goto L_089AD164;
    }
L_089AD164:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089AD170u);
    ctx.gpr[5] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 181u, 0x08AF55ACu>(ctx, &aot_mem) && ctx.pc == 0x089AD170u) goto L_089AD170;
    return;
L_089AD170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD184;
      }
      goto L_089AD178;
    }
L_089AD178:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089AD184u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 181u, 0x08AF55ACu>(ctx, &aot_mem) && ctx.pc == 0x089AD184u) goto L_089AD184;
    return;
L_089AD184:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD1D4;
      }
      goto L_089AD18C;
    }
L_089AD18C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD1B0;
      }
      goto L_089AD1A0;
    }
L_089AD1A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(564)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(564), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089AD1B0;
L_089AD1B0:
    ctx.gpr[31] = (0x089AD1B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AD1B8u) goto L_089AD1B8;
    return;
L_089AD1B8:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AD1CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16548));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089AD1CCu) goto L_089AD1CC;
    return;
L_089AD1CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD238;
      }
      goto L_089AD1D4;
    }
L_089AD1D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD1F4;
      }
      goto L_089AD1E4;
    }
L_089AD1E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD218;
      }
      goto L_089AD1F4;
    }
L_089AD1F4:
    ctx.gpr[31] = (0x089AD1FCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AD1FCu) goto L_089AD1FC;
    return;
L_089AD1FC:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AD210u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16548));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089AD210u) goto L_089AD210;
    return;
L_089AD210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD238;
      }
      goto L_089AD218;
    }
L_089AD218:
    ctx.gpr[31] = (0x089AD220u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AD220u) goto L_089AD220;
    return;
L_089AD220:
    ctx.gpr[5] = (2193u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AD234u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10228));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089AD234u) goto L_089AD234;
    return;
L_089AD234:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089AD238;
L_089AD238:
    ctx.gpr[31] = (0x089AD240u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 697u, 0x0890EF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089AD240u) goto L_089AD240;
    return;
L_089AD240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65520u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD274;
      }
      goto L_089AD264;
    }
L_089AD264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_089AD274;
L_089AD274:
    ctx.gpr[31] = (0x089AD27Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 264u, 0x08910F00u>(ctx, &aot_mem) && ctx.pc == 0x089AD27Cu) goto L_089AD27C;
    return;
L_089AD27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089AD2BC;
      }
      goto L_089AD288;
    }
L_089AD288:
    ctx.gpr[31] = (0x089AD290u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089AD290u) goto L_089AD290;
    return;
L_089AD290:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-497));
      if (branch_taken) {
          goto L_089AD2AC;
      }
      goto L_089AD298;
    }
L_089AD298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] | 208u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AD2BC;
      }
      goto L_089AD2AC;
    }
L_089AD2AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089AD2BC;
L_089AD2BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD2F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089AD344;
      }
      goto L_089AD32C;
    }
L_089AD32C:
    ctx.gpr[31] = (0x089AD334u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AD334u) goto L_089AD334;
    return;
L_089AD334:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD358;
      }
      goto L_089AD33C;
    }
L_089AD33C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD7D4;
      }
      goto L_089AD344;
    }
L_089AD344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AD7D4;
      }
      goto L_089AD358;
    }
L_089AD358:
    ctx.gpr[31] = (0x089AD360u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AD360u) goto L_089AD360;
    return;
L_089AD360:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[31] = (0x089AD36Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AD36Cu) goto L_089AD36C;
    return;
L_089AD36C:
    ctx.gpr[4] = (0u | 200u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089AD46C;
      }
      goto L_089AD378;
    }
L_089AD378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (16051u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.gpr[5] = (0u | 229u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_089AD3BC;
      }
      goto L_089AD394;
    }
L_089AD394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 232u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD3BC;
      }
      goto L_089AD3A8;
    }
L_089AD3A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 231u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD3C8;
      }
      goto L_089AD3BC;
    }
L_089AD3BC:
    ctx.gpr[4] = (16140u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089AD3C8;
L_089AD3C8:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AD458;
      }
      goto L_089AD3D8;
    }
L_089AD3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD458;
      }
      goto L_089AD3E4;
    }
L_089AD3E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089AD428;
      }
      goto L_089AD3F8;
    }
L_089AD3F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[7] = (0u | 8u);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089AD42C;
    }
    goto L_089AD408;
L_089AD408:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[7] = (0u | 9u);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089AD42C;
    }
    goto L_089AD418;
L_089AD418:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089AD430;
      }
      goto L_089AD428;
    }
L_089AD428:
    ctx.gpr[4] = (0u | 1u);
    goto L_089AD42C;
L_089AD42C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089AD430;
L_089AD430:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD458;
      }
      goto L_089AD438;
    }
L_089AD438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AD450u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 212u, 0x08B04D14u>(ctx, &aot_mem) && ctx.pc == 0x089AD450u) goto L_089AD450;
    return;
L_089AD450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD464;
      }
      goto L_089AD458;
    }
L_089AD458:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AD464u);
    ctx.gpr[5] = (0u | 3u);
    goto L_089AFEFC;
L_089AD464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD7D4;
      }
      goto L_089AD46C;
    }
L_089AD46C:
    ctx.gpr[4] = (0u | 130u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 131u);
      if (branch_taken) {
          goto L_089AD480;
      }
      goto L_089AD478;
    }
L_089AD478:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089AD564;
      }
      goto L_089AD480;
    }
L_089AD480:
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AD550;
      }
      goto L_089AD49C;
    }
L_089AD49C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD550;
      }
      goto L_089AD4A8;
    }
L_089AD4A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089AD4D0;
      }
      goto L_089AD4C0;
    }
L_089AD4C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089AD4D0;
L_089AD4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(636)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD50C;
      }
      goto L_089AD4E8;
    }
L_089AD4E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD50C;
      }
      goto L_089AD4F8;
    }
L_089AD4F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD550;
      }
      goto L_089AD50C;
    }
L_089AD50C:
    ctx.gpr[4] = (0u | 130u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089AD534;
      }
      goto L_089AD518;
    }
L_089AD518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x089AD52Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 415u, 0x0884A390u>(ctx, &aot_mem) && ctx.pc == 0x089AD52Cu) goto L_089AD52C;
    return;
L_089AD52C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD55C;
      }
      goto L_089AD534;
    }
L_089AD534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x089AD548u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 415u, 0x0884A390u>(ctx, &aot_mem) && ctx.pc == 0x089AD548u) goto L_089AD548;
    return;
L_089AD548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD55C;
      }
      goto L_089AD550;
    }
L_089AD550:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AD55Cu);
    ctx.gpr[5] = (0u | 3u);
    goto L_089AFEFC;
L_089AD55C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD7D4;
      }
      goto L_089AD564;
    }
L_089AD564:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD5B0;
      }
      goto L_089AD570;
    }
L_089AD570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AD58Cu);
    ctx.gpr[21] = (ctx.gpr[18] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AD58Cu) goto L_089AD58C;
    return;
L_089AD58C:
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[31] = (0x089AD598u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AD598u) goto L_089AD598;
    return;
L_089AD598:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AD5B0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD5B0u) goto L_089AD5B0;
    return;
L_089AD5B0:
    ctx.gpr[31] = (0x089AD5B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x089AD5B8u) goto L_089AD5B8;
    return;
L_089AD5B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD66C;
      }
      goto L_089AD5C0;
    }
L_089AD5C0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AD5F8;
      }
      goto L_089AD5E4;
    }
L_089AD5E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AD5F0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089AFEFC;
L_089AD5F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD66C;
      }
      goto L_089AD5F8;
    }
L_089AD5F8:
    ctx.gpr[4] = (0u | 124u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 84u);
      if (branch_taken) {
          goto L_089AD624;
      }
      goto L_089AD604;
    }
L_089AD604:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_089AD624;
      }
      goto L_089AD60C;
    }
L_089AD60C:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AD638;
      }
      goto L_089AD624;
    }
L_089AD624:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AD630u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089AFEFC;
L_089AD630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD66C;
      }
      goto L_089AD638;
    }
L_089AD638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-950));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD660;
      }
      goto L_089AD64C;
    }
L_089AD64C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AD658u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089AFEFC;
L_089AD658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD66C;
      }
      goto L_089AD660;
    }
L_089AD660:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AD66Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089AFEFC;
L_089AD66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD7D4;
      }
      goto L_089AD67C;
    }
L_089AD67C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089AD74C;
      }
      goto L_089AD690;
    }
L_089AD690:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[5] = (15651u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55051u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AD738;
      }
      goto L_089AD728;
    }
L_089AD728:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
      if (branch_taken) {
          goto L_089AD74C;
      }
      goto L_089AD738;
    }
L_089AD738:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD690;
      }
      goto L_089AD74C;
    }
L_089AD74C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD7D4;
      }
      goto L_089AD754;
    }
L_089AD754:
    ctx.gpr[31] = (0x089AD75Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089AD75Cu) goto L_089AD75C;
    return;
L_089AD75C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD794;
      }
      goto L_089AD764;
    }
L_089AD764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD794;
      }
      goto L_089AD774;
    }
L_089AD774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD794;
      }
      goto L_089AD784;
    }
L_089AD784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AD7D4;
      }
      goto L_089AD794;
    }
L_089AD794:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AD7D4;
      }
      goto L_089AD7B0;
    }
L_089AD7B0:
    ctx.gpr[31] = (0x089AD7B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x089AD7B8u) goto L_089AD7B8;
    return;
L_089AD7B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD7D4;
      }
      goto L_089AD7C0;
    }
L_089AD7C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[31] = (0x089AD7D4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x089AD7D4u) goto L_089AD7D4;
    return;
L_089AD7D4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD800:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089AD828u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089AD828u) goto L_089AD828;
    return;
L_089AD828:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(776)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AD854u);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x089AD854u) goto L_089AD854;
    return;
L_089AD854:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AD860u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 756u, 0x089AB8B4u>(ctx, &aot_mem) && ctx.pc == 0x089AD860u) goto L_089AD860;
    return;
L_089AD860:
    ctx.gpr[31] = (0x089AD868u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem) && ctx.pc == 0x089AD868u) goto L_089AD868;
    return;
L_089AD868:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD920;
      }
      goto L_089AD870;
    }
L_089AD870:
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
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AD8B8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 76u, 0x089A8A60u>(ctx, &aot_mem) && ctx.pc == 0x089AD8B8u) goto L_089AD8B8;
    return;
L_089AD8B8:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089AD8E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 588u, 0x089266D8u>(ctx, &aot_mem) && ctx.pc == 0x089AD8E8u) goto L_089AD8E8;
    return;
L_089AD8E8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1328), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x089AD914u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x089AD914u) goto L_089AD914;
    return;
L_089AD914:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1300), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADB7C;
      }
      goto L_089AD920;
    }
L_089AD920:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ADAC4;
      }
      goto L_089AD930;
    }
L_089AD930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADAB0;
      }
      goto L_089AD940;
    }
L_089AD940:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089AD954u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 588u, 0x089266D8u>(ctx, &aot_mem) && ctx.pc == 0x089AD954u) goto L_089AD954;
    return;
L_089AD954:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AD97Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089AD97Cu) goto L_089AD97C;
    return;
L_089AD97C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16261u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADA88;
      }
      goto L_089ADA78;
    }
L_089ADA78:
    ctx.gpr[31] = (0x089ADA80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 138u, 0x08A0CDECu>(ctx, &aot_mem) && ctx.pc == 0x089ADA80u) goto L_089ADA80;
    return;
L_089ADA80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADAA8;
      }
      goto L_089ADA88;
    }
L_089ADA88:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089ADA94u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x089ADA94u) goto L_089ADA94;
    return;
L_089ADA94:
    ctx.gpr[31] = (0x089ADA9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 138u, 0x08A0CDECu>(ctx, &aot_mem) && ctx.pc == 0x089ADA9Cu) goto L_089ADA9C;
    return;
L_089ADA9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089ADAA8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x089ADAA8u) goto L_089ADAA8;
    return;
L_089ADAA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADBAC;
      }
      goto L_089ADAB0;
    }
L_089ADAB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089ADAC4;
L_089ADAC4:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089ADAD8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 588u, 0x089266D8u>(ctx, &aot_mem) && ctx.pc == 0x089ADAD8u) goto L_089ADAD8;
    return;
L_089ADAD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1328), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x089ADB04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x089ADB04u) goto L_089ADB04;
    return;
L_089ADB04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1300), ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16409u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089ADB60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem) && ctx.pc == 0x089ADB60u) goto L_089ADB60;
    return;
L_089ADB60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16261u << 16u);
      if (branch_taken) {
          goto L_089ADB7C;
      }
      goto L_089ADB68;
    }
L_089ADB68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089ADB7C;
L_089ADB7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089ADBA0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089ADBA0u) goto L_089ADBA0;
    return;
L_089ADBA0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x089ADBACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x089ADBACu) goto L_089ADBAC;
    return;
L_089ADBAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADBC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-448));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089ADD1C;
      }
      goto L_089ADBF8;
    }
L_089ADBF8:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[5] << 24u);
    ctx.gpr[31] = (0x089ADC14u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 237u, 0x08ADCCC4u>(ctx, &aot_mem) && ctx.pc == 0x089ADC14u) goto L_089ADC14;
    return;
L_089ADC14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2237u << 16u);
      if (branch_taken) {
          goto L_089ADD14;
      }
      goto L_089ADC20;
    }
L_089ADC20:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADD14;
      }
      goto L_089ADC44;
    }
L_089ADC44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x089ADC50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x089ADC50u) goto L_089ADC50;
    return;
L_089ADC50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADD14;
      }
      goto L_089ADC5C;
    }
L_089ADC5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089ADC68u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x089ADC68u) goto L_089ADC68;
    return;
L_089ADC68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089ADC74u);
    ctx.gpr[5] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089ADC74u) goto L_089ADC74;
    return;
L_089ADC74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2116), ctx.gpr[4]);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089ADCACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 307u, 0x089B56FCu>(ctx, &aot_mem) && ctx.pc == 0x089ADCACu) goto L_089ADCAC;
    return;
L_089ADCAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x089ADCB8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 30u, 0x08B04218u>(ctx, &aot_mem) && ctx.pc == 0x089ADCB8u) goto L_089ADCB8;
    return;
L_089ADCB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(304))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x089ADD14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 110u, 0x08A1CA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089ADD14u) goto L_089ADD14;
    return;
L_089ADD14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE4D4;
      }
      goto L_089ADD1C;
    }
L_089ADD1C:
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x089ADD30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5984));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089ADD30u) goto L_089ADD30;
    return;
L_089ADD30:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1927))))));
    ctx.gpr[31] = (0x089ADD44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 16u, 0x08ADC120u>(ctx, &aot_mem) && ctx.pc == 0x089ADD44u) goto L_089ADD44;
    return;
L_089ADD44:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089ADD50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089ADD50u) goto L_089ADD50;
    return;
L_089ADD50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADD64;
      }
      goto L_089ADD58;
    }
L_089ADD58:
    ctx.gpr[31] = (0x089ADD60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089ADD60u) goto L_089ADD60;
    return;
L_089ADD60:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    goto L_089ADD64;
L_089ADD64:
    ctx.gpr[4] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_089AE1B0;
      }
      goto L_089ADD70;
    }
L_089ADD70:
    ctx.gpr[4] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_089AE1B0;
      }
      goto L_089ADD7C;
    }
L_089ADD7C:
    ctx.gpr[4] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_089AE1B0;
      }
      goto L_089ADD88;
    }
L_089ADD88:
    ctx.gpr[4] = (0u | 197u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_089AE1B0;
      }
      goto L_089ADD94;
    }
L_089ADD94:
    ctx.gpr[4] = (0u | 120u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_089AE1B0;
      }
      goto L_089ADDA0;
    }
L_089ADDA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089ADDC4;
      }
      goto L_089ADDB4;
    }
L_089ADDB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089ADDC4;
L_089ADDC4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x089ADDD0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem) && ctx.pc == 0x089ADDD0u) goto L_089ADDD0;
    return;
L_089ADDD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
        goto L_089ADDFC;
    }
    goto L_089ADDF4;
L_089ADDF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089ADE10;
      }
      goto L_089ADDFC;
    }
L_089ADDFC:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(160));
        goto L_089ADE10;
    }
    goto L_089ADE08;
L_089ADE08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089ADE10;
      }
      goto L_089ADE10;
    }
L_089ADE10:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089ADE28u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 682u, 0x08907020u>(ctx, &aot_mem) && ctx.pc == 0x089ADE28u) goto L_089ADE28;
    return;
L_089ADE28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089ADE98u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 940u, 0x0885FF78u>(ctx, &aot_mem) && ctx.pc == 0x089ADE98u) goto L_089ADE98;
    return;
L_089ADE98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089ADEACu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x089ADEACu) goto L_089ADEAC;
    return;
L_089ADEAC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE158;
      }
      goto L_089ADEB4;
    }
L_089ADEB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(480)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AE02C;
      }
      goto L_089ADEC0;
    }
L_089ADEC0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE02C;
      }
      goto L_089ADED0;
    }
L_089ADED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_089ADEFC;
    }
    goto L_089ADEDC;
L_089ADEDC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x089ADEECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089ADEECu) goto L_089ADEEC;
    return;
L_089ADEEC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_089ADEFC;
L_089ADEFC:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE01C;
      }
      goto L_089ADF20;
    }
L_089ADF20:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(480), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADF80;
      }
      goto L_089ADF40;
    }
L_089ADF40:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (17530u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[31] = (0x089ADF6Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x089ADF6Cu) goto L_089ADF6C;
    return;
L_089ADF6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089ADF78u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x089ADF78u) goto L_089ADF78;
    return;
L_089ADF78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADFB8;
      }
      goto L_089ADF80;
    }
L_089ADF80:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (17096u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089ADFACu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x089ADFACu) goto L_089ADFAC;
    return;
L_089ADFAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089ADFB8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x089ADFB8u) goto L_089ADFB8;
    return;
L_089ADFB8:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 197u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ADFF8;
      }
      goto L_089ADFD8;
    }
L_089ADFD8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089ADFECu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x089ADFECu) goto L_089ADFEC;
    return;
L_089ADFEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089ADFF8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089ADFF8u) goto L_089ADFF8;
    return;
L_089ADFF8:
    ctx.gpr[31] = (0x089AE000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AE000u) goto L_089AE000;
    return;
L_089AE000:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AE014u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22532));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089AE014u) goto L_089AE014;
    return;
L_089AE014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE02C;
      }
      goto L_089AE01C;
    }
L_089AE01C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADED0;
      }
      goto L_089AE02C;
    }
L_089AE02C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(474)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE0B0;
      }
      goto L_089AE03C;
    }
L_089AE03C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(474)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(474), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(474)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 111 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE068;
      }
      goto L_089AE058;
    }
L_089AE058:
    ctx.gpr[31] = (0x089AE060u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 225u, 0x089A9520u>(ctx, &aot_mem) && ctx.pc == 0x089AE060u) goto L_089AE060;
    return;
L_089AE060:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE160;
      }
      goto L_089AE068;
    }
L_089AE068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_089AE094;
    }
    goto L_089AE074;
L_089AE074:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(385));
    ctx.gpr[31] = (0x089AE084u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089AE084u) goto L_089AE084;
    return;
L_089AE084:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(385)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_089AE094;
L_089AE094:
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(181)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE160;
      }
      goto L_089AE0A4;
    }
L_089AE0A4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(474), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AE160;
      }
      goto L_089AE0B0;
    }
L_089AE0B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE0D8;
      }
      goto L_089AE0BC;
    }
L_089AE0BC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(386));
    ctx.gpr[31] = (0x089AE0CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089AE0CCu) goto L_089AE0CC;
    return;
L_089AE0CC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(386)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089AE0D8;
L_089AE0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[5] ^ 58u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089AE10C;
      }
      goto L_089AE0F0;
    }
L_089AE0F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(387));
    ctx.gpr[31] = (0x089AE100u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089AE100u) goto L_089AE100;
    return;
L_089AE100:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(387)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089AE10C;
L_089AE10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(181)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE128;
      }
      goto L_089AE120;
    }
L_089AE120:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE150;
      }
      goto L_089AE128;
    }
L_089AE128:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(474)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE148;
      }
      goto L_089AE138;
    }
L_089AE138:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(474)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(474), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AE150;
      }
      goto L_089AE148;
    }
L_089AE148:
    ctx.gpr[31] = (0x089AE150u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 225u, 0x089A9520u>(ctx, &aot_mem) && ctx.pc == 0x089AE150u) goto L_089AE150;
    return;
L_089AE150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE160;
      }
      goto L_089AE158;
    }
L_089AE158:
    ctx.gpr[31] = (0x089AE160u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 225u, 0x089A9520u>(ctx, &aot_mem) && ctx.pc == 0x089AE160u) goto L_089AE160;
    return;
L_089AE160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
        goto L_089AE188;
    }
    goto L_089AE170;
L_089AE170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
        goto L_089AE188;
    }
    goto L_089AE17C;
L_089AE17C:
    ctx.gpr[31] = (0x089AE184u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x089AE184u) goto L_089AE184;
    return;
L_089AE184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    goto L_089AE188;
L_089AE188:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE1A8;
      }
      goto L_089AE194;
    }
L_089AE194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE1A8;
      }
      goto L_089AE1A0;
    }
L_089AE1A0:
    ctx.gpr[31] = (0x089AE1A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x089AE1A8u) goto L_089AE1A8;
    return;
L_089AE1A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE4D4;
      }
      goto L_089AE1B0;
    }
L_089AE1B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1927))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.gpr[31] = (0x089AE1CCu);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 237u, 0x08ADCCC4u>(ctx, &aot_mem) && ctx.pc == 0x089AE1CCu) goto L_089AE1CC;
    return;
L_089AE1CC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE288;
      }
      goto L_089AE1D8;
    }
L_089AE1D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_089AE204;
    }
    goto L_089AE1E4;
L_089AE1E4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.gpr[31] = (0x089AE1F4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089AE1F4u) goto L_089AE1F4;
    return;
L_089AE1F4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_089AE204;
L_089AE204:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AE288;
      }
      goto L_089AE220;
    }
L_089AE220:
    ctx.gpr[7] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x089AE23Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem) && ctx.pc == 0x089AE23Cu) goto L_089AE23C;
    return;
L_089AE23C:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089AE24Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 183u, 0x08ADC994u>(ctx, &aot_mem) && ctx.pc == 0x089AE24Cu) goto L_089AE24C;
    return;
L_089AE24C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AE258u);
    ctx.gpr[5] = (0u | 58u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089AE258u) goto L_089AE258;
    return;
L_089AE258:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[31] = (0x089AE280u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 222u, 0x089614B0u>(ctx, &aot_mem) && ctx.pc == 0x089AE280u) goto L_089AE280;
    return;
L_089AE280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE4D4;
      }
      goto L_089AE288;
    }
L_089AE288:
    ctx.gpr[31] = (0x089AE290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AE290u) goto L_089AE290;
    return;
L_089AE290:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 197u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(792)));
        goto L_089AE3F4;
    }
    goto L_089AE2A0;
L_089AE2A0:
    ctx.gpr[31] = (0x089AE2A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AE2A8u) goto L_089AE2A8;
    return;
L_089AE2A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 120u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(792)));
        goto L_089AE3F4;
    }
    goto L_089AE2B8;
L_089AE2B8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_089AE2C0;
L_089AE2C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_089AE2EC;
    }
    goto L_089AE2CC;
L_089AE2CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(389));
    ctx.gpr[31] = (0x089AE2DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089AE2DCu) goto L_089AE2DC;
    return;
L_089AE2DC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(389)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_089AE2EC;
L_089AE2EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(214)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE3D0;
      }
      goto L_089AE2FC;
    }
L_089AE2FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
      if (branch_taken) {
          goto L_089AE328;
      }
      goto L_089AE308;
    }
L_089AE308:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(390));
    ctx.gpr[31] = (0x089AE318u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089AE318u) goto L_089AE318;
    return;
L_089AE318:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(390)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    goto L_089AE328;
L_089AE328:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(480)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE3C8;
      }
      goto L_089AE360;
    }
L_089AE360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE388;
      }
      goto L_089AE36C;
    }
L_089AE36C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(391));
    ctx.gpr[31] = (0x089AE37Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089AE37Cu) goto L_089AE37C;
    return;
L_089AE37C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(391)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089AE388;
L_089AE388:
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089AE3ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AE3ACu) goto L_089AE3AC;
    return;
L_089AE3AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089AE3B8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x089AE3B8u) goto L_089AE3B8;
    return;
L_089AE3B8:
    ctx.gpr[31] = (0x089AE3C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 364u, 0x089A9FC8u>(ctx, &aot_mem) && ctx.pc == 0x089AE3C0u) goto L_089AE3C0;
    return;
L_089AE3C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089AE3D0;
      }
      goto L_089AE3C8;
    }
L_089AE3C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089AE2C0;
      }
      goto L_089AE3D0;
    }
L_089AE3D0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE3EC;
      }
      goto L_089AE3D8;
    }
L_089AE3D8:
    ctx.gpr[31] = (0x089AE3E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AE3E0u) goto L_089AE3E0;
    return;
L_089AE3E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089AE3EC;
L_089AE3EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE4D4;
      }
      goto L_089AE3F4;
    }
L_089AE3F4:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(796)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089AE450;
      }
      goto L_089AE434;
    }
L_089AE434:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AE450;
      }
      goto L_089AE448;
    }
L_089AE448:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089AE45C;
      }
      goto L_089AE450;
    }
L_089AE450:
    ctx.gpr[31] = (0x089AE458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089AE458u) goto L_089AE458;
    return;
L_089AE458:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089AE45C;
L_089AE45C:
    ctx.gpr[31] = (0x089AE464u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem) && ctx.pc == 0x089AE464u) goto L_089AE464;
    return;
L_089AE464:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AE47Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 76u, 0x089A8A60u>(ctx, &aot_mem) && ctx.pc == 0x089AE47Cu) goto L_089AE47C;
    return;
L_089AE47C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE4D4;
      }
      goto L_089AE4C0;
    }
L_089AE4C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE4D4;
      }
      goto L_089AE4CC;
    }
L_089AE4CC:
    ctx.gpr[31] = (0x089AE4D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x089AE4D4u) goto L_089AE4D4;
    return;
L_089AE4D4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE4F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[8] = (0u | 60u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089AE780;
      }
      goto L_089AE52C;
    }
L_089AE52C:
    ctx.gpr[31] = (0x089AE534u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 697u, 0x0890EF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE534u) goto L_089AE534;
    return;
L_089AE534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AE560u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x089AE560u) goto L_089AE560;
    return;
L_089AE560:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AE56Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x089AE56Cu) goto L_089AE56C;
    return;
L_089AE56C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AE578u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089AE578u) goto L_089AE578;
    return;
L_089AE578:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AE584u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE584u) goto L_089AE584;
    return;
L_089AE584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_089AE5A8;
      }
      goto L_089AE594;
    }
L_089AE594:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE604;
      }
      goto L_089AE5A0;
    }
L_089AE5A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE5B0;
      }
      goto L_089AE5A8;
    }
L_089AE5A8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE604;
      }
      goto L_089AE5B0;
    }
L_089AE5B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x089AE5C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE5C8u) goto L_089AE5C8;
    return;
L_089AE5C8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    ctx.gpr[4] = (0u | 20u);
      if (branch_taken) {
          goto L_089AE5E8;
      }
      goto L_089AE5D0;
    }
L_089AE5D0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089AE5F4;
      }
      goto L_089AE5D8;
    }
L_089AE5D8:
    ctx.gpr[31] = (0x089AE5E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE5E0u) goto L_089AE5E0;
    return;
L_089AE5E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE5F4;
      }
      goto L_089AE5E8;
    }
L_089AE5E8:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AE5FC;
      }
      goto L_089AE5F4;
    }
L_089AE5F4:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089AE5FC;
L_089AE5FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE60C;
      }
      goto L_089AE604;
    }
L_089AE604:
    ctx.gpr[4] = (ctx.gpr[19] & 65535u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089AE60C;
L_089AE60C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE65C;
      }
      goto L_089AE61C;
    }
L_089AE61C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-497));
      if (branch_taken) {
          goto L_089AE64C;
      }
      goto L_089AE628;
    }
L_089AE628:
    ctx.gpr[31] = (0x089AE630u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE630u) goto L_089AE630;
    return;
L_089AE630:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE64C;
      }
      goto L_089AE638;
    }
L_089AE638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | 208u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AE65C;
      }
      goto L_089AE64C;
    }
L_089AE64C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089AE65C;
L_089AE65C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AE668u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 756u, 0x089AB8B4u>(ctx, &aot_mem) && ctx.pc == 0x089AE668u) goto L_089AE668;
    return;
L_089AE668:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AE674u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089AE674u) goto L_089AE674;
    return;
L_089AE674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE6A4;
      }
      goto L_089AE684;
    }
L_089AE684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE6A4;
      }
      goto L_089AE694;
    }
L_089AE694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE6B8;
      }
      goto L_089AE6A4;
    }
L_089AE6A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AE6B0u);
    ctx.gpr[5] = (0u | 3u);
    goto L_089AFEFC;
L_089AE6B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE6C4;
      }
      goto L_089AE6B8;
    }
L_089AE6B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AE6C4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089AFEFC;
L_089AE6C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AE6D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x089AE6D0u) goto L_089AE6D0;
    return;
L_089AE6D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AE6DCu);
    ctx.gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089AE6DCu) goto L_089AE6DC;
    return;
L_089AE6DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65520u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 20u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089AE72Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x089AE72Cu) goto L_089AE72C;
    return;
L_089AE72C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089AE740u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x089AE740u) goto L_089AE740;
    return;
L_089AE740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE758;
      }
      goto L_089AE74C;
    }
L_089AE74C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AE758u);
    ctx.gpr[5] = (0u | 122u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x089AE758u) goto L_089AE758;
    return;
L_089AE758:
    ctx.gpr[31] = (0x089AE760u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 264u, 0x08910F00u>(ctx, &aot_mem) && ctx.pc == 0x089AE760u) goto L_089AE760;
    return;
L_089AE760:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089AE770u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x089AE770u) goto L_089AE770;
    return;
L_089AE770:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(564)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(564), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089AE780;
L_089AE780:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE7A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x089AE7BCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AE7BCu) goto L_089AE7BC;
    return;
L_089AE7BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE92C;
      }
      goto L_089AE7C4;
    }
L_089AE7C4:
    ctx.gpr[31] = (0x089AE7CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AE7CCu) goto L_089AE7CC;
    return;
L_089AE7CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE818;
      }
      goto L_089AE7DC;
    }
L_089AE7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE818;
      }
      goto L_089AE7F0;
    }
L_089AE7F0:
    ctx.gpr[31] = (0x089AE7F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AE7F8u) goto L_089AE7F8;
    return;
L_089AE7F8:
    ctx.gpr[4] = (16307u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AE844;
      }
      goto L_089AE818;
    }
L_089AE818:
    ctx.gpr[31] = (0x089AE820u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AE820u) goto L_089AE820;
    return;
L_089AE820:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 197u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE860;
      }
      goto L_089AE830;
    }
L_089AE830:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AE83Cu);
    ctx.gpr[5] = (0u | 3u);
    goto L_089AFEFC;
L_089AE83C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE8C4;
      }
      goto L_089AE844;
    }
L_089AE844:
    ctx.gpr[31] = (0x089AE84Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AE84Cu) goto L_089AE84C;
    return;
L_089AE84C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089AE858u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 2u, 0x08928024u>(ctx, &aot_mem) && ctx.pc == 0x089AE858u) goto L_089AE858;
    return;
L_089AE858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEABC;
      }
      goto L_089AE860;
    }
L_089AE860:
    ctx.gpr[31] = (0x089AE868u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AE868u) goto L_089AE868;
    return;
L_089AE868:
    ctx.gpr[4] = (16307u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AE89C;
      }
      goto L_089AE888;
    }
L_089AE888:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AE894u);
    ctx.gpr[5] = (0u | 2u);
    goto L_089AFEFC;
L_089AE894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE8C4;
      }
      goto L_089AE89C;
    }
L_089AE89C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089AE8B8u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x089AE8B8u) goto L_089AE8B8;
    return;
L_089AE8B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AE8C4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089AFEFC;
L_089AE8C4:
    ctx.gpr[31] = (0x089AE8CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 778u, 0x089ABA14u>(ctx, &aot_mem) && ctx.pc == 0x089AE8CCu) goto L_089AE8CC;
    return;
L_089AE8CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AE924;
      }
      goto L_089AE8DC;
    }
L_089AE8DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE924;
      }
      goto L_089AE8E8;
    }
L_089AE8E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AE904u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AE904u) goto L_089AE904;
    return;
L_089AE904:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13332)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AE924u);
    ctx.gpr[6] = (0u | 173u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE924u) goto L_089AE924;
    return;
L_089AE924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEABC;
      }
      goto L_089AE92C;
    }
L_089AE92C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2088), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (17530u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AE94Cu);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x089AE94Cu) goto L_089AE94C;
    return;
L_089AE94C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEA64;
      }
      goto L_089AE958;
    }
L_089AE958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089AE998;
      }
      goto L_089AE968;
    }
L_089AE968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089AE998;
      }
      goto L_089AE978;
    }
L_089AE978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089AE998;
      }
      goto L_089AE988;
    }
L_089AE988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[17] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089AE9DC;
      }
      goto L_089AE998;
    }
L_089AE998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(376));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AE9B4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE9B4u) goto L_089AE9B4;
    return;
L_089AE9B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089AE9C8u);
    ctx.gpr[7] = (0u | 197u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x089AE9C8u) goto L_089AE9C8;
    return;
L_089AE9C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AE9D4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x089AE9D4u) goto L_089AE9D4;
    return;
L_089AE9D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEA64;
      }
      goto L_089AE9DC;
    }
L_089AE9DC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[31] = (0x089AE9E8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x089AE9E8u) goto L_089AE9E8;
    return;
L_089AE9E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AEA00u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 177u, 0x08AF5564u>(ctx, &aot_mem) && ctx.pc == 0x089AEA00u) goto L_089AEA00;
    return;
L_089AEA00:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AEA0Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 181u, 0x08AF55ACu>(ctx, &aot_mem) && ctx.pc == 0x089AEA0Cu) goto L_089AEA0C;
    return;
L_089AEA0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089AEA24;
      }
      goto L_089AEA18;
    }
L_089AEA18:
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089AEA2C;
      }
      goto L_089AEA24;
    }
L_089AEA24:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089AEA2C;
L_089AEA2C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEA64;
      }
      goto L_089AEA3C;
    }
L_089AEA3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEA64;
      }
      goto L_089AEA50;
    }
L_089AEA50:
    ctx.gpr[31] = (0x089AEA58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AEA58u) goto L_089AEA58;
    return;
L_089AEA58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089AEA64;
L_089AEA64:
    ctx.gpr[31] = (0x089AEA6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AEA6Cu) goto L_089AEA6C;
    return;
L_089AEA6C:
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AEA80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32732));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089AEA80u) goto L_089AEA80;
    return;
L_089AEA80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEAB0;
      }
      goto L_089AEA8C;
    }
L_089AEA8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AEAB0;
      }
      goto L_089AEA9C;
    }
L_089AEA9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AEAA8u);
    ctx.gpr[5] = (0u | 3u);
    goto L_089AFEFC;
L_089AEAA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEABC;
      }
      goto L_089AEAB0;
    }
L_089AEAB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AEABCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089AFEFC;
L_089AEABC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AEAD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(563)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[9] | ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(563), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    ctx.gpr[9] = (65535u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(456), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[23] = (0u | 8u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[9] = (0u | 24u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089AEB78;
      }
      goto L_089AEB60;
    }
L_089AEB60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AEB78;
      }
      goto L_089AEB70;
    }
L_089AEB70:
    ctx.gpr[31] = (0x089AEB78u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x089AEB78u) goto L_089AEB78;
    return;
L_089AEB78:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AEB84u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem) && ctx.pc == 0x089AEB84u) goto L_089AEB84;
    return;
L_089AEB84:
    ctx.gpr[4] = (ctx.gpr[17] & 65535u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AEB98u);
    ctx.gpr[5] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089AEB98u) goto L_089AEB98;
    return;
L_089AEB98:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2274)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089AEBDC;
      }
      goto L_089AEBA4;
    }
L_089AEBA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AEBDC;
      }
      goto L_089AEBB4;
    }
L_089AEBB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AEBDC;
      }
      goto L_089AEBC4;
    }
L_089AEBC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089AEBDC;
      }
      goto L_089AEBD0;
    }
L_089AEBD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089AEBDC;
L_089AEBDC:
    ctx.gpr[31] = (0x089AEBE4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x089AEBE4u) goto L_089AEBE4;
    return;
L_089AEBE4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AEBF0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x089AEBF0u) goto L_089AEBF0;
    return;
L_089AEBF0:
    ctx.gpr[31] = (0x089AEBF8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x089AEBF8u) goto L_089AEBF8;
    return;
L_089AEBF8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(562));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AEC2Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x089AEC2Cu) goto L_089AEC2C;
    return;
L_089AEC2C:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AEC54;
      }
      goto L_089AEC48;
    }
L_089AEC48:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_089AEC54;
L_089AEC54:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AEC64;
      }
      goto L_089AEC64;
    }
L_089AEC64:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(800));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(600));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089AED30;
      }
      goto L_089AEC98;
    }
L_089AEC98:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AECCC;
      }
      goto L_089AECA0;
    }
L_089AECA0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089AECACu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 770u, 0x0892738Cu>(ctx, &aot_mem) && ctx.pc == 0x089AECACu) goto L_089AECAC;
    return;
L_089AECAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(563)));
    ctx.gpr[5] = (~(ctx.gpr[16] | 0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(563), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] | 1024u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AEE78;
      }
      goto L_089AECCC;
    }
L_089AECCC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089AECDCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x089AECDCu) goto L_089AECDC;
    return;
L_089AECDC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AECF4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 177u, 0x08AF5564u>(ctx, &aot_mem) && ctx.pc == 0x089AECF4u) goto L_089AECF4;
    return;
L_089AECF4:
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089AED08u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 188u, 0x08AF565Cu>(ctx, &aot_mem) && ctx.pc == 0x089AED08u) goto L_089AED08;
    return;
L_089AED08:
    ctx.gpr[31] = (0x089AED10u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AED10u) goto L_089AED10;
    return;
L_089AED10:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AED24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21496));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089AED24u) goto L_089AED24;
    return;
L_089AED24:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AEE78;
      }
      goto L_089AED30;
    }
L_089AED30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AEDD4;
      }
      goto L_089AED40;
    }
L_089AED40:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089AED4Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 770u, 0x0892738Cu>(ctx, &aot_mem) && ctx.pc == 0x089AED4Cu) goto L_089AED4C;
    return;
L_089AED4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (17096u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089AED94;
      }
      goto L_089AED6C;
    }
L_089AED6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089AED80u);
    ctx.gpr[7] = (0u | 97u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x089AED80u) goto L_089AED80;
    return;
L_089AED80:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AED8Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x089AED8Cu) goto L_089AED8C;
    return;
L_089AED8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(563)));
      if (branch_taken) {
          goto L_089AEDB8;
      }
      goto L_089AED94;
    }
L_089AED94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089AEDA8u);
    ctx.gpr[7] = (0u | 110u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x089AEDA8u) goto L_089AEDA8;
    return;
L_089AEDA8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AEDB4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x089AEDB4u) goto L_089AEDB4;
    return;
L_089AEDB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(563)));
    goto L_089AEDB8;
L_089AEDB8:
    ctx.gpr[5] = (~(ctx.gpr[16] | 0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(563), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] | 1024u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AEE78;
      }
      goto L_089AEDD4;
    }
L_089AEDD4:
    ctx.gpr[31] = (0x089AEDDCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x089AEDDCu) goto L_089AEDDC;
    return;
L_089AEDDC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089AEDFC;
      }
      goto L_089AEDE4;
    }
L_089AEDE4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089AEDF0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 538u, 0x089AAC08u>(ctx, &aot_mem) && ctx.pc == 0x089AEDF0u) goto L_089AEDF0;
    return;
L_089AEDF0:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AEE78;
      }
      goto L_089AEDFC;
    }
L_089AEDFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEE20;
      }
      goto L_089AEE0C;
    }
L_089AEE0C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089AEE18u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 538u, 0x089AAC08u>(ctx, &aot_mem) && ctx.pc == 0x089AEE18u) goto L_089AEE18;
    return;
L_089AEE18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEE78;
      }
      goto L_089AEE20;
    }
L_089AEE20:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x089AEE30u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x089AEE30u) goto L_089AEE30;
    return;
L_089AEE30:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AEE48u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 177u, 0x08AF5564u>(ctx, &aot_mem) && ctx.pc == 0x089AEE48u) goto L_089AEE48;
    return;
L_089AEE48:
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089AEE5Cu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 188u, 0x08AF565Cu>(ctx, &aot_mem) && ctx.pc == 0x089AEE5Cu) goto L_089AEE5C;
    return;
L_089AEE5C:
    ctx.gpr[31] = (0x089AEE64u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AEE64u) goto L_089AEE64;
    return;
L_089AEE64:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AEE78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21496));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089AEE78u) goto L_089AEE78;
    return;
L_089AEE78:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AEEB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x089AEEE8u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089AEEE8u) goto L_089AEEE8;
    return;
L_089AEEE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089AEF10;
      }
      goto L_089AEEF0;
    }
L_089AEEF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    goto L_089AEF10;
L_089AEF10:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089AEF4C;
      }
      goto L_089AEF1C;
    }
L_089AEF1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEF4C;
      }
      goto L_089AEF28;
    }
L_089AEF28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(636)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AEF4C;
      }
      goto L_089AEF48;
    }
L_089AEF48:
    ctx.gpr[4] = (0u | 1u);
    goto L_089AEF4C;
L_089AEF4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEF98;
      }
      goto L_089AEF58;
    }
L_089AEF58:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AEF98;
      }
      goto L_089AEF60;
    }
L_089AEF60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AEF98;
      }
      goto L_089AEF7C;
    }
L_089AEF7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF00C;
      }
      goto L_089AEF98;
    }
L_089AEF98:
    ctx.gpr[31] = (0x089AEFA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089AEFA0u) goto L_089AEFA0;
    return;
L_089AEFA0:
    ctx.gpr[7] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x089AEFBCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem) && ctx.pc == 0x089AEFBCu) goto L_089AEFBC;
    return;
L_089AEFBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF004;
      }
      goto L_089AEFC8;
    }
L_089AEFC8:
    ctx.gpr[31] = (0x089AEFD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089AEFD0u) goto L_089AEFD0;
    return;
L_089AEFD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF004;
      }
      goto L_089AEFD8;
    }
L_089AEFD8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_089AEFF4;
      }
      goto L_089AEFEC;
    }
L_089AEFEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(668)));
    goto L_089AEFF4;
L_089AEFF4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089AF004u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 173u, 0x08ADC8D4u>(ctx, &aot_mem) && ctx.pc == 0x089AF004u) goto L_089AF004;
    return;
L_089AF004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF300;
      }
      goto L_089AF00C;
    }
L_089AF00C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AF020u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x089AF020u) goto L_089AF020;
    return;
L_089AF020:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF04C;
      }
      goto L_089AF04C;
    }
L_089AF04C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AF058u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 296u, 0x08B01088u>(ctx, &aot_mem) && ctx.pc == 0x089AF058u) goto L_089AF058;
    return;
L_089AF058:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF0BC;
      }
      goto L_089AF060;
    }
L_089AF060:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF0BC;
      }
      goto L_089AF06C;
    }
L_089AF06C:
    ctx.gpr[31] = (0x089AF074u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF074u) goto L_089AF074;
    return;
L_089AF074:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF0BC;
      }
      goto L_089AF07C;
    }
L_089AF07C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AF098u);
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF098u) goto L_089AF098;
    return;
L_089AF098:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[31] = (0x089AF0A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF0A4u) goto L_089AF0A4;
    return;
L_089AF0A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AF0BCu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF0BCu) goto L_089AF0BC;
    return;
L_089AF0BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x089AF0D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF0D4u) goto L_089AF0D4;
    return;
L_089AF0D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AF0E0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089AFEFC;
L_089AF0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF100;
      }
      goto L_089AF0F0;
    }
L_089AF0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF300;
      }
      goto L_089AF100;
    }
L_089AF100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF204;
      }
      goto L_089AF114;
    }
L_089AF114:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF204;
      }
      goto L_089AF124;
    }
L_089AF124:
    ctx.gpr[31] = (0x089AF12Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF12Cu) goto L_089AF12C;
    return;
L_089AF12C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF204;
      }
      goto L_089AF134;
    }
L_089AF134:
    ctx.gpr[31] = (0x089AF13Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF13Cu) goto L_089AF13C;
    return;
L_089AF13C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 114u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF164;
      }
      goto L_089AF14C;
    }
L_089AF14C:
    ctx.gpr[31] = (0x089AF154u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF154u) goto L_089AF154;
    return;
L_089AF154:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 115u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF19C;
      }
      goto L_089AF164;
    }
L_089AF164:
    ctx.gpr[31] = (0x089AF16Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF16Cu) goto L_089AF16C;
    return;
L_089AF16C:
    ctx.gpr[4] = (16110u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 62285u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF19C;
      }
      goto L_089AF18C;
    }
L_089AF18C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AF300;
      }
      goto L_089AF19C;
    }
L_089AF19C:
    ctx.gpr[31] = (0x089AF1A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF1A4u) goto L_089AF1A4;
    return;
L_089AF1A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 116u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF1CC;
      }
      goto L_089AF1B4;
    }
L_089AF1B4:
    ctx.gpr[31] = (0x089AF1BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF1BCu) goto L_089AF1BC;
    return;
L_089AF1BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 117u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF300;
      }
      goto L_089AF1CC;
    }
L_089AF1CC:
    ctx.gpr[31] = (0x089AF1D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF1D4u) goto L_089AF1D4;
    return;
L_089AF1D4:
    ctx.gpr[4] = (16110u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 62285u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF300;
      }
      goto L_089AF1F4;
    }
L_089AF1F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AF300;
      }
      goto L_089AF204;
    }
L_089AF204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF300;
      }
      goto L_089AF214;
    }
L_089AF214:
    ctx.gpr[31] = (0x089AF21Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF21Cu) goto L_089AF21C;
    return;
L_089AF21C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF300;
      }
      goto L_089AF224;
    }
L_089AF224:
    ctx.gpr[31] = (0x089AF22Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF22Cu) goto L_089AF22C;
    return;
L_089AF22C:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF300;
      }
      goto L_089AF24C;
    }
L_089AF24C:
    ctx.gpr[31] = (0x089AF254u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF254u) goto L_089AF254;
    return;
L_089AF254:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089AF260u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF260u) goto L_089AF260;
    return;
L_089AF260:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF300;
      }
      goto L_089AF278;
    }
L_089AF278:
    ctx.gpr[31] = (0x089AF280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF280u) goto L_089AF280;
    return;
L_089AF280:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF2B4;
      }
      goto L_089AF290;
    }
L_089AF290:
    ctx.gpr[7] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x089AF2ACu);
    ctx.gpr[6] = (0u | 188u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x089AF2ACu) goto L_089AF2AC;
    return;
L_089AF2AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF300;
      }
      goto L_089AF2B4;
    }
L_089AF2B4:
    ctx.gpr[31] = (0x089AF2BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF2BCu) goto L_089AF2BC;
    return;
L_089AF2BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 118u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF2E4;
      }
      goto L_089AF2CC;
    }
L_089AF2CC:
    ctx.gpr[31] = (0x089AF2D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AF2D4u) goto L_089AF2D4;
    return;
L_089AF2D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 119u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF300;
      }
      goto L_089AF2E4;
    }
L_089AF2E4:
    ctx.gpr[7] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x089AF300u);
    ctx.gpr[6] = (0u | 187u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x089AF300u) goto L_089AF300;
    return;
L_089AF300:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF330:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.gpr[31] = (0x089AF364u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x089AF364u) goto L_089AF364;
    return;
L_089AF364:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089AF380;
      }
      goto L_089AF370;
    }
L_089AF370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF5D4;
      }
      goto L_089AF380;
    }
L_089AF380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF624;
      }
      goto L_089AF390;
    }
L_089AF390:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF3C4;
      }
      goto L_089AF3B4;
    }
L_089AF3B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF624;
      }
      goto L_089AF3C4;
    }
L_089AF3C4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[13])) && ctx.fpr[20] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089AF424;
      }
      goto L_089AF408;
    }
L_089AF408:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089AF428;
    }
    goto L_089AF41C;
L_089AF41C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089AF434;
      }
      goto L_089AF424;
    }
L_089AF424:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089AF428;
L_089AF428:
    ctx.gpr[31] = (0x089AF430u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089AF430u) goto L_089AF430;
    return;
L_089AF430:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089AF434;
L_089AF434:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089AF46C;
      }
      goto L_089AF450;
    }
L_089AF450:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF46C;
      }
      goto L_089AF464;
    }
L_089AF464:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089AF478;
      }
      goto L_089AF46C;
    }
L_089AF46C:
    ctx.gpr[31] = (0x089AF474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089AF474u) goto L_089AF474;
    return;
L_089AF474:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089AF478;
L_089AF478:
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF4AC;
      }
      goto L_089AF498;
    }
L_089AF498:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
      if (branch_taken) {
          goto L_089AF4D8;
      }
      goto L_089AF4AC;
    }
L_089AF4AC:
    ctx.gpr[4] = (49225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF4D8;
      }
      goto L_089AF4C8;
    }
L_089AF4C8:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089AF4D8;
L_089AF4D8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16134u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF5CC;
      }
      goto L_089AF4F8;
    }
L_089AF4F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF5CC;
      }
      goto L_089AF504;
    }
L_089AF504:
    ctx.gpr[31] = (0x089AF50Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF50Cu) goto L_089AF50C;
    return;
L_089AF50C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF53C;
      }
      goto L_089AF514;
    }
L_089AF514:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3156)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF53C;
      }
      goto L_089AF530;
    }
L_089AF530:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF59C;
      }
      goto L_089AF53C;
    }
L_089AF53C:
    ctx.gpr[31] = (0x089AF544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF544u) goto L_089AF544;
    return;
L_089AF544:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
        goto L_089AF590;
    }
    goto L_089AF54C;
L_089AF54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
        goto L_089AF590;
    }
    goto L_089AF55C;
L_089AF55C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
        goto L_089AF590;
    }
    goto L_089AF56C;
L_089AF56C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 66 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
        goto L_089AF590;
    }
    goto L_089AF580;
L_089AF580:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF59C;
      }
      goto L_089AF58C;
    }
L_089AF58C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    goto L_089AF590;
L_089AF590:
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF5CC;
      }
      goto L_089AF59C;
    }
L_089AF59C:
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[31] = (0x089AF5BCu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x089AF5BCu) goto L_089AF5BC;
    return;
L_089AF5BC:
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF8FC;
      }
      goto L_089AF5CC;
    }
L_089AF5CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF624;
      }
      goto L_089AF5D4;
    }
L_089AF5D4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF624;
      }
      goto L_089AF5E4;
    }
L_089AF5E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF624;
      }
      goto L_089AF5F0;
    }
L_089AF5F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF624;
      }
      goto L_089AF600;
    }
L_089AF600:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF624;
      }
      goto L_089AF610;
    }
L_089AF610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089AF620u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF620u) goto L_089AF620;
    return;
L_089AF620:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_089AF624;
L_089AF624:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x089AF638u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x089AF638u) goto L_089AF638;
    return;
L_089AF638:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x089AF658u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x089AF658u) goto L_089AF658;
    return;
L_089AF658:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AF750;
      }
      goto L_089AF6C8;
    }
L_089AF6C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AF6E8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF6E8u) goto L_089AF6E8;
    return;
L_089AF6E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF70C;
      }
      goto L_089AF6F0;
    }
L_089AF6F0:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF8FC;
      }
      goto L_089AF70C;
    }
L_089AF70C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AF72Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF72Cu) goto L_089AF72C;
    return;
L_089AF72C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF8FC;
      }
      goto L_089AF734;
    }
L_089AF734:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF8FC;
      }
      goto L_089AF750;
    }
L_089AF750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AF770u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF770u) goto L_089AF770;
    return;
L_089AF770:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF8C0;
      }
      goto L_089AF778;
    }
L_089AF778:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AF784u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF784u) goto L_089AF784;
    return;
L_089AF784:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF850;
      }
      goto L_089AF78C;
    }
L_089AF78C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF850;
      }
      goto L_089AF79C;
    }
L_089AF79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF850;
      }
      goto L_089AF7AC;
    }
L_089AF7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089AF850;
      }
      goto L_089AF7BC;
    }
L_089AF7BC:
    ctx.gpr[31] = (0x089AF7C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF7C4u) goto L_089AF7C4;
    return;
L_089AF7C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089AF80C;
      }
      goto L_089AF7D0;
    }
L_089AF7D0:
    ctx.gpr[31] = (0x089AF7D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF7D8u) goto L_089AF7D8;
    return;
L_089AF7D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
        goto L_089AF810;
    }
    goto L_089AF7EC;
L_089AF7EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF850;
      }
      goto L_089AF7FC;
    }
L_089AF7FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF850;
      }
      goto L_089AF80C;
    }
L_089AF80C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    goto L_089AF810;
L_089AF810:
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AF82Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF82Cu) goto L_089AF82C;
    return;
L_089AF82C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF850;
      }
      goto L_089AF834;
    }
L_089AF834:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF8FC;
      }
      goto L_089AF850;
    }
L_089AF850:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF8A4;
      }
      goto L_089AF860;
    }
L_089AF860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AF880u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF880u) goto L_089AF880;
    return;
L_089AF880:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF8A4;
      }
      goto L_089AF888;
    }
L_089AF888:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF8FC;
      }
      goto L_089AF8A4;
    }
L_089AF8A4:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF8FC;
      }
      goto L_089AF8C0;
    }
L_089AF8C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AF8E0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF8E0u) goto L_089AF8E0;
    return;
L_089AF8E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF8FC;
      }
      goto L_089AF8E8;
    }
L_089AF8E8:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    goto L_089AF8FC;
L_089AF8FC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF91C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089AF96C;
      }
      goto L_089AF95C;
    }
L_089AF95C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089AF96C;
L_089AF96C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 246u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 194u);
      if (branch_taken) {
          goto L_089AF9C4;
      }
      goto L_089AF97C;
    }
L_089AF97C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-966));
      if (branch_taken) {
          goto L_089AF9CC;
      }
      goto L_089AF984;
    }
L_089AF984:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF994;
      }
      goto L_089AF98C;
    }
L_089AF98C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (17529u << 16u);
      if (branch_taken) {
          goto L_089AFA60;
      }
      goto L_089AF994;
    }
L_089AF994:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x089AF9B4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x089AF9B4u) goto L_089AF9B4;
    return;
L_089AF9B4:
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
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089AFEDC;
      }
      goto L_089AF9C4;
    }
L_089AF9C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (17529u << 16u);
      if (branch_taken) {
          goto L_089AFA60;
      }
      goto L_089AF9CC;
    }
L_089AF9CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089AFA58;
      }
      goto L_089AF9E0;
    }
L_089AF9E0:
    ctx.gpr[31] = (0x089AF9E8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF9E8u) goto L_089AF9E8;
    return;
L_089AF9E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFA58;
      }
      goto L_089AF9F0;
    }
L_089AF9F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFA58;
      }
      goto L_089AFA00;
    }
L_089AFA00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AFA20u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AFA20u) goto L_089AFA20;
    return;
L_089AFA20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFA58;
      }
      goto L_089AFA28;
    }
L_089AFA28:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x089AFA48u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x089AFA48u) goto L_089AFA48;
    return;
L_089AFA48:
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
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089AFEDC;
      }
      goto L_089AFA58;
    }
L_089AFA58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089AFEDC;
      }
      goto L_089AFA60;
    }
L_089AFA60:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089AFA90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x089AFA90u) goto L_089AFA90;
    return;
L_089AFA90:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089AFBD4;
      }
      goto L_089AFA9C;
    }
L_089AFA9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AFAA8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AFAA8u) goto L_089AFAA8;
    return;
L_089AFAA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFB34;
      }
      goto L_089AFAB0;
    }
L_089AFAB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFB34;
      }
      goto L_089AFAC0;
    }
L_089AFAC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AFAE0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AFAE0u) goto L_089AFAE0;
    return;
L_089AFAE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFB34;
      }
      goto L_089AFAE8;
    }
L_089AFAE8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[31] = (0x089AFB00u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x089AFB00u) goto L_089AFB00;
    return;
L_089AFB00:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (0u | 1u);
    goto L_089AFB34;
L_089AFB34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AFB40u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AFB40u) goto L_089AFB40;
    return;
L_089AFB40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFC98;
      }
      goto L_089AFB48;
    }
L_089AFB48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFC98;
      }
      goto L_089AFB58;
    }
L_089AFB58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AFB78u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AFB78u) goto L_089AFB78;
    return;
L_089AFB78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFC98;
      }
      goto L_089AFB80;
    }
L_089AFB80:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x089AFB98u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x089AFB98u) goto L_089AFB98;
    return;
L_089AFB98:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFC98;
      }
      goto L_089AFBD4;
    }
L_089AFBD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089AFC98;
      }
      goto L_089AFBE8;
    }
L_089AFBE8:
    ctx.gpr[31] = (0x089AFBF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AFBF0u) goto L_089AFBF0;
    return;
L_089AFBF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFC98;
      }
      goto L_089AFBF8;
    }
L_089AFBF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFC98;
      }
      goto L_089AFC08;
    }
L_089AFC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AFC28u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AFC28u) goto L_089AFC28;
    return;
L_089AFC28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFC98;
      }
      goto L_089AFC30;
    }
L_089AFC30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFC98;
      }
      goto L_089AFC4C;
    }
L_089AFC4C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x089AFC64u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x089AFC64u) goto L_089AFC64;
    return;
L_089AFC64:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (0u | 1u);
    goto L_089AFC98;
L_089AFC98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFDFC;
      }
      goto L_089AFCAC;
    }
L_089AFCAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(628))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AFDFC;
      }
      goto L_089AFCBC;
    }
L_089AFCBC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AFCC8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AFCC8u) goto L_089AFCC8;
    return;
L_089AFCC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFD54;
      }
      goto L_089AFCD0;
    }
L_089AFCD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFD54;
      }
      goto L_089AFCE0;
    }
L_089AFCE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AFD00u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AFD00u) goto L_089AFD00;
    return;
L_089AFD00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFD54;
      }
      goto L_089AFD08;
    }
L_089AFD08:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[31] = (0x089AFD20u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x089AFD20u) goto L_089AFD20;
    return;
L_089AFD20:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (0u | 1u);
    goto L_089AFD54;
L_089AFD54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089AFD60u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AFD60u) goto L_089AFD60;
    return;
L_089AFD60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFDEC;
      }
      goto L_089AFD68;
    }
L_089AFD68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFDEC;
      }
      goto L_089AFD78;
    }
L_089AFD78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089AFD98u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AFD98u) goto L_089AFD98;
    return;
L_089AFD98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFDEC;
      }
      goto L_089AFDA0;
    }
L_089AFDA0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x089AFDB8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x089AFDB8u) goto L_089AFDB8;
    return;
L_089AFDB8:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (0u | 1u);
    goto L_089AFDEC;
L_089AFDEC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFDFC;
      }
      goto L_089AFDF4;
    }
L_089AFDF4:
    ctx.gpr[31] = (0x089AFDFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 400u, 0x08B05DC8u>(ctx, &aot_mem) && ctx.pc == 0x089AFDFCu) goto L_089AFDFC;
    return;
L_089AFDFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_089AFE80;
    }
    goto L_089AFE58;
L_089AFE58:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_089AFE80;
L_089AFE80:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AFED8;
      }
      goto L_089AFEB4;
    }
L_089AFEB4:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    goto L_089AFED8;
L_089AFED8:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    goto L_089AFEDC;
L_089AFEDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFEFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[20]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[31]);
    ctx.gpr[31] = (0x089AFF50u);
    ctx.gpr[21] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AFF50u) goto L_089AFF50;
    return;
L_089AFF50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 7u, 0x089B0074u>(ctx, &aot_mem); return;
      }
      goto L_089AFF58;
    }
L_089AFF58:
    ctx.gpr[31] = (0x089AFF60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089AFF60u) goto L_089AFF60;
    return;
L_089AFF60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 412u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 7u, 0x089B0074u>(ctx, &aot_mem); return;
      }
      goto L_089AFF70;
    }
L_089AFF70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089AFF98;
      }
      goto L_089AFF88;
    }
L_089AFF88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089AFF98;
L_089AFF98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
        goto L_089AFFB0;
    }
    goto L_089AFFA8;
L_089AFFA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089AFFC4;
      }
      goto L_089AFFB0;
    }
L_089AFFB0:
    ctx.gpr[6] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
        goto L_089AFFC4;
    }
    goto L_089AFFBC;
L_089AFFBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089AFFC4;
      }
      goto L_089AFFC4;
    }
L_089AFFC4:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x089B0000u; return;
}

void recomp_unit_0106(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0106_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_106(Runtime &runtime) {
    runtime.register_generated_unit(106u, 0x089AC000u, 16384u, &recomp_unit_0106, &recomp_unit_0106_entry);
    runtime.register_function(0x089AC000u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC010u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC018u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC028u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC030u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC054u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC064u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC070u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC088u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC0A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC0D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC0E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC0ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC0FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC108u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC118u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC120u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC130u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC144u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC154u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC164u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC16Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC17Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC184u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC228u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC234u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC240u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC250u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC25Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC26Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC274u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC288u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC298u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC2A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC2B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC2C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC2C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC2ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC2FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC308u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC320u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC340u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC368u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC378u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC388u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC3A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC3B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC3C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC3C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC3D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC3E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC410u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC41Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC42Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC438u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC448u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC4D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC4ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC56Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC574u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC584u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC590u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC598u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC5A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC5E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC5ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC5FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC608u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC610u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC618u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC628u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC634u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC63Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC644u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC664u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC700u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC708u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC720u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC724u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC72Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC738u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC740u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC748u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC758u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC76Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC778u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC798u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC7A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC7B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC7C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC7D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC7F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC810u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC824u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC834u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC844u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC854u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC858u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC85Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC864u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC86Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC878u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC880u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC888u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC890u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC89Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC908u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC910u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC918u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC924u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC92Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC934u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC948u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC954u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC95Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC968u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC970u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC974u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC97Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC990u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA08u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA1Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA2Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA34u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA3Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA90u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACAA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACAD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACAD4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACADCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACAF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACAF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB30u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB40u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB50u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB74u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB84u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB8Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB94u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBC0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBC8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBD8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBFCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC0Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC1Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC24u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC34u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC40u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC4Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC54u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC74u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC8Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC90u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACCA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACCB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACCC4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACCCCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACCD4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACCDCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACCE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACCF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD18u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD2Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD34u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD3Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD4Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD5Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD90u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDB8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDFCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE04u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE0Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE14u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE24u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE4Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE50u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE5Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE70u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACEA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACEB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACEBCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACEC4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACECCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACEE4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACEECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF30u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF4Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF54u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF5Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF68u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF70u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF94u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACFA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACFA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACFB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACFC0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACFCCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACFE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACFF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD008u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD01Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD024u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD02Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD034u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD04Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD054u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD060u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD068u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD074u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD080u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD09Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD0B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD0BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD0C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD0E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD0F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD104u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD114u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD120u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD128u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD13Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD144u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD14Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD154u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD15Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD164u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD170u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD178u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD184u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD18Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD1A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD1B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD1B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD1CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD1D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD1E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD1F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD1FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD210u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD218u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD220u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD234u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD238u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD240u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD264u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD274u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD27Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD288u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD290u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD298u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD2ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD2BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD2F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD32Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD334u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD33Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD344u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD358u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD360u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD36Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD378u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD394u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD3A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD3BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD3C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD3D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD3E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD3F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD408u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD418u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD428u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD42Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD430u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD438u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD450u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD458u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD464u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD46Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD478u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD480u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD49Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD4A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD4C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD4D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD4E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD4F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD50Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD518u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD52Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD534u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD548u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD550u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD55Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD564u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD570u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD58Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD598u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD5B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD5B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD5C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD5E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD5F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD5F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD604u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD60Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD624u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD630u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD638u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD64Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD658u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD660u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD66Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD67Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD690u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD728u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD738u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD74Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD754u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD75Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD764u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD774u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD784u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD794u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD7B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD7B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD7C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD7D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD800u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD828u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD854u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD860u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD868u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD870u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD8B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD8E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD914u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD920u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD930u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD940u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD954u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD97Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA94u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAC4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAD8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB04u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB68u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADBA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADBACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADBC8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADBF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC14u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC50u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC5Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC68u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC74u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADCACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADCB8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD14u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD1Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD30u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD50u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD70u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD94u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDC4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDFCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE08u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADEACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADEB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADEC0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADED0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADEDCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADEECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADEFCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF40u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADFACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADFB8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADFD8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADFECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADFF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE000u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE014u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE01Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE02Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE03Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE058u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE060u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE068u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE074u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE084u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE094u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE0A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE0B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE0BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE0CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE0D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE0F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE100u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE10Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE120u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE128u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE138u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE148u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE150u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE158u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE160u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE170u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE17Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE184u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE188u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE194u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE1A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE1A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE1B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE1CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE1D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE1E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE1F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE204u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE220u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE23Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE24Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE258u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE280u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE288u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE290u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE308u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE318u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE328u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE360u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE36Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE37Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE388u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE434u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE448u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE450u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE458u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE45Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE464u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE47Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE4C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE4CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE4D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE4F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE52Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE534u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE560u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE56Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE578u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE584u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE594u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE604u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE60Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE61Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE628u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE630u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE638u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE64Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE65Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE668u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE674u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE684u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE694u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE72Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE740u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE74Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE758u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE760u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE770u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE780u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE818u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE820u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE830u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE83Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE844u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE84Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE858u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE860u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE868u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE888u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE894u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE89Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE8B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE8C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE8CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE8DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE8E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE904u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE924u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE92Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE94Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE958u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE968u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE978u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE988u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE998u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA0Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA18u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA24u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA2Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA3Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA50u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA8Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEAA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEAB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEABCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEAD4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEB60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEB70u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEB78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEB84u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEB98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEBA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEBB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEBC4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEBD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEBDCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEBE4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEBF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEBF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC2Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC54u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AECA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AECACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AECCCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AECDCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AECF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED08u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED24u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED30u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED40u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED4Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED8Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED94u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDB8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDD4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDDCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDE4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDFCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE0Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE18u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE30u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE5Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEEB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEEE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEEF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF1Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF4Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEFA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEFBCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEFC8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEFD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEFD8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEFECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEFF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF004u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF00Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF020u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF04Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF058u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF060u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF06Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF074u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF07Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF098u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF0A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF0BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF0D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF0E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF0F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF100u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF114u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF124u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF12Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF134u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF13Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF14Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF154u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF164u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF16Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF18Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF19Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF204u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF214u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF21Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF224u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF22Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF24Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF254u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF260u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF278u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF280u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF290u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF300u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF330u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF364u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF370u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF380u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF390u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF3B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF3C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF408u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF41Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF424u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF428u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF430u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF434u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF450u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF464u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF46Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF474u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF478u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF498u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF4ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF4C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF4D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF4F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF504u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF50Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF514u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF530u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF53Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF544u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF54Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF55Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF56Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF580u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF58Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF590u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF59Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF5BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF5CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF5D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF5E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF5F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF600u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF610u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF620u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF624u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF638u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF658u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF6C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF6E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF6F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF70Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF72Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF734u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF750u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF770u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF778u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF784u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF78Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF79Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF7ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF7BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF7C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF7D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF7D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF7ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF7FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF80Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF810u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF82Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF834u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF850u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF860u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF880u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF888u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF8A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF8C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF8E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF8E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF8FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF91Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF95Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF96Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF97Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF984u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF98Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF994u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF9B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF9C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF9CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF9E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF9E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF9F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA90u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFAA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFAB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFAC0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFAE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFAE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB34u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB40u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFBD4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFBE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFBF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFBF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC08u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC30u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC4Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCBCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCC8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD08u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD54u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD68u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFDA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFDB8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFDECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFDF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFDFCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFEB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFED8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFEDCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFEFCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF50u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF70u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFFA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFFB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFFBCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFFC4u, &recomp_unit_0106, "recomp_unit_0106");
}
} // namespace psprecomp
