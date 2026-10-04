#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0172[4094] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 12, 0, 13, 0, 14,
    0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0,
    19, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 27, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0, 0, 35,
    0, 0, 36, 0, 37, 0, 38, 0, 39, 40, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0,
    0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 58, 0, 0, 0, 0, 0, 59, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 72, 73, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0,
    77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 83, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 91, 92, 0, 0, 93, 0,
    0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 104, 0, 0, 0, 0, 105, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0,
    113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 119,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 148, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0,
    155, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 201, 202, 0, 0, 203, 0, 0,
    0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0,
    210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 0, 218,
    0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0,
    227, 0, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 0, 241,
    0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 249, 0, 250, 0, 251, 0, 252,
    0, 253, 0, 254, 0, 0, 255, 0, 256, 0, 257, 0, 258, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267,
    0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 0, 0, 278, 0, 279, 0, 280, 0, 0, 281, 0,
    282, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 287, 288, 0, 289, 0, 0, 290, 0, 291, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294,
    0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 300, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0,
    0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0,
    0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319,
    0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335,
    0, 336, 0, 0, 337, 0, 0, 0, 0, 338, 0, 339, 340, 0, 0, 341, 0, 342, 343, 0, 0, 344, 0, 345, 346, 0, 0, 347, 0, 348, 349, 0,
    0, 350, 0, 351, 352, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    359, 0, 0, 360, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0,
    371, 0, 372, 0, 373, 0, 374, 0, 0, 375, 0, 0, 0, 376, 0, 377, 378, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 382, 383, 0, 384, 0,
    385, 0, 386, 0, 0, 387, 0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 393, 0, 0, 394, 0, 395, 0, 0, 0,
    396, 0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 0, 405, 0, 406,
    0, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 412, 413, 0, 414, 0, 0, 415, 0, 416, 417, 0, 418, 0, 0, 419,
    0, 420, 0, 0, 421, 0, 0, 422, 0, 423, 0, 0, 424, 0, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0,
    0, 431, 0, 432, 0, 0, 0, 433, 0, 434, 0, 435, 0, 0, 436, 0, 0, 437, 0, 438, 439, 0, 440, 0, 0, 441, 0, 0, 0, 442, 0, 443,
    444, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 448, 0, 449, 0, 450, 451, 452, 0, 453, 0, 454, 0, 455, 0, 0, 0,
    456, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 462, 0, 463, 0, 0, 464, 0, 0, 465,
    0, 466, 0, 0, 467, 0, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0,
    473, 0, 0, 474, 0, 0, 475, 0, 0, 0, 476, 0, 477, 0, 478, 0, 0, 479, 0, 0, 480, 0, 481, 0, 0, 482, 0, 0, 0, 483, 484, 0,
    0, 485, 0, 0, 0, 486, 0, 487, 488, 0, 489, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0,
    494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0,
    0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0,
    507, 0, 508, 0, 509, 0, 510, 0, 0, 511, 0, 512, 513, 0, 0, 514, 0, 515, 516, 0, 0, 517, 0, 518, 519, 0, 0, 520, 0, 521, 522, 0,
    523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 0, 529,
    0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0,
    0, 539, 0, 540, 0, 541, 0, 0, 542, 0, 543, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 0, 549,
    0, 0, 550, 0, 551, 0, 0, 0, 552, 0, 553, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 558, 0, 0, 0, 559,
    0, 0, 560, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 564, 0, 565, 0, 566, 0, 0, 567, 0, 568, 0, 569, 0, 570, 571, 0,
    0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0,
    576, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 580, 0, 581, 0, 0, 0, 582, 0, 583, 0, 0, 584, 0, 585, 0, 0, 586, 0, 587, 0, 588,
    0, 589, 0, 590, 0, 591, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0,
    0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0,
    598, 0, 0, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 0, 606, 0, 607, 0, 608, 0, 0, 0, 0, 0, 609, 0, 610,
    0, 0, 611, 0, 612, 0, 613, 0, 0, 614, 0, 615, 0, 616, 0, 0, 617, 0, 0, 618, 0, 619, 0, 620, 0, 0, 0, 0, 621, 0, 0, 622,
    0, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 626, 0, 627, 628, 0, 629, 0, 630, 0, 631, 0, 632, 0, 633, 0, 0, 0, 634, 0, 635, 0,
    0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 639, 0, 640, 0, 0, 641, 0, 0, 642, 0, 0,
    0, 0, 0, 0, 0, 643, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 646, 0, 647, 0, 648, 0, 649, 0, 0, 650, 0, 651, 0, 0, 652, 0,
    653, 0, 0, 0, 654, 0, 655, 0, 656, 657, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 660, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 662, 0, 663, 0, 664, 0, 0, 0, 665, 0, 666, 0, 667, 0, 0, 0, 668, 0, 669, 0, 670, 0, 0, 0, 671, 0, 672, 0, 673, 0, 0,
    0, 0, 0, 674, 0, 675, 0, 676, 0, 0, 0, 677, 0, 678, 0, 679, 0, 0, 0, 680, 0, 681, 0, 682, 0, 0, 0, 683, 0, 684, 0, 685,
    0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 689, 0, 0, 0, 690, 0, 691, 0, 692, 0, 0, 0, 0, 693, 0,
    694, 0, 695, 0, 0, 0, 0, 696, 0, 697, 0, 698, 0, 0, 0, 0, 0, 0, 699, 0, 700, 0, 701, 0, 0, 0, 702, 0, 703, 0, 704, 0,
    0, 0, 705, 0, 706, 707, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 710, 0, 0, 0, 0, 0, 0, 0, 711, 0, 712, 713, 0, 0, 0, 0,
    0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 716, 717, 0,
    718, 0, 0, 719, 0, 720, 721, 0, 0, 0, 722, 0, 0, 723, 0, 724, 725, 0, 0, 0, 726, 0, 0, 727, 0, 728, 729, 0, 0, 730, 0, 0,
    0, 731, 0, 732, 0, 0, 733, 0, 0, 734, 0, 735, 736, 0, 737, 0, 0, 738, 0, 739, 740, 0, 741, 0, 0, 742, 0, 743, 744, 0, 745, 0,
    0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 749, 750, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 753,
    754, 0, 755, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 758, 0, 0, 759, 0, 760, 0, 761, 0, 762, 0, 0, 763, 0, 764, 765,
    0, 766, 0, 767, 0, 0, 768, 0, 769, 770, 0, 771, 0, 0, 772, 0, 0, 773, 0, 774, 0, 775, 0, 776, 0, 0, 777, 0, 778, 779, 0, 780,
    0, 0, 781, 0, 782, 783, 0, 784, 0, 785, 0, 0, 786, 0, 787, 788, 0, 789, 0, 0, 790, 0, 791, 792, 0, 793, 0, 794, 0, 0, 795, 0,
    0, 796, 0, 797, 798, 0, 799, 0, 0, 800, 0, 801, 802, 0, 803, 0, 0, 804, 0, 805, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 809, 0,
    0, 810, 0, 0, 811, 0, 0, 0, 812, 0, 0, 813, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 817, 0, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 822, 0, 0, 0, 823, 0,
    0, 0, 824, 0, 825, 0, 826, 0, 0, 0, 0, 0, 0, 827, 0, 0, 828, 0, 0, 829, 0, 830, 831, 832, 0, 0, 0, 0, 833, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 836, 0, 837, 0, 0, 838, 0, 839, 0, 840, 0, 0, 841, 0,
    0, 842, 0, 0, 843, 0, 844, 845, 846, 0, 0, 0, 0, 847, 0, 0, 848, 0, 0, 849, 0, 0, 850, 0, 0, 851, 0, 852, 853, 0, 854, 0,
    0, 0, 855, 0, 0, 856, 0, 0, 857, 0, 0, 858, 0, 0, 859, 0, 860, 861, 862, 0, 0, 0, 0, 863, 0, 0, 864, 0, 0, 0, 0, 0,
    0, 865, 0, 866, 0, 867, 0, 0, 868, 0, 0, 869, 0, 870, 871, 0, 872, 0, 0, 0, 873, 0, 874, 0, 875, 0, 0, 876, 0, 0, 877, 0,
    878, 879, 0, 880, 0, 0, 0, 881, 882, 0, 883, 0, 0, 884, 0, 0, 885, 0, 886, 887, 0, 888, 0, 0, 0, 889, 0, 0, 890, 0, 0, 891,
    0, 0, 892, 0, 893, 894, 0, 895, 0, 0, 0, 896, 0, 0, 897, 0, 898, 0, 899, 0, 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 901, 0, 902, 0, 0, 0, 0, 0, 903, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 904, 0, 905, 0, 906, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 0, 0, 0, 0, 0, 908, 0, 0, 0, 0, 0, 909, 0, 910, 0,
    911, 0, 912, 0, 913, 0, 914, 0, 915, 0, 0, 916, 0, 917, 0, 918, 0, 0, 0, 919, 0, 0, 0, 920, 0, 0, 921, 0, 922, 0, 0, 923,
    0, 0, 0, 0, 0, 924, 0, 0, 925, 0, 0, 0, 0, 926, 0, 0, 927, 0, 0, 928, 0, 0, 929, 0, 0, 930, 0, 0, 0, 931, 0, 0,
    0, 932, 0, 933, 0, 0, 934, 0, 935, 0, 0, 0, 936, 0, 0, 0, 937, 0, 938, 0, 0, 939, 0, 940, 0, 0, 941, 0, 0, 942, 0, 0,
    943, 0, 944, 0, 945, 0, 0, 0, 0, 0, 946, 947, 0, 0, 0, 948, 0, 0, 949, 0, 0, 950, 0, 0, 0, 0, 0, 951, 0, 0, 0, 0,
    0, 0, 952, 0, 0, 953, 0, 954, 0, 955, 0, 0, 956, 0, 0, 957, 0, 0, 958, 0, 0, 959, 0, 0, 0, 0, 960, 0, 961, 0, 0, 0,
    962, 0, 963, 0, 0, 0, 0, 0, 0, 0, 0, 964, 0, 0, 0, 965, 0, 966, 967, 0, 968, 0, 969, 0, 0, 0, 970, 0, 971, 0, 0, 0,
    0, 0, 0, 0, 0, 972, 0, 0, 0, 973, 0, 974, 975, 0, 976, 977, 0, 978, 0, 0, 979, 0, 980, 0, 981, 0, 0, 982, 0, 0, 983, 0,
    984, 0, 985, 0, 0, 0, 0, 0, 0, 0, 0, 986, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 987, 0, 0, 0, 988, 0, 0,
    989, 0, 0, 0, 990, 0, 0, 991, 0, 992, 0, 993, 0, 994, 0, 995, 0, 996, 0, 997, 0, 998, 0, 999, 1000, 0, 0, 0, 0, 0, 0, 1001,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1002, 0, 0, 0, 0, 1003, 0, 1004, 0, 0, 0, 0, 1005, 0, 0, 1006, 0, 0, 0, 0,
    0, 1007, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1008, 0, 0, 0, 1009, 0, 0, 0, 1010, 0, 0, 0, 1011, 0, 0, 0, 1012, 0, 0,
    0, 1013, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014, 0, 0, 0, 0, 1015, 0, 0, 0, 1016, 0, 0, 0, 1017, 0, 0, 0, 0,
    1018, 0, 0, 0, 0, 0, 0, 0, 1019, 0, 1020, 0, 0, 0, 0, 0, 0, 0, 1021, 0, 1022, 0, 0, 0, 0, 1023, 0, 1024, 0, 0, 0, 0,
    1025, 0, 0, 1026, 0, 1027, 0, 1028, 0, 0, 0, 0, 1029, 0, 1030, 0, 0, 1031, 0, 0, 1032, 0, 0, 1033, 0, 1034, 1035, 0, 1036, 0, 0, 0,
    0, 1037, 0, 0, 1038, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1039, 0, 1040, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1041, 0, 1042, 0,
    0, 0, 0, 1043, 0, 1044, 0, 0, 0, 0, 1045, 0, 0, 1046, 0, 1047, 0, 1048, 0, 0, 0, 0, 1049, 0, 1050, 0, 0, 1051, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1052, 0, 1053, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1054, 0, 1055, 0, 0, 0, 0, 1056, 0, 1057, 0, 0, 0,
    0, 1058, 0, 0, 1059, 0, 1060, 0, 1061, 0, 0, 0, 0, 1062, 0, 1063, 0, 0, 1064, 0, 0, 0, 0, 0, 0, 1065, 0, 1066, 0, 0, 0, 0,
    0, 0, 1067, 0, 1068, 0, 0, 0, 0, 1069, 0, 1070, 0, 0, 0, 0, 1071, 0, 0, 1072, 0, 1073, 0, 1074, 0, 0, 0, 0, 1075, 0, 1076, 0,
    0, 1077, 0, 0, 0, 0, 0, 0, 1078, 0, 1079, 0, 0, 0, 0, 0, 0, 1080, 0, 1081, 0, 0, 0, 0, 1082, 0, 1083, 0, 0, 0, 0, 1084,
    0, 0, 1085, 0, 1086, 0, 1087, 0, 0, 0, 0, 1088, 0, 1089, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1090, 0, 1091, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1092, 0, 0, 0, 1093, 0, 0, 0, 1094,
    0, 0, 0, 1095, 0, 0, 0, 1096, 0, 0, 0, 1097, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1098, 0, 0, 0, 0, 1099,
};
void recomp_unit_0172_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AB4000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0172[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AB4000;
    case 2u: goto L_08AB400C;
    case 3u: goto L_08AB401C;
    case 4u: goto L_08AB4024;
    case 5u: goto L_08AB4034;
    case 6u: goto L_08AB4040;
    case 7u: goto L_08AB4048;
    case 8u: goto L_08AB4050;
    case 9u: goto L_08AB4058;
    case 10u: goto L_08AB4060;
    case 11u: goto L_08AB4068;
    case 12u: goto L_08AB406C;
    case 13u: goto L_08AB4074;
    case 14u: goto L_08AB407C;
    case 15u: goto L_08AB4090;
    case 16u: goto L_08AB4098;
    case 17u: goto L_08AB40DC;
    case 18u: goto L_08AB40E8;
    case 19u: goto L_08AB4100;
    case 20u: goto L_08AB410C;
    case 21u: goto L_08AB4114;
    case 22u: goto L_08AB411C;
    case 23u: goto L_08AB4130;
    case 24u: goto L_08AB4154;
    case 25u: goto L_08AB4158;
    case 26u: goto L_08AB4168;
    case 27u: goto L_08AB4198;
    case 28u: goto L_08AB419C;
    case 29u: goto L_08AB41B0;
    case 30u: goto L_08AB41B8;
    case 31u: goto L_08AB41D0;
    case 32u: goto L_08AB41DC;
    case 33u: goto L_08AB41E4;
    case 34u: goto L_08AB41F0;
    case 35u: goto L_08AB41FC;
    case 36u: goto L_08AB4208;
    case 37u: goto L_08AB4210;
    case 38u: goto L_08AB4218;
    case 39u: goto L_08AB4220;
    case 40u: goto L_08AB4224;
    case 41u: goto L_08AB422C;
    case 42u: goto L_08AB423C;
    case 43u: goto L_08AB4248;
    case 44u: goto L_08AB4250;
    case 45u: goto L_08AB425C;
    case 46u: goto L_08AB426C;
    case 47u: goto L_08AB4274;
    case 48u: goto L_08AB4298;
    case 49u: goto L_08AB429C;
    case 50u: goto L_08AB42A4;
    case 51u: goto L_08AB42CC;
    case 52u: goto L_08AB42D4;
    case 53u: goto L_08AB42E4;
    case 54u: goto L_08AB42F0;
    case 55u: goto L_08AB4308;
    case 56u: goto L_08AB4314;
    case 57u: goto L_08AB4328;
    case 58u: goto L_08AB432C;
    case 59u: goto L_08AB4344;
    case 60u: goto L_08AB4348;
    case 61u: goto L_08AB435C;
    case 62u: goto L_08AB437C;
    case 63u: goto L_08AB43BC;
    case 64u: goto L_08AB43D4;
    case 65u: goto L_08AB43DC;
    case 66u: goto L_08AB43E4;
    case 67u: goto L_08AB4414;
    case 68u: goto L_08AB441C;
    case 69u: goto L_08AB442C;
    case 70u: goto L_08AB4434;
    case 71u: goto L_08AB4448;
    case 72u: goto L_08AB4450;
    case 73u: goto L_08AB4454;
    case 74u: goto L_08AB445C;
    case 75u: goto L_08AB4468;
    case 76u: goto L_08AB4474;
    case 77u: goto L_08AB4480;
    case 78u: goto L_08AB448C;
    case 79u: goto L_08AB4498;
    case 80u: goto L_08AB44A4;
    case 81u: goto L_08AB44B0;
    case 82u: goto L_08AB44E8;
    case 83u: goto L_08AB44EC;
    case 84u: goto L_08AB4500;
    case 85u: goto L_08AB4514;
    case 86u: goto L_08AB452C;
    case 87u: goto L_08AB4534;
    case 88u: goto L_08AB4544;
    case 89u: goto L_08AB454C;
    case 90u: goto L_08AB4560;
    case 91u: goto L_08AB4568;
    case 92u: goto L_08AB456C;
    case 93u: goto L_08AB4578;
    case 94u: goto L_08AB4588;
    case 95u: goto L_08AB4598;
    case 96u: goto L_08AB45A8;
    case 97u: goto L_08AB45B8;
    case 98u: goto L_08AB45C8;
    case 99u: goto L_08AB45D0;
    case 100u: goto L_08AB45D8;
    case 101u: goto L_08AB45EC;
    case 102u: goto L_08AB45FC;
    case 103u: goto L_08AB4638;
    case 104u: goto L_08AB463C;
    case 105u: goto L_08AB4650;
    case 106u: goto L_08AB4654;
    case 107u: goto L_08AB4688;
    case 108u: goto L_08AB46C4;
    case 109u: goto L_08AB46D8;
    case 110u: goto L_08AB46E0;
    case 111u: goto L_08AB46E8;
    case 112u: goto L_08AB46F8;
    case 113u: goto L_08AB4700;
    case 114u: goto L_08AB4710;
    case 115u: goto L_08AB473C;
    case 116u: goto L_08AB474C;
    case 117u: goto L_08AB4758;
    case 118u: goto L_08AB4774;
    case 119u: goto L_08AB477C;
    case 120u: goto L_08AB47A8;
    case 121u: goto L_08AB47D4;
    case 122u: goto L_08AB4800;
    case 123u: goto L_08AB482C;
    case 124u: goto L_08AB4858;
    case 125u: goto L_08AB4884;
    case 126u: goto L_08AB48B0;
    case 127u: goto L_08AB48DC;
    case 128u: goto L_08AB4908;
    case 129u: goto L_08AB4934;
    case 130u: goto L_08AB4960;
    case 131u: goto L_08AB498C;
    case 132u: goto L_08AB49B8;
    case 133u: goto L_08AB49E4;
    case 134u: goto L_08AB4A10;
    case 135u: goto L_08AB4A3C;
    case 136u: goto L_08AB4A68;
    case 137u: goto L_08AB4A94;
    case 138u: goto L_08AB4AA0;
    case 139u: goto L_08AB4AAC;
    case 140u: goto L_08AB4AB4;
    case 141u: goto L_08AB4ABC;
    case 142u: goto L_08AB4AD0;
    case 143u: goto L_08AB4AD8;
    case 144u: goto L_08AB4B00;
    case 145u: goto L_08AB4B28;
    case 146u: goto L_08AB4B54;
    case 147u: goto L_08AB4B5C;
    case 148u: goto L_08AB4B84;
    case 149u: goto L_08AB4B8C;
    case 150u: goto L_08AB4B98;
    case 151u: goto L_08AB4BB0;
    case 152u: goto L_08AB4BCC;
    case 153u: goto L_08AB4BE8;
    case 154u: goto L_08AB4BF0;
    case 155u: goto L_08AB4C00;
    case 156u: goto L_08AB4C10;
    case 157u: goto L_08AB4C18;
    case 158u: goto L_08AB4C2C;
    case 159u: goto L_08AB4C34;
    case 160u: goto L_08AB4C3C;
    case 161u: goto L_08AB4C48;
    case 162u: goto L_08AB4C58;
    case 163u: goto L_08AB4C6C;
    case 164u: goto L_08AB4CAC;
    case 165u: goto L_08AB4CC0;
    case 166u: goto L_08AB4CE0;
    case 167u: goto L_08AB4CE8;
    case 168u: goto L_08AB4CFC;
    case 169u: goto L_08AB4D10;
    case 170u: goto L_08AB4D24;
    case 171u: goto L_08AB4D2C;
    case 172u: goto L_08AB4D38;
    case 173u: goto L_08AB4D3C;
    case 174u: goto L_08AB4D44;
    case 175u: goto L_08AB4D70;
    case 176u: goto L_08AB4D90;
    case 177u: goto L_08AB4DE4;
    case 178u: goto L_08AB4DEC;
    case 179u: goto L_08AB4DFC;
    case 180u: goto L_08AB4E18;
    case 181u: goto L_08AB4E24;
    case 182u: goto L_08AB4E2C;
    case 183u: goto L_08AB4E34;
    case 184u: goto L_08AB4E4C;
    case 185u: goto L_08AB4E74;
    case 186u: goto L_08AB4E7C;
    case 187u: goto L_08AB4E9C;
    case 188u: goto L_08AB4EA4;
    case 189u: goto L_08AB4EC8;
    case 190u: goto L_08AB4ED0;
    case 191u: goto L_08AB4EE0;
    case 192u: goto L_08AB4F00;
    case 193u: goto L_08AB4F08;
    case 194u: goto L_08AB4F10;
    case 195u: goto L_08AB4F88;
    case 196u: goto L_08AB4F98;
    case 197u: goto L_08AB4FA4;
    case 198u: goto L_08AB4FBC;
    case 199u: goto L_08AB4FD4;
    case 200u: goto L_08AB4FDC;
    case 201u: goto L_08AB4FE4;
    case 202u: goto L_08AB4FE8;
    case 203u: goto L_08AB4FF4;
    case 204u: goto L_08AB5004;
    case 205u: goto L_08AB5010;
    case 206u: goto L_08AB5040;
    case 207u: goto L_08AB5054;
    case 208u: goto L_08AB5064;
    case 209u: goto L_08AB5074;
    case 210u: goto L_08AB5080;
    case 211u: goto L_08AB5094;
    case 212u: goto L_08AB50BC;
    case 213u: goto L_08AB50CC;
    case 214u: goto L_08AB50D4;
    case 215u: goto L_08AB50DC;
    case 216u: goto L_08AB50E4;
    case 217u: goto L_08AB50F4;
    case 218u: goto L_08AB50FC;
    case 219u: goto L_08AB5110;
    case 220u: goto L_08AB5120;
    case 221u: goto L_08AB5134;
    case 222u: goto L_08AB513C;
    case 223u: goto L_08AB515C;
    case 224u: goto L_08AB5168;
    case 225u: goto L_08AB5170;
    case 226u: goto L_08AB5178;
    case 227u: goto L_08AB5180;
    case 228u: goto L_08AB518C;
    case 229u: goto L_08AB5194;
    case 230u: goto L_08AB519C;
    case 231u: goto L_08AB51A4;
    case 232u: goto L_08AB51AC;
    case 233u: goto L_08AB51B8;
    case 234u: goto L_08AB51C0;
    case 235u: goto L_08AB51C8;
    case 236u: goto L_08AB51D0;
    case 237u: goto L_08AB51D8;
    case 238u: goto L_08AB51E0;
    case 239u: goto L_08AB51E8;
    case 240u: goto L_08AB51F0;
    case 241u: goto L_08AB51FC;
    case 242u: goto L_08AB5204;
    case 243u: goto L_08AB520C;
    case 244u: goto L_08AB5214;
    case 245u: goto L_08AB521C;
    case 246u: goto L_08AB5224;
    case 247u: goto L_08AB524C;
    case 248u: goto L_08AB5254;
    case 249u: goto L_08AB5264;
    case 250u: goto L_08AB526C;
    case 251u: goto L_08AB5274;
    case 252u: goto L_08AB527C;
    case 253u: goto L_08AB5284;
    case 254u: goto L_08AB528C;
    case 255u: goto L_08AB5298;
    case 256u: goto L_08AB52A0;
    case 257u: goto L_08AB52A8;
    case 258u: goto L_08AB52B0;
    case 259u: goto L_08AB52BC;
    case 260u: goto L_08AB52C4;
    case 261u: goto L_08AB52CC;
    case 262u: goto L_08AB52D4;
    case 263u: goto L_08AB52DC;
    case 264u: goto L_08AB52E4;
    case 265u: goto L_08AB52EC;
    case 266u: goto L_08AB52F4;
    case 267u: goto L_08AB52FC;
    case 268u: goto L_08AB5304;
    case 269u: goto L_08AB530C;
    case 270u: goto L_08AB5314;
    case 271u: goto L_08AB531C;
    case 272u: goto L_08AB5324;
    case 273u: goto L_08AB532C;
    case 274u: goto L_08AB5334;
    case 275u: goto L_08AB533C;
    case 276u: goto L_08AB5344;
    case 277u: goto L_08AB534C;
    case 278u: goto L_08AB535C;
    case 279u: goto L_08AB5364;
    case 280u: goto L_08AB536C;
    case 281u: goto L_08AB5378;
    case 282u: goto L_08AB5380;
    case 283u: goto L_08AB5384;
    case 284u: goto L_08AB538C;
    case 285u: goto L_08AB5398;
    case 286u: goto L_08AB53A4;
    case 287u: goto L_08AB53AC;
    case 288u: goto L_08AB53B0;
    case 289u: goto L_08AB53B8;
    case 290u: goto L_08AB53C4;
    case 291u: goto L_08AB53CC;
    case 292u: goto L_08AB53D0;
    case 293u: goto L_08AB53E4;
    case 294u: goto L_08AB53FC;
    case 295u: goto L_08AB540C;
    case 296u: goto L_08AB5414;
    case 297u: goto L_08AB5428;
    case 298u: goto L_08AB5438;
    case 299u: goto L_08AB5440;
    case 300u: goto L_08AB5454;
    case 301u: goto L_08AB5460;
    case 302u: goto L_08AB5468;
    case 303u: goto L_08AB5484;
    case 304u: goto L_08AB5498;
    case 305u: goto L_08AB54AC;
    case 306u: goto L_08AB54B4;
    case 307u: goto L_08AB54C0;
    case 308u: goto L_08AB54D0;
    case 309u: goto L_08AB54D8;
    case 310u: goto L_08AB54E0;
    case 311u: goto L_08AB54E8;
    case 312u: goto L_08AB54F0;
    case 313u: goto L_08AB54F8;
    case 314u: goto L_08AB5508;
    case 315u: goto L_08AB551C;
    case 316u: goto L_08AB553C;
    case 317u: goto L_08AB554C;
    case 318u: goto L_08AB555C;
    case 319u: goto L_08AB557C;
    case 320u: goto L_08AB5584;
    case 321u: goto L_08AB558C;
    case 322u: goto L_08AB5594;
    case 323u: goto L_08AB559C;
    case 324u: goto L_08AB55A4;
    case 325u: goto L_08AB55AC;
    case 326u: goto L_08AB55B4;
    case 327u: goto L_08AB55BC;
    case 328u: goto L_08AB55C4;
    case 329u: goto L_08AB55CC;
    case 330u: goto L_08AB55D4;
    case 331u: goto L_08AB55DC;
    case 332u: goto L_08AB55E4;
    case 333u: goto L_08AB55EC;
    case 334u: goto L_08AB55F4;
    case 335u: goto L_08AB55FC;
    case 336u: goto L_08AB5604;
    case 337u: goto L_08AB5610;
    case 338u: goto L_08AB5624;
    case 339u: goto L_08AB562C;
    case 340u: goto L_08AB5630;
    case 341u: goto L_08AB563C;
    case 342u: goto L_08AB5644;
    case 343u: goto L_08AB5648;
    case 344u: goto L_08AB5654;
    case 345u: goto L_08AB565C;
    case 346u: goto L_08AB5660;
    case 347u: goto L_08AB566C;
    case 348u: goto L_08AB5674;
    case 349u: goto L_08AB5678;
    case 350u: goto L_08AB5684;
    case 351u: goto L_08AB568C;
    case 352u: goto L_08AB5690;
    case 353u: goto L_08AB569C;
    case 354u: goto L_08AB56B0;
    case 355u: goto L_08AB56BC;
    case 356u: goto L_08AB56C4;
    case 357u: goto L_08AB56D0;
    case 358u: goto L_08AB56F0;
    case 359u: goto L_08AB5700;
    case 360u: goto L_08AB570C;
    case 361u: goto L_08AB571C;
    case 362u: goto L_08AB5724;
    case 363u: goto L_08AB572C;
    case 364u: goto L_08AB573C;
    case 365u: goto L_08AB5744;
    case 366u: goto L_08AB574C;
    case 367u: goto L_08AB5754;
    case 368u: goto L_08AB575C;
    case 369u: goto L_08AB5768;
    case 370u: goto L_08AB5770;
    case 371u: goto L_08AB5780;
    case 372u: goto L_08AB5788;
    case 373u: goto L_08AB5790;
    case 374u: goto L_08AB5798;
    case 375u: goto L_08AB57A4;
    case 376u: goto L_08AB57B4;
    case 377u: goto L_08AB57BC;
    case 378u: goto L_08AB57C0;
    case 379u: goto L_08AB57CC;
    case 380u: goto L_08AB57D4;
    case 381u: goto L_08AB57E4;
    case 382u: goto L_08AB57EC;
    case 383u: goto L_08AB57F0;
    case 384u: goto L_08AB57F8;
    case 385u: goto L_08AB5800;
    case 386u: goto L_08AB5808;
    case 387u: goto L_08AB5814;
    case 388u: goto L_08AB5820;
    case 389u: goto L_08AB5830;
    case 390u: goto L_08AB5838;
    case 391u: goto L_08AB5848;
    case 392u: goto L_08AB5850;
    case 393u: goto L_08AB585C;
    case 394u: goto L_08AB5868;
    case 395u: goto L_08AB5870;
    case 396u: goto L_08AB5880;
    case 397u: goto L_08AB5888;
    case 398u: goto L_08AB5898;
    case 399u: goto L_08AB58A4;
    case 400u: goto L_08AB58B4;
    case 401u: goto L_08AB58BC;
    case 402u: goto L_08AB58CC;
    case 403u: goto L_08AB58D8;
    case 404u: goto L_08AB58E4;
    case 405u: goto L_08AB58F4;
    case 406u: goto L_08AB58FC;
    case 407u: goto L_08AB590C;
    case 408u: goto L_08AB5918;
    case 409u: goto L_08AB5924;
    case 410u: goto L_08AB5930;
    case 411u: goto L_08AB593C;
    case 412u: goto L_08AB5944;
    case 413u: goto L_08AB5948;
    case 414u: goto L_08AB5950;
    case 415u: goto L_08AB595C;
    case 416u: goto L_08AB5964;
    case 417u: goto L_08AB5968;
    case 418u: goto L_08AB5970;
    case 419u: goto L_08AB597C;
    case 420u: goto L_08AB5984;
    case 421u: goto L_08AB5990;
    case 422u: goto L_08AB599C;
    case 423u: goto L_08AB59A4;
    case 424u: goto L_08AB59B0;
    case 425u: goto L_08AB59BC;
    case 426u: goto L_08AB59C4;
    case 427u: goto L_08AB59D4;
    case 428u: goto L_08AB59E0;
    case 429u: goto L_08AB59EC;
    case 430u: goto L_08AB59F8;
    case 431u: goto L_08AB5A04;
    case 432u: goto L_08AB5A0C;
    case 433u: goto L_08AB5A1C;
    case 434u: goto L_08AB5A24;
    case 435u: goto L_08AB5A2C;
    case 436u: goto L_08AB5A38;
    case 437u: goto L_08AB5A44;
    case 438u: goto L_08AB5A4C;
    case 439u: goto L_08AB5A50;
    case 440u: goto L_08AB5A58;
    case 441u: goto L_08AB5A64;
    case 442u: goto L_08AB5A74;
    case 443u: goto L_08AB5A7C;
    case 444u: goto L_08AB5A80;
    case 445u: goto L_08AB5A88;
    case 446u: goto L_08AB5AA0;
    case 447u: goto L_08AB5AB4;
    case 448u: goto L_08AB5AC0;
    case 449u: goto L_08AB5AC8;
    case 450u: goto L_08AB5AD0;
    case 451u: goto L_08AB5AD4;
    case 452u: goto L_08AB5AD8;
    case 453u: goto L_08AB5AE0;
    case 454u: goto L_08AB5AE8;
    case 455u: goto L_08AB5AF0;
    case 456u: goto L_08AB5B00;
    case 457u: goto L_08AB5B08;
    case 458u: goto L_08AB5B1C;
    case 459u: goto L_08AB5B3C;
    case 460u: goto L_08AB5B48;
    case 461u: goto L_08AB5B54;
    case 462u: goto L_08AB5B5C;
    case 463u: goto L_08AB5B64;
    case 464u: goto L_08AB5B70;
    case 465u: goto L_08AB5B7C;
    case 466u: goto L_08AB5B84;
    case 467u: goto L_08AB5B90;
    case 468u: goto L_08AB5BA0;
    case 469u: goto L_08AB5BAC;
    case 470u: goto L_08AB5BB8;
    case 471u: goto L_08AB5BC0;
    case 472u: goto L_08AB5BF0;
    case 473u: goto L_08AB5C00;
    case 474u: goto L_08AB5C0C;
    case 475u: goto L_08AB5C18;
    case 476u: goto L_08AB5C28;
    case 477u: goto L_08AB5C30;
    case 478u: goto L_08AB5C38;
    case 479u: goto L_08AB5C44;
    case 480u: goto L_08AB5C50;
    case 481u: goto L_08AB5C58;
    case 482u: goto L_08AB5C64;
    case 483u: goto L_08AB5C74;
    case 484u: goto L_08AB5C78;
    case 485u: goto L_08AB5C84;
    case 486u: goto L_08AB5C94;
    case 487u: goto L_08AB5C9C;
    case 488u: goto L_08AB5CA0;
    case 489u: goto L_08AB5CA8;
    case 490u: goto L_08AB5CB0;
    case 491u: goto L_08AB5CC4;
    case 492u: goto L_08AB5CD4;
    case 493u: goto L_08AB5CF0;
    case 494u: goto L_08AB5D00;
    case 495u: goto L_08AB5D1C;
    case 496u: goto L_08AB5D38;
    case 497u: goto L_08AB5D54;
    case 498u: goto L_08AB5D80;
    case 499u: goto L_08AB5D88;
    case 500u: goto L_08AB5DA8;
    case 501u: goto L_08AB5DE8;
    case 502u: goto L_08AB5E04;
    case 503u: goto L_08AB5E44;
    case 504u: goto L_08AB5E50;
    case 505u: goto L_08AB5E6C;
    case 506u: goto L_08AB5E78;
    case 507u: goto L_08AB5E80;
    case 508u: goto L_08AB5E88;
    case 509u: goto L_08AB5E90;
    case 510u: goto L_08AB5E98;
    case 511u: goto L_08AB5EA4;
    case 512u: goto L_08AB5EAC;
    case 513u: goto L_08AB5EB0;
    case 514u: goto L_08AB5EBC;
    case 515u: goto L_08AB5EC4;
    case 516u: goto L_08AB5EC8;
    case 517u: goto L_08AB5ED4;
    case 518u: goto L_08AB5EDC;
    case 519u: goto L_08AB5EE0;
    case 520u: goto L_08AB5EEC;
    case 521u: goto L_08AB5EF4;
    case 522u: goto L_08AB5EF8;
    case 523u: goto L_08AB5F00;
    case 524u: goto L_08AB5F0C;
    case 525u: goto L_08AB5F30;
    case 526u: goto L_08AB5F58;
    case 527u: goto L_08AB5F64;
    case 528u: goto L_08AB5F70;
    case 529u: goto L_08AB5F7C;
    case 530u: goto L_08AB5F84;
    case 531u: goto L_08AB5F8C;
    case 532u: goto L_08AB5F94;
    case 533u: goto L_08AB5F9C;
    case 534u: goto L_08AB5FA4;
    case 535u: goto L_08AB5FB0;
    case 536u: goto L_08AB5FCC;
    case 537u: goto L_08AB5FEC;
    case 538u: goto L_08AB5FF8;
    case 539u: goto L_08AB6004;
    case 540u: goto L_08AB600C;
    case 541u: goto L_08AB6014;
    case 542u: goto L_08AB6020;
    case 543u: goto L_08AB6028;
    case 544u: goto L_08AB6030;
    case 545u: goto L_08AB6044;
    case 546u: goto L_08AB6054;
    case 547u: goto L_08AB6064;
    case 548u: goto L_08AB6070;
    case 549u: goto L_08AB607C;
    case 550u: goto L_08AB6088;
    case 551u: goto L_08AB6090;
    case 552u: goto L_08AB60A0;
    case 553u: goto L_08AB60A8;
    case 554u: goto L_08AB60B8;
    case 555u: goto L_08AB60C0;
    case 556u: goto L_08AB60D8;
    case 557u: goto L_08AB60E4;
    case 558u: goto L_08AB60EC;
    case 559u: goto L_08AB60FC;
    case 560u: goto L_08AB6108;
    case 561u: goto L_08AB6110;
    case 562u: goto L_08AB6124;
    case 563u: goto L_08AB6134;
    case 564u: goto L_08AB6140;
    case 565u: goto L_08AB6148;
    case 566u: goto L_08AB6150;
    case 567u: goto L_08AB615C;
    case 568u: goto L_08AB6164;
    case 569u: goto L_08AB616C;
    case 570u: goto L_08AB6174;
    case 571u: goto L_08AB6178;
    case 572u: goto L_08AB6194;
    case 573u: goto L_08AB61C8;
    case 574u: goto L_08AB61D8;
    case 575u: goto L_08AB61EC;
    case 576u: goto L_08AB6200;
    case 577u: goto L_08AB620C;
    case 578u: goto L_08AB6218;
    case 579u: goto L_08AB6224;
    case 580u: goto L_08AB622C;
    case 581u: goto L_08AB6234;
    case 582u: goto L_08AB6244;
    case 583u: goto L_08AB624C;
    case 584u: goto L_08AB6258;
    case 585u: goto L_08AB6260;
    case 586u: goto L_08AB626C;
    case 587u: goto L_08AB6274;
    case 588u: goto L_08AB627C;
    case 589u: goto L_08AB6284;
    case 590u: goto L_08AB628C;
    case 591u: goto L_08AB6294;
    case 592u: goto L_08AB6298;
    case 593u: goto L_08AB62C4;
    case 594u: goto L_08AB62F8;
    case 595u: goto L_08AB630C;
    case 596u: goto L_08AB6320;
    case 597u: goto L_08AB636C;
    case 598u: goto L_08AB6380;
    case 599u: goto L_08AB6390;
    case 600u: goto L_08AB6398;
    case 601u: goto L_08AB63A0;
    case 602u: goto L_08AB63A8;
    case 603u: goto L_08AB63B0;
    case 604u: goto L_08AB63B8;
    case 605u: goto L_08AB63C0;
    case 606u: goto L_08AB63CC;
    case 607u: goto L_08AB63D4;
    case 608u: goto L_08AB63DC;
    case 609u: goto L_08AB63F4;
    case 610u: goto L_08AB63FC;
    case 611u: goto L_08AB6408;
    case 612u: goto L_08AB6410;
    case 613u: goto L_08AB6418;
    case 614u: goto L_08AB6424;
    case 615u: goto L_08AB642C;
    case 616u: goto L_08AB6434;
    case 617u: goto L_08AB6440;
    case 618u: goto L_08AB644C;
    case 619u: goto L_08AB6454;
    case 620u: goto L_08AB645C;
    case 621u: goto L_08AB6470;
    case 622u: goto L_08AB647C;
    case 623u: goto L_08AB648C;
    case 624u: goto L_08AB6494;
    case 625u: goto L_08AB64A4;
    case 626u: goto L_08AB64AC;
    case 627u: goto L_08AB64B4;
    case 628u: goto L_08AB64B8;
    case 629u: goto L_08AB64C0;
    case 630u: goto L_08AB64C8;
    case 631u: goto L_08AB64D0;
    case 632u: goto L_08AB64D8;
    case 633u: goto L_08AB64E0;
    case 634u: goto L_08AB64F0;
    case 635u: goto L_08AB64F8;
    case 636u: goto L_08AB650C;
    case 637u: goto L_08AB6534;
    case 638u: goto L_08AB654C;
    case 639u: goto L_08AB6554;
    case 640u: goto L_08AB655C;
    case 641u: goto L_08AB6568;
    case 642u: goto L_08AB6574;
    case 643u: goto L_08AB6594;
    case 644u: goto L_08AB65A4;
    case 645u: goto L_08AB65AC;
    case 646u: goto L_08AB65C0;
    case 647u: goto L_08AB65C8;
    case 648u: goto L_08AB65D0;
    case 649u: goto L_08AB65D8;
    case 650u: goto L_08AB65E4;
    case 651u: goto L_08AB65EC;
    case 652u: goto L_08AB65F8;
    case 653u: goto L_08AB6600;
    case 654u: goto L_08AB6610;
    case 655u: goto L_08AB6618;
    case 656u: goto L_08AB6620;
    case 657u: goto L_08AB6624;
    case 658u: goto L_08AB663C;
    case 659u: goto L_08AB6654;
    case 660u: goto L_08AB6688;
    case 661u: goto L_08AB6694;
    case 662u: goto L_08AB6784;
    case 663u: goto L_08AB678C;
    case 664u: goto L_08AB6794;
    case 665u: goto L_08AB67A4;
    case 666u: goto L_08AB67AC;
    case 667u: goto L_08AB67B4;
    case 668u: goto L_08AB67C4;
    case 669u: goto L_08AB67CC;
    case 670u: goto L_08AB67D4;
    case 671u: goto L_08AB67E4;
    case 672u: goto L_08AB67EC;
    case 673u: goto L_08AB67F4;
    case 674u: goto L_08AB680C;
    case 675u: goto L_08AB6814;
    case 676u: goto L_08AB681C;
    case 677u: goto L_08AB682C;
    case 678u: goto L_08AB6834;
    case 679u: goto L_08AB683C;
    case 680u: goto L_08AB684C;
    case 681u: goto L_08AB6854;
    case 682u: goto L_08AB685C;
    case 683u: goto L_08AB686C;
    case 684u: goto L_08AB6874;
    case 685u: goto L_08AB687C;
    case 686u: goto L_08AB6888;
    case 687u: goto L_08AB68B4;
    case 688u: goto L_08AB68BC;
    case 689u: goto L_08AB68C4;
    case 690u: goto L_08AB68D4;
    case 691u: goto L_08AB68DC;
    case 692u: goto L_08AB68E4;
    case 693u: goto L_08AB68F8;
    case 694u: goto L_08AB6900;
    case 695u: goto L_08AB6908;
    case 696u: goto L_08AB691C;
    case 697u: goto L_08AB6924;
    case 698u: goto L_08AB692C;
    case 699u: goto L_08AB6948;
    case 700u: goto L_08AB6950;
    case 701u: goto L_08AB6958;
    case 702u: goto L_08AB6968;
    case 703u: goto L_08AB6970;
    case 704u: goto L_08AB6978;
    case 705u: goto L_08AB6988;
    case 706u: goto L_08AB6990;
    case 707u: goto L_08AB6994;
    case 708u: goto L_08AB69B4;
    case 709u: goto L_08AB69BC;
    case 710u: goto L_08AB69C0;
    case 711u: goto L_08AB69E0;
    case 712u: goto L_08AB69E8;
    case 713u: goto L_08AB69EC;
    case 714u: goto L_08AB6A10;
    case 715u: goto L_08AB6AEC;
    case 716u: goto L_08AB6AF4;
    case 717u: goto L_08AB6AF8;
    case 718u: goto L_08AB6B00;
    case 719u: goto L_08AB6B0C;
    case 720u: goto L_08AB6B14;
    case 721u: goto L_08AB6B18;
    case 722u: goto L_08AB6B28;
    case 723u: goto L_08AB6B34;
    case 724u: goto L_08AB6B3C;
    case 725u: goto L_08AB6B40;
    case 726u: goto L_08AB6B50;
    case 727u: goto L_08AB6B5C;
    case 728u: goto L_08AB6B64;
    case 729u: goto L_08AB6B68;
    case 730u: goto L_08AB6B74;
    case 731u: goto L_08AB6B84;
    case 732u: goto L_08AB6B8C;
    case 733u: goto L_08AB6B98;
    case 734u: goto L_08AB6BA4;
    case 735u: goto L_08AB6BAC;
    case 736u: goto L_08AB6BB0;
    case 737u: goto L_08AB6BB8;
    case 738u: goto L_08AB6BC4;
    case 739u: goto L_08AB6BCC;
    case 740u: goto L_08AB6BD0;
    case 741u: goto L_08AB6BD8;
    case 742u: goto L_08AB6BE4;
    case 743u: goto L_08AB6BEC;
    case 744u: goto L_08AB6BF0;
    case 745u: goto L_08AB6BF8;
    case 746u: goto L_08AB6C04;
    case 747u: goto L_08AB6C38;
    case 748u: goto L_08AB6C44;
    case 749u: goto L_08AB6C4C;
    case 750u: goto L_08AB6C50;
    case 751u: goto L_08AB6C68;
    case 752u: goto L_08AB6C74;
    case 753u: goto L_08AB6C7C;
    case 754u: goto L_08AB6C80;
    case 755u: goto L_08AB6C88;
    case 756u: goto L_08AB6C90;
    case 757u: goto L_08AB6CB4;
    case 758u: goto L_08AB6CC0;
    case 759u: goto L_08AB6CCC;
    case 760u: goto L_08AB6CD4;
    case 761u: goto L_08AB6CDC;
    case 762u: goto L_08AB6CE4;
    case 763u: goto L_08AB6CF0;
    case 764u: goto L_08AB6CF8;
    case 765u: goto L_08AB6CFC;
    case 766u: goto L_08AB6D04;
    case 767u: goto L_08AB6D0C;
    case 768u: goto L_08AB6D18;
    case 769u: goto L_08AB6D20;
    case 770u: goto L_08AB6D24;
    case 771u: goto L_08AB6D2C;
    case 772u: goto L_08AB6D38;
    case 773u: goto L_08AB6D44;
    case 774u: goto L_08AB6D4C;
    case 775u: goto L_08AB6D54;
    case 776u: goto L_08AB6D5C;
    case 777u: goto L_08AB6D68;
    case 778u: goto L_08AB6D70;
    case 779u: goto L_08AB6D74;
    case 780u: goto L_08AB6D7C;
    case 781u: goto L_08AB6D88;
    case 782u: goto L_08AB6D90;
    case 783u: goto L_08AB6D94;
    case 784u: goto L_08AB6D9C;
    case 785u: goto L_08AB6DA4;
    case 786u: goto L_08AB6DB0;
    case 787u: goto L_08AB6DB8;
    case 788u: goto L_08AB6DBC;
    case 789u: goto L_08AB6DC4;
    case 790u: goto L_08AB6DD0;
    case 791u: goto L_08AB6DD8;
    case 792u: goto L_08AB6DDC;
    case 793u: goto L_08AB6DE4;
    case 794u: goto L_08AB6DEC;
    case 795u: goto L_08AB6DF8;
    case 796u: goto L_08AB6E04;
    case 797u: goto L_08AB6E0C;
    case 798u: goto L_08AB6E10;
    case 799u: goto L_08AB6E18;
    case 800u: goto L_08AB6E24;
    case 801u: goto L_08AB6E2C;
    case 802u: goto L_08AB6E30;
    case 803u: goto L_08AB6E38;
    case 804u: goto L_08AB6E44;
    case 805u: goto L_08AB6E4C;
    case 806u: goto L_08AB6E50;
    case 807u: goto L_08AB6E88;
    case 808u: goto L_08AB6EF0;
    case 809u: goto L_08AB6EF8;
    case 810u: goto L_08AB6F04;
    case 811u: goto L_08AB6F10;
    case 812u: goto L_08AB6F20;
    case 813u: goto L_08AB6F2C;
    case 814u: goto L_08AB6F3C;
    case 815u: goto L_08AB6F48;
    case 816u: goto L_08AB6F58;
    case 817u: goto L_08AB6F88;
    case 818u: goto L_08AB6F98;
    case 819u: goto L_08AB6FA8;
    case 820u: goto L_08AB6FB8;
    case 821u: goto L_08AB6FE0;
    case 822u: goto L_08AB6FE8;
    case 823u: goto L_08AB6FF8;
    case 824u: goto L_08AB7008;
    case 825u: goto L_08AB7010;
    case 826u: goto L_08AB7018;
    case 827u: goto L_08AB7034;
    case 828u: goto L_08AB7040;
    case 829u: goto L_08AB704C;
    case 830u: goto L_08AB7054;
    case 831u: goto L_08AB7058;
    case 832u: goto L_08AB705C;
    case 833u: goto L_08AB7070;
    case 834u: goto L_08AB709C;
    case 835u: goto L_08AB70C0;
    case 836u: goto L_08AB70C8;
    case 837u: goto L_08AB70D0;
    case 838u: goto L_08AB70DC;
    case 839u: goto L_08AB70E4;
    case 840u: goto L_08AB70EC;
    case 841u: goto L_08AB70F8;
    case 842u: goto L_08AB7104;
    case 843u: goto L_08AB7110;
    case 844u: goto L_08AB7118;
    case 845u: goto L_08AB711C;
    case 846u: goto L_08AB7120;
    case 847u: goto L_08AB7134;
    case 848u: goto L_08AB7140;
    case 849u: goto L_08AB714C;
    case 850u: goto L_08AB7158;
    case 851u: goto L_08AB7164;
    case 852u: goto L_08AB716C;
    case 853u: goto L_08AB7170;
    case 854u: goto L_08AB7178;
    case 855u: goto L_08AB7188;
    case 856u: goto L_08AB7194;
    case 857u: goto L_08AB71A0;
    case 858u: goto L_08AB71AC;
    case 859u: goto L_08AB71B8;
    case 860u: goto L_08AB71C0;
    case 861u: goto L_08AB71C4;
    case 862u: goto L_08AB71C8;
    case 863u: goto L_08AB71DC;
    case 864u: goto L_08AB71E8;
    case 865u: goto L_08AB7204;
    case 866u: goto L_08AB720C;
    case 867u: goto L_08AB7214;
    case 868u: goto L_08AB7220;
    case 869u: goto L_08AB722C;
    case 870u: goto L_08AB7234;
    case 871u: goto L_08AB7238;
    case 872u: goto L_08AB7240;
    case 873u: goto L_08AB7250;
    case 874u: goto L_08AB7258;
    case 875u: goto L_08AB7260;
    case 876u: goto L_08AB726C;
    case 877u: goto L_08AB7278;
    case 878u: goto L_08AB7280;
    case 879u: goto L_08AB7284;
    case 880u: goto L_08AB728C;
    case 881u: goto L_08AB729C;
    case 882u: goto L_08AB72A0;
    case 883u: goto L_08AB72A8;
    case 884u: goto L_08AB72B4;
    case 885u: goto L_08AB72C0;
    case 886u: goto L_08AB72C8;
    case 887u: goto L_08AB72CC;
    case 888u: goto L_08AB72D4;
    case 889u: goto L_08AB72E4;
    case 890u: goto L_08AB72F0;
    case 891u: goto L_08AB72FC;
    case 892u: goto L_08AB7308;
    case 893u: goto L_08AB7310;
    case 894u: goto L_08AB7314;
    case 895u: goto L_08AB731C;
    case 896u: goto L_08AB732C;
    case 897u: goto L_08AB7338;
    case 898u: goto L_08AB7340;
    case 899u: goto L_08AB7348;
    case 900u: goto L_08AB7364;
    case 901u: goto L_08AB7398;
    case 902u: goto L_08AB73A0;
    case 903u: goto L_08AB73B8;
    case 904u: goto L_08AB73E8;
    case 905u: goto L_08AB73F0;
    case 906u: goto L_08AB73F8;
    case 907u: goto L_08AB7430;
    case 908u: goto L_08AB7458;
    case 909u: goto L_08AB7470;
    case 910u: goto L_08AB7478;
    case 911u: goto L_08AB7480;
    case 912u: goto L_08AB7488;
    case 913u: goto L_08AB7490;
    case 914u: goto L_08AB7498;
    case 915u: goto L_08AB74A0;
    case 916u: goto L_08AB74AC;
    case 917u: goto L_08AB74B4;
    case 918u: goto L_08AB74BC;
    case 919u: goto L_08AB74CC;
    case 920u: goto L_08AB74DC;
    case 921u: goto L_08AB74E8;
    case 922u: goto L_08AB74F0;
    case 923u: goto L_08AB74FC;
    case 924u: goto L_08AB7514;
    case 925u: goto L_08AB7520;
    case 926u: goto L_08AB7534;
    case 927u: goto L_08AB7540;
    case 928u: goto L_08AB754C;
    case 929u: goto L_08AB7558;
    case 930u: goto L_08AB7564;
    case 931u: goto L_08AB7574;
    case 932u: goto L_08AB7584;
    case 933u: goto L_08AB758C;
    case 934u: goto L_08AB7598;
    case 935u: goto L_08AB75A0;
    case 936u: goto L_08AB75B0;
    case 937u: goto L_08AB75C0;
    case 938u: goto L_08AB75C8;
    case 939u: goto L_08AB75D4;
    case 940u: goto L_08AB75DC;
    case 941u: goto L_08AB75E8;
    case 942u: goto L_08AB75F4;
    case 943u: goto L_08AB7600;
    case 944u: goto L_08AB7608;
    case 945u: goto L_08AB7610;
    case 946u: goto L_08AB7628;
    case 947u: goto L_08AB762C;
    case 948u: goto L_08AB763C;
    case 949u: goto L_08AB7648;
    case 950u: goto L_08AB7654;
    case 951u: goto L_08AB766C;
    case 952u: goto L_08AB7688;
    case 953u: goto L_08AB7694;
    case 954u: goto L_08AB769C;
    case 955u: goto L_08AB76A4;
    case 956u: goto L_08AB76B0;
    case 957u: goto L_08AB76BC;
    case 958u: goto L_08AB76C8;
    case 959u: goto L_08AB76D4;
    case 960u: goto L_08AB76E8;
    case 961u: goto L_08AB76F0;
    case 962u: goto L_08AB7700;
    case 963u: goto L_08AB7708;
    case 964u: goto L_08AB772C;
    case 965u: goto L_08AB773C;
    case 966u: goto L_08AB7744;
    case 967u: goto L_08AB7748;
    case 968u: goto L_08AB7750;
    case 969u: goto L_08AB7758;
    case 970u: goto L_08AB7768;
    case 971u: goto L_08AB7770;
    case 972u: goto L_08AB7794;
    case 973u: goto L_08AB77A4;
    case 974u: goto L_08AB77AC;
    case 975u: goto L_08AB77B0;
    case 976u: goto L_08AB77B8;
    case 977u: goto L_08AB77BC;
    case 978u: goto L_08AB77C4;
    case 979u: goto L_08AB77D0;
    case 980u: goto L_08AB77D8;
    case 981u: goto L_08AB77E0;
    case 982u: goto L_08AB77EC;
    case 983u: goto L_08AB77F8;
    case 984u: goto L_08AB7800;
    case 985u: goto L_08AB7808;
    case 986u: goto L_08AB782C;
    case 987u: goto L_08AB7864;
    case 988u: goto L_08AB7874;
    case 989u: goto L_08AB7880;
    case 990u: goto L_08AB7890;
    case 991u: goto L_08AB789C;
    case 992u: goto L_08AB78A4;
    case 993u: goto L_08AB78AC;
    case 994u: goto L_08AB78B4;
    case 995u: goto L_08AB78BC;
    case 996u: goto L_08AB78C4;
    case 997u: goto L_08AB78CC;
    case 998u: goto L_08AB78D4;
    case 999u: goto L_08AB78DC;
    case 1000u: goto L_08AB78E0;
    case 1001u: goto L_08AB78FC;
    case 1002u: goto L_08AB7930;
    case 1003u: goto L_08AB7944;
    case 1004u: goto L_08AB794C;
    case 1005u: goto L_08AB7960;
    case 1006u: goto L_08AB796C;
    case 1007u: goto L_08AB7984;
    case 1008u: goto L_08AB79B4;
    case 1009u: goto L_08AB79C4;
    case 1010u: goto L_08AB79D4;
    case 1011u: goto L_08AB79E4;
    case 1012u: goto L_08AB79F4;
    case 1013u: goto L_08AB7A04;
    case 1014u: goto L_08AB7A38;
    case 1015u: goto L_08AB7A4C;
    case 1016u: goto L_08AB7A5C;
    case 1017u: goto L_08AB7A6C;
    case 1018u: goto L_08AB7A80;
    case 1019u: goto L_08AB7AA0;
    case 1020u: goto L_08AB7AA8;
    case 1021u: goto L_08AB7AC8;
    case 1022u: goto L_08AB7AD0;
    case 1023u: goto L_08AB7AE4;
    case 1024u: goto L_08AB7AEC;
    case 1025u: goto L_08AB7B00;
    case 1026u: goto L_08AB7B0C;
    case 1027u: goto L_08AB7B14;
    case 1028u: goto L_08AB7B1C;
    case 1029u: goto L_08AB7B30;
    case 1030u: goto L_08AB7B38;
    case 1031u: goto L_08AB7B44;
    case 1032u: goto L_08AB7B50;
    case 1033u: goto L_08AB7B5C;
    case 1034u: goto L_08AB7B64;
    case 1035u: goto L_08AB7B68;
    case 1036u: goto L_08AB7B70;
    case 1037u: goto L_08AB7B84;
    case 1038u: goto L_08AB7B90;
    case 1039u: goto L_08AB7BBC;
    case 1040u: goto L_08AB7BC4;
    case 1041u: goto L_08AB7BF0;
    case 1042u: goto L_08AB7BF8;
    case 1043u: goto L_08AB7C0C;
    case 1044u: goto L_08AB7C14;
    case 1045u: goto L_08AB7C28;
    case 1046u: goto L_08AB7C34;
    case 1047u: goto L_08AB7C3C;
    case 1048u: goto L_08AB7C44;
    case 1049u: goto L_08AB7C58;
    case 1050u: goto L_08AB7C60;
    case 1051u: goto L_08AB7C6C;
    case 1052u: goto L_08AB7C98;
    case 1053u: goto L_08AB7CA0;
    case 1054u: goto L_08AB7CCC;
    case 1055u: goto L_08AB7CD4;
    case 1056u: goto L_08AB7CE8;
    case 1057u: goto L_08AB7CF0;
    case 1058u: goto L_08AB7D04;
    case 1059u: goto L_08AB7D10;
    case 1060u: goto L_08AB7D18;
    case 1061u: goto L_08AB7D20;
    case 1062u: goto L_08AB7D34;
    case 1063u: goto L_08AB7D3C;
    case 1064u: goto L_08AB7D48;
    case 1065u: goto L_08AB7D64;
    case 1066u: goto L_08AB7D6C;
    case 1067u: goto L_08AB7D88;
    case 1068u: goto L_08AB7D90;
    case 1069u: goto L_08AB7DA4;
    case 1070u: goto L_08AB7DAC;
    case 1071u: goto L_08AB7DC0;
    case 1072u: goto L_08AB7DCC;
    case 1073u: goto L_08AB7DD4;
    case 1074u: goto L_08AB7DDC;
    case 1075u: goto L_08AB7DF0;
    case 1076u: goto L_08AB7DF8;
    case 1077u: goto L_08AB7E04;
    case 1078u: goto L_08AB7E20;
    case 1079u: goto L_08AB7E28;
    case 1080u: goto L_08AB7E44;
    case 1081u: goto L_08AB7E4C;
    case 1082u: goto L_08AB7E60;
    case 1083u: goto L_08AB7E68;
    case 1084u: goto L_08AB7E7C;
    case 1085u: goto L_08AB7E88;
    case 1086u: goto L_08AB7E90;
    case 1087u: goto L_08AB7E98;
    case 1088u: goto L_08AB7EAC;
    case 1089u: goto L_08AB7EB4;
    case 1090u: goto L_08AB7F24;
    case 1091u: goto L_08AB7F2C;
    case 1092u: goto L_08AB7F5C;
    case 1093u: goto L_08AB7F6C;
    case 1094u: goto L_08AB7F7C;
    case 1095u: goto L_08AB7F8C;
    case 1096u: goto L_08AB7F9C;
    case 1097u: goto L_08AB7FAC;
    case 1098u: goto L_08AB7FE0;
    case 1099u: goto L_08AB7FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AB4000:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4050;
      }
      goto L_08AB400C;
    }
L_08AB400C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08AB4048;
      }
      goto L_08AB401C;
    }
L_08AB401C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4048;
      }
      goto L_08AB4024;
    }
L_08AB4024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
        goto L_08AB4058;
    }
    goto L_08AB4034;
L_08AB4034:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4068;
      }
      goto L_08AB4040;
    }
L_08AB4040:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB406C;
      }
      goto L_08AB4048;
    }
L_08AB4048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB406C;
      }
      goto L_08AB4050;
    }
L_08AB4050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB406C;
      }
      goto L_08AB4058;
    }
L_08AB4058:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4040;
      }
      goto L_08AB4060;
    }
L_08AB4060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB406C;
      }
      goto L_08AB4068;
    }
L_08AB4068:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AB406C;
L_08AB406C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4074:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08AB407C;
L_08AB407C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(816), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB407C;
      }
      goto L_08AB4090;
    }
L_08AB4090:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4098:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2316)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[22] = (0u | 58u);
    ctx.gpr[23] = (0u | 57u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2320)));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_08AB40DC;
L_08AB40DC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4158;
      }
      goto L_08AB40E8;
    }
L_08AB40E8:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2296), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2196), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(640), 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB4100u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x08AB4100u) goto L_08AB4100;
    return;
L_08AB4100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AB4154;
      }
      goto L_08AB410C;
    }
L_08AB410C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08AB4154;
      }
      goto L_08AB4114;
    }
L_08AB4114:
    ctx.gpr[31] = (0x08AB411Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AB411Cu) goto L_08AB411C;
    return;
L_08AB411C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AB4130u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4130u) goto L_08AB4130;
    return;
L_08AB4130:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08AB4154u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08AB4154u) goto L_08AB4154;
    return;
L_08AB4154:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(816), 0u);
    goto L_08AB4158;
L_08AB4158:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB40DC;
      }
      goto L_08AB4168;
    }
L_08AB4168:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4198:
    ctx.gpr[5] = (0u | 0u);
    goto L_08AB419C;
L_08AB419C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AB419C;
      }
      goto L_08AB41B0;
    }
L_08AB41B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB41B8:
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[10] & 255u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB41DC;
      }
      goto L_08AB41D0;
    }
L_08AB41D0:
    ctx.gpr[11] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB41E4;
      }
      goto L_08AB41DC;
    }
L_08AB41DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB429C;
      }
      goto L_08AB41E4;
    }
L_08AB41E4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB422C;
      }
      goto L_08AB41F0;
    }
L_08AB41F0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB422C;
      }
      goto L_08AB41FC;
    }
L_08AB41FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4218;
      }
      goto L_08AB4208;
    }
L_08AB4208:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4220;
      }
      goto L_08AB4210;
    }
L_08AB4210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4224;
      }
      goto L_08AB4218;
    }
L_08AB4218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB429C;
      }
      goto L_08AB4220;
    }
L_08AB4220:
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[9]));
    goto L_08AB4224;
L_08AB4224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB429C;
      }
      goto L_08AB422C;
    }
L_08AB422C:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AB41E4;
      }
      goto L_08AB423C;
    }
L_08AB423C:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08AB4248;
L_08AB4248:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB426C;
      }
      goto L_08AB4250;
    }
L_08AB4250:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB426C;
      }
      goto L_08AB425C;
    }
L_08AB425C:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[11]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4248;
      }
      goto L_08AB426C;
    }
L_08AB426C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4298;
      }
      goto L_08AB4274;
    }
L_08AB4274:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_08AB4298;
L_08AB4298:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB429C;
L_08AB429C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB42A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB42D4;
      }
      goto L_08AB42CC;
    }
L_08AB42CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB435C;
      }
      goto L_08AB42D4;
    }
L_08AB42D4:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    goto L_08AB42E4;
L_08AB42E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4348;
      }
      goto L_08AB42F0;
    }
L_08AB42F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(500));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB432C;
      }
      goto L_08AB4308;
    }
L_08AB4308:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB432C;
      }
      goto L_08AB4314;
    }
L_08AB4314:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(81)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB4328u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AB4688;
L_08AB4328:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08AB432C;
L_08AB432C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4348;
      }
      goto L_08AB4344;
    }
L_08AB4344:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), 0u);
    goto L_08AB4348;
L_08AB4348:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AB42E4;
      }
      goto L_08AB435C;
    }
L_08AB435C:
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
L_08AB437C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB43DC;
      }
      goto L_08AB43BC;
    }
L_08AB43BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[13] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[14] = (ctx.gpr[13] | 0u);
      if (branch_taken) {
          goto L_08AB43E4;
      }
      goto L_08AB43D4;
    }
L_08AB43D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4500;
      }
      goto L_08AB43DC;
    }
L_08AB43DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB4654;
      }
      goto L_08AB43E4;
    }
L_08AB43E4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (0u | 8u);
    ctx.gpr[8] = (0u | 9u);
    ctx.gpr[9] = (0u | 10u);
    ctx.gpr[10] = (0u | 11u);
    ctx.gpr[11] = (0u | 117u);
    ctx.gpr[2] = (0u | 118u);
    ctx.gpr[3] = (0u | 119u);
    ctx.gpr[12] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.lo);
    goto L_08AB4414;
L_08AB4414:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB442C;
      }
      goto L_08AB441C;
    }
L_08AB441C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08AB4434;
    }
    goto L_08AB442C;
L_08AB442C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB4454;
      }
      goto L_08AB4434;
    }
L_08AB4434:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[13]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08AB4450;
    }
    goto L_08AB4448;
L_08AB4448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB4454;
      }
      goto L_08AB4450;
    }
L_08AB4450:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08AB4454;
L_08AB4454:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB44EC;
      }
      goto L_08AB445C;
    }
L_08AB445C:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AB44B0;
      }
      goto L_08AB4468;
    }
L_08AB4468:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AB44B0;
      }
      goto L_08AB4474;
    }
L_08AB4474:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AB44B0;
      }
      goto L_08AB4480;
    }
L_08AB4480:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08AB44B0;
      }
      goto L_08AB448C;
    }
L_08AB448C:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08AB44B0;
      }
      goto L_08AB4498;
    }
L_08AB4498:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB44B0;
      }
      goto L_08AB44A4;
    }
L_08AB44A4:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[24] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AB44EC;
      }
      goto L_08AB44B0;
    }
L_08AB44B0:
    { const std::uint32_t vfpu_address = ctx.gpr[15] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[12] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[12] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB44EC;
      }
      goto L_08AB44E8;
    }
L_08AB44E8:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08AB44EC;
L_08AB44EC:
    ctx.gpr[5] = (ctx.gpr[13] | 0u);
    ctx.gpr[13] = (ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (ctx.gpr[13] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08AB4414;
      }
      goto L_08AB4500;
    }
L_08AB4500:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AB4650;
      }
      goto L_08AB4514;
    }
L_08AB4514:
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[19] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[30] = (0u | 80u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08AB452C;
L_08AB452C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB4544;
      }
      goto L_08AB4534;
    }
L_08AB4534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08AB454C;
    }
    goto L_08AB4544;
L_08AB4544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB456C;
      }
      goto L_08AB454C;
    }
L_08AB454C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08AB4568;
    }
    goto L_08AB4560;
L_08AB4560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB456C;
      }
      goto L_08AB4568;
    }
L_08AB4568:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08AB456C;
L_08AB456C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB463C;
      }
      goto L_08AB4578;
    }
L_08AB4578:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB45C8;
      }
      goto L_08AB4588;
    }
L_08AB4588:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 261u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB45C8;
      }
      goto L_08AB4598;
    }
L_08AB4598:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 219u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB45C8;
      }
      goto L_08AB45A8;
    }
L_08AB45A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 207u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB45C8;
      }
      goto L_08AB45B8;
    }
L_08AB45B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 234u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB463C;
      }
      goto L_08AB45C8;
    }
L_08AB45C8:
    ctx.gpr[31] = (0x08AB45D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08AB45D0u) goto L_08AB45D0;
    return;
L_08AB45D0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB463C;
      }
      goto L_08AB45D8;
    }
L_08AB45D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB463C;
      }
      goto L_08AB45EC;
    }
L_08AB45EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08AB463C;
      }
      goto L_08AB45FC;
    }
L_08AB45FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
          goto L_08AB463C;
      }
      goto L_08AB4638;
    }
L_08AB4638:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08AB463C;
L_08AB463C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08AB452C;
      }
      goto L_08AB4650;
    }
L_08AB4650:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
    goto L_08AB4654;
L_08AB4654:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
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
L_08AB4688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AB46E0;
      }
      goto L_08AB46C4;
    }
L_08AB46C4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9892)));
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB46E8;
      }
      goto L_08AB46D8;
    }
L_08AB46D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB46F8;
      }
      goto L_08AB46E0;
    }
L_08AB46E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4AD8;
      }
      goto L_08AB46E8;
    }
L_08AB46E8:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08AB46F8;
L_08AB46F8:
    ctx.gpr[31] = (0x08AB4700u);
    ctx.gpr[21] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 546u, 0x08AAEA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4700u) goto L_08AB4700;
    return;
L_08AB4700:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 100u);
        goto L_08AB4710;
    }
    goto L_08AB4710;
L_08AB4710:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[19] == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08AB474C;
      }
      goto L_08AB473C;
    }
L_08AB473C:
    ctx.gpr[4] = (16042u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32506u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08AB474C;
L_08AB474C:
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(19) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4A94;
      }
      goto L_08AB4758;
    }
L_08AB4758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[20]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(11720)));
    jump_target = ctx.gpr[1];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB477C;
    }
L_08AB477C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB47A8;
    }
L_08AB47A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB47D4;
    }
L_08AB47D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4800;
    }
L_08AB4800:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB482C;
    }
L_08AB482C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4858;
    }
L_08AB4858:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4884;
    }
L_08AB4884:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB48B0;
    }
L_08AB48B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB48DC;
    }
L_08AB48DC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4908;
    }
L_08AB4908:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4934;
    }
L_08AB4934:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16784u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4960;
    }
L_08AB4960:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB498C;
    }
L_08AB498C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB49B8;
    }
L_08AB49B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB49E4;
    }
L_08AB49E4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4A10;
    }
L_08AB4A10:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4A3C;
    }
L_08AB4A3C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4A68;
    }
L_08AB4A68:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4A94;
    }
L_08AB4A94:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AB4AA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11608));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 889u, 0x08AB36B0u>(ctx, &aot_mem) && ctx.pc == 0x08AB4AA0u) goto L_08AB4AA0;
    return;
L_08AB4AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_08AB4AAC;
L_08AB4AAC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4ABC;
      }
      goto L_08AB4AB4;
    }
L_08AB4AB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB4ABC;
      }
      goto L_08AB4ABC;
    }
L_08AB4ABC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB4AD0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 536u, 0x08A0618Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4AD0u) goto L_08AB4AD0;
    return;
L_08AB4AD0:
    ctx.gpr[31] = (0x08AB4AD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 931u, 0x08AB3994u>(ctx, &aot_mem) && ctx.pc == 0x08AB4AD8u) goto L_08AB4AD8;
    return;
L_08AB4AD8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4B00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8672));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    goto L_08AB4B28;
L_08AB4B28:
    ctx.gpr[8] = (ctx.gpr[7] << 5u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
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
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4B28;
      }
      goto L_08AB4B54;
    }
L_08AB4B54:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4B5C:
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[11] = (ctx.gpr[4] << 16u);
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8672));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08AB4B84;
L_08AB4B84:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4BB0;
      }
      goto L_08AB4B8C;
    }
L_08AB4B8C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB4BB0;
      }
      goto L_08AB4B98;
    }
L_08AB4B98:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[7] = (ctx.gpr[9] << 5u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 200 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AB4B84;
      }
      goto L_08AB4BB0;
    }
L_08AB4BB0:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4BCC:
    ctx.gpr[8] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8672));
    goto L_08AB4BE8;
L_08AB4BE8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
      if (branch_taken) {
          goto L_08AB4C10;
      }
      goto L_08AB4BF0;
    }
L_08AB4BF0:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AB4C10;
      }
      goto L_08AB4C00;
    }
L_08AB4C00:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 200 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4BE8;
      }
      goto L_08AB4C10;
    }
L_08AB4C10:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB4C2C;
      }
      goto L_08AB4C18;
    }
L_08AB4C18:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[7] << 5u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 200 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4C34;
      }
      goto L_08AB4C2C;
    }
L_08AB4C2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4CE0;
      }
      goto L_08AB4C34;
    }
L_08AB4C34:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4C58;
      }
      goto L_08AB4C3C;
    }
L_08AB4C3C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AB4C58;
      }
      goto L_08AB4C48;
    }
L_08AB4C48:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 200 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4C34;
      }
      goto L_08AB4C58;
    }
L_08AB4C58:
    ctx.gpr[9] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
      if (branch_taken) {
          goto L_08AB4CAC;
      }
      goto L_08AB4C6C;
    }
L_08AB4C6C:
    ctx.gpr[10] = (ctx.gpr[5] << 5u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[11] = (ctx.gpr[7] << 5u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
      if (branch_taken) {
          goto L_08AB4C6C;
      }
      goto L_08AB4CAC;
    }
L_08AB4CAC:
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB4CE0;
      }
      goto L_08AB4CC0;
    }
L_08AB4CC0:
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4CC0;
      }
      goto L_08AB4CE0;
    }
L_08AB4CE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4CE8:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8672));
    goto L_08AB4CFC;
L_08AB4CFC:
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB4D2C;
      }
      goto L_08AB4D10;
    }
L_08AB4D10:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4CFC;
      }
      goto L_08AB4D24;
    }
L_08AB4D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4D38;
      }
      goto L_08AB4D2C;
    }
L_08AB4D2C:
    ctx.gpr[2] = (ctx.gpr[6] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08AB4D3C;
      }
      goto L_08AB4D38;
    }
L_08AB4D38:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AB4D3C;
L_08AB4D3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4D44:
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8672));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
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
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4D70:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8672));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4D90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(29832));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB4DE4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 897u, 0x08B57578u>(ctx, &aot_mem) && ctx.pc == 0x08AB4DE4u) goto L_08AB4DE4;
    return;
L_08AB4DE4:
    ctx.gpr[31] = (0x08AB4DECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4DECu) goto L_08AB4DEC;
    return;
L_08AB4DEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4DFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4E4C;
      }
      goto L_08AB4E18;
    }
L_08AB4E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4E2C;
      }
      goto L_08AB4E24;
    }
L_08AB4E24:
    ctx.gpr[31] = (0x08AB4E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4E2Cu) goto L_08AB4E2C;
    return;
L_08AB4E2C:
    ctx.gpr[31] = (0x08AB4E34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 206u, 0x08954E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4E34u) goto L_08AB4E34;
    return;
L_08AB4E34:
    ctx.gpr[5] = (12u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12432));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2260), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2256), ctx.gpr[5]);
    goto L_08AB4E4C;
L_08AB4E4C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(63));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2260), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4E74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4E7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB4EA4;
      }
      goto L_08AB4E9C;
    }
L_08AB4E9C:
    ctx.gpr[31] = (0x08AB4EA4u);
    // nop
    goto L_08AB4E74;
L_08AB4EA4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2292), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2272), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4EC8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2292)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4ED0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4EE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AB4F08;
      }
      goto L_08AB4F00;
    }
L_08AB4F00:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_08AB4F10;
    }
    goto L_08AB4F08;
L_08AB4F08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4FA4;
      }
      goto L_08AB4F10;
    }
L_08AB4F10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288), ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288), ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    ctx.gpr[18] = (ctx.gpr[7] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AB4F88u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4F88u) goto L_08AB4F88;
    return;
L_08AB4F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB4F98u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB4F98u) goto L_08AB4F98;
    return;
L_08AB4F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288), ctx.gpr[4]);
    goto L_08AB4FA4;
L_08AB4FA4:
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
L_08AB4FBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB4FD4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4FD4u) goto L_08AB4FD4;
    return;
L_08AB4FD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4FE4;
      }
      goto L_08AB4FDC;
    }
L_08AB4FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB4FE8;
      }
      goto L_08AB4FE4;
    }
L_08AB4FE4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AB4FE8;
L_08AB4FE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5004:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5010:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284)));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[16] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AB5064;
      }
      goto L_08AB5040;
    }
L_08AB5040:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AB5054u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB5054u) goto L_08AB5054;
    return;
L_08AB5054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AB5080;
      }
      goto L_08AB5064;
    }
L_08AB5064:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AB5074u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB5074u) goto L_08AB5074;
    return;
L_08AB5074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_08AB5080;
L_08AB5080:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB50BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB50CCu);
    // nop
    goto L_08AB4EC8;
L_08AB50CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB50F4;
      }
      goto L_08AB50D4;
    }
L_08AB50D4:
    ctx.gpr[31] = (0x08AB50DCu);
    // nop
    goto L_08AB4EC8;
L_08AB50DC:
    ctx.gpr[31] = (0x08AB50E4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AB4E74;
L_08AB50E4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2292), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2272), 0u);
    goto L_08AB50F4;
L_08AB50F4:
    ctx.gpr[31] = (0x08AB50FCu);
    // nop
    goto L_08AB5610;
L_08AB50FC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2256), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2260), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5110:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2272));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AB5120;
L_08AB5120:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB5120;
      }
      goto L_08AB5134;
    }
L_08AB5134:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB513C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7876), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB5168;
      }
      goto L_08AB515C;
    }
L_08AB515C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB5168u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem) && ctx.pc == 0x08AB5168u) goto L_08AB5168;
    return;
L_08AB5168:
    ctx.gpr[31] = (0x08AB5170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 888u, 0x0898B7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB5170u) goto L_08AB5170;
    return;
L_08AB5170:
    ctx.gpr[31] = (0x08AB5178u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2168));
    goto L_08AB4FBC;
L_08AB5178:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5324;
      }
      goto L_08AB5180;
    }
L_08AB5180:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB518Cu);
    ctx.gpr[5] = (0u | 200u);
    goto L_08AB5010;
L_08AB518C:
    ctx.gpr[31] = (0x08AB5194u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2160));
    goto L_08AB4FBC;
L_08AB5194:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5314;
      }
      goto L_08AB519C;
    }
L_08AB519C:
    ctx.gpr[31] = (0x08AB51A4u);
    // nop
    goto L_08AB5004;
L_08AB51A4:
    ctx.gpr[31] = (0x08AB51ACu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08AB4FF4;
L_08AB51AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB51B8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 646u, 0x088636C8u>(ctx, &aot_mem) && ctx.pc == 0x08AB51B8u) goto L_08AB51B8;
    return;
L_08AB51B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5304;
      }
      goto L_08AB51C0;
    }
L_08AB51C0:
    ctx.gpr[31] = (0x08AB51C8u);
    // nop
    goto L_08AB5094;
L_08AB51C8:
    ctx.gpr[31] = (0x08AB51D0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AB6A10;
L_08AB51D0:
    ctx.gpr[31] = (0x08AB51D8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2152));
    goto L_08AB4FBC;
L_08AB51D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB52F4;
      }
      goto L_08AB51E0;
    }
L_08AB51E0:
    ctx.gpr[31] = (0x08AB51E8u);
    // nop
    goto L_08AB5004;
L_08AB51E8:
    ctx.gpr[31] = (0x08AB51F0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08AB4FF4;
L_08AB51F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB51FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 490u, 0x0896DF60u>(ctx, &aot_mem) && ctx.pc == 0x08AB51FCu) goto L_08AB51FC;
    return;
L_08AB51FC:
    ctx.gpr[31] = (0x08AB5204u);
    // nop
    goto L_08AB5094;
L_08AB5204:
    ctx.gpr[31] = (0x08AB520Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 66u, 0x088807A8u>(ctx, &aot_mem) && ctx.pc == 0x08AB520Cu) goto L_08AB520C;
    return;
L_08AB520C:
    ctx.gpr[31] = (0x08AB5214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 62u, 0x0882C3C8u>(ctx, &aot_mem) && ctx.pc == 0x08AB5214u) goto L_08AB5214;
    return;
L_08AB5214:
    ctx.gpr[31] = (0x08AB521Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2144));
    goto L_08AB4FBC;
L_08AB521C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB52E4;
      }
      goto L_08AB5224;
    }
L_08AB5224:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[31] = (0x08AB524Cu);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08AB5004;
L_08AB524C:
    ctx.gpr[31] = (0x08AB5254u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08AB4FF4;
L_08AB5254:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5264u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 204u, 0x08961158u>(ctx, &aot_mem) && ctx.pc == 0x08AB5264u) goto L_08AB5264;
    return;
L_08AB5264:
    ctx.gpr[31] = (0x08AB526Cu);
    // nop
    goto L_08AB5094;
L_08AB526C:
    ctx.gpr[31] = (0x08AB5274u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2136));
    goto L_08AB4FBC;
L_08AB5274:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB52D4;
      }
      goto L_08AB527C;
    }
L_08AB527C:
    ctx.gpr[31] = (0x08AB5284u);
    // nop
    goto L_08AB5004;
L_08AB5284:
    ctx.gpr[31] = (0x08AB528Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08AB4FF4;
L_08AB528C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB5298u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 723u, 0x08992FD4u>(ctx, &aot_mem) && ctx.pc == 0x08AB5298u) goto L_08AB5298;
    return;
L_08AB5298:
    ctx.gpr[31] = (0x08AB52A0u);
    // nop
    goto L_08AB5094;
L_08AB52A0:
    ctx.gpr[31] = (0x08AB52A8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2128));
    goto L_08AB4FBC;
L_08AB52A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB52C4;
      }
      goto L_08AB52B0;
    }
L_08AB52B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5334;
      }
      goto L_08AB52BC;
    }
L_08AB52BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB533C;
      }
      goto L_08AB52C4;
    }
L_08AB52C4:
    ctx.gpr[31] = (0x08AB52CCu);
    // nop
    goto L_08AB50BC;
L_08AB52CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB53D0;
      }
      goto L_08AB52D4;
    }
L_08AB52D4:
    ctx.gpr[31] = (0x08AB52DCu);
    // nop
    goto L_08AB50BC;
L_08AB52DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB53D0;
      }
      goto L_08AB52E4;
    }
L_08AB52E4:
    ctx.gpr[31] = (0x08AB52ECu);
    // nop
    goto L_08AB50BC;
L_08AB52EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB53D0;
      }
      goto L_08AB52F4;
    }
L_08AB52F4:
    ctx.gpr[31] = (0x08AB52FCu);
    // nop
    goto L_08AB50BC;
L_08AB52FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB53D0;
      }
      goto L_08AB5304;
    }
L_08AB5304:
    ctx.gpr[31] = (0x08AB530Cu);
    // nop
    goto L_08AB50BC;
L_08AB530C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB53D0;
      }
      goto L_08AB5314;
    }
L_08AB5314:
    ctx.gpr[31] = (0x08AB531Cu);
    // nop
    goto L_08AB50BC;
L_08AB531C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB53D0;
      }
      goto L_08AB5324;
    }
L_08AB5324:
    ctx.gpr[31] = (0x08AB532Cu);
    // nop
    goto L_08AB50BC;
L_08AB532C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB53D0;
      }
      goto L_08AB5334;
    }
L_08AB5334:
    ctx.gpr[31] = (0x08AB533Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08AB533Cu) goto L_08AB533C;
    return;
L_08AB533C:
    ctx.gpr[31] = (0x08AB5344u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AB5004;
L_08AB5344:
    ctx.gpr[31] = (0x08AB534Cu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08AB4FF4;
L_08AB534C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB535Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 408u, 0x0880DBC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB535Cu) goto L_08AB535C;
    return;
L_08AB535C:
    ctx.gpr[31] = (0x08AB5364u);
    // nop
    goto L_08AB5094;
L_08AB5364:
    ctx.gpr[31] = (0x08AB536Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 526u, 0x08AD3110u>(ctx, &aot_mem) && ctx.pc == 0x08AB536Cu) goto L_08AB536C;
    return;
L_08AB536C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08AB5384;
      }
      goto L_08AB5378;
    }
L_08AB5378:
    ctx.gpr[31] = (0x08AB5380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB5380u) goto L_08AB5380;
    return;
L_08AB5380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB5384;
L_08AB5384:
    ctx.gpr[31] = (0x08AB538Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 708u, 0x089C70A8u>(ctx, &aot_mem) && ctx.pc == 0x08AB538Cu) goto L_08AB538C;
    return;
L_08AB538C:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08AB5398u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A060BCu>(ctx, &aot_mem) && ctx.pc == 0x08AB5398u) goto L_08AB5398;
    return;
L_08AB5398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08AB53B0;
      }
      goto L_08AB53A4;
    }
L_08AB53A4:
    ctx.gpr[31] = (0x08AB53ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB53ACu) goto L_08AB53AC;
    return;
L_08AB53AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB53B0;
L_08AB53B0:
    ctx.gpr[31] = (0x08AB53B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 710u, 0x089C70B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB53B8u) goto L_08AB53B8;
    return;
L_08AB53B8:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08AB53C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A0605Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB53C4u) goto L_08AB53C4;
    return;
L_08AB53C4:
    ctx.gpr[31] = (0x08AB53CCu);
    // nop
    goto L_08AB50BC;
L_08AB53CC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AB53D0;
L_08AB53D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB53E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2280u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB53FCu);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(2288));
    goto L_08AB4EC8;
L_08AB53FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB540Cu);
    ctx.gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB540Cu) goto L_08AB540C;
    return;
L_08AB540C:
    ctx.gpr[31] = (0x08AB5414u);
    // nop
    goto L_08AB50BC;
L_08AB5414:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB5438u);
    ctx.gpr[4] = (0u | 360u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 463u, 0x08966E58u>(ctx, &aot_mem) && ctx.pc == 0x08AB5438u) goto L_08AB5438;
    return;
L_08AB5438:
    ctx.gpr[31] = (0x08AB5440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AB5440u) goto L_08AB5440;
    return;
L_08AB5440:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3160)));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AB5454u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 725u, 0x0888A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08AB5454u) goto L_08AB5454;
    return;
L_08AB5454:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5460:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (32785u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (32785u << 16u);
      if (branch_taken) {
          goto L_08AB54F8;
      }
      goto L_08AB5484;
    }
L_08AB5484:
    ctx.gpr[5] = (32770u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(403));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (32785u << 16u);
      if (branch_taken) {
          goto L_08AB54B4;
      }
      goto L_08AB5498;
    }
L_08AB5498:
    ctx.gpr[5] = (32770u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(402));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB54AC;
    }
L_08AB54AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB54B4;
    }
L_08AB54B4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (32751u << 16u);
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB54C0;
    }
L_08AB54C0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB557C;
      }
      goto L_08AB54D0;
    }
L_08AB54D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB5584;
      }
      goto L_08AB54D8;
    }
L_08AB54D8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AB558C;
      }
      goto L_08AB54E0;
    }
L_08AB54E0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB5594;
      }
      goto L_08AB54E8;
    }
L_08AB54E8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08AB559C;
      }
      goto L_08AB54F0;
    }
L_08AB54F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AB55A4;
      }
      goto L_08AB54F8;
    }
L_08AB54F8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(779));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (32785u << 16u);
      if (branch_taken) {
          goto L_08AB553C;
      }
      goto L_08AB5508;
    }
L_08AB5508:
    ctx.gpr[5] = (32785u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(767));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (32751u << 16u);
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB551C;
    }
L_08AB551C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-768));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12008)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB553C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(896));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (32785u << 16u);
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB554C;
    }
L_08AB554C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(907));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (32751u << 16u);
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB555C;
    }
L_08AB555C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-897));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12056)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB557C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB5584;
    }
L_08AB5584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB558C;
    }
L_08AB558C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB5594;
    }
L_08AB5594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB559C;
    }
L_08AB559C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55A4;
    }
L_08AB55A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55AC;
    }
L_08AB55AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55B4;
    }
L_08AB55B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55BC;
    }
L_08AB55BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55C4;
    }
L_08AB55C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55CC;
    }
L_08AB55CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55D4;
    }
L_08AB55D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55DC;
    }
L_08AB55DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55E4;
    }
L_08AB55E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55EC;
    }
L_08AB55EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55F4;
    }
L_08AB55F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55FC;
    }
L_08AB55FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB5604;
    }
L_08AB5604:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5630;
      }
      goto L_08AB5624;
    }
L_08AB5624:
    ctx.gpr[31] = (0x08AB562Cu);
    // nop
    goto L_08AB4E74;
L_08AB562C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216), 0u);
    goto L_08AB5630;
L_08AB5630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5648;
      }
      goto L_08AB563C;
    }
L_08AB563C:
    ctx.gpr[31] = (0x08AB5644u);
    // nop
    goto L_08AB4E74;
L_08AB5644:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212), 0u);
    goto L_08AB5648;
L_08AB5648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5660;
      }
      goto L_08AB5654;
    }
L_08AB5654:
    ctx.gpr[31] = (0x08AB565Cu);
    // nop
    goto L_08AB4E74;
L_08AB565C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204), 0u);
    goto L_08AB5660;
L_08AB5660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5678;
      }
      goto L_08AB566C;
    }
L_08AB566C:
    ctx.gpr[31] = (0x08AB5674u);
    // nop
    goto L_08AB4E74;
L_08AB5674:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208), 0u);
    goto L_08AB5678;
L_08AB5678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5690;
      }
      goto L_08AB5684;
    }
L_08AB5684:
    ctx.gpr[31] = (0x08AB568Cu);
    // nop
    goto L_08AB4E74;
L_08AB568C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200), 0u);
    goto L_08AB5690;
L_08AB5690:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB569C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB56B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2108));
    ctx.pc = 0x08B730ACu;
    return;
L_08AB56B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB56C4;
      }
      goto L_08AB56BC;
    }
L_08AB56BC:
    ctx.gpr[31] = (0x08AB56C4u);
    // nop
    goto L_08AB5468;
L_08AB56C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB56D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7364)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB5700;
      }
      goto L_08AB56F0;
    }
L_08AB56F0:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29232));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AB5700;
L_08AB5700:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB5724;
      }
      goto L_08AB570C;
    }
L_08AB570C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AB572C;
      }
      goto L_08AB571C;
    }
L_08AB571C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5744;
      }
      goto L_08AB5724;
    }
L_08AB5724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5A88;
      }
      goto L_08AB572C;
    }
L_08AB572C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB573Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB573Cu) goto L_08AB573C;
    return;
L_08AB573C:
    ctx.gpr[31] = (0x08AB5744u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB5744u) goto L_08AB5744;
    return;
L_08AB5744:
    ctx.gpr[31] = (0x08AB574Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem) && ctx.pc == 0x08AB574Cu) goto L_08AB574C;
    return;
L_08AB574C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB5754;
    }
L_08AB5754:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5808;
      }
      goto L_08AB575C;
    }
L_08AB575C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2264)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
      if (branch_taken) {
          goto L_08AB5798;
      }
      goto L_08AB5768;
    }
L_08AB5768:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB5790;
      }
      goto L_08AB5770;
    }
L_08AB5770:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB5780u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB5780u) goto L_08AB5780;
    return;
L_08AB5780:
    ctx.gpr[31] = (0x08AB5788u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB5788u) goto L_08AB5788;
    return;
L_08AB5788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[5] = (0u | 1u);
    goto L_08AB5790;
L_08AB5790:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AB57CC;
      }
      goto L_08AB5798;
    }
L_08AB5798:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(11800));
      if (branch_taken) {
          goto L_08AB57C0;
      }
      goto L_08AB57A4;
    }
L_08AB57A4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB57B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB57B4u) goto L_08AB57B4;
    return;
L_08AB57B4:
    ctx.gpr[31] = (0x08AB57BCu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB57BCu) goto L_08AB57BC;
    return;
L_08AB57BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    goto L_08AB57C0;
L_08AB57C0:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    goto L_08AB57CC;
L_08AB57CC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AB57F0;
      }
      goto L_08AB57D4;
    }
L_08AB57D4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB57E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB57E4u) goto L_08AB57E4;
    return;
L_08AB57E4:
    ctx.gpr[31] = (0x08AB57ECu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB57ECu) goto L_08AB57EC;
    return;
L_08AB57EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB57F0;
L_08AB57F0:
    ctx.gpr[31] = (0x08AB57F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 610u, 0x0882E9ACu>(ctx, &aot_mem) && ctx.pc == 0x08AB57F8u) goto L_08AB57F8;
    return;
L_08AB57F8:
    ctx.gpr[31] = (0x08AB5800u);
    // nop
    goto L_08AB50BC;
L_08AB5800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB5808;
    }
L_08AB5808:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB5850;
      }
      goto L_08AB5814;
    }
L_08AB5814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2120));
      if (branch_taken) {
          goto L_08AB5838;
      }
      goto L_08AB5820;
    }
L_08AB5820:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB5830u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB5830u) goto L_08AB5830;
    return;
L_08AB5830:
    ctx.gpr[31] = (0x08AB5838u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB5838u) goto L_08AB5838;
    return;
L_08AB5838:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AB5848u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    goto L_08AB50BC;
L_08AB5848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB5850;
    }
L_08AB5850:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB58CC;
      }
      goto L_08AB585C;
    }
L_08AB585C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2264)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
      if (branch_taken) {
          goto L_08AB5898;
      }
      goto L_08AB5868;
    }
L_08AB5868:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2108));
      if (branch_taken) {
          goto L_08AB5888;
      }
      goto L_08AB5870;
    }
L_08AB5870:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB5880u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB5880u) goto L_08AB5880;
    return;
L_08AB5880:
    ctx.gpr[31] = (0x08AB5888u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB5888u) goto L_08AB5888;
    return;
L_08AB5888:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB5898;
    }
L_08AB5898:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(11800));
      if (branch_taken) {
          goto L_08AB58BC;
      }
      goto L_08AB58A4;
    }
L_08AB58A4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB58B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB58B4u) goto L_08AB58B4;
    return;
L_08AB58B4:
    ctx.gpr[31] = (0x08AB58BCu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB58BCu) goto L_08AB58BC;
    return;
L_08AB58BC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB58CC;
    }
L_08AB58CC:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB590C;
      }
      goto L_08AB58D8;
    }
L_08AB58D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2120));
      if (branch_taken) {
          goto L_08AB58FC;
      }
      goto L_08AB58E4;
    }
L_08AB58E4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB58F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB58F4u) goto L_08AB58F4;
    return;
L_08AB58F4:
    ctx.gpr[31] = (0x08AB58FCu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB58FCu) goto L_08AB58FC;
    return;
L_08AB58FC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB590C;
    }
L_08AB590C:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AB59D4;
      }
      goto L_08AB5918;
    }
L_08AB5918:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB599C;
      }
      goto L_08AB5924;
    }
L_08AB5924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB5948;
      }
      goto L_08AB5930;
    }
L_08AB5930:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[17]);
    ctx.gpr[31] = (0x08AB593Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB593Cu) goto L_08AB593C;
    return;
L_08AB593C:
    ctx.gpr[31] = (0x08AB5944u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB5944u) goto L_08AB5944;
    return;
L_08AB5944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    goto L_08AB5948;
L_08AB5948:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08AB5968;
      }
      goto L_08AB5950;
    }
L_08AB5950:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[17]);
    ctx.gpr[31] = (0x08AB595Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB595Cu) goto L_08AB595C;
    return;
L_08AB595C:
    ctx.gpr[31] = (0x08AB5964u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB5964u) goto L_08AB5964;
    return;
L_08AB5964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    goto L_08AB5968;
L_08AB5968:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08AB5984;
      }
      goto L_08AB5970;
    }
L_08AB5970:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[17]);
    ctx.gpr[31] = (0x08AB597Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB597Cu) goto L_08AB597C;
    return;
L_08AB597C:
    ctx.gpr[31] = (0x08AB5984u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB5984u) goto L_08AB5984;
    return;
L_08AB5984:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB5990u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 610u, 0x0882E9ACu>(ctx, &aot_mem) && ctx.pc == 0x08AB5990u) goto L_08AB5990;
    return;
L_08AB5990:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19683), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB599C;
    }
L_08AB599C:
    ctx.gpr[31] = (0x08AB59A4u);
    // nop
    goto L_08AB50BC;
L_08AB59A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2108));
      if (branch_taken) {
          goto L_08AB59C4;
      }
      goto L_08AB59B0;
    }
L_08AB59B0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[17]);
    ctx.gpr[31] = (0x08AB59BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB59BCu) goto L_08AB59BC;
    return;
L_08AB59BC:
    ctx.gpr[31] = (0x08AB59C4u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB59C4u) goto L_08AB59C4;
    return;
L_08AB59C4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB59D4;
    }
L_08AB59D4:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB59E0;
    }
L_08AB59E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2120));
      if (branch_taken) {
          goto L_08AB5A24;
      }
      goto L_08AB59EC;
    }
L_08AB59EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5A0C;
      }
      goto L_08AB59F8;
    }
L_08AB59F8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[17]);
    ctx.gpr[31] = (0x08AB5A04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB5A04u) goto L_08AB5A04;
    return;
L_08AB5A04:
    ctx.gpr[31] = (0x08AB5A0Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB5A0Cu) goto L_08AB5A0C;
    return;
L_08AB5A0C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AB5A1Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    goto L_08AB53E4;
L_08AB5A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB5A24;
    }
L_08AB5A24:
    ctx.gpr[31] = (0x08AB5A2Cu);
    // nop
    goto L_08AB50BC;
L_08AB5A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB5A50;
      }
      goto L_08AB5A38;
    }
L_08AB5A38:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[17]);
    ctx.gpr[31] = (0x08AB5A44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB5A44u) goto L_08AB5A44;
    return;
L_08AB5A44:
    ctx.gpr[31] = (0x08AB5A4Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB5A4Cu) goto L_08AB5A4C;
    return;
L_08AB5A4C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AB5A50;
L_08AB5A50:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    goto L_08AB5A58;
L_08AB5A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AB5A80;
      }
      goto L_08AB5A64;
    }
L_08AB5A64:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB5A74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB5A74u) goto L_08AB5A74;
    return;
L_08AB5A74:
    ctx.gpr[31] = (0x08AB5A7Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB5A7Cu) goto L_08AB5A7C;
    return;
L_08AB5A7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB5A80;
L_08AB5A80:
    ctx.gpr[31] = (0x08AB5A88u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 619u, 0x0882EA18u>(ctx, &aot_mem) && ctx.pc == 0x08AB5A88u) goto L_08AB5A88;
    return;
L_08AB5A88:
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
L_08AB5AA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5AD0;
      }
      goto L_08AB5AB4;
    }
L_08AB5AB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-27191)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5AC8;
      }
      goto L_08AB5AC0;
    }
L_08AB5AC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 7u);
      if (branch_taken) {
          goto L_08AB5AD4;
      }
      goto L_08AB5AC8;
    }
L_08AB5AC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB5AD4;
      }
      goto L_08AB5AD0;
    }
L_08AB5AD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AB5AD4;
L_08AB5AD4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196), static_cast<std::uint8_t>(0u));
    goto L_08AB5AD8;
L_08AB5AD8:
    ctx.gpr[31] = (0x08AB5AE0u);
    // nop
    ctx.pc = 0x08B7350Cu;
    return;
L_08AB5AE0:
    ctx.gpr[31] = (0x08AB5AE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB7430;
L_08AB5AE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5AD8;
      }
      goto L_08AB5AF0;
    }
L_08AB5AF0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB5B00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB56D0;
L_08AB5B00:
    ctx.gpr[31] = (0x08AB5B08u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B734F4u;
    return;
L_08AB5B08:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5B1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB5B5C;
      }
      goto L_08AB5B3C;
    }
L_08AB5B3C:
    ctx.gpr[17] = (2236u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29232));
      if (branch_taken) {
          goto L_08AB5B64;
      }
      goto L_08AB5B48;
    }
L_08AB5B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB5B54u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB782C;
L_08AB5B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5B90;
      }
      goto L_08AB5B5C;
    }
L_08AB5B5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5CB0;
      }
      goto L_08AB5B64;
    }
L_08AB5B64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-27191)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5B84;
      }
      goto L_08AB5B70;
    }
L_08AB5B70:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AB5B7Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AB782C;
L_08AB5B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5B90;
      }
      goto L_08AB5B84;
    }
L_08AB5B84:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AB5B90u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AB782C;
L_08AB5B90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(301)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7364), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5BB8;
      }
      goto L_08AB5BA0;
    }
L_08AB5BA0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5BACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 336u, 0x089B9BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB5BACu) goto L_08AB5BAC;
    return;
L_08AB5BAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5BA0;
      }
      goto L_08AB5BB8;
    }
L_08AB5BB8:
    ctx.gpr[31] = (0x08AB5BC0u);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08AB5BC0:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8728), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2096));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23200));
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[7] = (0u | 8192u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[31] = (0x08AB5BF0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08B734B4u;
    return;
L_08AB5BF0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB5C30;
      }
      goto L_08AB5C00;
    }
L_08AB5C00:
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AB5C38;
      }
      goto L_08AB5C0C;
    }
L_08AB5C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB5C18u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB569C;
L_08AB5C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    ctx.gpr[5] = (0u | 1200u);
    ctx.gpr[31] = (0x08AB5C28u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B73464u;
    return;
L_08AB5C28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AB5C78;
      }
      goto L_08AB5C30;
    }
L_08AB5C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5CB0;
      }
      goto L_08AB5C38;
    }
L_08AB5C38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-27191)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5C58;
      }
      goto L_08AB5C44;
    }
L_08AB5C44:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AB5C50u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AB569C;
L_08AB5C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5C64;
      }
      goto L_08AB5C58;
    }
L_08AB5C58:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AB5C64u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AB569C;
L_08AB5C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB5C74u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B73464u;
    return;
L_08AB5C74:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08AB5C78;
L_08AB5C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB5CA0;
      }
      goto L_08AB5C84;
    }
L_08AB5C84:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB5C94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB5C94u) goto L_08AB5C94;
    return;
L_08AB5C94:
    ctx.gpr[31] = (0x08AB5C9Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB5C9Cu) goto L_08AB5C9C;
    return;
L_08AB5C9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AB5CA0;
L_08AB5CA0:
    ctx.gpr[31] = (0x08AB5CA8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 615u, 0x0882E9D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB5CA8u) goto L_08AB5CA8;
    return;
L_08AB5CA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB5CB0;
      }
      goto L_08AB5CB0;
    }
L_08AB5CB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5CC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB5CD4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AB5B1C;
L_08AB5CD4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2296), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2294), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5CF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB5D00u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AB5B1C;
L_08AB5D00:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2296), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2294), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5D1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1360), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB5D38u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1360));
    goto L_08AB5B1C;
L_08AB5D38:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2296), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2294), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5D54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[6] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(2560), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(2560));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB5D80u);
    ctx.gpr[6] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB5D80u) goto L_08AB5D80;
    return;
L_08AB5D80:
    ctx.gpr[31] = (0x08AB5D88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB5B1C;
L_08AB5D88:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2296), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2294), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5DA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(3760), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(3760));
    ctx.gpr[8] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4040));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB5DE8u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08AB5B1C;
L_08AB5DE8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2296), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2294), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5E04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29232));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(301)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2293), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AB5E50;
      }
      goto L_08AB5E44;
    }
L_08AB5E44:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5E50u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 336u, 0x089B9BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB5E50u) goto L_08AB5E50;
    return;
L_08AB5E50:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB5E6Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AB5DA8;
L_08AB5E6C:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08AB5E78;
L_08AB5E78:
    ctx.gpr[31] = (0x08AB5E80u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 658u, 0x08A06984u>(ctx, &aot_mem) && ctx.pc == 0x08AB5E80u) goto L_08AB5E80;
    return;
L_08AB5E80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5E98;
      }
      goto L_08AB5E88;
    }
L_08AB5E88:
    ctx.gpr[31] = (0x08AB5E90u);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08AB5E90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8728), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08AB5E78;
      }
      goto L_08AB5E98;
    }
L_08AB5E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EB0;
      }
      goto L_08AB5EA4;
    }
L_08AB5EA4:
    ctx.gpr[31] = (0x08AB5EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AB5EACu) goto L_08AB5EAC;
    return;
L_08AB5EAC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216), 0u);
    goto L_08AB5EB0;
L_08AB5EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EC8;
      }
      goto L_08AB5EBC;
    }
L_08AB5EBC:
    ctx.gpr[31] = (0x08AB5EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AB5EC4u) goto L_08AB5EC4;
    return;
L_08AB5EC4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212), 0u);
    goto L_08AB5EC8;
L_08AB5EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EE0;
      }
      goto L_08AB5ED4;
    }
L_08AB5ED4:
    ctx.gpr[31] = (0x08AB5EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AB5EDCu) goto L_08AB5EDC;
    return;
L_08AB5EDC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204), 0u);
    goto L_08AB5EE0;
L_08AB5EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5EF8;
      }
      goto L_08AB5EEC;
    }
L_08AB5EEC:
    ctx.gpr[31] = (0x08AB5EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AB5EF4u) goto L_08AB5EF4;
    return;
L_08AB5EF4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200), 0u);
    goto L_08AB5EF8;
L_08AB5EF8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F0C;
      }
      goto L_08AB5F00;
    }
L_08AB5F00:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5F0Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem) && ctx.pc == 0x08AB5F0Cu) goto L_08AB5F0C;
    return;
L_08AB5F0C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
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
L_08AB5F30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29232));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(301)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F64;
      }
      goto L_08AB5F58;
    }
L_08AB5F58:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5F64u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 336u, 0x089B9BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB5F64u) goto L_08AB5F64;
    return;
L_08AB5F64:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08AB5F70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(760));
    goto L_08AB5D54;
L_08AB5F70:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08AB5F7C;
L_08AB5F7C:
    ctx.gpr[31] = (0x08AB5F84u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 658u, 0x08A06984u>(ctx, &aot_mem) && ctx.pc == 0x08AB5F84u) goto L_08AB5F84;
    return;
L_08AB5F84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F9C;
      }
      goto L_08AB5F8C;
    }
L_08AB5F8C:
    ctx.gpr[31] = (0x08AB5F94u);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08AB5F94:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8728), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08AB5F7C;
      }
      goto L_08AB5F9C;
    }
L_08AB5F9C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5FB0;
      }
      goto L_08AB5FA4;
    }
L_08AB5FA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5FB0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem) && ctx.pc == 0x08AB5FB0u) goto L_08AB5FB0;
    return;
L_08AB5FB0:
    ctx.gpr[2] = (0u | 1u);
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
L_08AB5FCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB5FECu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB5FECu) goto L_08AB5FEC;
    return;
L_08AB5FEC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB5FF8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2072));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB5FF8u) goto L_08AB5FF8;
    return;
L_08AB5FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AB600C;
      }
      goto L_08AB6004;
    }
L_08AB6004:
    ctx.gpr[31] = (0x08AB600Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08AB600Cu) goto L_08AB600C;
    return;
L_08AB600C:
    ctx.gpr[31] = (0x08AB6014u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 251u, 0x088B5A54u>(ctx, &aot_mem) && ctx.pc == 0x08AB6014u) goto L_08AB6014;
    return;
L_08AB6014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6028;
      }
      goto L_08AB6020;
    }
L_08AB6020:
    ctx.gpr[31] = (0x08AB6028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08AB6028u) goto L_08AB6028;
    return;
L_08AB6028:
    ctx.gpr[31] = (0x08AB6030u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 298u, 0x088B5D90u>(ctx, &aot_mem) && ctx.pc == 0x08AB6030u) goto L_08AB6030;
    return;
L_08AB6030:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[31] = (0x08AB6044u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(760));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6044u) goto L_08AB6044;
    return;
L_08AB6044:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB6054u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6054u) goto L_08AB6054;
    return;
L_08AB6054:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB6064u);
    ctx.gpr[6] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6064u) goto L_08AB6064;
    return;
L_08AB6064:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AB6070u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11820));
    ctx.pc = 0x08B7366Cu;
    return;
L_08AB6070:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6174;
      }
      goto L_08AB607C;
    }
L_08AB607C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[31] = (0x08AB6088u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B7367Cu;
    return;
L_08AB6088:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB6148;
      }
      goto L_08AB6090;
    }
L_08AB6090:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.gpr[31] = (0x08AB60A0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB60A0u) goto L_08AB60A0;
    return;
L_08AB60A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB6134;
      }
      goto L_08AB60A8;
    }
L_08AB60A8:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2072));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[31] = (0x08AB60B8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB60B8u) goto L_08AB60B8;
    return;
L_08AB60B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6134;
      }
      goto L_08AB60C0;
    }
L_08AB60C0:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2064));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB60D8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11820));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB60D8u) goto L_08AB60D8;
    return;
L_08AB60D8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[31] = (0x08AB60E4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B7365Cu;
    return;
L_08AB60E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6134;
      }
      goto L_08AB60EC;
    }
L_08AB60EC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[31] = (0x08AB60FCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B72F44u;
    return;
L_08AB60FC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[31] = (0x08AB6108u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B72F4Cu;
    return;
L_08AB6108:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB6134;
      }
      goto L_08AB6110;
    }
L_08AB6110:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[18]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[31] = (0x08AB6124u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(760));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6124u) goto L_08AB6124;
    return;
L_08AB6124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[5]);
    goto L_08AB6134;
L_08AB6134:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[31] = (0x08AB6140u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B7367Cu;
    return;
L_08AB6140:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AB6090;
      }
      goto L_08AB6148;
    }
L_08AB6148:
    ctx.gpr[31] = (0x08AB6150u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B73684u;
    return;
L_08AB6150:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08AB615Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(760));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB615Cu) goto L_08AB615C;
    return;
L_08AB615C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB616C;
      }
      goto L_08AB6164;
    }
L_08AB6164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB6178;
      }
      goto L_08AB616C;
    }
L_08AB616C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB6178;
      }
      goto L_08AB6174;
    }
L_08AB6174:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB6178;
L_08AB6178:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(716)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6194:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB61C8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB61C8u) goto L_08AB61C8;
    return;
L_08AB61C8:
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2072));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB61D8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB61D8u) goto L_08AB61D8;
    return;
L_08AB61D8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB61ECu);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB61ECu) goto L_08AB61EC;
    return;
L_08AB61EC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB6200u);
    ctx.gpr[6] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6200u) goto L_08AB6200;
    return;
L_08AB6200:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AB620Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11820));
    ctx.pc = 0x08B7366Cu;
    return;
L_08AB620C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6294;
      }
      goto L_08AB6218;
    }
L_08AB6218:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB6224u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B7367Cu;
    return;
L_08AB6224:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[16] = (ctx.gpr[29] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08AB628C;
      }
      goto L_08AB622C;
    }
L_08AB622C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    goto L_08AB6234;
L_08AB6234:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB6244u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6244u) goto L_08AB6244;
    return;
L_08AB6244:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AB6260;
      }
      goto L_08AB624C;
    }
L_08AB624C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6258u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6258u) goto L_08AB6258;
    return;
L_08AB6258:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB627C;
      }
      goto L_08AB6260;
    }
L_08AB6260:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB626Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B7367Cu;
    return;
L_08AB626C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AB6234;
      }
      goto L_08AB6274;
    }
L_08AB6274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB628C;
      }
      goto L_08AB627C;
    }
L_08AB627C:
    ctx.gpr[31] = (0x08AB6284u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B73684u;
    return;
L_08AB6284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB6298;
      }
      goto L_08AB628C;
    }
L_08AB628C:
    ctx.gpr[31] = (0x08AB6294u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B73684u;
    return;
L_08AB6294:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB6298;
L_08AB6298:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB62C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(780));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 580u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB62F8u);
    ctx.gpr[6] = (0u | 580u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB62F8u) goto L_08AB62F8;
    return;
L_08AB62F8:
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AB630Cu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B730E4u;
    return;
L_08AB630C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 580u);
    ctx.gpr[31] = (0x08AB6320u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2108));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6320u) goto L_08AB6320;
    return;
L_08AB6320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(780), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 19u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
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
L_08AB636C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB6380u);
    ctx.gpr[16] = (0u | 1u);
    ctx.pc = 0x08B730DCu;
    return;
L_08AB6380:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB644C;
      }
      goto L_08AB6390;
    }
L_08AB6390:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB6440;
      }
      goto L_08AB6398;
    }
L_08AB6398:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AB63B8;
      }
      goto L_08AB63A0;
    }
L_08AB63A0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB63DC;
      }
      goto L_08AB63A8;
    }
L_08AB63A8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AB6434;
      }
      goto L_08AB63B0;
    }
L_08AB63B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6454;
      }
      goto L_08AB63B8;
    }
L_08AB63B8:
    ctx.gpr[31] = (0x08AB63C0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B730CCu;
    return;
L_08AB63C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB63D4;
      }
      goto L_08AB63CC;
    }
L_08AB63CC:
    ctx.gpr[31] = (0x08AB63D4u);
    // nop
    goto L_08AB5468;
L_08AB63D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6454;
      }
      goto L_08AB63DC;
    }
L_08AB63DC:
    ctx.gpr[5] = (2236u << 16u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2108));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_08AB6408;
      }
      goto L_08AB63F4;
    }
L_08AB63F4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB6410;
      }
      goto L_08AB63FC;
    }
L_08AB63FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1484)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6410;
      }
      goto L_08AB6408;
    }
L_08AB6408:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AB6410;
L_08AB6410:
    ctx.gpr[31] = (0x08AB6418u);
    // nop
    ctx.pc = 0x08B730BCu;
    return;
L_08AB6418:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB642C;
      }
      goto L_08AB6424;
    }
L_08AB6424:
    ctx.gpr[31] = (0x08AB642Cu);
    // nop
    goto L_08AB5468;
L_08AB642C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6454;
      }
      goto L_08AB6434;
    }
L_08AB6434:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7713), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB6454;
      }
      goto L_08AB6440;
    }
L_08AB6440:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7713), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB6454;
      }
      goto L_08AB644C;
    }
L_08AB644C:
    ctx.gpr[31] = (0x08AB6454u);
    // nop
    goto L_08AB5468;
L_08AB6454:
    ctx.gpr[31] = (0x08AB645Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8872)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 808u, 0x08A07608u>(ctx, &aot_mem) && ctx.pc == 0x08AB645Cu) goto L_08AB645C;
    return;
L_08AB645C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6470:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7364)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB648C;
      }
      goto L_08AB647C;
    }
L_08AB647C:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29232));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AB648C;
L_08AB648C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    goto L_08AB64A4;
L_08AB64A4:
    ctx.gpr[31] = (0x08AB64ACu);
    // nop
    ctx.pc = 0x08B7350Cu;
    return;
L_08AB64AC:
    ctx.gpr[31] = (0x08AB64B4u);
    // nop
    goto L_08AB636C;
L_08AB64B4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08AB64B8;
L_08AB64B8:
    ctx.gpr[31] = (0x08AB64C0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B73264u;
    return;
L_08AB64C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB64D8;
      }
      goto L_08AB64C8;
    }
L_08AB64C8:
    ctx.gpr[31] = (0x08AB64D0u);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08AB64D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB64B8;
      }
      goto L_08AB64D8;
    }
L_08AB64D8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB64A4;
      }
      goto L_08AB64E0;
    }
L_08AB64E0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB64F0u);
    // nop
    goto L_08AB6470;
L_08AB64F0:
    ctx.gpr[31] = (0x08AB64F8u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B734F4u;
    return;
L_08AB64F8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB650C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB6554;
      }
      goto L_08AB6534;
    }
L_08AB6534:
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(29232));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(301)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7364), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB655C;
      }
      goto L_08AB654C;
    }
L_08AB654C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6574;
      }
      goto L_08AB6554;
    }
L_08AB6554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB6624;
      }
      goto L_08AB655C;
    }
L_08AB655C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB6568u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 336u, 0x089B9BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6568u) goto L_08AB6568;
    return;
L_08AB6568:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB655C;
      }
      goto L_08AB6574;
    }
L_08AB6574:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2056));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25748));
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[7] = (0u | 8192u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[31] = (0x08AB6594u);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08B734B4u;
    return;
L_08AB6594:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB65C8;
      }
      goto L_08AB65A4;
    }
L_08AB65A4:
    ctx.gpr[31] = (0x08AB65ACu);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AB62C4;
L_08AB65AC:
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(780));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB65D0;
      }
      goto L_08AB65C0;
    }
L_08AB65C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(572), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB65D8;
      }
      goto L_08AB65C8;
    }
L_08AB65C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB6624;
      }
      goto L_08AB65D0;
    }
L_08AB65D0:
    ctx.gpr[4] = (0u | 273u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(572), ctx.gpr[4]);
    goto L_08AB65D8;
L_08AB65D8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x08AB65E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB65E4u) goto L_08AB65E4;
    return;
L_08AB65E4:
    ctx.gpr[31] = (0x08AB65ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B7309Cu;
    return;
L_08AB65EC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB6600;
      }
      goto L_08AB65F8;
    }
L_08AB65F8:
    ctx.gpr[31] = (0x08AB6600u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB5468;
L_08AB6600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB6610u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B73464u;
    return;
L_08AB6610:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB6620;
      }
      goto L_08AB6618;
    }
L_08AB6618:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB6624;
      }
      goto L_08AB6620;
    }
L_08AB6620:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AB6624;
L_08AB6624:
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
L_08AB663C:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7344));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2280), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2276), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB6694;
      }
      goto L_08AB6688;
    }
L_08AB6688:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB6694u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem) && ctx.pc == 0x08AB6694u) goto L_08AB6694;
    return;
L_08AB6694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7644)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8900)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7650)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8140)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7672)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7684)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2340)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10284))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10288)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1944)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1972)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11232)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11236)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11240)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB678C;
      }
      goto L_08AB6784;
    }
L_08AB6784:
    ctx.gpr[31] = (0x08AB678Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB678Cu) goto L_08AB678C;
    return;
L_08AB678C:
    ctx.gpr[31] = (0x08AB6794u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6D78u>(ctx, &aot_mem) && ctx.pc == 0x08AB6794u) goto L_08AB6794;
    return;
L_08AB6794:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB67AC;
      }
      goto L_08AB67A4;
    }
L_08AB67A4:
    ctx.gpr[31] = (0x08AB67ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB67ACu) goto L_08AB67AC;
    return;
L_08AB67AC:
    ctx.gpr[31] = (0x08AB67B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 638u, 0x089C6DBCu>(ctx, &aot_mem) && ctx.pc == 0x08AB67B4u) goto L_08AB67B4;
    return;
L_08AB67B4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB67CC;
      }
      goto L_08AB67C4;
    }
L_08AB67C4:
    ctx.gpr[31] = (0x08AB67CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB67CCu) goto L_08AB67CC;
    return;
L_08AB67CC:
    ctx.gpr[31] = (0x08AB67D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 629u, 0x089C6D68u>(ctx, &aot_mem) && ctx.pc == 0x08AB67D4u) goto L_08AB67D4;
    return;
L_08AB67D4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB67EC;
      }
      goto L_08AB67E4;
    }
L_08AB67E4:
    ctx.gpr[31] = (0x08AB67ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB67ECu) goto L_08AB67EC;
    return;
L_08AB67EC:
    ctx.gpr[31] = (0x08AB67F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 633u, 0x089C6D88u>(ctx, &aot_mem) && ctx.pc == 0x08AB67F4u) goto L_08AB67F4;
    return;
L_08AB67F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24162)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6814;
      }
      goto L_08AB680C;
    }
L_08AB680C:
    ctx.gpr[31] = (0x08AB6814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6814u) goto L_08AB6814;
    return;
L_08AB6814:
    ctx.gpr[31] = (0x08AB681Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 708u, 0x089C70A8u>(ctx, &aot_mem) && ctx.pc == 0x08AB681Cu) goto L_08AB681C;
    return;
L_08AB681C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6834;
      }
      goto L_08AB682C;
    }
L_08AB682C:
    ctx.gpr[31] = (0x08AB6834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6834u) goto L_08AB6834;
    return;
L_08AB6834:
    ctx.gpr[31] = (0x08AB683Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 710u, 0x089C70B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB683Cu) goto L_08AB683C;
    return;
L_08AB683C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6854;
      }
      goto L_08AB684C;
    }
L_08AB684C:
    ctx.gpr[31] = (0x08AB6854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6854u) goto L_08AB6854;
    return;
L_08AB6854:
    ctx.gpr[31] = (0x08AB685Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem) && ctx.pc == 0x08AB685Cu) goto L_08AB685C;
    return;
L_08AB685C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6874;
      }
      goto L_08AB686C;
    }
L_08AB686C:
    ctx.gpr[31] = (0x08AB6874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6874u) goto L_08AB6874;
    return;
L_08AB6874:
    ctx.gpr[31] = (0x08AB687Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 726u, 0x089C7174u>(ctx, &aot_mem) && ctx.pc == 0x08AB687Cu) goto L_08AB687C;
    return;
L_08AB687C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08AB6888u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB6888u) goto L_08AB6888;
    return;
L_08AB6888:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(150)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(168), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16129)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(171), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1781)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(173), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB68BC;
      }
      goto L_08AB68B4;
    }
L_08AB68B4:
    ctx.gpr[31] = (0x08AB68BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB68BCu) goto L_08AB68BC;
    return;
L_08AB68BC:
    ctx.gpr[31] = (0x08AB68C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 644u, 0x089C6DECu>(ctx, &aot_mem) && ctx.pc == 0x08AB68C4u) goto L_08AB68C4;
    return;
L_08AB68C4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(174), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB68DC;
      }
      goto L_08AB68D4;
    }
L_08AB68D4:
    ctx.gpr[31] = (0x08AB68DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB68DCu) goto L_08AB68DC;
    return;
L_08AB68DC:
    ctx.gpr[31] = (0x08AB68E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 722u, 0x089C7148u>(ctx, &aot_mem) && ctx.pc == 0x08AB68E4u) goto L_08AB68E4;
    return;
L_08AB68E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6900;
      }
      goto L_08AB68F8;
    }
L_08AB68F8:
    ctx.gpr[31] = (0x08AB6900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6900u) goto L_08AB6900;
    return;
L_08AB6900:
    ctx.gpr[31] = (0x08AB6908u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 722u, 0x089C7148u>(ctx, &aot_mem) && ctx.pc == 0x08AB6908u) goto L_08AB6908;
    return;
L_08AB6908:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6924;
      }
      goto L_08AB691C;
    }
L_08AB691C:
    ctx.gpr[31] = (0x08AB6924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6924u) goto L_08AB6924;
    return;
L_08AB6924:
    ctx.gpr[31] = (0x08AB692Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 712u, 0x089C70C8u>(ctx, &aot_mem) && ctx.pc == 0x08AB692Cu) goto L_08AB692C;
    return;
L_08AB692C:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6950;
      }
      goto L_08AB6948;
    }
L_08AB6948:
    ctx.gpr[31] = (0x08AB6950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6950u) goto L_08AB6950;
    return;
L_08AB6950:
    ctx.gpr[31] = (0x08AB6958u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 732u, 0x089C71A8u>(ctx, &aot_mem) && ctx.pc == 0x08AB6958u) goto L_08AB6958;
    return;
L_08AB6958:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6970;
      }
      goto L_08AB6968;
    }
L_08AB6968:
    ctx.gpr[31] = (0x08AB6970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6970u) goto L_08AB6970;
    return;
L_08AB6970:
    ctx.gpr[31] = (0x08AB6978u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 730u, 0x089C7194u>(ctx, &aot_mem) && ctx.pc == 0x08AB6978u) goto L_08AB6978;
    return;
L_08AB6978:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(185), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08AB6994;
    }
    goto L_08AB6988;
L_08AB6988:
    ctx.gpr[31] = (0x08AB6990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08AB6990u) goto L_08AB6990;
    return;
L_08AB6990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AB6994;
L_08AB6994:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6864));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08AB69C0;
    }
    goto L_08AB69B4;
L_08AB69B4:
    ctx.gpr[31] = (0x08AB69BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08AB69BCu) goto L_08AB69BC;
    return;
L_08AB69BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AB69C0;
L_08AB69C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6864));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08AB69EC;
    }
    goto L_08AB69E0;
L_08AB69E0:
    ctx.gpr[31] = (0x08AB69E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08AB69E8u) goto L_08AB69E8;
    return;
L_08AB69E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AB69EC;
L_08AB69EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6864));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6A10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7652), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8140), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7676), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7684), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7764), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8344), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(58))))));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(60))))));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10284), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10288), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8664), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2236u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(11232), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(11236), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6AF8;
    }
    goto L_08AB6AEC;
L_08AB6AEC:
    ctx.gpr[31] = (0x08AB6AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6AF4u) goto L_08AB6AF4;
    return;
L_08AB6AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6AF8;
L_08AB6AF8:
    ctx.gpr[31] = (0x08AB6B00u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 632u, 0x089C6D80u>(ctx, &aot_mem) && ctx.pc == 0x08AB6B00u) goto L_08AB6B00;
    return;
L_08AB6B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
        goto L_08AB6B18;
    }
    goto L_08AB6B0C;
L_08AB6B0C:
    ctx.gpr[31] = (0x08AB6B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6B14u) goto L_08AB6B14;
    return;
L_08AB6B14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    goto L_08AB6B18;
L_08AB6B18:
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[31] = (0x08AB6B28u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 639u, 0x089C6DC4u>(ctx, &aot_mem) && ctx.pc == 0x08AB6B28u) goto L_08AB6B28;
    return;
L_08AB6B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(109)));
        goto L_08AB6B40;
    }
    goto L_08AB6B34;
L_08AB6B34:
    ctx.gpr[31] = (0x08AB6B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6B3Cu) goto L_08AB6B3C;
    return;
L_08AB6B3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(109)));
    goto L_08AB6B40;
L_08AB6B40:
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[31] = (0x08AB6B50u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 630u, 0x089C6D70u>(ctx, &aot_mem) && ctx.pc == 0x08AB6B50u) goto L_08AB6B50;
    return;
L_08AB6B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6B68;
    }
    goto L_08AB6B5C;
L_08AB6B5C:
    ctx.gpr[31] = (0x08AB6B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6B64u) goto L_08AB6B64;
    return;
L_08AB6B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6B68;
L_08AB6B68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08AB6B74u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 637u, 0x089C6DB4u>(ctx, &aot_mem) && ctx.pc == 0x08AB6B74u) goto L_08AB6B74;
    return;
L_08AB6B74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24162), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AB6B8C;
      }
      goto L_08AB6B84;
    }
L_08AB6B84:
    ctx.gpr[31] = (0x08AB6B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6B8Cu) goto L_08AB6B8C;
    return;
L_08AB6B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[31] = (0x08AB6B98u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 709u, 0x089C70B0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6B98u) goto L_08AB6B98;
    return;
L_08AB6B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6BB0;
    }
    goto L_08AB6BA4;
L_08AB6BA4:
    ctx.gpr[31] = (0x08AB6BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6BACu) goto L_08AB6BAC;
    return;
L_08AB6BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6BB0;
L_08AB6BB0:
    ctx.gpr[31] = (0x08AB6BB8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 711u, 0x089C70C0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6BB8u) goto L_08AB6BB8;
    return;
L_08AB6BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6BD0;
    }
    goto L_08AB6BC4;
L_08AB6BC4:
    ctx.gpr[31] = (0x08AB6BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6BCCu) goto L_08AB6BCC;
    return;
L_08AB6BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6BD0;
L_08AB6BD0:
    ctx.gpr[31] = (0x08AB6BD8u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128))))));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 680u, 0x089C6F68u>(ctx, &aot_mem) && ctx.pc == 0x08AB6BD8u) goto L_08AB6BD8;
    return;
L_08AB6BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6BF0;
    }
    goto L_08AB6BE4;
L_08AB6BE4:
    ctx.gpr[31] = (0x08AB6BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6BECu) goto L_08AB6BEC;
    return;
L_08AB6BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6BF0;
L_08AB6BF0:
    ctx.gpr[31] = (0x08AB6BF8u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(129)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 727u, 0x089C717Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6BF8u) goto L_08AB6BF8;
    return;
L_08AB6BF8:
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (0x08AB6C04u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB6C04u) goto L_08AB6C04;
    return;
L_08AB6C04:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16129), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(171)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(173)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1781), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(174)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6D0C;
      }
      goto L_08AB6C38;
    }
L_08AB6C38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6C50;
    }
    goto L_08AB6C44;
L_08AB6C44:
    ctx.gpr[31] = (0x08AB6C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6C4Cu) goto L_08AB6C4C;
    return;
L_08AB6C4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6C50;
L_08AB6C50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08AB6C68u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 723u, 0x089C7150u>(ctx, &aot_mem) && ctx.pc == 0x08AB6C68u) goto L_08AB6C68;
    return;
L_08AB6C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08AB6C80;
    }
    goto L_08AB6C74;
L_08AB6C74:
    ctx.gpr[31] = (0x08AB6C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6C7Cu) goto L_08AB6C7C;
    return;
L_08AB6C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AB6C80;
L_08AB6C80:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
      if (branch_taken) {
          goto L_08AB6C90;
      }
      goto L_08AB6C88;
    }
L_08AB6C88:
    ctx.gpr[31] = (0x08AB6C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08AB6C90u) goto L_08AB6C90;
    return;
L_08AB6C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AB6CB4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 429u, 0x0880DE38u>(ctx, &aot_mem) && ctx.pc == 0x08AB6CB4u) goto L_08AB6CB4;
    return;
L_08AB6CB4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB6CC0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 725u, 0x089C716Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6CC0u) goto L_08AB6CC0;
    return;
L_08AB6CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6CD4;
      }
      goto L_08AB6CCC;
    }
L_08AB6CCC:
    ctx.gpr[31] = (0x08AB6CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6CD4u) goto L_08AB6CD4;
    return;
L_08AB6CD4:
    ctx.gpr[31] = (0x08AB6CDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 724u, 0x089C7164u>(ctx, &aot_mem) && ctx.pc == 0x08AB6CDCu) goto L_08AB6CDC;
    return;
L_08AB6CDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6D04;
      }
      goto L_08AB6CE4;
    }
L_08AB6CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6CFC;
    }
    goto L_08AB6CF0;
L_08AB6CF0:
    ctx.gpr[31] = (0x08AB6CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6CF8u) goto L_08AB6CF8;
    return;
L_08AB6CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6CFC;
L_08AB6CFC:
    ctx.gpr[31] = (0x08AB6D04u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 645u, 0x089C6DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB6D04u) goto L_08AB6D04;
    return;
L_08AB6D04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6D2C;
      }
      goto L_08AB6D0C;
    }
L_08AB6D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6D24;
    }
    goto L_08AB6D18;
L_08AB6D18:
    ctx.gpr[31] = (0x08AB6D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6D20u) goto L_08AB6D20;
    return;
L_08AB6D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6D24;
L_08AB6D24:
    ctx.gpr[31] = (0x08AB6D2Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 645u, 0x089C6DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB6D2Cu) goto L_08AB6D2C;
    return;
L_08AB6D2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6DA4;
      }
      goto L_08AB6D38;
    }
L_08AB6D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6D4C;
      }
      goto L_08AB6D44;
    }
L_08AB6D44:
    ctx.gpr[31] = (0x08AB6D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08AB6D4Cu) goto L_08AB6D4C;
    return;
L_08AB6D4C:
    ctx.gpr[31] = (0x08AB6D54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 472u, 0x088B6860u>(ctx, &aot_mem) && ctx.pc == 0x08AB6D54u) goto L_08AB6D54;
    return;
L_08AB6D54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6DA4;
      }
      goto L_08AB6D5C;
    }
L_08AB6D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6D74;
    }
    goto L_08AB6D68;
L_08AB6D68:
    ctx.gpr[31] = (0x08AB6D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6D70u) goto L_08AB6D70;
    return;
L_08AB6D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6D74;
L_08AB6D74:
    ctx.gpr[31] = (0x08AB6D7Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 713u, 0x089C70D0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6D7Cu) goto L_08AB6D7C;
    return;
L_08AB6D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
        goto L_08AB6D94;
    }
    goto L_08AB6D88;
L_08AB6D88:
    ctx.gpr[31] = (0x08AB6D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08AB6D90u) goto L_08AB6D90;
    return;
L_08AB6D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08AB6D94;
L_08AB6D94:
    ctx.gpr[31] = (0x08AB6D9Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 277u, 0x088B5BCCu>(ctx, &aot_mem) && ctx.pc == 0x08AB6D9Cu) goto L_08AB6D9C;
    return;
L_08AB6D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6DE4;
      }
      goto L_08AB6DA4;
    }
L_08AB6DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6DBC;
    }
    goto L_08AB6DB0;
L_08AB6DB0:
    ctx.gpr[31] = (0x08AB6DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6DB8u) goto L_08AB6DB8;
    return;
L_08AB6DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6DBC;
L_08AB6DBC:
    ctx.gpr[31] = (0x08AB6DC4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 713u, 0x089C70D0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6DC4u) goto L_08AB6DC4;
    return;
L_08AB6DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
        goto L_08AB6DDC;
    }
    goto L_08AB6DD0;
L_08AB6DD0:
    ctx.gpr[31] = (0x08AB6DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08AB6DD8u) goto L_08AB6DD8;
    return;
L_08AB6DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08AB6DDC;
L_08AB6DDC:
    ctx.gpr[31] = (0x08AB6DE4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 277u, 0x088B5BCCu>(ctx, &aot_mem) && ctx.pc == 0x08AB6DE4u) goto L_08AB6DE4;
    return;
L_08AB6DE4:
    ctx.gpr[31] = (0x08AB6DECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 224u, 0x08941918u>(ctx, &aot_mem) && ctx.pc == 0x08AB6DECu) goto L_08AB6DEC;
    return;
L_08AB6DEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08AB6DF8u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 225u, 0x08941948u>(ctx, &aot_mem) && ctx.pc == 0x08AB6DF8u) goto L_08AB6DF8;
    return;
L_08AB6DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6E10;
    }
    goto L_08AB6E04;
L_08AB6E04:
    ctx.gpr[31] = (0x08AB6E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6E0Cu) goto L_08AB6E0C;
    return;
L_08AB6E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6E10;
L_08AB6E10:
    ctx.gpr[31] = (0x08AB6E18u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(184))))));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 733u, 0x089C71B0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6E18u) goto L_08AB6E18;
    return;
L_08AB6E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6E30;
    }
    goto L_08AB6E24;
L_08AB6E24:
    ctx.gpr[31] = (0x08AB6E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6E2Cu) goto L_08AB6E2C;
    return;
L_08AB6E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6E30;
L_08AB6E30:
    ctx.gpr[31] = (0x08AB6E38u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(185)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 731u, 0x089C71A0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6E38u) goto L_08AB6E38;
    return;
L_08AB6E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08AB6E50;
    }
    goto L_08AB6E44;
L_08AB6E44:
    ctx.gpr[31] = (0x08AB6E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08AB6E4Cu) goto L_08AB6E4C;
    return;
L_08AB6E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AB6E50;
L_08AB6E50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
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
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6864));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6E88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-752));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29552));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32768));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[16]);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB6EF0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    goto L_08AB50BC;
L_08AB6EF0:
    ctx.gpr[31] = (0x08AB6EF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AB4DFC;
L_08AB6EF8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB6F04u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AB4E7C;
L_08AB6F04:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08AB6F10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AB6654;
L_08AB6F10:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2168));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB6F20u);
    ctx.gpr[6] = (0u | 200u);
    goto L_08AB4EE0;
L_08AB6F20:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AB6F2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 387u, 0x08869C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6F2Cu) goto L_08AB6F2C;
    return;
L_08AB6F2C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2160));
    ctx.gpr[31] = (0x08AB6F3Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4EE0;
L_08AB6F3C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08AB6F48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 475u, 0x0896DD60u>(ctx, &aot_mem) && ctx.pc == 0x08AB6F48u) goto L_08AB6F48;
    return;
L_08AB6F48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2152));
    ctx.gpr[31] = (0x08AB6F58u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4EE0;
L_08AB6F58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08AB6F88u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 186u, 0x08960DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AB6F88u) goto L_08AB6F88;
    return;
L_08AB6F88:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2028));
    ctx.gpr[31] = (0x08AB6F98u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4EE0;
L_08AB6F98:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6FA8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 600u, 0x0899253Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6FA8u) goto L_08AB6FA8;
    return;
L_08AB6FA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2020));
    ctx.gpr[31] = (0x08AB6FB8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4EE0;
L_08AB6FB8:
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(4960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(176));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(552));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(616));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AB6FE8;
      }
      goto L_08AB6FE0;
    }
L_08AB6FE0:
    ctx.gpr[31] = (0x08AB6FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08AB6FE8u) goto L_08AB6FE8;
    return;
L_08AB6FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6FF8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 404u, 0x0880DB5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6FF8u) goto L_08AB6FF8;
    return;
L_08AB6FF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2012));
    ctx.gpr[31] = (0x08AB7008u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4EE0;
L_08AB7008:
    ctx.gpr[31] = (0x08AB7010u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4960), 0u);
    goto L_08AB4EC8;
L_08AB7010:
    ctx.gpr[31] = (0x08AB7018u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08AB4ED0;
L_08AB7018:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(8128));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB705C;
      }
      goto L_08AB7034;
    }
L_08AB7034:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7040u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AB7040u) goto L_08AB7040;
    return;
L_08AB7040:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7058;
      }
      goto L_08AB704C;
    }
L_08AB704C:
    ctx.gpr[31] = (0x08AB7054u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7054u) goto L_08AB7054;
    return;
L_08AB7054:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AB7058;
L_08AB7058:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AB705C;
L_08AB705C:
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB7070u);
    ctx.gpr[7] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7070u) goto L_08AB7070;
    return;
L_08AB7070:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8912)));
    ctx.gpr[31] = (0x08AB709Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 223u, 0x0899103Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB709Cu) goto L_08AB709C;
    return;
L_08AB709C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB70D0;
      }
      goto L_08AB70C0;
    }
L_08AB70C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.gpr[4] = (28267u << 16u);
      if (branch_taken) {
          goto L_08AB71E8;
      }
      goto L_08AB70C8;
    }
L_08AB70C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB70EC;
      }
      goto L_08AB70D0;
    }
L_08AB70D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB7140;
      }
      goto L_08AB70DC;
    }
L_08AB70DC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7194;
      }
      goto L_08AB70E4;
    }
L_08AB70E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (28267u << 16u);
      if (branch_taken) {
          goto L_08AB71E8;
      }
      goto L_08AB70EC;
    }
L_08AB70EC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2004));
      if (branch_taken) {
          goto L_08AB7120;
      }
      goto L_08AB70F8;
    }
L_08AB70F8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7104u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AB7104u) goto L_08AB7104;
    return;
L_08AB7104:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB711C;
      }
      goto L_08AB7110;
    }
L_08AB7110:
    ctx.gpr[31] = (0x08AB7118u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7118u) goto L_08AB7118;
    return;
L_08AB7118:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AB711C;
L_08AB711C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AB7120;
L_08AB7120:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AB7134u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7134u) goto L_08AB7134;
    return;
L_08AB7134:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2280)));
      if (branch_taken) {
          goto L_08AB7204;
      }
      goto L_08AB7140;
    }
L_08AB7140:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1996));
      if (branch_taken) {
          goto L_08AB7178;
      }
      goto L_08AB714C;
    }
L_08AB714C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7158u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AB7158u) goto L_08AB7158;
    return;
L_08AB7158:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7170;
      }
      goto L_08AB7164;
    }
L_08AB7164:
    ctx.gpr[31] = (0x08AB716Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB716Cu) goto L_08AB716C;
    return;
L_08AB716C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AB7170;
L_08AB7170:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1996));
    goto L_08AB7178;
L_08AB7178:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AB7188u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7188u) goto L_08AB7188;
    return;
L_08AB7188:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2280)));
      if (branch_taken) {
          goto L_08AB7204;
      }
      goto L_08AB7194;
    }
L_08AB7194:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2004));
      if (branch_taken) {
          goto L_08AB71C8;
      }
      goto L_08AB71A0;
    }
L_08AB71A0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AB71ACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AB71ACu) goto L_08AB71AC;
    return;
L_08AB71AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB71C4;
      }
      goto L_08AB71B8;
    }
L_08AB71B8:
    ctx.gpr[31] = (0x08AB71C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB71C0u) goto L_08AB71C0;
    return;
L_08AB71C0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AB71C4;
L_08AB71C4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AB71C8;
L_08AB71C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AB71DCu);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB71DCu) goto L_08AB71DC;
    return;
L_08AB71DC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2280)));
      if (branch_taken) {
          goto L_08AB7204;
      }
      goto L_08AB71E8;
    }
L_08AB71E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28245));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (110u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30575));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2280)));
    goto L_08AB7204;
L_08AB7204:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7258;
      }
      goto L_08AB720C;
    }
L_08AB720C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1988));
      if (branch_taken) {
          goto L_08AB7240;
      }
      goto L_08AB7214;
    }
L_08AB7214:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7220u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AB7220u) goto L_08AB7220;
    return;
L_08AB7220:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7238;
      }
      goto L_08AB722C;
    }
L_08AB722C:
    ctx.gpr[31] = (0x08AB7234u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7234u) goto L_08AB7234;
    return;
L_08AB7234:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AB7238;
L_08AB7238:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1988));
    goto L_08AB7240;
L_08AB7240:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AB7250u);
    ctx.gpr[7] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7250u) goto L_08AB7250;
    return;
L_08AB7250:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_08AB72A0;
      }
      goto L_08AB7258;
    }
L_08AB7258:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1980));
      if (branch_taken) {
          goto L_08AB728C;
      }
      goto L_08AB7260;
    }
L_08AB7260:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AB726Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AB726Cu) goto L_08AB726C;
    return;
L_08AB726C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7284;
      }
      goto L_08AB7278;
    }
L_08AB7278:
    ctx.gpr[31] = (0x08AB7280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7280u) goto L_08AB7280;
    return;
L_08AB7280:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AB7284;
L_08AB7284:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1980));
    goto L_08AB728C;
L_08AB728C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AB729Cu);
    ctx.gpr[7] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB729Cu) goto L_08AB729C;
    return;
L_08AB729C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08AB72A0;
L_08AB72A0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1972));
      if (branch_taken) {
          goto L_08AB72D4;
      }
      goto L_08AB72A8;
    }
L_08AB72A8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AB72B4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AB72B4u) goto L_08AB72B4;
    return;
L_08AB72B4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB72CC;
      }
      goto L_08AB72C0;
    }
L_08AB72C0:
    ctx.gpr[31] = (0x08AB72C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB72C8u) goto L_08AB72C8;
    return;
L_08AB72C8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AB72CC;
L_08AB72CC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1972));
    goto L_08AB72D4;
L_08AB72D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AB72E4u);
    ctx.gpr[7] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB72E4u) goto L_08AB72E4;
    return;
L_08AB72E4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1964));
      if (branch_taken) {
          goto L_08AB731C;
      }
      goto L_08AB72F0;
    }
L_08AB72F0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AB72FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AB72FCu) goto L_08AB72FC;
    return;
L_08AB72FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7314;
      }
      goto L_08AB7308;
    }
L_08AB7308:
    ctx.gpr[31] = (0x08AB7310u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7310u) goto L_08AB7310;
    return;
L_08AB7310:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AB7314;
L_08AB7314:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1964));
    goto L_08AB731C;
L_08AB731C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AB732Cu);
    ctx.gpr[7] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB732Cu) goto L_08AB732C;
    return;
L_08AB732C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x08AB7338u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(7344));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 421u, 0x08A8E188u>(ctx, &aot_mem) && ctx.pc == 0x08AB7338u) goto L_08AB7338;
    return;
L_08AB7338:
    ctx.gpr[31] = (0x08AB7340u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 292u, 0x08A8D904u>(ctx, &aot_mem) && ctx.pc == 0x08AB7340u) goto L_08AB7340;
    return;
L_08AB7340:
    ctx.gpr[31] = (0x08AB7348u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 315u, 0x089F5B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7348u) goto L_08AB7348;
    return;
L_08AB7348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AB73A0;
      }
      goto L_08AB7364;
    }
L_08AB7364:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    ctx.gpr[31] = (0x08AB7398u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11840));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7398u) goto L_08AB7398;
    return;
L_08AB7398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB73E8;
      }
      goto L_08AB73A0;
    }
L_08AB73A0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.gpr[31] = (0x08AB73B8u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(11872));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08AB73B8u) goto L_08AB73B8;
    return;
L_08AB73B8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    ctx.gpr[10] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB73E8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB73E8u) goto L_08AB73E8;
    return;
L_08AB73E8:
    ctx.gpr[31] = (0x08AB73F0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08AB5CC4;
L_08AB73F0:
    ctx.gpr[31] = (0x08AB73F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 839u, 0x0898B4B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB73F8u) goto L_08AB73F8;
    return;
L_08AB73F8:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(716)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7430:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7458u);
    ctx.gpr[16] = (0u | 1u);
    ctx.pc = 0x08B730C4u;
    return;
L_08AB7458:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2108));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AB77F8;
      }
      goto L_08AB7470;
    }
L_08AB7470:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB77EC;
      }
      goto L_08AB7478;
    }
L_08AB7478:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AB7498;
      }
      goto L_08AB7480;
    }
L_08AB7480:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB74BC;
      }
      goto L_08AB7488;
    }
L_08AB7488:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AB77E0;
      }
      goto L_08AB7490;
    }
L_08AB7490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7800;
      }
      goto L_08AB7498;
    }
L_08AB7498:
    ctx.gpr[31] = (0x08AB74A0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08B730F4u;
    return;
L_08AB74A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB74B4;
      }
      goto L_08AB74AC;
    }
L_08AB74AC:
    ctx.gpr[31] = (0x08AB74B4u);
    // nop
    goto L_08AB5468;
L_08AB74B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7800;
      }
      goto L_08AB74BC;
    }
L_08AB74BC:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB74E8;
      }
      goto L_08AB74CC;
    }
L_08AB74CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AB74F0;
      }
      goto L_08AB74DC;
    }
L_08AB74DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1484)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB74F0;
      }
      goto L_08AB74E8;
    }
L_08AB74E8:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08AB74F0;
L_08AB74F0:
    ctx.gpr[6] = (ctx.gpr[17] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB74FC;
    }
L_08AB74FC:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12104)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7514:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB754C;
      }
      goto L_08AB7520;
    }
L_08AB7520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (32785u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(899));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB7540;
      }
      goto L_08AB7534;
    }
L_08AB7534:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2264), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB754C;
      }
      goto L_08AB7540;
    }
L_08AB7540:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2264), 0u);
    ctx.gpr[31] = (0x08AB754Cu);
    ctx.gpr[4] = (0u | 360u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 472u, 0x08966EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB754Cu) goto L_08AB754C;
    return;
L_08AB754C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2268), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB7558;
    }
L_08AB7558:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2268), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB7564;
    }
L_08AB7564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AB758C;
      }
      goto L_08AB7574;
    }
L_08AB7574:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB7584u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB7584u) goto L_08AB7584;
    return;
L_08AB7584:
    ctx.gpr[31] = (0x08AB758Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB758Cu) goto L_08AB758C;
    return;
L_08AB758C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB7598u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 608u, 0x0882E99Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7598u) goto L_08AB7598;
    return;
L_08AB7598:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB75A0;
    }
L_08AB75A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AB75C8;
      }
      goto L_08AB75B0;
    }
L_08AB75B0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB75C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB75C0u) goto L_08AB75C0;
    return;
L_08AB75C0:
    ctx.gpr[31] = (0x08AB75C8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB75C8u) goto L_08AB75C8;
    return;
L_08AB75C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB75D4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 608u, 0x0882E99Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB75D4u) goto L_08AB75D4;
    return;
L_08AB75D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB75DC;
    }
L_08AB75DC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7600;
      }
      goto L_08AB75E8;
    }
L_08AB75E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7600;
      }
      goto L_08AB75F4;
    }
L_08AB75F4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AB7608;
      }
      goto L_08AB7600;
    }
L_08AB7600:
    ctx.gpr[31] = (0x08AB7608u);
    // nop
    goto L_08AB50BC;
L_08AB7608:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB7610;
    }
L_08AB7610:
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-440));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-468));
      if (branch_taken) {
          goto L_08AB762C;
      }
      goto L_08AB7628;
    }
L_08AB7628:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1484)));
    goto L_08AB762C;
L_08AB762C:
    ctx.gpr[4] = (32785u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(961));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (32785u << 16u);
      if (branch_taken) {
          goto L_08AB7648;
      }
      goto L_08AB763C;
    }
L_08AB763C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(962));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB766C;
      }
      goto L_08AB7648;
    }
L_08AB7648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AB7654u);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7654u) goto L_08AB7654;
    return;
L_08AB7654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AB76E8;
      }
      goto L_08AB766C;
    }
L_08AB766C:
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-552));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_08AB76D4;
    }
    goto L_08AB7688;
L_08AB7688:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2293)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB76B0;
      }
      goto L_08AB7694;
    }
L_08AB7694:
    ctx.gpr[31] = (0x08AB769Cu);
    // nop
    goto L_08AB6194;
L_08AB769C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB76B0;
      }
      goto L_08AB76A4;
    }
L_08AB76A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08AB76E8;
      }
      goto L_08AB76B0;
    }
L_08AB76B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AB76BCu);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB76BCu) goto L_08AB76BC;
    return;
L_08AB76BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AB76C8u);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB76C8u) goto L_08AB76C8;
    return;
L_08AB76C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AB76E8;
      }
      goto L_08AB76D4;
    }
L_08AB76D4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AB76E8;
L_08AB76E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB76F0;
    }
L_08AB76F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AB7708;
      }
      goto L_08AB7700;
    }
L_08AB7700:
    ctx.gpr[31] = (0x08AB7708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08AB7708u) goto L_08AB7708;
    return;
L_08AB7708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB7748;
      }
      goto L_08AB772C;
    }
L_08AB772C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB773Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB773Cu) goto L_08AB773C;
    return;
L_08AB773C:
    ctx.gpr[31] = (0x08AB7744u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB7744u) goto L_08AB7744;
    return;
L_08AB7744:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AB7748;
L_08AB7748:
    ctx.gpr[31] = (0x08AB7750u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 608u, 0x0882E99Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7750u) goto L_08AB7750;
    return;
L_08AB7750:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB7758;
    }
L_08AB7758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AB7770;
      }
      goto L_08AB7768;
    }
L_08AB7768:
    ctx.gpr[31] = (0x08AB7770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08AB7770u) goto L_08AB7770;
    return;
L_08AB7770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB77B0;
      }
      goto L_08AB7794;
    }
L_08AB7794:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB77A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AB77A4u) goto L_08AB77A4;
    return;
L_08AB77A4:
    ctx.gpr[31] = (0x08AB77ACu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB77ACu) goto L_08AB77AC;
    return;
L_08AB77AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AB77B0;
L_08AB77B0:
    ctx.gpr[31] = (0x08AB77B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 608u, 0x0882E99Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB77B8u) goto L_08AB77B8;
    return;
L_08AB77B8:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
    goto L_08AB77BC;
L_08AB77BC:
    ctx.gpr[31] = (0x08AB77C4u);
    // nop
    ctx.pc = 0x08B730D4u;
    return;
L_08AB77C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB77D8;
      }
      goto L_08AB77D0;
    }
L_08AB77D0:
    ctx.gpr[31] = (0x08AB77D8u);
    // nop
    goto L_08AB5468;
L_08AB77D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7800;
      }
      goto L_08AB77E0;
    }
L_08AB77E0:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7713), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB7800;
      }
      goto L_08AB77EC;
    }
L_08AB77EC:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7713), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB7800;
      }
      goto L_08AB77F8;
    }
L_08AB77F8:
    ctx.gpr[31] = (0x08AB7800u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08AB5468;
L_08AB7800:
    ctx.gpr[31] = (0x08AB7808u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8872)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 808u, 0x08A07608u>(ctx, &aot_mem) && ctx.pc == 0x08AB7808u) goto L_08AB7808;
    return;
L_08AB7808:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08AB782C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7864u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7864u) goto L_08AB7864;
    return;
L_08AB7864:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2268), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB7880;
      }
      goto L_08AB7874;
    }
L_08AB7874:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB7880u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem) && ctx.pc == 0x08AB7880u) goto L_08AB7880;
    return;
L_08AB7880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB78DC;
      }
      goto L_08AB7890;
    }
L_08AB7890:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB78BC;
      }
      goto L_08AB789C;
    }
L_08AB789C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AB78C4;
      }
      goto L_08AB78A4;
    }
L_08AB78A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB78CC;
      }
      goto L_08AB78AC;
    }
L_08AB78AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AB78D4;
      }
      goto L_08AB78B4;
    }
L_08AB78B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB78E0;
      }
      goto L_08AB78BC;
    }
L_08AB78BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_08AB78E0;
      }
      goto L_08AB78C4;
    }
L_08AB78C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 4u);
      if (branch_taken) {
          goto L_08AB78E0;
      }
      goto L_08AB78CC;
    }
L_08AB78CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_08AB78E0;
      }
      goto L_08AB78D4;
    }
L_08AB78D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 3u);
      if (branch_taken) {
          goto L_08AB78E0;
      }
      goto L_08AB78DC;
    }
L_08AB78DC:
    ctx.gpr[18] = (0u | 1u);
    goto L_08AB78E0;
L_08AB78E0:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2108));
    ctx.gpr[21] = (0u | 1536u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB78FCu);
    ctx.gpr[6] = (0u | 1536u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB78FCu) goto L_08AB78FC;
    return;
L_08AB78FC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-2108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 19u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB794C;
      }
      goto L_08AB7930;
    }
L_08AB7930:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1200u);
    ctx.gpr[31] = (0x08AB7944u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-440));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7944u) goto L_08AB7944;
    return;
L_08AB7944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7960;
      }
      goto L_08AB794C;
    }
L_08AB794C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1200u);
    ctx.gpr[31] = (0x08AB7960u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-440));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7960u) goto L_08AB7960;
    return;
L_08AB7960:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7F24;
      }
      goto L_08AB796C;
    }
L_08AB796C:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12144)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7984:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x08AB79B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB79B4u) goto L_08AB79B4;
    return;
L_08AB79B4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB79C4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB79C4u) goto L_08AB79C4;
    return;
L_08AB79C4:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1956));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x08AB79D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB79D4u) goto L_08AB79D4;
    return;
L_08AB79D4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB79E4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB79E4u) goto L_08AB79E4;
    return;
L_08AB79E4:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1948));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x08AB79F4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB79F4u) goto L_08AB79F4;
    return;
L_08AB79F4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB7A04u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7A04u) goto L_08AB7A04;
    return;
L_08AB7A04:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12504));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1516), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1500));
    ctx.gpr[31] = (0x08AB7A38u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7A38u) goto L_08AB7A38;
    return;
L_08AB7A38:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (0u | 127u);
    ctx.gpr[31] = (0x08AB7A4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11904));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7A4Cu) goto L_08AB7A4C;
    return;
L_08AB7A4C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AB7A5Cu);
    ctx.gpr[6] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7A5Cu) goto L_08AB7A5C;
    return;
L_08AB7A5C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08AB7A6Cu);
    ctx.gpr[6] = (0u | 1023u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7A6Cu) goto L_08AB7A6C;
    return;
L_08AB7A6C:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7AA8;
      }
      goto L_08AB7A80;
    }
L_08AB7A80:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11928));
    ctx.gpr[31] = (0x08AB7AA0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12864));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7AA0u) goto L_08AB7AA0;
    return;
L_08AB7AA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7AC8;
      }
      goto L_08AB7AA8;
    }
L_08AB7AA8:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11972));
    ctx.gpr[31] = (0x08AB7AC8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12864));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7AC8u) goto L_08AB7AC8;
    return;
L_08AB7AC8:
    ctx.gpr[31] = (0x08AB7AD0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08AB7AD0u) goto L_08AB7AD0;
    return;
L_08AB7AD0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7AE4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7AE4u) goto L_08AB7AE4;
    return;
L_08AB7AE4:
    ctx.gpr[31] = (0x08AB7AECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem) && ctx.pc == 0x08AB7AECu) goto L_08AB7AEC;
    return;
L_08AB7AEC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7B00u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7B00u) goto L_08AB7B00;
    return;
L_08AB7B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7B14;
      }
      goto L_08AB7B0C;
    }
L_08AB7B0C:
    ctx.gpr[31] = (0x08AB7B14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208)));
    goto L_08AB4E74;
L_08AB7B14:
    ctx.gpr[31] = (0x08AB7B1Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AB4DFC;
L_08AB7B1C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB7B30u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x08AB7B30u) goto L_08AB7B30;
    return;
L_08AB7B30:
    ctx.gpr[31] = (0x08AB7B38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08AB7B38u) goto L_08AB7B38;
    return;
L_08AB7B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (2236u << 16u);
      if (branch_taken) {
          goto L_08AB7B70;
      }
      goto L_08AB7B44;
    }
L_08AB7B44:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7B50u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AB7B50u) goto L_08AB7B50;
    return;
L_08AB7B50:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7B68;
      }
      goto L_08AB7B5C;
    }
L_08AB7B5C:
    ctx.gpr[31] = (0x08AB7B64u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7B64u) goto L_08AB7B64;
    return;
L_08AB7B64:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08AB7B68;
L_08AB7B68:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[6] = (2236u << 16u);
    goto L_08AB7B70;
L_08AB7B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1920));
    ctx.gpr[7] = (0u | 127u);
    ctx.gpr[31] = (0x08AB7B84u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2236));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7B84u) goto L_08AB7B84;
    return;
L_08AB7B84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7BC4;
      }
      goto L_08AB7B90;
    }
L_08AB7B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12864));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB7BBCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11928));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7BBCu) goto L_08AB7BBC;
    return;
L_08AB7BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7BF0;
      }
      goto L_08AB7BC4;
    }
L_08AB7BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12864));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB7BF0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11972));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7BF0u) goto L_08AB7BF0;
    return;
L_08AB7BF0:
    ctx.gpr[31] = (0x08AB7BF8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08AB7BF8u) goto L_08AB7BF8;
    return;
L_08AB7BF8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7C0Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7C0Cu) goto L_08AB7C0C;
    return;
L_08AB7C0C:
    ctx.gpr[31] = (0x08AB7C14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem) && ctx.pc == 0x08AB7C14u) goto L_08AB7C14;
    return;
L_08AB7C14:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7C28u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7C28u) goto L_08AB7C28;
    return;
L_08AB7C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7C3C;
      }
      goto L_08AB7C34;
    }
L_08AB7C34:
    ctx.gpr[31] = (0x08AB7C3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    goto L_08AB4E74;
L_08AB7C3C:
    ctx.gpr[31] = (0x08AB7C44u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08AB4DFC;
L_08AB7C44:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB7C58u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x08AB7C58u) goto L_08AB7C58;
    return;
L_08AB7C58:
    ctx.gpr[31] = (0x08AB7C60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08AB7C60u) goto L_08AB7C60;
    return;
L_08AB7C60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7CA0;
      }
      goto L_08AB7C6C;
    }
L_08AB7C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12864));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1912));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB7C98u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11928));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7C98u) goto L_08AB7C98;
    return;
L_08AB7C98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7CCC;
      }
      goto L_08AB7CA0;
    }
L_08AB7CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12864));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1912));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB7CCCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11972));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7CCCu) goto L_08AB7CCC;
    return;
L_08AB7CCC:
    ctx.gpr[31] = (0x08AB7CD4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08AB7CD4u) goto L_08AB7CD4;
    return;
L_08AB7CD4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7CE8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7CE8u) goto L_08AB7CE8;
    return;
L_08AB7CE8:
    ctx.gpr[31] = (0x08AB7CF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem) && ctx.pc == 0x08AB7CF0u) goto L_08AB7CF0;
    return;
L_08AB7CF0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7D04u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7D04u) goto L_08AB7D04;
    return;
L_08AB7D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7D18;
      }
      goto L_08AB7D10;
    }
L_08AB7D10:
    ctx.gpr[31] = (0x08AB7D18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    goto L_08AB4E74;
L_08AB7D18:
    ctx.gpr[31] = (0x08AB7D20u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08AB4DFC;
L_08AB7D20:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB7D34u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x08AB7D34u) goto L_08AB7D34;
    return;
L_08AB7D34:
    ctx.gpr[31] = (0x08AB7D3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08AB7D3Cu) goto L_08AB7D3C;
    return;
L_08AB7D3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7D6C;
      }
      goto L_08AB7D48;
    }
L_08AB7D48:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1904));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB7D64u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11928));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7D64u) goto L_08AB7D64;
    return;
L_08AB7D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7D88;
      }
      goto L_08AB7D6C;
    }
L_08AB7D6C:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1904));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB7D88u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11972));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7D88u) goto L_08AB7D88;
    return;
L_08AB7D88:
    ctx.gpr[31] = (0x08AB7D90u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08AB7D90u) goto L_08AB7D90;
    return;
L_08AB7D90:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7DA4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7DA4u) goto L_08AB7DA4;
    return;
L_08AB7DA4:
    ctx.gpr[31] = (0x08AB7DACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem) && ctx.pc == 0x08AB7DACu) goto L_08AB7DAC;
    return;
L_08AB7DAC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7DC0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7DC0u) goto L_08AB7DC0;
    return;
L_08AB7DC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7DD4;
      }
      goto L_08AB7DCC;
    }
L_08AB7DCC:
    ctx.gpr[31] = (0x08AB7DD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    goto L_08AB4E74;
L_08AB7DD4:
    ctx.gpr[31] = (0x08AB7DDCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AB4DFC;
L_08AB7DDC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB7DF0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x08AB7DF0u) goto L_08AB7DF0;
    return;
L_08AB7DF0:
    ctx.gpr[31] = (0x08AB7DF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08AB7DF8u) goto L_08AB7DF8;
    return;
L_08AB7DF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7E28;
      }
      goto L_08AB7E04;
    }
L_08AB7E04:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1896));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1888));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB7E20u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11928));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7E20u) goto L_08AB7E20;
    return;
L_08AB7E20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7E44;
      }
      goto L_08AB7E28;
    }
L_08AB7E28:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1896));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1888));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB7E44u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11972));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7E44u) goto L_08AB7E44;
    return;
L_08AB7E44:
    ctx.gpr[31] = (0x08AB7E4Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08AB7E4Cu) goto L_08AB7E4C;
    return;
L_08AB7E4C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7E60u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7E60u) goto L_08AB7E60;
    return;
L_08AB7E60:
    ctx.gpr[31] = (0x08AB7E68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem) && ctx.pc == 0x08AB7E68u) goto L_08AB7E68;
    return;
L_08AB7E68:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7E7Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7E7Cu) goto L_08AB7E7C;
    return;
L_08AB7E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7E90;
      }
      goto L_08AB7E88;
    }
L_08AB7E88:
    ctx.gpr[31] = (0x08AB7E90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    goto L_08AB4E74;
L_08AB7E90:
    ctx.gpr[31] = (0x08AB7E98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AB4DFC;
L_08AB7E98:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB7EACu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x08AB7EACu) goto L_08AB7EAC;
    return;
L_08AB7EAC:
    ctx.gpr[31] = (0x08AB7EB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08AB7EB4u) goto L_08AB7EB4;
    return;
L_08AB7EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1416), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1420), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1428), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1432), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1436), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1444), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1448), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1452), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1460), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1464), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1468), ctx.gpr[17]);
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[8] = (2236u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-572));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-2236));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-572), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1476), ctx.gpr[7]);
    goto L_08AB7F24;
L_08AB7F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 133u, 0x08AB8924u>(ctx, &aot_mem); return;
      }
      goto L_08AB7F2C;
    }
L_08AB7F2C:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x08AB7F5Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB7F5Cu) goto L_08AB7F5C;
    return;
L_08AB7F5C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB7F6Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7F6Cu) goto L_08AB7F6C;
    return;
L_08AB7F6C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1880));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x08AB7F7Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB7F7Cu) goto L_08AB7F7C;
    return;
L_08AB7F7C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB7F8Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7F8Cu) goto L_08AB7F8C;
    return;
L_08AB7F8C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1876));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x08AB7F9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB7F9Cu) goto L_08AB7F9C;
    return;
L_08AB7F9C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB7FACu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7FACu) goto L_08AB7FAC;
    return;
L_08AB7FAC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12684));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1516), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1500));
    ctx.gpr[31] = (0x08AB7FE0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7FE0u) goto L_08AB7FE0;
    return;
L_08AB7FE0:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (0u | 127u);
    ctx.gpr[31] = (0x08AB7FF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11904));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7FF4u) goto L_08AB7FF4;
    return;
L_08AB7FF4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AB8004u);
    ctx.gpr[6] = (0u | 127u);
    (void)rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0172(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0172_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_172(Runtime &runtime) {
    runtime.register_generated_unit(172u, 0x08AB4000u, 16384u, &recomp_unit_0172, &recomp_unit_0172_entry);
    runtime.register_function(0x08AB4000u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB400Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB401Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4024u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4034u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4040u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4048u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4050u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4058u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4060u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4068u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB406Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4074u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB407Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4090u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4098u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4100u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB410Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4114u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB411Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4130u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4154u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4158u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4168u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4198u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB419Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4208u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4210u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4218u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4220u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4224u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB422Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB423Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4248u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4250u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB425Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB426Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4274u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4298u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB429Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4308u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4314u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4328u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB432Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4344u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4348u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB435Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB437Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4414u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB441Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB442Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4434u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4448u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4450u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4454u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB445Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4468u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4474u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4480u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB448Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4498u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4500u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4514u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB452Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4534u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4544u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB454Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4560u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4568u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB456Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4578u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4588u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4598u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4638u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB463Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4650u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4654u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4688u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4700u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4710u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB473Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB474Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4758u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4774u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB477Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4800u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB482Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4858u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4884u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB48B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB48DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4908u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4934u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4960u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB498Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB49B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB49E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4AA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4AACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4AB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4ABCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4AD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4AD8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B54u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4BB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4BCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4BE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4BF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4CACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4CC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4CE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4CE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4CFCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D24u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4DE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4DECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4DFCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E24u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4EA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4EC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4ED0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4EE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FBCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FD4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5004u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5010u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5040u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5054u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5064u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5074u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5080u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5094u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5110u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5120u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5134u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB513Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB515Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5168u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5170u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5178u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5180u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB518Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5194u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB519Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5204u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB520Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5214u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB521Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5224u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB524Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5254u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5264u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB526Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5274u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB527Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5284u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB528Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5298u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5304u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB530Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5314u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB531Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5324u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB532Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5334u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB533Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5344u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB534Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB535Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5364u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB536Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5378u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5380u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5384u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB538Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5398u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB540Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5414u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5428u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5438u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5440u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5454u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5460u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5468u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5484u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5498u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5508u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB551Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB553Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB554Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB555Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB557Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5584u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB558Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5594u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB559Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5604u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5610u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5624u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB562Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5630u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB563Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5644u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5648u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5654u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB565Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5660u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB566Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5674u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5678u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5684u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB568Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5690u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB569Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5700u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB570Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB571Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5724u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB572Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB573Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5744u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB574Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5754u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB575Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5768u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5770u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5780u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5788u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5790u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5798u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5800u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5808u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5814u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5820u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5830u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5838u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5848u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5850u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB585Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5868u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5870u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5880u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5888u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5898u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB590Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5918u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5924u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5930u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB593Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5944u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5948u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5950u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB595Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5964u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5968u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5970u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB597Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5984u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5990u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB599Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A24u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AD4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AD8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B54u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CD4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D54u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5DA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5DE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EBCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5ED4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6004u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB600Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6014u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6020u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6028u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6030u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6044u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6054u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6064u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6070u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB607Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6088u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6090u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6108u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6110u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6124u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6134u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6140u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6148u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6150u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB615Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6164u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB616Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6174u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6178u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6194u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6200u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB620Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6218u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6224u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB622Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6234u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6244u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB624Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6258u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6260u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB626Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6274u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB627Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6284u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB628Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6294u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6298u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB630Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6320u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB636Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6380u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6390u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6398u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6408u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6410u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6418u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6424u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB642Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6434u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6440u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB644Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6454u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB645Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6470u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB647Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB648Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6494u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB650Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6534u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB654Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6554u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB655Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6568u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6574u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6594u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6600u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6610u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6618u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6620u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6624u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB663Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6654u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6688u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6694u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6784u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB678Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6794u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB680Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6814u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB681Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB682Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6834u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB683Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB684Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6854u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB685Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB686Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6874u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB687Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6888u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6900u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6908u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB691Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6924u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB692Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6948u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6950u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6958u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6968u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6970u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6978u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6988u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6990u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6994u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB69B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB69BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB69C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB69E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB69E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB69ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6A10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6AECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6AF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6AF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B40u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BD8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CD4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CFCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D24u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D54u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DBCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DD8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E24u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6EF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6EF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7008u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7010u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7018u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7034u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7040u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB704Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7054u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7058u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB705Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7070u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB709Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB70C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB70C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB70D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB70DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB70E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB70ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB70F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7104u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7110u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7118u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB711Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7120u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7134u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7140u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB714Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7158u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7164u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB716Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7170u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7178u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7188u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7194u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7204u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB720Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7214u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7220u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB722Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7234u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7238u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7240u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7250u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7258u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7260u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB726Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7278u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7280u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7284u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB728Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB729Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7308u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7310u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7314u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB731Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB732Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7338u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7340u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7348u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7364u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7398u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7430u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7458u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7470u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7478u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7480u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7488u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7490u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7498u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7514u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7520u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7534u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7540u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB754Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7558u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7564u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7574u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7584u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB758Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7598u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7600u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7608u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7610u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7628u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB762Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB763Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7648u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7654u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB766Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7688u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7694u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB769Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7700u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7708u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB772Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB773Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7744u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7748u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7750u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7758u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7768u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7770u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7794u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7800u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7808u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB782Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7864u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7874u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7880u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7890u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB789Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7930u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7944u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB794Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7960u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB796Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7984u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BBCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CD4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DD4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F24u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FF4u, &recomp_unit_0172, "recomp_unit_0172");
}
} // namespace psprecomp
