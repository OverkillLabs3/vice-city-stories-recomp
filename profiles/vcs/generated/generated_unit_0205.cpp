#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0205[4096] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    21, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0,
    0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 42, 43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46,
    0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56,
    0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 0, 72, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 81,
    0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0,
    0, 0, 92, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0,
    105, 106, 0, 107, 0, 0, 108, 0, 0, 109, 0, 110, 111, 112, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 116, 0, 117, 118, 0,
    119, 0, 0, 120, 0, 0, 121, 0, 122, 123, 124, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 129, 0, 130, 0, 131,
    0, 132, 0, 133, 0, 0, 134, 0, 135, 136, 0, 137, 0, 0, 138, 0, 0, 139, 0, 140, 141, 142, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0,
    145, 0, 0, 146, 0, 147, 148, 0, 149, 0, 0, 150, 0, 0, 151, 0, 152, 153, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0,
    158, 0, 159, 160, 0, 161, 0, 0, 162, 0, 0, 163, 0, 164, 165, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0,
    170, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187,
    188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 197,
    0, 198, 0, 199, 0, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0,
    0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0,
    0, 0, 0, 228, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0,
    235, 0, 236, 237, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 241, 0, 242, 0, 243, 0, 244, 0, 0, 245, 0, 0, 246, 0, 247,
    0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 251, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 274, 0, 275,
    0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 288,
    0, 0, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 297,
    0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 302, 0, 303, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 306,
    0, 0, 0, 0, 0, 307, 308, 0, 309, 0, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 313, 314, 0, 315, 0, 0, 0, 0,
    0, 0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 0, 323, 0, 0,
    0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 330,
    0, 331, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 0, 0, 340, 0, 341, 0,
    342, 0, 343, 0, 344, 0, 345, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 351,
    0, 0, 352, 0, 353, 0, 354, 0, 0, 0, 355, 0, 356, 0, 357, 0, 358, 0, 0, 359, 0, 360, 0, 361, 0, 362, 0, 0, 363, 0, 0, 364,
    0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0,
    371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 0,
    0, 380, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389,
    0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 393, 394, 0, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 400, 0,
    401, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409,
    0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0,
    0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0,
    0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0,
    432, 0, 433, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 437, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440,
    0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 448, 0, 449, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 0, 0, 457, 0,
    0, 0, 458, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 462, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0,
    0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 471, 0, 472, 0, 0, 473, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0,
    0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0,
    0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0, 489, 490, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493,
    0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 0, 0, 0, 500, 0, 501, 0, 502,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506,
    0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 513, 0, 514, 0,
    0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0,
    0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 525, 0, 526, 0, 527,
    0, 528, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0,
    533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 0, 0, 536, 0, 0, 537, 0, 538, 0, 0, 0, 0, 539,
    0, 0, 540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 0,
    551, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0,
    0, 558, 0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561, 562, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 566, 0, 567,
    0, 568, 0, 569, 0, 0, 570, 0, 0, 571, 0, 572, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 577, 0,
    0, 578, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0,
    584, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 591, 0, 592, 0, 593, 0, 594, 595, 0, 596, 0, 597, 0, 0, 598, 0, 0, 0, 599, 0, 600, 0, 0, 601, 0, 0, 0, 602, 0,
    0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 0, 612, 0, 0, 613,
    0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 621, 0, 0,
    0, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 0, 628, 0, 0, 0,
    0, 0, 0, 0, 0, 629, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 634, 0, 0, 0, 635, 0, 636,
    0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 0, 644, 0, 0, 645, 0, 0, 646, 0,
    0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0,
    652, 0, 0, 653, 0, 654, 655, 0, 656, 0, 0, 657, 0, 0, 658, 0, 659, 660, 661, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 664, 0, 665,
    0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 668, 0, 669, 0, 670, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 673,
    0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678,
    0, 679, 0, 680, 0, 681, 0, 682, 0, 683, 0, 0, 684, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0,
    0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0,
    0, 0, 692, 0, 693, 0, 0, 0, 694, 0, 695, 0, 0, 696, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 700, 0, 0, 0, 0,
    0, 0, 701, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 703, 704, 0, 705, 0, 706, 0, 707, 0, 0, 708, 0, 0, 709, 0, 710, 0, 0,
    711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 714, 0, 715, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 718,
    0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 724,
    0, 725, 0, 726, 0, 727, 728, 0, 0, 729, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 0, 732, 0, 0, 733, 0, 734, 0, 735, 0,
    0, 0, 0, 0, 736, 737, 0, 0, 0, 738, 0, 739, 0, 740, 0, 741, 0, 0, 0, 0, 742, 0, 0, 743, 0, 744, 745, 0, 746, 0, 747, 0,
    0, 0, 748, 749, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 753, 754, 0, 0, 755, 0, 0, 756, 0, 757, 758, 0, 0,
    0, 759, 0, 0, 760, 0, 0, 761, 0, 0, 762, 0, 0, 763, 0, 764, 0, 765, 0, 766, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0,
    769, 0, 0, 0, 770, 0, 771, 0, 772, 0, 773, 0, 774, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0,
    778, 0, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 781, 0, 0, 0, 782, 0, 0, 783, 0, 784, 0, 0, 785, 0, 786, 0, 0, 787, 0, 788,
    0, 0, 789, 0, 790, 0, 791, 0, 792, 0, 793, 0, 794, 0, 795, 0, 796, 0, 797, 0, 798, 0, 799, 0, 800, 0, 801, 0, 802, 0, 803, 0,
    804, 0, 805, 0, 806, 0, 807, 0, 808, 0, 809, 0, 810, 0, 811, 0, 812, 0, 813, 814, 0, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0, 0,
    0, 0, 0, 0, 817, 0, 818, 0, 819, 0, 0, 0, 0, 820, 821, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 823,
    0, 824, 0, 0, 825, 0, 826, 0, 827, 0, 828, 0, 829, 0, 830, 0, 831, 0, 832, 0, 833, 0, 834, 0, 0, 0, 835, 0, 836, 0, 837, 0,
    838, 0, 839, 0, 840, 0, 0, 841, 0, 842, 0, 843, 0, 844, 0, 845, 0, 846, 0, 847, 0, 848, 0, 849, 0, 850, 0, 851, 0, 852, 0, 853,
    0, 854, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 857, 0, 0, 0, 0, 858, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 0, 861, 0, 0, 862, 0, 863, 0, 0, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 866, 0, 0, 867, 0, 868, 0, 869, 0, 870, 0, 0, 871, 0, 872, 0, 873, 0, 874, 0, 0, 875,
    0, 876, 0, 0, 0, 877, 0, 878, 0, 879, 0, 880, 0, 881, 0, 882, 0, 883, 0, 0, 884, 0, 885, 0, 886, 0, 887, 0, 0, 888, 0, 889,
    0, 890, 0, 891, 0, 892, 0, 893, 0, 0, 894, 0, 895, 0, 896, 0, 897, 0, 0, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 899, 0, 0, 900, 0, 0, 0, 0, 901, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 902, 0, 903, 0, 0, 904, 0, 0,
    905, 0, 906, 0, 0, 907, 0, 0, 908, 0, 909, 0, 0, 0, 0, 0, 0, 910, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 911, 0, 0,
    0, 912, 0, 913, 0, 0, 914, 0, 0, 0, 915, 0, 916, 0, 917, 0, 0, 0, 918, 0, 919, 0, 920, 0, 0, 921, 922, 0, 923, 0, 924, 0,
    925, 0, 0, 0, 926, 0, 927, 928, 0, 0, 0, 0, 0, 0, 0, 929, 0, 0, 930, 0, 931, 0, 932, 0, 0, 933, 0, 934, 0, 935, 0, 936,
    0, 937, 0, 938, 0, 939, 0, 0, 0, 0, 940, 0, 941, 0, 942, 0, 0, 0, 0, 0, 0, 0, 0, 943, 0, 0, 944, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 945, 0, 0, 0, 0, 946, 0, 0, 0, 947, 948, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 949,
    950, 0, 0, 0, 0, 0, 0, 0, 951, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 952, 0, 0, 0, 0, 0, 953,
    954, 0, 0, 0, 0, 955, 956, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 957, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 958, 0, 0, 959, 0, 0, 0, 0, 0, 0, 0, 960, 0, 0, 0, 0, 0, 0, 0, 0, 0, 961, 0, 0, 962, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 963, 0, 0, 0, 964, 0, 0, 0, 0, 0, 0, 965, 0, 0, 0, 966, 0, 0, 0, 0, 0, 967, 0,
    0, 0, 0, 968, 0, 0, 969, 0, 0, 970, 0, 971, 0, 972, 0, 0, 0, 0, 0, 0, 973, 0, 0, 974, 0, 975, 976, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 977, 0, 0, 0, 0, 0, 978, 0, 0, 0, 979, 0, 0, 0, 0, 0, 980, 0, 981, 982, 0, 0, 0,
    983, 0, 0, 0, 0, 0, 0, 0, 0, 0, 984, 0, 0, 985, 0, 0, 0, 986, 0, 987, 0, 0, 0, 0, 0, 0, 988, 0, 0, 0, 989, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 990, 0, 0, 991, 0, 0, 0, 0, 0, 0, 992, 0, 0, 0, 0, 0, 0, 0, 993, 0, 0, 0, 0, 994,
    0, 0, 995, 0, 996, 0, 0, 997, 0, 998, 999, 0, 0, 0, 0, 1000, 0, 0, 0, 1001, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1002, 0, 0, 0, 0, 1003, 0, 0, 0, 0, 1004, 0, 0, 1005, 0, 0, 0, 0, 0, 0, 0, 1006, 0, 0,
    0, 0, 1007, 0, 0, 0, 0, 0, 0, 1008, 0, 0, 1009, 1010, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1011, 0, 0, 0, 1012, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1013, 0,
    0, 0, 1014, 0, 0, 0, 0, 0, 0, 1015, 0, 0, 0, 1016, 0, 0, 0, 0, 1017, 0, 1018, 0, 1019, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1020, 0, 0, 0, 0, 0, 0, 1021, 0, 0, 0, 1022, 0, 0, 1023, 0, 0, 1024, 0, 0, 0, 0, 0, 1025,
    0, 1026, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1027, 0, 0, 0, 0, 1028, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1029, 0, 0, 0, 0, 0, 0, 1030, 0, 0, 0, 0, 1031, 0, 1032, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1033, 0, 0, 0, 0, 1034, 0, 0, 0, 0, 0, 0, 1035, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1036, 0, 0, 1037, 0, 0, 0, 0, 1038, 0, 0, 0, 0, 0, 1039, 0, 0, 0, 0, 1040, 0, 0, 0, 0, 1041, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1042, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1043, 0, 0, 0, 0, 0, 1044, 0, 1045,
    0, 1046, 0, 1047, 0, 0, 0, 0, 1048, 0, 1049, 0, 1050, 0, 1051, 0, 0, 0, 0, 1052, 1053, 0, 0, 0, 0, 1054, 0, 0, 0, 1055, 0, 1056,
    0, 0, 0, 1057, 0, 0, 0, 1058, 0, 0, 0, 0, 0, 1059, 0, 0, 0, 0, 1060, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061,
};
void recomp_unit_0205_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B38000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0205[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B38000;
    case 2u: goto L_08B38008;
    case 3u: goto L_08B38010;
    case 4u: goto L_08B38018;
    case 5u: goto L_08B38020;
    case 6u: goto L_08B38028;
    case 7u: goto L_08B38030;
    case 8u: goto L_08B38038;
    case 9u: goto L_08B38040;
    case 10u: goto L_08B38048;
    case 11u: goto L_08B38050;
    case 12u: goto L_08B3805C;
    case 13u: goto L_08B38070;
    case 14u: goto L_08B38088;
    case 15u: goto L_08B38090;
    case 16u: goto L_08B38098;
    case 17u: goto L_08B380A0;
    case 18u: goto L_08B380B0;
    case 19u: goto L_08B380BC;
    case 20u: goto L_08B380F0;
    case 21u: goto L_08B38100;
    case 22u: goto L_08B38110;
    case 23u: goto L_08B38124;
    case 24u: goto L_08B38138;
    case 25u: goto L_08B38150;
    case 26u: goto L_08B38158;
    case 27u: goto L_08B3816C;
    case 28u: goto L_08B38184;
    case 29u: goto L_08B3818C;
    case 30u: goto L_08B38194;
    case 31u: goto L_08B3819C;
    case 32u: goto L_08B381A4;
    case 33u: goto L_08B381B0;
    case 34u: goto L_08B381C0;
    case 35u: goto L_08B381D0;
    case 36u: goto L_08B381DC;
    case 37u: goto L_08B381F8;
    case 38u: goto L_08B3820C;
    case 39u: goto L_08B38238;
    case 40u: goto L_08B38240;
    case 41u: goto L_08B38248;
    case 42u: goto L_08B38250;
    case 43u: goto L_08B38254;
    case 44u: goto L_08B3825C;
    case 45u: goto L_08B3826C;
    case 46u: goto L_08B3827C;
    case 47u: goto L_08B38284;
    case 48u: goto L_08B38298;
    case 49u: goto L_08B382A8;
    case 50u: goto L_08B382B0;
    case 51u: goto L_08B382B8;
    case 52u: goto L_08B382C8;
    case 53u: goto L_08B382D0;
    case 54u: goto L_08B382E0;
    case 55u: goto L_08B382EC;
    case 56u: goto L_08B382FC;
    case 57u: goto L_08B38304;
    case 58u: goto L_08B3830C;
    case 59u: goto L_08B38314;
    case 60u: goto L_08B3831C;
    case 61u: goto L_08B3832C;
    case 62u: goto L_08B38334;
    case 63u: goto L_08B38344;
    case 64u: goto L_08B38358;
    case 65u: goto L_08B38394;
    case 66u: goto L_08B383BC;
    case 67u: goto L_08B383C4;
    case 68u: goto L_08B383CC;
    case 69u: goto L_08B383D4;
    case 70u: goto L_08B383E0;
    case 71u: goto L_08B383E8;
    case 72u: goto L_08B383F4;
    case 73u: goto L_08B383FC;
    case 74u: goto L_08B38428;
    case 75u: goto L_08B38430;
    case 76u: goto L_08B38438;
    case 77u: goto L_08B38448;
    case 78u: goto L_08B38450;
    case 79u: goto L_08B38460;
    case 80u: goto L_08B38468;
    case 81u: goto L_08B3847C;
    case 82u: goto L_08B38484;
    case 83u: goto L_08B38498;
    case 84u: goto L_08B384A0;
    case 85u: goto L_08B384AC;
    case 86u: goto L_08B384C0;
    case 87u: goto L_08B384C8;
    case 88u: goto L_08B384D4;
    case 89u: goto L_08B384E4;
    case 90u: goto L_08B384EC;
    case 91u: goto L_08B384F8;
    case 92u: goto L_08B38508;
    case 93u: goto L_08B38514;
    case 94u: goto L_08B3851C;
    case 95u: goto L_08B38524;
    case 96u: goto L_08B3852C;
    case 97u: goto L_08B38534;
    case 98u: goto L_08B3853C;
    case 99u: goto L_08B3854C;
    case 100u: goto L_08B38554;
    case 101u: goto L_08B3855C;
    case 102u: goto L_08B38564;
    case 103u: goto L_08B3856C;
    case 104u: goto L_08B38578;
    case 105u: goto L_08B38580;
    case 106u: goto L_08B38584;
    case 107u: goto L_08B3858C;
    case 108u: goto L_08B38598;
    case 109u: goto L_08B385A4;
    case 110u: goto L_08B385AC;
    case 111u: goto L_08B385B0;
    case 112u: goto L_08B385B4;
    case 113u: goto L_08B385C0;
    case 114u: goto L_08B385D8;
    case 115u: goto L_08B385E0;
    case 116u: goto L_08B385EC;
    case 117u: goto L_08B385F4;
    case 118u: goto L_08B385F8;
    case 119u: goto L_08B38600;
    case 120u: goto L_08B3860C;
    case 121u: goto L_08B38618;
    case 122u: goto L_08B38620;
    case 123u: goto L_08B38624;
    case 124u: goto L_08B38628;
    case 125u: goto L_08B38634;
    case 126u: goto L_08B3864C;
    case 127u: goto L_08B38654;
    case 128u: goto L_08B3865C;
    case 129u: goto L_08B3866C;
    case 130u: goto L_08B38674;
    case 131u: goto L_08B3867C;
    case 132u: goto L_08B38684;
    case 133u: goto L_08B3868C;
    case 134u: goto L_08B38698;
    case 135u: goto L_08B386A0;
    case 136u: goto L_08B386A4;
    case 137u: goto L_08B386AC;
    case 138u: goto L_08B386B8;
    case 139u: goto L_08B386C4;
    case 140u: goto L_08B386CC;
    case 141u: goto L_08B386D0;
    case 142u: goto L_08B386D4;
    case 143u: goto L_08B386E0;
    case 144u: goto L_08B386F8;
    case 145u: goto L_08B38700;
    case 146u: goto L_08B3870C;
    case 147u: goto L_08B38714;
    case 148u: goto L_08B38718;
    case 149u: goto L_08B38720;
    case 150u: goto L_08B3872C;
    case 151u: goto L_08B38738;
    case 152u: goto L_08B38740;
    case 153u: goto L_08B38744;
    case 154u: goto L_08B38748;
    case 155u: goto L_08B38754;
    case 156u: goto L_08B3876C;
    case 157u: goto L_08B38774;
    case 158u: goto L_08B38780;
    case 159u: goto L_08B38788;
    case 160u: goto L_08B3878C;
    case 161u: goto L_08B38794;
    case 162u: goto L_08B387A0;
    case 163u: goto L_08B387AC;
    case 164u: goto L_08B387B4;
    case 165u: goto L_08B387B8;
    case 166u: goto L_08B387BC;
    case 167u: goto L_08B387C8;
    case 168u: goto L_08B387E0;
    case 169u: goto L_08B387EC;
    case 170u: goto L_08B38800;
    case 171u: goto L_08B38808;
    case 172u: goto L_08B3881C;
    case 173u: goto L_08B38824;
    case 174u: goto L_08B38838;
    case 175u: goto L_08B3884C;
    case 176u: goto L_08B38854;
    case 177u: goto L_08B38860;
    case 178u: goto L_08B38870;
    case 179u: goto L_08B3887C;
    case 180u: goto L_08B3889C;
    case 181u: goto L_08B388B0;
    case 182u: goto L_08B388D4;
    case 183u: goto L_08B388DC;
    case 184u: goto L_08B388E4;
    case 185u: goto L_08B388EC;
    case 186u: goto L_08B388F4;
    case 187u: goto L_08B388FC;
    case 188u: goto L_08B38900;
    case 189u: goto L_08B38908;
    case 190u: goto L_08B38910;
    case 191u: goto L_08B38918;
    case 192u: goto L_08B38920;
    case 193u: goto L_08B38938;
    case 194u: goto L_08B38964;
    case 195u: goto L_08B3896C;
    case 196u: goto L_08B38974;
    case 197u: goto L_08B3897C;
    case 198u: goto L_08B38984;
    case 199u: goto L_08B3898C;
    case 200u: goto L_08B38998;
    case 201u: goto L_08B389A8;
    case 202u: goto L_08B389B0;
    case 203u: goto L_08B389D8;
    case 204u: goto L_08B389FC;
    case 205u: goto L_08B38A1C;
    case 206u: goto L_08B38A54;
    case 207u: goto L_08B38A64;
    case 208u: goto L_08B38A70;
    case 209u: goto L_08B38A78;
    case 210u: goto L_08B38A8C;
    case 211u: goto L_08B38A98;
    case 212u: goto L_08B38AA8;
    case 213u: goto L_08B38AB0;
    case 214u: goto L_08B38AB8;
    case 215u: goto L_08B38ACC;
    case 216u: goto L_08B38AD4;
    case 217u: goto L_08B38ADC;
    case 218u: goto L_08B38AEC;
    case 219u: goto L_08B38B08;
    case 220u: goto L_08B38B10;
    case 221u: goto L_08B38B1C;
    case 222u: goto L_08B38B28;
    case 223u: goto L_08B38B38;
    case 224u: goto L_08B38B48;
    case 225u: goto L_08B38B54;
    case 226u: goto L_08B38B70;
    case 227u: goto L_08B38B78;
    case 228u: goto L_08B38B8C;
    case 229u: goto L_08B38B94;
    case 230u: goto L_08B38BA0;
    case 231u: goto L_08B38BB8;
    case 232u: goto L_08B38BD4;
    case 233u: goto L_08B38BE0;
    case 234u: goto L_08B38BEC;
    case 235u: goto L_08B38C00;
    case 236u: goto L_08B38C08;
    case 237u: goto L_08B38C0C;
    case 238u: goto L_08B38C14;
    case 239u: goto L_08B38C28;
    case 240u: goto L_08B38C40;
    case 241u: goto L_08B38C44;
    case 242u: goto L_08B38C4C;
    case 243u: goto L_08B38C54;
    case 244u: goto L_08B38C5C;
    case 245u: goto L_08B38C68;
    case 246u: goto L_08B38C74;
    case 247u: goto L_08B38C7C;
    case 248u: goto L_08B38C88;
    case 249u: goto L_08B38C9C;
    case 250u: goto L_08B38CB4;
    case 251u: goto L_08B38CBC;
    case 252u: goto L_08B38CC4;
    case 253u: goto L_08B38CD0;
    case 254u: goto L_08B38CF0;
    case 255u: goto L_08B38D04;
    case 256u: goto L_08B38D28;
    case 257u: goto L_08B38D30;
    case 258u: goto L_08B38D38;
    case 259u: goto L_08B38D54;
    case 260u: goto L_08B38D80;
    case 261u: goto L_08B38D88;
    case 262u: goto L_08B38D90;
    case 263u: goto L_08B38D98;
    case 264u: goto L_08B38DA0;
    case 265u: goto L_08B38DA8;
    case 266u: goto L_08B38DB0;
    case 267u: goto L_08B38DB8;
    case 268u: goto L_08B38DC0;
    case 269u: goto L_08B38DC8;
    case 270u: goto L_08B38DD0;
    case 271u: goto L_08B38DD8;
    case 272u: goto L_08B38DE4;
    case 273u: goto L_08B38DEC;
    case 274u: goto L_08B38DF4;
    case 275u: goto L_08B38DFC;
    case 276u: goto L_08B38E08;
    case 277u: goto L_08B38E10;
    case 278u: goto L_08B38E44;
    case 279u: goto L_08B38E5C;
    case 280u: goto L_08B38E64;
    case 281u: goto L_08B38E98;
    case 282u: goto L_08B38EB0;
    case 283u: goto L_08B38EB8;
    case 284u: goto L_08B38ED0;
    case 285u: goto L_08B38EE0;
    case 286u: goto L_08B38EEC;
    case 287u: goto L_08B38EF4;
    case 288u: goto L_08B38EFC;
    case 289u: goto L_08B38F0C;
    case 290u: goto L_08B38F14;
    case 291u: goto L_08B38F1C;
    case 292u: goto L_08B38F30;
    case 293u: goto L_08B38F38;
    case 294u: goto L_08B38F4C;
    case 295u: goto L_08B38F60;
    case 296u: goto L_08B38F78;
    case 297u: goto L_08B38F7C;
    case 298u: goto L_08B38F84;
    case 299u: goto L_08B38F98;
    case 300u: goto L_08B38FAC;
    case 301u: goto L_08B38FC4;
    case 302u: goto L_08B38FC8;
    case 303u: goto L_08B38FD0;
    case 304u: goto L_08B38FE4;
    case 305u: goto L_08B38FF0;
    case 306u: goto L_08B38FFC;
    case 307u: goto L_08B39014;
    case 308u: goto L_08B39018;
    case 309u: goto L_08B39020;
    case 310u: goto L_08B39030;
    case 311u: goto L_08B3903C;
    case 312u: goto L_08B39048;
    case 313u: goto L_08B39060;
    case 314u: goto L_08B39064;
    case 315u: goto L_08B3906C;
    case 316u: goto L_08B39088;
    case 317u: goto L_08B39090;
    case 318u: goto L_08B390A0;
    case 319u: goto L_08B390C4;
    case 320u: goto L_08B390CC;
    case 321u: goto L_08B390D8;
    case 322u: goto L_08B390E4;
    case 323u: goto L_08B390F4;
    case 324u: goto L_08B39104;
    case 325u: goto L_08B39110;
    case 326u: goto L_08B3912C;
    case 327u: goto L_08B39140;
    case 328u: goto L_08B39160;
    case 329u: goto L_08B3916C;
    case 330u: goto L_08B3917C;
    case 331u: goto L_08B39184;
    case 332u: goto L_08B39190;
    case 333u: goto L_08B391A4;
    case 334u: goto L_08B391B8;
    case 335u: goto L_08B391C0;
    case 336u: goto L_08B391C8;
    case 337u: goto L_08B391D0;
    case 338u: goto L_08B391D8;
    case 339u: goto L_08B391E0;
    case 340u: goto L_08B391F0;
    case 341u: goto L_08B391F8;
    case 342u: goto L_08B39200;
    case 343u: goto L_08B39208;
    case 344u: goto L_08B39210;
    case 345u: goto L_08B39218;
    case 346u: goto L_08B39224;
    case 347u: goto L_08B39238;
    case 348u: goto L_08B39250;
    case 349u: goto L_08B39258;
    case 350u: goto L_08B39274;
    case 351u: goto L_08B3927C;
    case 352u: goto L_08B39288;
    case 353u: goto L_08B39290;
    case 354u: goto L_08B39298;
    case 355u: goto L_08B392A8;
    case 356u: goto L_08B392B0;
    case 357u: goto L_08B392B8;
    case 358u: goto L_08B392C0;
    case 359u: goto L_08B392CC;
    case 360u: goto L_08B392D4;
    case 361u: goto L_08B392DC;
    case 362u: goto L_08B392E4;
    case 363u: goto L_08B392F0;
    case 364u: goto L_08B392FC;
    case 365u: goto L_08B3930C;
    case 366u: goto L_08B39318;
    case 367u: goto L_08B39338;
    case 368u: goto L_08B3934C;
    case 369u: goto L_08B39370;
    case 370u: goto L_08B39378;
    case 371u: goto L_08B39380;
    case 372u: goto L_08B3939C;
    case 373u: goto L_08B393C0;
    case 374u: goto L_08B393C8;
    case 375u: goto L_08B393D0;
    case 376u: goto L_08B393D8;
    case 377u: goto L_08B393E0;
    case 378u: goto L_08B393E8;
    case 379u: goto L_08B393F4;
    case 380u: goto L_08B39404;
    case 381u: goto L_08B39410;
    case 382u: goto L_08B39420;
    case 383u: goto L_08B39434;
    case 384u: goto L_08B3943C;
    case 385u: goto L_08B39448;
    case 386u: goto L_08B39454;
    case 387u: goto L_08B39460;
    case 388u: goto L_08B39470;
    case 389u: goto L_08B3947C;
    case 390u: goto L_08B39484;
    case 391u: goto L_08B39490;
    case 392u: goto L_08B3949C;
    case 393u: goto L_08B394A8;
    case 394u: goto L_08B394AC;
    case 395u: goto L_08B394B8;
    case 396u: goto L_08B394C0;
    case 397u: goto L_08B394C8;
    case 398u: goto L_08B394DC;
    case 399u: goto L_08B394E4;
    case 400u: goto L_08B394F8;
    case 401u: goto L_08B39500;
    case 402u: goto L_08B39508;
    case 403u: goto L_08B39520;
    case 404u: goto L_08B3952C;
    case 405u: goto L_08B39538;
    case 406u: goto L_08B39544;
    case 407u: goto L_08B39550;
    case 408u: goto L_08B3955C;
    case 409u: goto L_08B3957C;
    case 410u: goto L_08B39590;
    case 411u: goto L_08B39598;
    case 412u: goto L_08B395A8;
    case 413u: goto L_08B395B8;
    case 414u: goto L_08B395C4;
    case 415u: goto L_08B395E0;
    case 416u: goto L_08B395F4;
    case 417u: goto L_08B39610;
    case 418u: goto L_08B3961C;
    case 419u: goto L_08B3962C;
    case 420u: goto L_08B39640;
    case 421u: goto L_08B39648;
    case 422u: goto L_08B39654;
    case 423u: goto L_08B39660;
    case 424u: goto L_08B3966C;
    case 425u: goto L_08B39678;
    case 426u: goto L_08B39684;
    case 427u: goto L_08B396A4;
    case 428u: goto L_08B396B4;
    case 429u: goto L_08B396D4;
    case 430u: goto L_08B396DC;
    case 431u: goto L_08B396E4;
    case 432u: goto L_08B39700;
    case 433u: goto L_08B39708;
    case 434u: goto L_08B39714;
    case 435u: goto L_08B39728;
    case 436u: goto L_08B39740;
    case 437u: goto L_08B39748;
    case 438u: goto L_08B39750;
    case 439u: goto L_08B3975C;
    case 440u: goto L_08B3977C;
    case 441u: goto L_08B39790;
    case 442u: goto L_08B397B8;
    case 443u: goto L_08B397C0;
    case 444u: goto L_08B397C8;
    case 445u: goto L_08B397DC;
    case 446u: goto L_08B39814;
    case 447u: goto L_08B3982C;
    case 448u: goto L_08B39884;
    case 449u: goto L_08B3988C;
    case 450u: goto L_08B3989C;
    case 451u: goto L_08B398A4;
    case 452u: goto L_08B398B8;
    case 453u: goto L_08B398C0;
    case 454u: goto L_08B398D4;
    case 455u: goto L_08B398DC;
    case 456u: goto L_08B398E8;
    case 457u: goto L_08B398F8;
    case 458u: goto L_08B39908;
    case 459u: goto L_08B39918;
    case 460u: goto L_08B39920;
    case 461u: goto L_08B39938;
    case 462u: goto L_08B39944;
    case 463u: goto L_08B39948;
    case 464u: goto L_08B39970;
    case 465u: goto L_08B39978;
    case 466u: goto L_08B39984;
    case 467u: goto L_08B3999C;
    case 468u: goto L_08B399A8;
    case 469u: goto L_08B399C4;
    case 470u: goto L_08B399D0;
    case 471u: goto L_08B399D8;
    case 472u: goto L_08B399E0;
    case 473u: goto L_08B399EC;
    case 474u: goto L_08B39A18;
    case 475u: goto L_08B39A34;
    case 476u: goto L_08B39A70;
    case 477u: goto L_08B39A78;
    case 478u: goto L_08B39A90;
    case 479u: goto L_08B39AB4;
    case 480u: goto L_08B39ACC;
    case 481u: goto L_08B39AD8;
    case 482u: goto L_08B39AF8;
    case 483u: goto L_08B39B04;
    case 484u: goto L_08B39B44;
    case 485u: goto L_08B39B50;
    case 486u: goto L_08B39B9C;
    case 487u: goto L_08B39BA8;
    case 488u: goto L_08B39BB4;
    case 489u: goto L_08B39BBC;
    case 490u: goto L_08B39BC0;
    case 491u: goto L_08B39BC8;
    case 492u: goto L_08B39BD0;
    case 493u: goto L_08B39BFC;
    case 494u: goto L_08B39C04;
    case 495u: goto L_08B39C38;
    case 496u: goto L_08B39C40;
    case 497u: goto L_08B39C48;
    case 498u: goto L_08B39C50;
    case 499u: goto L_08B39C58;
    case 500u: goto L_08B39C6C;
    case 501u: goto L_08B39C74;
    case 502u: goto L_08B39C7C;
    case 503u: goto L_08B39CB4;
    case 504u: goto L_08B39CD0;
    case 505u: goto L_08B39CF4;
    case 506u: goto L_08B39CFC;
    case 507u: goto L_08B39D10;
    case 508u: goto L_08B39D18;
    case 509u: goto L_08B39D30;
    case 510u: goto L_08B39D38;
    case 511u: goto L_08B39D50;
    case 512u: goto L_08B39D58;
    case 513u: goto L_08B39D70;
    case 514u: goto L_08B39D78;
    case 515u: goto L_08B39D90;
    case 516u: goto L_08B39D98;
    case 517u: goto L_08B39DBC;
    case 518u: goto L_08B39DC4;
    case 519u: goto L_08B39DDC;
    case 520u: goto L_08B39DE4;
    case 521u: goto L_08B39E08;
    case 522u: goto L_08B39E2C;
    case 523u: goto L_08B39E5C;
    case 524u: goto L_08B39E64;
    case 525u: goto L_08B39E6C;
    case 526u: goto L_08B39E74;
    case 527u: goto L_08B39E7C;
    case 528u: goto L_08B39E84;
    case 529u: goto L_08B39E8C;
    case 530u: goto L_08B39E94;
    case 531u: goto L_08B39EBC;
    case 532u: goto L_08B39EE0;
    case 533u: goto L_08B39F00;
    case 534u: goto L_08B39F38;
    case 535u: goto L_08B39F44;
    case 536u: goto L_08B39F54;
    case 537u: goto L_08B39F60;
    case 538u: goto L_08B39F68;
    case 539u: goto L_08B39F7C;
    case 540u: goto L_08B39F88;
    case 541u: goto L_08B39F90;
    case 542u: goto L_08B39F98;
    case 543u: goto L_08B39FA0;
    case 544u: goto L_08B39FA8;
    case 545u: goto L_08B39FB0;
    case 546u: goto L_08B39FB8;
    case 547u: goto L_08B39FC0;
    case 548u: goto L_08B39FD0;
    case 549u: goto L_08B39FEC;
    case 550u: goto L_08B39FF4;
    case 551u: goto L_08B3A000;
    case 552u: goto L_08B3A00C;
    case 553u: goto L_08B3A01C;
    case 554u: goto L_08B3A02C;
    case 555u: goto L_08B3A038;
    case 556u: goto L_08B3A054;
    case 557u: goto L_08B3A068;
    case 558u: goto L_08B3A084;
    case 559u: goto L_08B3A090;
    case 560u: goto L_08B3A09C;
    case 561u: goto L_08B3A0B8;
    case 562u: goto L_08B3A0BC;
    case 563u: goto L_08B3A0C4;
    case 564u: goto L_08B3A0D8;
    case 565u: goto L_08B3A0F0;
    case 566u: goto L_08B3A0F4;
    case 567u: goto L_08B3A0FC;
    case 568u: goto L_08B3A104;
    case 569u: goto L_08B3A10C;
    case 570u: goto L_08B3A118;
    case 571u: goto L_08B3A124;
    case 572u: goto L_08B3A12C;
    case 573u: goto L_08B3A138;
    case 574u: goto L_08B3A14C;
    case 575u: goto L_08B3A168;
    case 576u: goto L_08B3A170;
    case 577u: goto L_08B3A178;
    case 578u: goto L_08B3A184;
    case 579u: goto L_08B3A194;
    case 580u: goto L_08B3A1A0;
    case 581u: goto L_08B3A1C0;
    case 582u: goto L_08B3A1D4;
    case 583u: goto L_08B3A1F8;
    case 584u: goto L_08B3A200;
    case 585u: goto L_08B3A208;
    case 586u: goto L_08B3A218;
    case 587u: goto L_08B3A22C;
    case 588u: goto L_08B3A234;
    case 589u: goto L_08B3A23C;
    case 590u: goto L_08B3A25C;
    case 591u: goto L_08B3A28C;
    case 592u: goto L_08B3A294;
    case 593u: goto L_08B3A29C;
    case 594u: goto L_08B3A2A4;
    case 595u: goto L_08B3A2A8;
    case 596u: goto L_08B3A2B0;
    case 597u: goto L_08B3A2B8;
    case 598u: goto L_08B3A2C4;
    case 599u: goto L_08B3A2D4;
    case 600u: goto L_08B3A2DC;
    case 601u: goto L_08B3A2E8;
    case 602u: goto L_08B3A2F8;
    case 603u: goto L_08B3A314;
    case 604u: goto L_08B3A32C;
    case 605u: goto L_08B3A334;
    case 606u: goto L_08B3A33C;
    case 607u: goto L_08B3A344;
    case 608u: goto L_08B3A34C;
    case 609u: goto L_08B3A354;
    case 610u: goto L_08B3A35C;
    case 611u: goto L_08B3A364;
    case 612u: goto L_08B3A370;
    case 613u: goto L_08B3A37C;
    case 614u: goto L_08B3A388;
    case 615u: goto L_08B3A394;
    case 616u: goto L_08B3A3B0;
    case 617u: goto L_08B3A3C0;
    case 618u: goto L_08B3A3C8;
    case 619u: goto L_08B3A3D8;
    case 620u: goto L_08B3A3E8;
    case 621u: goto L_08B3A3F4;
    case 622u: goto L_08B3A410;
    case 623u: goto L_08B3A41C;
    case 624u: goto L_08B3A424;
    case 625u: goto L_08B3A430;
    case 626u: goto L_08B3A448;
    case 627u: goto L_08B3A464;
    case 628u: goto L_08B3A470;
    case 629u: goto L_08B3A494;
    case 630u: goto L_08B3A49C;
    case 631u: goto L_08B3A4A4;
    case 632u: goto L_08B3A4D0;
    case 633u: goto L_08B3A4D8;
    case 634u: goto L_08B3A4E4;
    case 635u: goto L_08B3A4F4;
    case 636u: goto L_08B3A4FC;
    case 637u: goto L_08B3A508;
    case 638u: goto L_08B3A524;
    case 639u: goto L_08B3A538;
    case 640u: goto L_08B3A540;
    case 641u: goto L_08B3A548;
    case 642u: goto L_08B3A550;
    case 643u: goto L_08B3A558;
    case 644u: goto L_08B3A560;
    case 645u: goto L_08B3A56C;
    case 646u: goto L_08B3A578;
    case 647u: goto L_08B3A584;
    case 648u: goto L_08B3A594;
    case 649u: goto L_08B3A5B0;
    case 650u: goto L_08B3A5C4;
    case 651u: goto L_08B3A5E8;
    case 652u: goto L_08B3A600;
    case 653u: goto L_08B3A60C;
    case 654u: goto L_08B3A614;
    case 655u: goto L_08B3A618;
    case 656u: goto L_08B3A620;
    case 657u: goto L_08B3A62C;
    case 658u: goto L_08B3A638;
    case 659u: goto L_08B3A640;
    case 660u: goto L_08B3A644;
    case 661u: goto L_08B3A648;
    case 662u: goto L_08B3A654;
    case 663u: goto L_08B3A66C;
    case 664u: goto L_08B3A674;
    case 665u: goto L_08B3A67C;
    case 666u: goto L_08B3A684;
    case 667u: goto L_08B3A6A4;
    case 668u: goto L_08B3A6AC;
    case 669u: goto L_08B3A6B4;
    case 670u: goto L_08B3A6BC;
    case 671u: goto L_08B3A6C8;
    case 672u: goto L_08B3A6E8;
    case 673u: goto L_08B3A6FC;
    case 674u: goto L_08B3A720;
    case 675u: goto L_08B3A728;
    case 676u: goto L_08B3A730;
    case 677u: goto L_08B3A750;
    case 678u: goto L_08B3A77C;
    case 679u: goto L_08B3A784;
    case 680u: goto L_08B3A78C;
    case 681u: goto L_08B3A794;
    case 682u: goto L_08B3A79C;
    case 683u: goto L_08B3A7A4;
    case 684u: goto L_08B3A7B0;
    case 685u: goto L_08B3A7C0;
    case 686u: goto L_08B3A7C8;
    case 687u: goto L_08B3A7F0;
    case 688u: goto L_08B3A814;
    case 689u: goto L_08B3A834;
    case 690u: goto L_08B3A86C;
    case 691u: goto L_08B3A878;
    case 692u: goto L_08B3A888;
    case 693u: goto L_08B3A890;
    case 694u: goto L_08B3A8A0;
    case 695u: goto L_08B3A8A8;
    case 696u: goto L_08B3A8B4;
    case 697u: goto L_08B3A8C0;
    case 698u: goto L_08B3A8D0;
    case 699u: goto L_08B3A8E0;
    case 700u: goto L_08B3A8EC;
    case 701u: goto L_08B3A908;
    case 702u: goto L_08B3A91C;
    case 703u: goto L_08B3A938;
    case 704u: goto L_08B3A93C;
    case 705u: goto L_08B3A944;
    case 706u: goto L_08B3A94C;
    case 707u: goto L_08B3A954;
    case 708u: goto L_08B3A960;
    case 709u: goto L_08B3A96C;
    case 710u: goto L_08B3A974;
    case 711u: goto L_08B3A980;
    case 712u: goto L_08B3A994;
    case 713u: goto L_08B3A9AC;
    case 714u: goto L_08B3A9B4;
    case 715u: goto L_08B3A9BC;
    case 716u: goto L_08B3A9C8;
    case 717u: goto L_08B3A9E8;
    case 718u: goto L_08B3A9FC;
    case 719u: goto L_08B3AA20;
    case 720u: goto L_08B3AA28;
    case 721u: goto L_08B3AA30;
    case 722u: goto L_08B3AA4C;
    case 723u: goto L_08B3AA60;
    case 724u: goto L_08B3AA7C;
    case 725u: goto L_08B3AA84;
    case 726u: goto L_08B3AA8C;
    case 727u: goto L_08B3AA94;
    case 728u: goto L_08B3AA98;
    case 729u: goto L_08B3AAA4;
    case 730u: goto L_08B3AABC;
    case 731u: goto L_08B3AAC8;
    case 732u: goto L_08B3AADC;
    case 733u: goto L_08B3AAE8;
    case 734u: goto L_08B3AAF0;
    case 735u: goto L_08B3AAF8;
    case 736u: goto L_08B3AB10;
    case 737u: goto L_08B3AB14;
    case 738u: goto L_08B3AB24;
    case 739u: goto L_08B3AB2C;
    case 740u: goto L_08B3AB34;
    case 741u: goto L_08B3AB3C;
    case 742u: goto L_08B3AB50;
    case 743u: goto L_08B3AB5C;
    case 744u: goto L_08B3AB64;
    case 745u: goto L_08B3AB68;
    case 746u: goto L_08B3AB70;
    case 747u: goto L_08B3AB78;
    case 748u: goto L_08B3AB88;
    case 749u: goto L_08B3AB8C;
    case 750u: goto L_08B3AB9C;
    case 751u: goto L_08B3ABB4;
    case 752u: goto L_08B3ABC0;
    case 753u: goto L_08B3ABCC;
    case 754u: goto L_08B3ABD0;
    case 755u: goto L_08B3ABDC;
    case 756u: goto L_08B3ABE8;
    case 757u: goto L_08B3ABF0;
    case 758u: goto L_08B3ABF4;
    case 759u: goto L_08B3AC04;
    case 760u: goto L_08B3AC10;
    case 761u: goto L_08B3AC1C;
    case 762u: goto L_08B3AC28;
    case 763u: goto L_08B3AC34;
    case 764u: goto L_08B3AC3C;
    case 765u: goto L_08B3AC44;
    case 766u: goto L_08B3AC4C;
    case 767u: goto L_08B3AC60;
    case 768u: goto L_08B3AC70;
    case 769u: goto L_08B3AC80;
    case 770u: goto L_08B3AC90;
    case 771u: goto L_08B3AC98;
    case 772u: goto L_08B3ACA0;
    case 773u: goto L_08B3ACA8;
    case 774u: goto L_08B3ACB0;
    case 775u: goto L_08B3ACBC;
    case 776u: goto L_08B3ACDC;
    case 777u: goto L_08B3ACE8;
    case 778u: goto L_08B3AD00;
    case 779u: goto L_08B3AD0C;
    case 780u: goto L_08B3AD24;
    case 781u: goto L_08B3AD30;
    case 782u: goto L_08B3AD40;
    case 783u: goto L_08B3AD4C;
    case 784u: goto L_08B3AD54;
    case 785u: goto L_08B3AD60;
    case 786u: goto L_08B3AD68;
    case 787u: goto L_08B3AD74;
    case 788u: goto L_08B3AD7C;
    case 789u: goto L_08B3AD88;
    case 790u: goto L_08B3AD90;
    case 791u: goto L_08B3AD98;
    case 792u: goto L_08B3ADA0;
    case 793u: goto L_08B3ADA8;
    case 794u: goto L_08B3ADB0;
    case 795u: goto L_08B3ADB8;
    case 796u: goto L_08B3ADC0;
    case 797u: goto L_08B3ADC8;
    case 798u: goto L_08B3ADD0;
    case 799u: goto L_08B3ADD8;
    case 800u: goto L_08B3ADE0;
    case 801u: goto L_08B3ADE8;
    case 802u: goto L_08B3ADF0;
    case 803u: goto L_08B3ADF8;
    case 804u: goto L_08B3AE00;
    case 805u: goto L_08B3AE08;
    case 806u: goto L_08B3AE10;
    case 807u: goto L_08B3AE18;
    case 808u: goto L_08B3AE20;
    case 809u: goto L_08B3AE28;
    case 810u: goto L_08B3AE30;
    case 811u: goto L_08B3AE38;
    case 812u: goto L_08B3AE40;
    case 813u: goto L_08B3AE48;
    case 814u: goto L_08B3AE4C;
    case 815u: goto L_08B3AE5C;
    case 816u: goto L_08B3AE6C;
    case 817u: goto L_08B3AE90;
    case 818u: goto L_08B3AE98;
    case 819u: goto L_08B3AEA0;
    case 820u: goto L_08B3AEB4;
    case 821u: goto L_08B3AEB8;
    case 822u: goto L_08B3AEC4;
    case 823u: goto L_08B3AEFC;
    case 824u: goto L_08B3AF04;
    case 825u: goto L_08B3AF10;
    case 826u: goto L_08B3AF18;
    case 827u: goto L_08B3AF20;
    case 828u: goto L_08B3AF28;
    case 829u: goto L_08B3AF30;
    case 830u: goto L_08B3AF38;
    case 831u: goto L_08B3AF40;
    case 832u: goto L_08B3AF48;
    case 833u: goto L_08B3AF50;
    case 834u: goto L_08B3AF58;
    case 835u: goto L_08B3AF68;
    case 836u: goto L_08B3AF70;
    case 837u: goto L_08B3AF78;
    case 838u: goto L_08B3AF80;
    case 839u: goto L_08B3AF88;
    case 840u: goto L_08B3AF90;
    case 841u: goto L_08B3AF9C;
    case 842u: goto L_08B3AFA4;
    case 843u: goto L_08B3AFAC;
    case 844u: goto L_08B3AFB4;
    case 845u: goto L_08B3AFBC;
    case 846u: goto L_08B3AFC4;
    case 847u: goto L_08B3AFCC;
    case 848u: goto L_08B3AFD4;
    case 849u: goto L_08B3AFDC;
    case 850u: goto L_08B3AFE4;
    case 851u: goto L_08B3AFEC;
    case 852u: goto L_08B3AFF4;
    case 853u: goto L_08B3AFFC;
    case 854u: goto L_08B3B004;
    case 855u: goto L_08B3B024;
    case 856u: goto L_08B3B050;
    case 857u: goto L_08B3B05C;
    case 858u: goto L_08B3B070;
    case 859u: goto L_08B3B0A0;
    case 860u: goto L_08B3B0A8;
    case 861u: goto L_08B3B0B4;
    case 862u: goto L_08B3B0C0;
    case 863u: goto L_08B3B0C8;
    case 864u: goto L_08B3B0E4;
    case 865u: goto L_08B3B120;
    case 866u: goto L_08B3B128;
    case 867u: goto L_08B3B134;
    case 868u: goto L_08B3B13C;
    case 869u: goto L_08B3B144;
    case 870u: goto L_08B3B14C;
    case 871u: goto L_08B3B158;
    case 872u: goto L_08B3B160;
    case 873u: goto L_08B3B168;
    case 874u: goto L_08B3B170;
    case 875u: goto L_08B3B17C;
    case 876u: goto L_08B3B184;
    case 877u: goto L_08B3B194;
    case 878u: goto L_08B3B19C;
    case 879u: goto L_08B3B1A4;
    case 880u: goto L_08B3B1AC;
    case 881u: goto L_08B3B1B4;
    case 882u: goto L_08B3B1BC;
    case 883u: goto L_08B3B1C4;
    case 884u: goto L_08B3B1D0;
    case 885u: goto L_08B3B1D8;
    case 886u: goto L_08B3B1E0;
    case 887u: goto L_08B3B1E8;
    case 888u: goto L_08B3B1F4;
    case 889u: goto L_08B3B1FC;
    case 890u: goto L_08B3B204;
    case 891u: goto L_08B3B20C;
    case 892u: goto L_08B3B214;
    case 893u: goto L_08B3B21C;
    case 894u: goto L_08B3B228;
    case 895u: goto L_08B3B230;
    case 896u: goto L_08B3B238;
    case 897u: goto L_08B3B240;
    case 898u: goto L_08B3B264;
    case 899u: goto L_08B3B290;
    case 900u: goto L_08B3B29C;
    case 901u: goto L_08B3B2B0;
    case 902u: goto L_08B3B2E0;
    case 903u: goto L_08B3B2E8;
    case 904u: goto L_08B3B2F4;
    case 905u: goto L_08B3B300;
    case 906u: goto L_08B3B308;
    case 907u: goto L_08B3B314;
    case 908u: goto L_08B3B320;
    case 909u: goto L_08B3B328;
    case 910u: goto L_08B3B344;
    case 911u: goto L_08B3B374;
    case 912u: goto L_08B3B384;
    case 913u: goto L_08B3B38C;
    case 914u: goto L_08B3B398;
    case 915u: goto L_08B3B3A8;
    case 916u: goto L_08B3B3B0;
    case 917u: goto L_08B3B3B8;
    case 918u: goto L_08B3B3C8;
    case 919u: goto L_08B3B3D0;
    case 920u: goto L_08B3B3D8;
    case 921u: goto L_08B3B3E4;
    case 922u: goto L_08B3B3E8;
    case 923u: goto L_08B3B3F0;
    case 924u: goto L_08B3B3F8;
    case 925u: goto L_08B3B400;
    case 926u: goto L_08B3B410;
    case 927u: goto L_08B3B418;
    case 928u: goto L_08B3B41C;
    case 929u: goto L_08B3B43C;
    case 930u: goto L_08B3B448;
    case 931u: goto L_08B3B450;
    case 932u: goto L_08B3B458;
    case 933u: goto L_08B3B464;
    case 934u: goto L_08B3B46C;
    case 935u: goto L_08B3B474;
    case 936u: goto L_08B3B47C;
    case 937u: goto L_08B3B484;
    case 938u: goto L_08B3B48C;
    case 939u: goto L_08B3B494;
    case 940u: goto L_08B3B4A8;
    case 941u: goto L_08B3B4B0;
    case 942u: goto L_08B3B4B8;
    case 943u: goto L_08B3B4DC;
    case 944u: goto L_08B3B4E8;
    case 945u: goto L_08B3B51C;
    case 946u: goto L_08B3B530;
    case 947u: goto L_08B3B540;
    case 948u: goto L_08B3B544;
    case 949u: goto L_08B3B57C;
    case 950u: goto L_08B3B580;
    case 951u: goto L_08B3B5A0;
    case 952u: goto L_08B3B5E4;
    case 953u: goto L_08B3B5FC;
    case 954u: goto L_08B3B600;
    case 955u: goto L_08B3B614;
    case 956u: goto L_08B3B618;
    case 957u: goto L_08B3B670;
    case 958u: goto L_08B3B698;
    case 959u: goto L_08B3B6A4;
    case 960u: goto L_08B3B6C4;
    case 961u: goto L_08B3B6EC;
    case 962u: goto L_08B3B6F8;
    case 963u: goto L_08B3B724;
    case 964u: goto L_08B3B734;
    case 965u: goto L_08B3B750;
    case 966u: goto L_08B3B760;
    case 967u: goto L_08B3B778;
    case 968u: goto L_08B3B78C;
    case 969u: goto L_08B3B798;
    case 970u: goto L_08B3B7A4;
    case 971u: goto L_08B3B7AC;
    case 972u: goto L_08B3B7B4;
    case 973u: goto L_08B3B7D0;
    case 974u: goto L_08B3B7DC;
    case 975u: goto L_08B3B7E4;
    case 976u: goto L_08B3B7E8;
    case 977u: goto L_08B3B824;
    case 978u: goto L_08B3B83C;
    case 979u: goto L_08B3B84C;
    case 980u: goto L_08B3B864;
    case 981u: goto L_08B3B86C;
    case 982u: goto L_08B3B870;
    case 983u: goto L_08B3B880;
    case 984u: goto L_08B3B8A8;
    case 985u: goto L_08B3B8B4;
    case 986u: goto L_08B3B8C4;
    case 987u: goto L_08B3B8CC;
    case 988u: goto L_08B3B8E8;
    case 989u: goto L_08B3B8F8;
    case 990u: goto L_08B3B920;
    case 991u: goto L_08B3B92C;
    case 992u: goto L_08B3B948;
    case 993u: goto L_08B3B968;
    case 994u: goto L_08B3B97C;
    case 995u: goto L_08B3B988;
    case 996u: goto L_08B3B990;
    case 997u: goto L_08B3B99C;
    case 998u: goto L_08B3B9A4;
    case 999u: goto L_08B3B9A8;
    case 1000u: goto L_08B3B9BC;
    case 1001u: goto L_08B3B9CC;
    case 1002u: goto L_08B3BA20;
    case 1003u: goto L_08B3BA34;
    case 1004u: goto L_08B3BA48;
    case 1005u: goto L_08B3BA54;
    case 1006u: goto L_08B3BA74;
    case 1007u: goto L_08B3BA88;
    case 1008u: goto L_08B3BAA4;
    case 1009u: goto L_08B3BAB0;
    case 1010u: goto L_08B3BAB4;
    case 1011u: goto L_08B3BB2C;
    case 1012u: goto L_08B3BB3C;
    case 1013u: goto L_08B3BB78;
    case 1014u: goto L_08B3BB88;
    case 1015u: goto L_08B3BBA4;
    case 1016u: goto L_08B3BBB4;
    case 1017u: goto L_08B3BBC8;
    case 1018u: goto L_08B3BBD0;
    case 1019u: goto L_08B3BBD8;
    case 1020u: goto L_08B3BC20;
    case 1021u: goto L_08B3BC3C;
    case 1022u: goto L_08B3BC4C;
    case 1023u: goto L_08B3BC58;
    case 1024u: goto L_08B3BC64;
    case 1025u: goto L_08B3BC7C;
    case 1026u: goto L_08B3BC84;
    case 1027u: goto L_08B3BCC0;
    case 1028u: goto L_08B3BCD4;
    case 1029u: goto L_08B3BD24;
    case 1030u: goto L_08B3BD40;
    case 1031u: goto L_08B3BD54;
    case 1032u: goto L_08B3BD5C;
    case 1033u: goto L_08B3BDB4;
    case 1034u: goto L_08B3BDC8;
    case 1035u: goto L_08B3BDE4;
    case 1036u: goto L_08B3BE14;
    case 1037u: goto L_08B3BE20;
    case 1038u: goto L_08B3BE34;
    case 1039u: goto L_08B3BE4C;
    case 1040u: goto L_08B3BE60;
    case 1041u: goto L_08B3BE74;
    case 1042u: goto L_08B3BEA8;
    case 1043u: goto L_08B3BEDC;
    case 1044u: goto L_08B3BEF4;
    case 1045u: goto L_08B3BEFC;
    case 1046u: goto L_08B3BF04;
    case 1047u: goto L_08B3BF0C;
    case 1048u: goto L_08B3BF20;
    case 1049u: goto L_08B3BF28;
    case 1050u: goto L_08B3BF30;
    case 1051u: goto L_08B3BF38;
    case 1052u: goto L_08B3BF4C;
    case 1053u: goto L_08B3BF50;
    case 1054u: goto L_08B3BF64;
    case 1055u: goto L_08B3BF74;
    case 1056u: goto L_08B3BF7C;
    case 1057u: goto L_08B3BF8C;
    case 1058u: goto L_08B3BF9C;
    case 1059u: goto L_08B3BFB4;
    case 1060u: goto L_08B3BFC8;
    case 1061u: goto L_08B3BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B38000:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 938u, 0x08B37FF0u>(ctx, &aot_mem); return;
      }
      goto L_08B38008;
    }
L_08B38008:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B38284;
      }
      goto L_08B38010;
    }
L_08B38010:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B3818C;
      }
      goto L_08B38018;
    }
L_08B38018:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B38854;
      }
      goto L_08B38020;
    }
L_08B38020:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08B388E4;
      }
      goto L_08B38028;
    }
L_08B38028:
    ctx.gpr[31] = (0x08B38030u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B38030u) goto L_08B38030;
    return;
L_08B38030:
    ctx.gpr[31] = (0x08B38038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 661u, 0x08B331CCu>(ctx, &aot_mem) && ctx.pc == 0x08B38038u) goto L_08B38038;
    return;
L_08B38038:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38184;
      }
      goto L_08B38040;
    }
L_08B38040:
    ctx.gpr[31] = (0x08B38048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B38048u) goto L_08B38048;
    return;
L_08B38048:
    ctx.gpr[31] = (0x08B38050u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B38050u) goto L_08B38050;
    return;
L_08B38050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38090;
      }
      goto L_08B3805C;
    }
L_08B3805C:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(4356));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[31] = (0x08B38070u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem) && ctx.pc == 0x08B38070u) goto L_08B38070;
    return;
L_08B38070:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 66u);
    ctx.gpr[31] = (0x08B38088u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08B38088u) goto L_08B38088;
    return;
L_08B38088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38184;
      }
      goto L_08B38090;
    }
L_08B38090:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38158;
      }
      goto L_08B38098;
    }
L_08B38098:
    ctx.gpr[31] = (0x08B380A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B380A0u) goto L_08B380A0;
    return;
L_08B380A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1653))))));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B38158;
      }
      goto L_08B380B0;
    }
L_08B380B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17331)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B380F0;
      }
      goto L_08B380BC;
    }
L_08B380BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B38124;
      }
      goto L_08B380F0;
    }
L_08B380F0:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08B38100u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B38100u) goto L_08B38100;
    return;
L_08B38100:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.gpr[31] = (0x08B38110u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B38110u) goto L_08B38110;
    return;
L_08B38110:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B38184;
      }
      goto L_08B38124;
    }
L_08B38124:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(4364));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[31] = (0x08B38138u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem) && ctx.pc == 0x08B38138u) goto L_08B38138;
    return;
L_08B38138:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[31] = (0x08B38150u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08B38150u) goto L_08B38150;
    return;
L_08B38150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38184;
      }
      goto L_08B38158;
    }
L_08B38158:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(4372));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[31] = (0x08B3816Cu);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem) && ctx.pc == 0x08B3816Cu) goto L_08B3816C;
    return;
L_08B3816C:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 66u);
    ctx.gpr[31] = (0x08B38184u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08B38184u) goto L_08B38184;
    return;
L_08B38184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 938u, 0x08B37FF0u>(ctx, &aot_mem); return;
      }
      goto L_08B3818C;
    }
L_08B3818C:
    ctx.gpr[31] = (0x08B38194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B38194u) goto L_08B38194;
    return;
L_08B38194:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B381B0;
      }
      goto L_08B3819C;
    }
L_08B3819C:
    ctx.gpr[31] = (0x08B381A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B381A4u) goto L_08B381A4;
    return;
L_08B381A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B381B0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 783u, 0x08B33BD8u>(ctx, &aot_mem) && ctx.pc == 0x08B381B0u) goto L_08B381B0;
    return;
L_08B381B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B381D0;
      }
      goto L_08B381C0;
    }
L_08B381C0:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B381DC;
      }
      goto L_08B381D0;
    }
L_08B381D0:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08B381DC;
L_08B381DC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08B381F8;
    }
    goto L_08B381F8;
L_08B381F8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08B38238;
      }
      goto L_08B3820C;
    }
L_08B3820C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08B38238u);
    ctx.gpr[6] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B38238u) goto L_08B38238;
    return;
L_08B38238:
    ctx.gpr[31] = (0x08B38240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B38240u) goto L_08B38240;
    return;
L_08B38240:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38254;
      }
      goto L_08B38248;
    }
L_08B38248:
    ctx.gpr[31] = (0x08B38250u);
    ctx.gpr[17] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B38250u) goto L_08B38250;
    return;
L_08B38250:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(627), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08B38254;
L_08B38254:
    ctx.gpr[31] = (0x08B3825Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B3825Cu) goto L_08B3825C;
    return;
L_08B3825C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B3827C;
      }
      goto L_08B3826C;
    }
L_08B3826C:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(4380));
    ctx.gpr[4] = (0u | 363u);
    ctx.gpr[31] = (0x08B3827Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08B3827Cu) goto L_08B3827C;
    return;
L_08B3827C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 938u, 0x08B37FF0u>(ctx, &aot_mem); return;
      }
      goto L_08B38284;
    }
L_08B38284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3884C;
      }
      goto L_08B38298;
    }
L_08B38298:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B382D0;
      }
      goto L_08B382A8;
    }
L_08B382A8:
    ctx.gpr[31] = (0x08B382B0u);
    ctx.gpr[4] = (0u | 363u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x08B382B0u) goto L_08B382B0;
    return;
L_08B382B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B382D0;
      }
      goto L_08B382B8;
    }
L_08B382B8:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(4380));
    ctx.gpr[4] = (0u | 363u);
    ctx.gpr[31] = (0x08B382C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08B382C8u) goto L_08B382C8;
    return;
L_08B382C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3884C;
      }
      goto L_08B382D0;
    }
L_08B382D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B38304;
      }
      goto L_08B382E0;
    }
L_08B382E0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B38344;
      }
      goto L_08B382EC;
    }
L_08B382EC:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 67u);
    ctx.gpr[31] = (0x08B382FCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08B382FCu) goto L_08B382FC;
    return;
L_08B382FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38344;
      }
      goto L_08B38304;
    }
L_08B38304:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3831C;
      }
      goto L_08B3830C;
    }
L_08B3830C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B38334;
      }
      goto L_08B38314;
    }
L_08B38314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38344;
      }
      goto L_08B3831C;
    }
L_08B3831C:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 68u);
    ctx.gpr[31] = (0x08B3832Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08B3832Cu) goto L_08B3832C;
    return;
L_08B3832C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38344;
      }
      goto L_08B38334;
    }
L_08B38334:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 69u);
    ctx.gpr[31] = (0x08B38344u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08B38344u) goto L_08B38344;
    return;
L_08B38344:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17331)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B383BC;
      }
      goto L_08B38358;
    }
L_08B38358:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-500));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08B38394;
    }
    goto L_08B38394;
L_08B38394:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    goto L_08B383BC;
L_08B383BC:
    ctx.gpr[31] = (0x08B383C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B383C4u) goto L_08B383C4;
    return;
L_08B383C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B384F8;
      }
      goto L_08B383CC;
    }
L_08B383CC:
    ctx.gpr[31] = (0x08B383D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B383D4u) goto L_08B383D4;
    return;
L_08B383D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B384F8;
      }
      goto L_08B383E0;
    }
L_08B383E0:
    ctx.gpr[31] = (0x08B383E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B383E8u) goto L_08B383E8;
    return;
L_08B383E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B38438;
      }
      goto L_08B383F4;
    }
L_08B383F4:
    ctx.gpr[31] = (0x08B383FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B383FCu) goto L_08B383FC;
    return;
L_08B383FC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1653));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[31] = (0x08B38428u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B38428u) goto L_08B38428;
    return;
L_08B38428:
    ctx.gpr[31] = (0x08B38430u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B38430u) goto L_08B38430;
    return;
L_08B38430:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1656), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B38438;
      }
      goto L_08B38438;
    }
L_08B38438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B384D4;
      }
      goto L_08B38448;
    }
L_08B38448:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B38460;
      }
      goto L_08B38450;
    }
L_08B38450:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08B38468;
    }
    goto L_08B38460;
L_08B38460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B38498;
      }
      goto L_08B38468;
    }
L_08B38468:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
      if (branch_taken) {
          goto L_08B38484;
      }
      goto L_08B3847C;
    }
L_08B3847C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B38498;
      }
      goto L_08B38484;
    }
L_08B38484:
    ctx.gpr[8] = (0u + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_08B38498;
L_08B38498:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B384C8;
      }
      goto L_08B384A0;
    }
L_08B384A0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B384C8;
      }
      goto L_08B384AC;
    }
L_08B384AC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(72)));
    ctx.gpr[8] = (0u | 80u);
    ctx.gpr[7] = (ctx.gpr[7] & 496u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B384C8;
      }
      goto L_08B384C0;
    }
L_08B384C0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(668), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1656), 0u);
    goto L_08B384C8;
L_08B384C8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B38448;
      }
      goto L_08B384D4;
    }
L_08B384D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B384EC;
      }
      goto L_08B384E4;
    }
L_08B384E4:
    ctx.gpr[31] = (0x08B384ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 564u, 0x0896E500u>(ctx, &aot_mem) && ctx.pc == 0x08B384ECu) goto L_08B384EC;
    return;
L_08B384EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9324)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9324), ctx.gpr[4]);
    goto L_08B384F8;
L_08B384F8:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3851C;
      }
      goto L_08B38508;
    }
L_08B38508:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B387E0;
      }
      goto L_08B38514;
    }
L_08B38514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38534;
      }
      goto L_08B3851C;
    }
L_08B3851C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B38654;
      }
      goto L_08B38524;
    }
L_08B38524:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B38774;
      }
      goto L_08B3852C;
    }
L_08B3852C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B387E0;
      }
      goto L_08B38534;
    }
L_08B38534:
    ctx.gpr[31] = (0x08B3853Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B3853Cu) goto L_08B3853C;
    return;
L_08B3853C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(150)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08B3855C;
    }
    goto L_08B3854C;
L_08B3854C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3864C;
      }
      goto L_08B38554;
    }
L_08B38554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3856C;
      }
      goto L_08B3855C;
    }
L_08B3855C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B385E0;
      }
      goto L_08B38564;
    }
L_08B38564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3864C;
      }
      goto L_08B3856C;
    }
L_08B3856C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B38584;
    }
    goto L_08B38578;
L_08B38578:
    ctx.gpr[31] = (0x08B38580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08B38580u) goto L_08B38580;
    return;
L_08B38580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B38584;
L_08B38584:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08B385B4;
      }
      goto L_08B3858C;
    }
L_08B3858C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08B38598u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B38598u) goto L_08B38598;
    return;
L_08B38598:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B385B0;
      }
      goto L_08B385A4;
    }
L_08B385A4:
    ctx.gpr[31] = (0x08B385ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08B385ACu) goto L_08B385AC;
    return;
L_08B385AC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08B385B0;
L_08B385B0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08B385B4;
L_08B385B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08B385C0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(4392));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08B385C0u) goto L_08B385C0;
    return;
L_08B385C0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08B385D8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08B385D8u) goto L_08B385D8;
    return;
L_08B385D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3864C;
      }
      goto L_08B385E0;
    }
L_08B385E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B385F8;
    }
    goto L_08B385EC;
L_08B385EC:
    ctx.gpr[31] = (0x08B385F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08B385F4u) goto L_08B385F4;
    return;
L_08B385F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B385F8;
L_08B385F8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08B38628;
      }
      goto L_08B38600;
    }
L_08B38600:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08B3860Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B3860Cu) goto L_08B3860C;
    return;
L_08B3860C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38624;
      }
      goto L_08B38618;
    }
L_08B38618:
    ctx.gpr[31] = (0x08B38620u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08B38620u) goto L_08B38620;
    return;
L_08B38620:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08B38624;
L_08B38624:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08B38628;
L_08B38628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08B38634u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(4400));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08B38634u) goto L_08B38634;
    return;
L_08B38634:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08B3864Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08B3864Cu) goto L_08B3864C;
    return;
L_08B3864C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B387E0;
      }
      goto L_08B38654;
    }
L_08B38654:
    ctx.gpr[31] = (0x08B3865Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B3865Cu) goto L_08B3865C;
    return;
L_08B3865C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(150)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08B3867C;
    }
    goto L_08B3866C;
L_08B3866C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3876C;
      }
      goto L_08B38674;
    }
L_08B38674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3868C;
      }
      goto L_08B3867C;
    }
L_08B3867C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B38700;
      }
      goto L_08B38684;
    }
L_08B38684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3876C;
      }
      goto L_08B3868C;
    }
L_08B3868C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B386A4;
    }
    goto L_08B38698;
L_08B38698:
    ctx.gpr[31] = (0x08B386A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08B386A0u) goto L_08B386A0;
    return;
L_08B386A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B386A4;
L_08B386A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08B386D4;
      }
      goto L_08B386AC;
    }
L_08B386AC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08B386B8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B386B8u) goto L_08B386B8;
    return;
L_08B386B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B386D0;
      }
      goto L_08B386C4;
    }
L_08B386C4:
    ctx.gpr[31] = (0x08B386CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08B386CCu) goto L_08B386CC;
    return;
L_08B386CC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08B386D0;
L_08B386D0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08B386D4;
L_08B386D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08B386E0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(4408));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08B386E0u) goto L_08B386E0;
    return;
L_08B386E0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08B386F8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08B386F8u) goto L_08B386F8;
    return;
L_08B386F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3876C;
      }
      goto L_08B38700;
    }
L_08B38700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B38718;
    }
    goto L_08B3870C;
L_08B3870C:
    ctx.gpr[31] = (0x08B38714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08B38714u) goto L_08B38714;
    return;
L_08B38714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B38718;
L_08B38718:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08B38748;
      }
      goto L_08B38720;
    }
L_08B38720:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08B3872Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B3872Cu) goto L_08B3872C;
    return;
L_08B3872C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38744;
      }
      goto L_08B38738;
    }
L_08B38738:
    ctx.gpr[31] = (0x08B38740u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08B38740u) goto L_08B38740;
    return;
L_08B38740:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08B38744;
L_08B38744:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08B38748;
L_08B38748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08B38754u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(4416));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08B38754u) goto L_08B38754;
    return;
L_08B38754:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08B3876Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08B3876Cu) goto L_08B3876C;
    return;
L_08B3876C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B387E0;
      }
      goto L_08B38774;
    }
L_08B38774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B3878C;
    }
    goto L_08B38780;
L_08B38780:
    ctx.gpr[31] = (0x08B38788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08B38788u) goto L_08B38788;
    return;
L_08B38788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B3878C;
L_08B3878C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08B387BC;
      }
      goto L_08B38794;
    }
L_08B38794:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08B387A0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B387A0u) goto L_08B387A0;
    return;
L_08B387A0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B387B8;
      }
      goto L_08B387AC;
    }
L_08B387AC:
    ctx.gpr[31] = (0x08B387B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08B387B4u) goto L_08B387B4;
    return;
L_08B387B4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08B387B8;
L_08B387B8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08B387BC;
L_08B387BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08B387C8u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(4424));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08B387C8u) goto L_08B387C8;
    return;
L_08B387C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08B387E0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08B387E0u) goto L_08B387E0;
    return;
L_08B387E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17331)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B38808;
      }
      goto L_08B387EC;
    }
L_08B387EC:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(4432));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[31] = (0x08B38800u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem) && ctx.pc == 0x08B38800u) goto L_08B38800;
    return;
L_08B38800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3881C;
      }
      goto L_08B38808;
    }
L_08B38808:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(4440));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[31] = (0x08B3881Cu);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem) && ctx.pc == 0x08B3881Cu) goto L_08B3881C;
    return;
L_08B3881C:
    ctx.gpr[31] = (0x08B38824u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B38824u) goto L_08B38824;
    return;
L_08B38824:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x08B38838u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B38838u) goto L_08B38838;
    return;
L_08B38838:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B3884C;
L_08B3884C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 938u, 0x08B37FF0u>(ctx, &aot_mem); return;
      }
      goto L_08B38854;
    }
L_08B38854:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B38870;
      }
      goto L_08B38860;
    }
L_08B38860:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B3887C;
      }
      goto L_08B38870;
    }
L_08B38870:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08B3887C;
L_08B3887C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
        goto L_08B3889C;
    }
    goto L_08B3889C;
L_08B3889C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B388D4;
      }
      goto L_08B388B0;
    }
L_08B388B0:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08B388D4u);
    ctx.gpr[6] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B388D4u) goto L_08B388D4;
    return;
L_08B388D4:
    ctx.gpr[31] = (0x08B388DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B388DCu) goto L_08B388DC;
    return;
L_08B388DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 938u, 0x08B37FF0u>(ctx, &aot_mem); return;
      }
      goto L_08B388E4;
    }
L_08B388E4:
    ctx.gpr[31] = (0x08B388ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B388ECu) goto L_08B388EC;
    return;
L_08B388EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38900;
      }
      goto L_08B388F4;
    }
L_08B388F4:
    ctx.gpr[31] = (0x08B388FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B388FCu) goto L_08B388FC;
    return;
L_08B388FC:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(627), static_cast<std::uint8_t>(0u));
    goto L_08B38900;
L_08B38900:
    ctx.gpr[31] = (0x08B38908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 727u, 0x08B336A4u>(ctx, &aot_mem) && ctx.pc == 0x08B38908u) goto L_08B38908;
    return;
L_08B38908:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38918;
      }
      goto L_08B38910;
    }
L_08B38910:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B38918;
L_08B38918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 938u, 0x08B37FF0u>(ctx, &aot_mem); return;
      }
      goto L_08B38920;
    }
L_08B38920:
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
L_08B38938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(62)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3897C;
      }
      goto L_08B38964;
    }
L_08B38964:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B3896C;
    }
L_08B3896C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B38C54;
      }
      goto L_08B38974;
    }
L_08B38974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B389A8;
      }
      goto L_08B3897C;
    }
L_08B3897C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B38B10;
      }
      goto L_08B38984;
    }
L_08B38984:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B3898C;
    }
L_08B3898C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B38CC4;
      }
      goto L_08B38998;
    }
L_08B38998:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B38CD0;
      }
      goto L_08B389A8;
    }
L_08B389A8:
    ctx.gpr[31] = (0x08B389B0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B389B0u) goto L_08B389B0;
    return;
L_08B389B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08B389D8u);
    ctx.fpr[22] = ctx.fpr[14] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B389D8u) goto L_08B389D8;
    return;
L_08B389D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[31] = (0x08B389FCu);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B389FCu) goto L_08B389FC;
    return;
L_08B389FC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08B38A1Cu);
    ctx.fpr[24] = ctx.fpr[17] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B38A1Cu) goto L_08B38A1C;
    return;
L_08B38A1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B38A8C;
      }
      goto L_08B38A54;
    }
L_08B38A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38A64;
    }
L_08B38A64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B38A70u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 761u, 0x08B33A00u>(ctx, &aot_mem) && ctx.pc == 0x08B38A70u) goto L_08B38A70;
    return;
L_08B38A70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38A78;
    }
L_08B38A78:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38A8C;
    }
L_08B38A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38A98;
    }
L_08B38A98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08B38AA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem) && ctx.pc == 0x08B38AA8u) goto L_08B38AA8;
    return;
L_08B38AA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38AB0;
    }
L_08B38AB0:
    ctx.gpr[31] = (0x08B38AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B38AB8u) goto L_08B38AB8;
    return;
L_08B38AB8:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08B38ACCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 703u, 0x08B33424u>(ctx, &aot_mem) && ctx.pc == 0x08B38ACCu) goto L_08B38ACC;
    return;
L_08B38ACC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38AD4;
    }
L_08B38AD4:
    ctx.gpr[31] = (0x08B38ADCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B38ADCu) goto L_08B38ADC;
    return;
L_08B38ADC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.gpr[31] = (0x08B38AECu);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B38AECu) goto L_08B38AEC;
    return;
L_08B38AEC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    goto L_08B38B08;
L_08B38B08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38D38;
      }
      goto L_08B38B10;
    }
L_08B38B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38B28;
      }
      goto L_08B38B1C;
    }
L_08B38B1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08B38B28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 783u, 0x08B33BD8u>(ctx, &aot_mem) && ctx.pc == 0x08B38B28u) goto L_08B38B28;
    return;
L_08B38B28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B38B48;
      }
      goto L_08B38B38;
    }
L_08B38B38:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B38B54;
      }
      goto L_08B38B48;
    }
L_08B38B48:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08B38B54;
L_08B38B54:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08B38B70;
    }
    goto L_08B38B70;
L_08B38B70:
    ctx.gpr[31] = (0x08B38B78u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B38B78u) goto L_08B38B78;
    return;
L_08B38B78:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08B38B8Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 703u, 0x08B33424u>(ctx, &aot_mem) && ctx.pc == 0x08B38B8Cu) goto L_08B38B8C;
    return;
L_08B38B8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B38BA0;
      }
      goto L_08B38B94;
    }
L_08B38B94:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B38C44;
      }
      goto L_08B38BA0;
    }
L_08B38BA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B38C44;
      }
      goto L_08B38BB8;
    }
L_08B38BB8:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B38BD4u);
    ctx.gpr[6] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B38BD4u) goto L_08B38BD4;
    return;
L_08B38BD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(63)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B38C40;
      }
      goto L_08B38BE0;
    }
L_08B38BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38C08;
      }
      goto L_08B38BEC;
    }
L_08B38BEC:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08B38C00u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 592u, 0x08AFEA38u>(ctx, &aot_mem) && ctx.pc == 0x08B38C00u) goto L_08B38C00;
    return;
L_08B38C00:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
      if (branch_taken) {
          goto L_08B38C0C;
      }
      goto L_08B38C08;
    }
L_08B38C08:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    goto L_08B38C0C;
L_08B38C0C:
    ctx.gpr[31] = (0x08B38C14u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B38C14u) goto L_08B38C14;
    return;
L_08B38C14:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x08B38C28u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B38C28u) goto L_08B38C28;
    return;
L_08B38C28:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B38C44;
      }
      goto L_08B38C40;
    }
L_08B38C40:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    goto L_08B38C44;
L_08B38C44:
    ctx.gpr[31] = (0x08B38C4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B38C4Cu) goto L_08B38C4C;
    return;
L_08B38C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38C54;
    }
L_08B38C54:
    ctx.gpr[31] = (0x08B38C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B38C5Cu) goto L_08B38C5C;
    return;
L_08B38C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B38CBC;
      }
      goto L_08B38C68;
    }
L_08B38C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38CBC;
      }
      goto L_08B38C74;
    }
L_08B38C74:
    ctx.gpr[31] = (0x08B38C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B38C7Cu) goto L_08B38C7C;
    return;
L_08B38C7C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08B38C88u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B38C88u) goto L_08B38C88;
    return;
L_08B38C88:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B38C9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 650u, 0x08B3312Cu>(ctx, &aot_mem) && ctx.pc == 0x08B38C9Cu) goto L_08B38C9C;
    return;
L_08B38C9C:
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B38CBC;
      }
      goto L_08B38CB4;
    }
L_08B38CB4:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B38CBC;
L_08B38CBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38CC4;
    }
L_08B38CC4:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08B38CD0;
L_08B38CD0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
        goto L_08B38CF0;
    }
    goto L_08B38CF0;
L_08B38CF0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B38D28;
      }
      goto L_08B38D04;
    }
L_08B38D04:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08B38D28u);
    ctx.gpr[6] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B38D28u) goto L_08B38D28;
    return;
L_08B38D28:
    ctx.gpr[31] = (0x08B38D30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B38D30u) goto L_08B38D30;
    return;
L_08B38D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38D38;
    }
L_08B38D38:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B38D54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(62)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B38D98;
      }
      goto L_08B38D80;
    }
L_08B38D80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B38D88;
    }
L_08B38D88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B391C8;
      }
      goto L_08B38D90;
    }
L_08B38D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38DC0;
      }
      goto L_08B38D98;
    }
L_08B38D98:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B390CC;
      }
      goto L_08B38DA0;
    }
L_08B38DA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B38DA8;
    }
L_08B38DA8:
    ctx.gpr[31] = (0x08B38DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B38DB0u) goto L_08B38DB0;
    return;
L_08B38DB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B392B8;
      }
      goto L_08B38DB8;
    }
L_08B38DB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B392F0;
      }
      goto L_08B38DC0;
    }
L_08B38DC0:
    ctx.gpr[31] = (0x08B38DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B38DC8u) goto L_08B38DC8;
    return;
L_08B38DC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38E08;
      }
      goto L_08B38DD0;
    }
L_08B38DD0:
    ctx.gpr[31] = (0x08B38DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B38DD8u) goto L_08B38DD8;
    return;
L_08B38DD8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[31] = (0x08B38DE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 126u, 0x08B3490Cu>(ctx, &aot_mem) && ctx.pc == 0x08B38DE4u) goto L_08B38DE4;
    return;
L_08B38DE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B38E08;
      }
      goto L_08B38DEC;
    }
L_08B38DEC:
    ctx.gpr[31] = (0x08B38DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B38DF4u) goto L_08B38DF4;
    return;
L_08B38DF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B38E08;
      }
      goto L_08B38DFC;
    }
L_08B38DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08B38E08u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08B38E08u) goto L_08B38E08;
    return;
L_08B38E08:
    ctx.gpr[31] = (0x08B38E10u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B38E10u) goto L_08B38E10;
    return;
L_08B38E10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08B38E44;
    }
    goto L_08B38E44;
L_08B38E44:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B38ED0;
      }
      goto L_08B38E5C;
    }
L_08B38E5C:
    ctx.gpr[31] = (0x08B38E64u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B38E64u) goto L_08B38E64;
    return;
L_08B38E64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08B38E98;
    }
    goto L_08B38E98;
L_08B38E98:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B38ED0;
      }
      goto L_08B38EB0;
    }
L_08B38EB0:
    ctx.gpr[31] = (0x08B38EB8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B38EB8u) goto L_08B38EB8;
    return;
L_08B38EB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B38EE0;
      }
      goto L_08B38ED0;
    }
L_08B38ED0:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B38EE0;
    }
L_08B38EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B38EEC;
    }
L_08B38EEC:
    ctx.gpr[31] = (0x08B38EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B38EF4u) goto L_08B38EF4;
    return;
L_08B38EF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B38EFC;
    }
L_08B38EFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08B38F0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem) && ctx.pc == 0x08B38F0Cu) goto L_08B38F0C;
    return;
L_08B38F0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B38F14;
    }
L_08B38F14:
    ctx.gpr[31] = (0x08B38F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B38F1Cu) goto L_08B38F1C;
    return;
L_08B38F1C:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08B38F30u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 703u, 0x08B33424u>(ctx, &aot_mem) && ctx.pc == 0x08B38F30u) goto L_08B38F30;
    return;
L_08B38F30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B38F38;
    }
L_08B38F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B38F84;
      }
      goto L_08B38F4C;
    }
L_08B38F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B38F7C;
      }
      goto L_08B38F60;
    }
L_08B38F60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1400)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B38F7C;
      }
      goto L_08B38F78;
    }
L_08B38F78:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B38F7C;
L_08B38F7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39064;
      }
      goto L_08B38F84;
    }
L_08B38F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B38FD0;
      }
      goto L_08B38F98;
    }
L_08B38F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B38FC8;
      }
      goto L_08B38FAC;
    }
L_08B38FAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1400)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B38FC8;
      }
      goto L_08B38FC4;
    }
L_08B38FC4:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B38FC8;
L_08B38FC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39064;
      }
      goto L_08B38FD0;
    }
L_08B38FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B39020;
      }
      goto L_08B38FE4;
    }
L_08B38FE4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08B38FF0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(944));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 387u, 0x08B0D970u>(ctx, &aot_mem) && ctx.pc == 0x08B38FF0u) goto L_08B38FF0;
    return;
L_08B38FF0:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(226) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39018;
      }
      goto L_08B38FFC;
    }
L_08B38FFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1752)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B39018;
      }
      goto L_08B39014;
    }
L_08B39014:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B39018;
L_08B39018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39064;
      }
      goto L_08B39020;
    }
L_08B39020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B39064;
      }
      goto L_08B39030;
    }
L_08B39030:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08B3903Cu);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(944));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 387u, 0x08B0D970u>(ctx, &aot_mem) && ctx.pc == 0x08B3903Cu) goto L_08B3903C;
    return;
L_08B3903C:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(226) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39064;
      }
      goto L_08B39048;
    }
L_08B39048:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1752)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B39064;
      }
      goto L_08B39060;
    }
L_08B39060:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B39064;
L_08B39064:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B3906C;
    }
L_08B3906C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B39088;
    }
L_08B39088:
    ctx.gpr[31] = (0x08B39090u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B39090u) goto L_08B39090;
    return;
L_08B39090:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.gpr[31] = (0x08B390A0u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B390A0u) goto L_08B390A0;
    return;
L_08B390A0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x08B390C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 141u, 0x08A1CE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B390C4u) goto L_08B390C4;
    return;
L_08B390C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39380;
      }
      goto L_08B390CC;
    }
L_08B390CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B390E4;
      }
      goto L_08B390D8;
    }
L_08B390D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08B390E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 783u, 0x08B33BD8u>(ctx, &aot_mem) && ctx.pc == 0x08B390E4u) goto L_08B390E4;
    return;
L_08B390E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B39104;
      }
      goto L_08B390F4;
    }
L_08B390F4:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B39110;
      }
      goto L_08B39104;
    }
L_08B39104:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08B39110;
L_08B39110:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08B3912C;
    }
    goto L_08B3912C;
L_08B3912C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B391B8;
      }
      goto L_08B39140;
    }
L_08B39140:
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08B39160u);
    ctx.gpr[6] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B39160u) goto L_08B39160;
    return;
L_08B39160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B391B8;
      }
      goto L_08B3916C;
    }
L_08B3916C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B3917Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 140u, 0x08B349C0u>(ctx, &aot_mem) && ctx.pc == 0x08B3917Cu) goto L_08B3917C;
    return;
L_08B3917C:
    ctx.gpr[31] = (0x08B39184u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 592u, 0x08AFEA38u>(ctx, &aot_mem) && ctx.pc == 0x08B39184u) goto L_08B39184;
    return;
L_08B39184:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
    ctx.gpr[31] = (0x08B39190u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B39190u) goto L_08B39190;
    return;
L_08B39190:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x08B391A4u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B391A4u) goto L_08B391A4;
    return;
L_08B391A4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B391B8;
L_08B391B8:
    ctx.gpr[31] = (0x08B391C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B391C0u) goto L_08B391C0;
    return;
L_08B391C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B391C8;
    }
L_08B391C8:
    ctx.gpr[31] = (0x08B391D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem) && ctx.pc == 0x08B391D0u) goto L_08B391D0;
    return;
L_08B391D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B392B0;
      }
      goto L_08B391D8;
    }
L_08B391D8:
    ctx.gpr[31] = (0x08B391E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B391E0u) goto L_08B391E0;
    return;
L_08B391E0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B391F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 703u, 0x08B33424u>(ctx, &aot_mem) && ctx.pc == 0x08B391F0u) goto L_08B391F0;
    return;
L_08B391F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B39200;
      }
      goto L_08B391F8;
    }
L_08B391F8:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B39200;
L_08B39200:
    ctx.gpr[31] = (0x08B39208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B39208u) goto L_08B39208;
    return;
L_08B39208:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B392B0;
      }
      goto L_08B39210;
    }
L_08B39210:
    ctx.gpr[31] = (0x08B39218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B39218u) goto L_08B39218;
    return;
L_08B39218:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08B39224u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B39224u) goto L_08B39224;
    return;
L_08B39224:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B39238u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 156u, 0x08B34A90u>(ctx, &aot_mem) && ctx.pc == 0x08B39238u) goto L_08B39238;
    return;
L_08B39238:
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B392B0;
      }
      goto L_08B39250;
    }
L_08B39250:
    ctx.gpr[31] = (0x08B39258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B39258u) goto L_08B39258;
    return;
L_08B39258:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B392B0;
      }
      goto L_08B39274;
    }
L_08B39274:
    ctx.gpr[31] = (0x08B3927Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3927Cu) goto L_08B3927C;
    return;
L_08B3927C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[31] = (0x08B39288u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 126u, 0x08B3490Cu>(ctx, &aot_mem) && ctx.pc == 0x08B39288u) goto L_08B39288;
    return;
L_08B39288:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B392B0;
      }
      goto L_08B39290;
    }
L_08B39290:
    ctx.gpr[31] = (0x08B39298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B39298u) goto L_08B39298;
    return;
L_08B39298:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B392B0;
      }
      goto L_08B392A8;
    }
L_08B392A8:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B392B0;
L_08B392B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B392B8;
    }
L_08B392B8:
    ctx.gpr[31] = (0x08B392C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B392C0u) goto L_08B392C0;
    return;
L_08B392C0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[31] = (0x08B392CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 126u, 0x08B3490Cu>(ctx, &aot_mem) && ctx.pc == 0x08B392CCu) goto L_08B392CC;
    return;
L_08B392CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B392F0;
      }
      goto L_08B392D4;
    }
L_08B392D4:
    ctx.gpr[31] = (0x08B392DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B392DCu) goto L_08B392DC;
    return;
L_08B392DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B392F0;
      }
      goto L_08B392E4;
    }
L_08B392E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08B392F0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08B392F0u) goto L_08B392F0;
    return;
L_08B392F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3930C;
      }
      goto L_08B392FC;
    }
L_08B392FC:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B39318;
      }
      goto L_08B3930C;
    }
L_08B3930C:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08B39318;
L_08B39318:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
        goto L_08B39338;
    }
    goto L_08B39338;
L_08B39338:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B39370;
      }
      goto L_08B3934C;
    }
L_08B3934C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08B39370u);
    ctx.gpr[6] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B39370u) goto L_08B39370;
    return;
L_08B39370:
    ctx.gpr[31] = (0x08B39378u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B39378u) goto L_08B39378;
    return;
L_08B39378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B39380;
    }
L_08B39380:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3939C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(62)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B393D8;
      }
      goto L_08B393C0;
    }
L_08B393C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B393C8;
    }
L_08B393C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B396E4;
      }
      goto L_08B393D0;
    }
L_08B393D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39404;
      }
      goto L_08B393D8;
    }
L_08B393D8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B39598;
      }
      goto L_08B393E0;
    }
L_08B393E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B393E8;
    }
L_08B393E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B39750;
      }
      goto L_08B393F4;
    }
L_08B393F4:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B3975C;
      }
      goto L_08B39404;
    }
L_08B39404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B39410;
    }
L_08B39410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39484;
      }
      goto L_08B39420;
    }
L_08B39420:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B39434u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem) && ctx.pc == 0x08B39434u) goto L_08B39434;
    return;
L_08B39434:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39484;
      }
      goto L_08B3943C;
    }
L_08B3943C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39460;
      }
      goto L_08B39448;
    }
L_08B39448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39460;
      }
      goto L_08B39454;
    }
L_08B39454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B39460u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08B39460u) goto L_08B39460;
    return;
L_08B39460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B394AC;
      }
      goto L_08B39470;
    }
L_08B39470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B3947Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08B3947Cu) goto L_08B3947C;
    return;
L_08B3947C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B394AC;
      }
      goto L_08B39484;
    }
L_08B39484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B394A8;
      }
      goto L_08B39490;
    }
L_08B39490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B394A8;
      }
      goto L_08B3949C;
    }
L_08B3949C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B394A8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08B394A8u) goto L_08B394A8;
    return;
L_08B394A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_08B394AC;
L_08B394AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B394B8;
    }
L_08B394B8:
    ctx.gpr[31] = (0x08B394C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B394C0u) goto L_08B394C0;
    return;
L_08B394C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B394C8;
    }
L_08B394C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B394DC;
    }
L_08B394DC:
    ctx.gpr[31] = (0x08B394E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B394E4u) goto L_08B394E4;
    return;
L_08B394E4:
    ctx.gpr[6] = (16576u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08B394F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 703u, 0x08B33424u>(ctx, &aot_mem) && ctx.pc == 0x08B394F8u) goto L_08B394F8;
    return;
L_08B394F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B39500;
    }
L_08B39500:
    ctx.gpr[31] = (0x08B39508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B39508u) goto L_08B39508;
    return;
L_08B39508:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B39520;
    }
L_08B39520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39544;
      }
      goto L_08B3952C;
    }
L_08B3952C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39544;
      }
      goto L_08B39538;
    }
L_08B39538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B39544u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08B39544u) goto L_08B39544;
    return;
L_08B39544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B39550u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B39550u) goto L_08B39550;
    return;
L_08B39550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3957C;
      }
      goto L_08B3955C;
    }
L_08B3955C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B3957Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B3957Cu) goto L_08B3957C;
    return;
L_08B3957C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B39590;
L_08B39590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B397C8;
      }
      goto L_08B39598;
    }
L_08B39598:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B395B8;
      }
      goto L_08B395A8;
    }
L_08B395A8:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B395C4;
      }
      goto L_08B395B8;
    }
L_08B395B8:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08B395C4;
L_08B395C4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08B395E0;
    }
    goto L_08B395E0;
L_08B395E0:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B396D4;
      }
      goto L_08B395F4;
    }
L_08B395F4:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(171)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B396B4;
      }
      goto L_08B39610;
    }
L_08B39610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B396B4;
      }
      goto L_08B3961C;
    }
L_08B3961C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B396B4;
      }
      goto L_08B3962C;
    }
L_08B3962C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B39640u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem) && ctx.pc == 0x08B39640u) goto L_08B39640;
    return;
L_08B39640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B396B4;
      }
      goto L_08B39648;
    }
L_08B39648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3966C;
      }
      goto L_08B39654;
    }
L_08B39654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3966C;
      }
      goto L_08B39660;
    }
L_08B39660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B3966Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08B3966Cu) goto L_08B3966C;
    return;
L_08B3966C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B39678u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B39678u) goto L_08B39678;
    return;
L_08B39678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B396A4;
      }
      goto L_08B39684;
    }
L_08B39684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B396A4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B396A4u) goto L_08B396A4;
    return;
L_08B396A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B396B4;
L_08B396B4:
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08B396D4u);
    ctx.gpr[6] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B396D4u) goto L_08B396D4;
    return;
L_08B396D4:
    ctx.gpr[31] = (0x08B396DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B396DCu) goto L_08B396DC;
    return;
L_08B396DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B396E4;
    }
L_08B396E4:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(171)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B39748;
      }
      goto L_08B39700;
    }
L_08B39700:
    ctx.gpr[31] = (0x08B39708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B39708u) goto L_08B39708;
    return;
L_08B39708:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08B39714u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B39714u) goto L_08B39714;
    return;
L_08B39714:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B39728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 650u, 0x08B3312Cu>(ctx, &aot_mem) && ctx.pc == 0x08B39728u) goto L_08B39728;
    return;
L_08B39728:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B39748;
      }
      goto L_08B39740;
    }
L_08B39740:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B39748;
L_08B39748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B39750;
    }
L_08B39750:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08B3975C;
L_08B3975C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
        goto L_08B3977C;
    }
    goto L_08B3977C;
L_08B3977C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B397B8;
      }
      goto L_08B39790;
    }
L_08B39790:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08B397B8u);
    ctx.gpr[6] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B397B8u) goto L_08B397B8;
    return;
L_08B397B8:
    ctx.gpr[31] = (0x08B397C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B397C0u) goto L_08B397C0;
    return;
L_08B397C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B397C8;
    }
L_08B397C8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B397DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(62)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B39CFC;
      }
      goto L_08B39814;
    }
L_08B39814:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31008)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3982C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] & 7u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[4] = (ctx.gpr[4] >> 29u);
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 3u));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39970;
      }
      goto L_08B39884;
    }
L_08B39884:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3989C;
      }
      goto L_08B3988C;
    }
L_08B3988C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B398A4;
    }
    goto L_08B3989C;
L_08B3989C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B398D4;
      }
      goto L_08B398A4;
    }
L_08B398A4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
      if (branch_taken) {
          goto L_08B398C0;
      }
      goto L_08B398B8;
    }
L_08B398B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B398D4;
      }
      goto L_08B398C0;
    }
L_08B398C0:
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    goto L_08B398D4;
L_08B398D4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B39948;
      }
      goto L_08B398DC;
    }
L_08B398DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39908;
      }
      goto L_08B398E8;
    }
L_08B398E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B39908;
      }
      goto L_08B398F8;
    }
L_08B398F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B39948;
      }
      goto L_08B39908;
    }
L_08B39908:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B39918u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem) && ctx.pc == 0x08B39918u) goto L_08B39918;
    return;
L_08B39918:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B39948;
      }
      goto L_08B39920;
    }
L_08B39920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B39944;
      }
      goto L_08B39938;
    }
L_08B39938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08B39944u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08B39944u) goto L_08B39944;
    return;
L_08B39944:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08B39948;
L_08B39948:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B39884;
      }
      goto L_08B39970;
    }
L_08B39970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39CFC;
      }
      goto L_08B39978;
    }
L_08B39978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B399D0;
      }
      goto L_08B39984;
    }
L_08B39984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08B399A8;
      }
      goto L_08B3999C;
    }
L_08B3999C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08B399A8;
L_08B399A8:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B399D8;
      }
      goto L_08B399C4;
    }
L_08B399C4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B399D8;
      }
      goto L_08B399D0;
    }
L_08B399D0:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B399D8;
L_08B399D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39CFC;
      }
      goto L_08B399E0;
    }
L_08B399E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15267u << 16u);
      if (branch_taken) {
          goto L_08B39C40;
      }
      goto L_08B399EC;
    }
L_08B399EC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08B39A18;
    }
    goto L_08B39A18;
L_08B39A18:
    ctx.gpr[4] = (16288u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55676u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08B39A78;
      }
      goto L_08B39A34;
    }
L_08B39A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B39A70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x08B39A70u) goto L_08B39A70;
    return;
L_08B39A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39AB4;
      }
      goto L_08B39A78;
    }
L_08B39A78:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08B39A90u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 612u, 0x08B32D64u>(ctx, &aot_mem) && ctx.pc == 0x08B39A90u) goto L_08B39A90;
    return;
L_08B39A90:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08B39AB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x08B39AB4u) goto L_08B39AB4;
    return;
L_08B39AB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B39C38;
      }
      goto L_08B39ACC;
    }
L_08B39ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08B39AD8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem) && ctx.pc == 0x08B39AD8u) goto L_08B39AD8;
    return;
L_08B39AD8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17296), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (0u | 125u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08B39B04;
      }
      goto L_08B39AF8;
    }
L_08B39AF8:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08B39B04;
L_08B39B04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[6] = (18676u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(636)));
    ctx.gpr[5] = (ctx.gpr[6] | 9216u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
        goto L_08B39B50;
    }
    goto L_08B39B44;
L_08B39B44:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    goto L_08B39B50;
L_08B39B50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17332)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[5] << 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B39BC8;
    }
    goto L_08B39B9C;
L_08B39B9C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08B39BA8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B39BA8u) goto L_08B39BA8;
    return;
L_08B39BA8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39BC0;
      }
      goto L_08B39BB4;
    }
L_08B39BB4:
    ctx.gpr[31] = (0x08B39BBCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08B39BBCu) goto L_08B39BBC;
    return;
L_08B39BBC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08B39BC0;
L_08B39BC0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B39BC8;
L_08B39BC8:
    ctx.gpr[31] = (0x08B39BD0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(4448));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08B39BD0u) goto L_08B39BD0;
    return;
L_08B39BD0:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 5000u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08B39BFCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 351u, 0x08AB9C74u>(ctx, &aot_mem) && ctx.pc == 0x08B39BFCu) goto L_08B39BFC;
    return;
L_08B39BFC:
    ctx.gpr[31] = (0x08B39C04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 592u, 0x08AFEA38u>(ctx, &aot_mem) && ctx.pc == 0x08B39C04u) goto L_08B39C04;
    return;
L_08B39C04:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08B39C38u);
    ctx.gpr[6] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B39C38u) goto L_08B39C38;
    return;
L_08B39C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39C48;
      }
      goto L_08B39C40;
    }
L_08B39C40:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B39C48;
L_08B39C48:
    ctx.gpr[31] = (0x08B39C50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 75u, 0x08B34680u>(ctx, &aot_mem) && ctx.pc == 0x08B39C50u) goto L_08B39C50;
    return;
L_08B39C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39CFC;
      }
      goto L_08B39C58;
    }
L_08B39C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39C74;
      }
      goto L_08B39C6C;
    }
L_08B39C6C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B39C74;
L_08B39C74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39CFC;
      }
      goto L_08B39C7C;
    }
L_08B39C7C:
    ctx.gpr[4] = (15267u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08B39CB4;
    }
    goto L_08B39CB4;
L_08B39CB4:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08B39CF4;
      }
      goto L_08B39CD0;
    }
L_08B39CD0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08B39CF4u);
    ctx.gpr[6] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B39CF4u) goto L_08B39CF4;
    return;
L_08B39CF4:
    ctx.gpr[31] = (0x08B39CFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 75u, 0x08B34680u>(ctx, &aot_mem) && ctx.pc == 0x08B39CFCu) goto L_08B39CFC;
    return;
L_08B39CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B39E08;
      }
      goto L_08B39D10;
    }
L_08B39D10:
    ctx.gpr[31] = (0x08B39D18u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B39D18u) goto L_08B39D18;
    return;
L_08B39D18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B39E08;
      }
      goto L_08B39D30;
    }
L_08B39D30:
    ctx.gpr[31] = (0x08B39D38u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B39D38u) goto L_08B39D38;
    return;
L_08B39D38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B39E08;
      }
      goto L_08B39D50;
    }
L_08B39D50:
    ctx.gpr[31] = (0x08B39D58u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B39D58u) goto L_08B39D58;
    return;
L_08B39D58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B39E08;
      }
      goto L_08B39D70;
    }
L_08B39D70:
    ctx.gpr[31] = (0x08B39D78u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B39D78u) goto L_08B39D78;
    return;
L_08B39D78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B39E08;
      }
      goto L_08B39D90;
    }
L_08B39D90:
    ctx.gpr[31] = (0x08B39D98u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B39D98u) goto L_08B39D98;
    return;
L_08B39D98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B39E08;
      }
      goto L_08B39DBC;
    }
L_08B39DBC:
    ctx.gpr[31] = (0x08B39DC4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B39DC4u) goto L_08B39DC4;
    return;
L_08B39DC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B39E08;
      }
      goto L_08B39DDC;
    }
L_08B39DDC:
    ctx.gpr[31] = (0x08B39DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B39DE4u) goto L_08B39DE4;
    return;
L_08B39DE4:
    ctx.gpr[10] = (17302u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 42u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08B39E08u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x08B39E08u) goto L_08B39E08;
    return;
L_08B39E08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B39E2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(62)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39E5C;
    }
L_08B39E5C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B3A104;
      }
      goto L_08B39E64;
    }
L_08B39E64:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B39FF4;
      }
      goto L_08B39E6C;
    }
L_08B39E6C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B3A178;
      }
      goto L_08B39E74;
    }
L_08B39E74:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39E7C;
    }
L_08B39E7C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08B3A208;
      }
      goto L_08B39E84;
    }
L_08B39E84:
    ctx.gpr[31] = (0x08B39E8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B39E8Cu) goto L_08B39E8C;
    return;
L_08B39E8C:
    ctx.gpr[31] = (0x08B39E94u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B39E94u) goto L_08B39E94;
    return;
L_08B39E94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08B39EBCu);
    ctx.fpr[22] = ctx.fpr[14] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B39EBCu) goto L_08B39EBC;
    return;
L_08B39EBC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[31] = (0x08B39EE0u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B39EE0u) goto L_08B39EE0;
    return;
L_08B39EE0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08B39F00u);
    ctx.fpr[24] = ctx.fpr[17] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B39F00u) goto L_08B39F00;
    return;
L_08B39F00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B39F44;
      }
      goto L_08B39F38;
    }
L_08B39F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B39F7C;
      }
      goto L_08B39F44;
    }
L_08B39F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39F54;
    }
L_08B39F54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B39F60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 761u, 0x08B33A00u>(ctx, &aot_mem) && ctx.pc == 0x08B39F60u) goto L_08B39F60;
    return;
L_08B39F60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39F68;
    }
L_08B39F68:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39F7C;
    }
L_08B39F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39F88;
    }
L_08B39F88:
    ctx.gpr[31] = (0x08B39F90u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B39F90u) goto L_08B39F90;
    return;
L_08B39F90:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39F98;
    }
L_08B39F98:
    ctx.gpr[31] = (0x08B39FA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 661u, 0x08B331CCu>(ctx, &aot_mem) && ctx.pc == 0x08B39FA0u) goto L_08B39FA0;
    return;
L_08B39FA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39FA8;
    }
L_08B39FA8:
    ctx.gpr[31] = (0x08B39FB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 4u, 0x08B34050u>(ctx, &aot_mem) && ctx.pc == 0x08B39FB0u) goto L_08B39FB0;
    return;
L_08B39FB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39FB8;
    }
L_08B39FB8:
    ctx.gpr[31] = (0x08B39FC0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B39FC0u) goto L_08B39FC0;
    return;
L_08B39FC0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.gpr[31] = (0x08B39FD0u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B39FD0u) goto L_08B39FD0;
    return;
L_08B39FD0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    goto L_08B39FEC;
L_08B39FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A23C;
      }
      goto L_08B39FF4;
    }
L_08B39FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A00C;
      }
      goto L_08B3A000;
    }
L_08B3A000:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08B3A00Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 783u, 0x08B33BD8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A00Cu) goto L_08B3A00C;
    return;
L_08B3A00C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3A02C;
      }
      goto L_08B3A01C;
    }
L_08B3A01C:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B3A038;
      }
      goto L_08B3A02C;
    }
L_08B3A02C:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08B3A038;
L_08B3A038:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08B3A054;
    }
    goto L_08B3A054;
L_08B3A054:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B3A0F4;
      }
      goto L_08B3A068;
    }
L_08B3A068:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B3A084u);
    ctx.gpr[6] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B3A084u) goto L_08B3A084;
    return;
L_08B3A084:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(63)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A0F0;
      }
      goto L_08B3A090;
    }
L_08B3A090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A0B8;
      }
      goto L_08B3A09C;
    }
L_08B3A09C:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B3A0BC;
      }
      goto L_08B3A0B8;
    }
L_08B3A0B8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    goto L_08B3A0BC;
L_08B3A0BC:
    ctx.gpr[31] = (0x08B3A0C4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08B3A0C4u) goto L_08B3A0C4;
    return;
L_08B3A0C4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x08B3A0D8u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B3A0D8u) goto L_08B3A0D8;
    return;
L_08B3A0D8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B3A0F4;
      }
      goto L_08B3A0F0;
    }
L_08B3A0F0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    goto L_08B3A0F4;
L_08B3A0F4:
    ctx.gpr[31] = (0x08B3A0FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B3A0FCu) goto L_08B3A0FC;
    return;
L_08B3A0FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B3A104;
    }
L_08B3A104:
    ctx.gpr[31] = (0x08B3A10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A10Cu) goto L_08B3A10C;
    return;
L_08B3A10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B3A170;
      }
      goto L_08B3A118;
    }
L_08B3A118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A170;
      }
      goto L_08B3A124;
    }
L_08B3A124:
    ctx.gpr[31] = (0x08B3A12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A12Cu) goto L_08B3A12C;
    return;
L_08B3A12C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08B3A138u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A138u) goto L_08B3A138;
    return;
L_08B3A138:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B3A14Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 650u, 0x08B3312Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3A14Cu) goto L_08B3A14C;
    return;
L_08B3A14C:
    ctx.gpr[4] = (17296u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B3A170;
      }
      goto L_08B3A168;
    }
L_08B3A168:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B3A170;
L_08B3A170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B3A178;
    }
L_08B3A178:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3A194;
      }
      goto L_08B3A184;
    }
L_08B3A184:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B3A1A0;
      }
      goto L_08B3A194;
    }
L_08B3A194:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08B3A1A0;
L_08B3A1A0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
        goto L_08B3A1C0;
    }
    goto L_08B3A1C0;
L_08B3A1C0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B3A1F8;
      }
      goto L_08B3A1D4;
    }
L_08B3A1D4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08B3A1F8u);
    ctx.gpr[6] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B3A1F8u) goto L_08B3A1F8;
    return;
L_08B3A1F8:
    ctx.gpr[31] = (0x08B3A200u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B3A200u) goto L_08B3A200;
    return;
L_08B3A200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B3A208;
    }
L_08B3A208:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B3A234;
      }
      goto L_08B3A218;
    }
L_08B3A218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A234;
      }
      goto L_08B3A22C;
    }
L_08B3A22C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B3A234;
L_08B3A234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B3A23C;
    }
L_08B3A23C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3A25C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(62)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3A2A8;
      }
      goto L_08B3A28C;
    }
L_08B3A28C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3A3C0;
      }
      goto L_08B3A294;
    }
L_08B3A294:
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08B3A4A4;
    }
    goto L_08B3A29C;
L_08B3A29C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A2D4;
      }
      goto L_08B3A2A4;
    }
L_08B3A2A4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    goto L_08B3A2A8;
L_08B3A2A8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3A3C8;
      }
      goto L_08B3A2B0;
    }
L_08B3A2B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A3C0;
      }
      goto L_08B3A2B8;
    }
L_08B3A2B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3A6BC;
      }
      goto L_08B3A2C4;
    }
L_08B3A2C4:
    ctx.gpr[4] = (15568u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 58720u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B3A6C8;
      }
      goto L_08B3A2D4;
    }
L_08B3A2D4:
    ctx.gpr[31] = (0x08B3A2DCu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B3A2DCu) goto L_08B3A2DC;
    return;
L_08B3A2DC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B3A2E8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B3A2E8u) goto L_08B3A2E8;
    return;
L_08B3A2E8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08B3A2F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 650u, 0x08B3312Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3A2F8u) goto L_08B3A2F8;
    return;
L_08B3A2F8:
    ctx.gpr[4] = (17249u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16675u << 16u);
      if (branch_taken) {
          goto L_08B3A33C;
      }
      goto L_08B3A314;
    }
L_08B3A314:
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B3A34C;
      }
      goto L_08B3A32C;
    }
L_08B3A32C:
    ctx.gpr[31] = (0x08B3A334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A334u) goto L_08B3A334;
    return;
L_08B3A334:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A34C;
      }
      goto L_08B3A33C;
    }
L_08B3A33C:
    ctx.gpr[31] = (0x08B3A344u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 4u, 0x08B34050u>(ctx, &aot_mem) && ctx.pc == 0x08B3A344u) goto L_08B3A344;
    return;
L_08B3A344:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A388;
      }
      goto L_08B3A34C;
    }
L_08B3A34C:
    ctx.gpr[31] = (0x08B3A354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A354u) goto L_08B3A354;
    return;
L_08B3A354:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A394;
      }
      goto L_08B3A35C;
    }
L_08B3A35C:
    ctx.gpr[31] = (0x08B3A364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A364u) goto L_08B3A364;
    return;
L_08B3A364:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B3A370u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 24u, 0x08B34200u>(ctx, &aot_mem) && ctx.pc == 0x08B3A370u) goto L_08B3A370;
    return;
L_08B3A370:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B3A37Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 138u, 0x08B349A4u>(ctx, &aot_mem) && ctx.pc == 0x08B3A37Cu) goto L_08B3A37C;
    return;
L_08B3A37C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A394;
      }
      goto L_08B3A388;
    }
L_08B3A388:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B3A3C0;
      }
      goto L_08B3A394;
    }
L_08B3A394:
    ctx.gpr[4] = (17817u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B3A3C0;
      }
      goto L_08B3A3B0;
    }
L_08B3A3B0:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08B3A3C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 39u, 0x08B3430Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3A3C0u) goto L_08B3A3C0;
    return;
L_08B3A3C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A730;
      }
      goto L_08B3A3C8;
    }
L_08B3A3C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3A3E8;
      }
      goto L_08B3A3D8;
    }
L_08B3A3D8:
    ctx.gpr[4] = (15627u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 17302u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B3A3F4;
      }
      goto L_08B3A3E8;
    }
L_08B3A3E8:
    ctx.gpr[4] = (15755u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 17302u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08B3A3F4;
L_08B3A3F4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08B3A410;
    }
    goto L_08B3A410;
L_08B3A410:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B3A41Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 727u, 0x08B336A4u>(ctx, &aot_mem) && ctx.pc == 0x08B3A41Cu) goto L_08B3A41C;
    return;
L_08B3A41C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A430;
      }
      goto L_08B3A424;
    }
L_08B3A424:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B3A494;
      }
      goto L_08B3A430;
    }
L_08B3A430:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B3A494;
      }
      goto L_08B3A448;
    }
L_08B3A448:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B3A464u);
    ctx.gpr[6] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B3A464u) goto L_08B3A464;
    return;
L_08B3A464:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    ctx.gpr[31] = (0x08B3A470u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 597u, 0x0896E7A4u>(ctx, &aot_mem) && ctx.pc == 0x08B3A470u) goto L_08B3A470;
    return;
L_08B3A470:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14768));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B3A494u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 189u, 0x08B34D54u>(ctx, &aot_mem) && ctx.pc == 0x08B3A494u) goto L_08B3A494;
    return;
L_08B3A494:
    ctx.gpr[31] = (0x08B3A49Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B3A49Cu) goto L_08B3A49C;
    return;
L_08B3A49C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A3C0;
      }
      goto L_08B3A4A4;
    }
L_08B3A4A4:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A4FC;
      }
      goto L_08B3A4D0;
    }
L_08B3A4D0:
    ctx.gpr[31] = (0x08B3A4D8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B3A4D8u) goto L_08B3A4D8;
    return;
L_08B3A4D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08B3A4E4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B3A4E4u) goto L_08B3A4E4;
    return;
L_08B3A4E4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08B3A4F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 650u, 0x08B3312Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3A4F4u) goto L_08B3A4F4;
    return;
L_08B3A4F4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B3A508;
      }
      goto L_08B3A4FC;
    }
L_08B3A4FC:
    ctx.gpr[4] = (32639u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08B3A508;
L_08B3A508:
    ctx.gpr[4] = (16634u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57671u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17096u << 16u);
      if (branch_taken) {
          goto L_08B3A548;
      }
      goto L_08B3A524;
    }
L_08B3A524:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B3A6B4;
      }
      goto L_08B3A538;
    }
L_08B3A538:
    ctx.gpr[31] = (0x08B3A540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A540u) goto L_08B3A540;
    return;
L_08B3A540:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A6B4;
      }
      goto L_08B3A548;
    }
L_08B3A548:
    ctx.gpr[31] = (0x08B3A550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A550u) goto L_08B3A550;
    return;
L_08B3A550:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A67C;
      }
      goto L_08B3A558;
    }
L_08B3A558:
    ctx.gpr[31] = (0x08B3A560u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 591u, 0x0896E710u>(ctx, &aot_mem) && ctx.pc == 0x08B3A560u) goto L_08B3A560;
    return;
L_08B3A560:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B3A56Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 138u, 0x08B349A4u>(ctx, &aot_mem) && ctx.pc == 0x08B3A56Cu) goto L_08B3A56C;
    return;
L_08B3A56C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A67C;
      }
      goto L_08B3A578;
    }
L_08B3A578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A6B4;
      }
      goto L_08B3A584;
    }
L_08B3A584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08B3A594u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A594u) goto L_08B3A594;
    return;
L_08B3A594:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08B3A5B0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A5B0u) goto L_08B3A5B0;
    return;
L_08B3A5B0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08B3A674;
      }
      goto L_08B3A5C4;
    }
L_08B3A5C4:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16840u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B3A674;
      }
      goto L_08B3A5E8;
    }
L_08B3A5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17292)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(18001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A674;
      }
      goto L_08B3A600;
    }
L_08B3A600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B3A618;
    }
    goto L_08B3A60C;
L_08B3A60C:
    ctx.gpr[31] = (0x08B3A614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A614u) goto L_08B3A614;
    return;
L_08B3A614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B3A618;
L_08B3A618:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08B3A648;
      }
      goto L_08B3A620;
    }
L_08B3A620:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08B3A62Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B3A62Cu) goto L_08B3A62C;
    return;
L_08B3A62C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A644;
      }
      goto L_08B3A638;
    }
L_08B3A638:
    ctx.gpr[31] = (0x08B3A640u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3A640u) goto L_08B3A640;
    return;
L_08B3A640:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B3A644;
L_08B3A644:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08B3A648;
L_08B3A648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08B3A654u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(4456));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08B3A654u) goto L_08B3A654;
    return;
L_08B3A654:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08B3A66Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08B3A66Cu) goto L_08B3A66C;
    return;
L_08B3A66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17292), ctx.gpr[4]);
    goto L_08B3A674;
L_08B3A674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A6B4;
      }
      goto L_08B3A67C;
    }
L_08B3A67C:
    ctx.gpr[31] = (0x08B3A684u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 597u, 0x0896E7A4u>(ctx, &aot_mem) && ctx.pc == 0x08B3A684u) goto L_08B3A684;
    return;
L_08B3A684:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14768));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08B3A6A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 220u, 0x08B34FC4u>(ctx, &aot_mem) && ctx.pc == 0x08B3A6A4u) goto L_08B3A6A4;
    return;
L_08B3A6A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A6B4;
      }
      goto L_08B3A6AC;
    }
L_08B3A6AC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B3A6B4;
L_08B3A6B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A3C0;
      }
      goto L_08B3A6BC;
    }
L_08B3A6BC:
    ctx.gpr[4] = (15731u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46662u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08B3A6C8;
L_08B3A6C8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
        goto L_08B3A6E8;
    }
    goto L_08B3A6E8;
L_08B3A6E8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B3A720;
      }
      goto L_08B3A6FC;
    }
L_08B3A6FC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08B3A720u);
    ctx.gpr[6] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B3A720u) goto L_08B3A720;
    return;
L_08B3A720:
    ctx.gpr[31] = (0x08B3A728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B3A728u) goto L_08B3A728;
    return;
L_08B3A728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A3C0;
      }
      goto L_08B3A730;
    }
L_08B3A730:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3A750:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(62)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3A794;
      }
      goto L_08B3A77C;
    }
L_08B3A77C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3A784;
    }
L_08B3A784:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B3A94C;
      }
      goto L_08B3A78C;
    }
L_08B3A78C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A7C0;
      }
      goto L_08B3A794;
    }
L_08B3A794:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3A8A8;
      }
      goto L_08B3A79C;
    }
L_08B3A79C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3A7A4;
    }
L_08B3A7A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3A9BC;
      }
      goto L_08B3A7B0;
    }
L_08B3A7B0:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B3A9C8;
      }
      goto L_08B3A7C0;
    }
L_08B3A7C0:
    ctx.gpr[31] = (0x08B3A7C8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B3A7C8u) goto L_08B3A7C8;
    return;
L_08B3A7C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08B3A7F0u);
    ctx.fpr[22] = ctx.fpr[14] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B3A7F0u) goto L_08B3A7F0;
    return;
L_08B3A7F0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[31] = (0x08B3A814u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B3A814u) goto L_08B3A814;
    return;
L_08B3A814:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08B3A834u);
    ctx.fpr[24] = ctx.fpr[17] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08B3A834u) goto L_08B3A834;
    return;
L_08B3A834:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3A86C;
    }
L_08B3A86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3A878;
    }
L_08B3A878:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08B3A888u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 703u, 0x08B33424u>(ctx, &aot_mem) && ctx.pc == 0x08B3A888u) goto L_08B3A888;
    return;
L_08B3A888:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3A890;
    }
L_08B3A890:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B3A8A0;
L_08B3A8A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AA30;
      }
      goto L_08B3A8A8;
    }
L_08B3A8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A8C0;
      }
      goto L_08B3A8B4;
    }
L_08B3A8B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08B3A8C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 783u, 0x08B33BD8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A8C0u) goto L_08B3A8C0;
    return;
L_08B3A8C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(77)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3A8E0;
      }
      goto L_08B3A8D0;
    }
L_08B3A8D0:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B3A8EC;
      }
      goto L_08B3A8E0;
    }
L_08B3A8E0:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08B3A8EC;
L_08B3A8EC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08B3A908;
    }
    goto L_08B3A908;
L_08B3A908:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B3A93C;
      }
      goto L_08B3A91C;
    }
L_08B3A91C:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B3A938u);
    ctx.gpr[6] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B3A938u) goto L_08B3A938;
    return;
L_08B3A938:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    goto L_08B3A93C;
L_08B3A93C:
    ctx.gpr[31] = (0x08B3A944u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B3A944u) goto L_08B3A944;
    return;
L_08B3A944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3A94C;
    }
L_08B3A94C:
    ctx.gpr[31] = (0x08B3A954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A954u) goto L_08B3A954;
    return;
L_08B3A954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B3A9B4;
      }
      goto L_08B3A960;
    }
L_08B3A960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A9B4;
      }
      goto L_08B3A96C;
    }
L_08B3A96C:
    ctx.gpr[31] = (0x08B3A974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A974u) goto L_08B3A974;
    return;
L_08B3A974:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08B3A980u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B3A980u) goto L_08B3A980;
    return;
L_08B3A980:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B3A994u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 650u, 0x08B3312Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3A994u) goto L_08B3A994;
    return;
L_08B3A994:
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B3A9B4;
      }
      goto L_08B3A9AC;
    }
L_08B3A9AC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B3A9B4;
L_08B3A9B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3A9BC;
    }
L_08B3A9BC:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08B3A9C8;
L_08B3A9C8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
        goto L_08B3A9E8;
    }
    goto L_08B3A9E8;
L_08B3A9E8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B3AA20;
      }
      goto L_08B3A9FC;
    }
L_08B3A9FC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08B3AA20u);
    ctx.gpr[6] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08B3AA20u) goto L_08B3AA20;
    return;
L_08B3AA20:
    ctx.gpr[31] = (0x08B3AA28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x08B3AA28u) goto L_08B3AA28;
    return;
L_08B3AA28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3AA30;
    }
L_08B3AA30:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3AA4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4476)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B3AA8C;
      }
      goto L_08B3AA60;
    }
L_08B3AA60:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08B3AA7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30976));
    ctx.pc = 0x08B7341Cu;
    return;
L_08B3AA7C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(4476), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B3AA94;
      }
      goto L_08B3AA84;
    }
L_08B3AA84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4476)));
      if (branch_taken) {
          goto L_08B3AA98;
      }
      goto L_08B3AA8C;
    }
L_08B3AA8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3AA98;
      }
      goto L_08B3AA94;
    }
L_08B3AA94:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B3AA98;
L_08B3AA98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3AAA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B3AABCu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B734BCu;
    return;
L_08B3AABC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3AAC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4476)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B3AADCu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B734A4u;
    return;
L_08B3AADC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3AAE8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4488)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3AAF0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4489)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3AAF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (9u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AB78;
      }
      goto L_08B3AB10;
    }
L_08B3AB10:
    ctx.gpr[4] = (0u | 0u);
    goto L_08B3AB14;
L_08B3AB14:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08B3AB24u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = 0x08B73204u;
    return;
L_08B3AB24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AB3C;
      }
      goto L_08B3AB2C;
    }
L_08B3AB2C:
    ctx.gpr[31] = (0x08B3AB34u);
    ctx.gpr[4] = (0u | 50u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08B3AB34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3AB14;
      }
      goto L_08B3AB3C;
    }
L_08B3AB3C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4488), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19661)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AB8C;
      }
      goto L_08B3AB50;
    }
L_08B3AB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AB68;
      }
      goto L_08B3AB5C;
    }
L_08B3AB5C:
    ctx.gpr[31] = (0x08B3AB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3AB64u) goto L_08B3AB64;
    return;
L_08B3AB64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08B3AB68;
L_08B3AB68:
    ctx.gpr[31] = (0x08B3AB70u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 299u, 0x08A55324u>(ctx, &aot_mem) && ctx.pc == 0x08B3AB70u) goto L_08B3AB70;
    return;
L_08B3AB70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AB8C;
      }
      goto L_08B3AB78;
    }
L_08B3AB78:
    ctx.gpr[4] = (6u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AB8C;
      }
      goto L_08B3AB88;
    }
L_08B3AB88:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4488), static_cast<std::uint8_t>(0u));
    goto L_08B3AB8C;
L_08B3AB8C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3AB9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B3AC04;
      }
      goto L_08B3ABB4;
    }
L_08B3ABB4:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AC04;
      }
      goto L_08B3ABC0;
    }
L_08B3ABC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4488)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3ABD0;
      }
      goto L_08B3ABCC;
    }
L_08B3ABCC:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4489), static_cast<std::uint8_t>(0u));
    goto L_08B3ABD0;
L_08B3ABD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AC04;
      }
      goto L_08B3ABDC;
    }
L_08B3ABDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08B3ABF4;
    }
    goto L_08B3ABE8;
L_08B3ABE8:
    ctx.gpr[31] = (0x08B3ABF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3ABF0u) goto L_08B3ABF0;
    return;
L_08B3ABF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08B3ABF4;
L_08B3ABF4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08B3AC04;
L_08B3AC04:
    ctx.gpr[4] = (ctx.gpr[16] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AC1C;
      }
      goto L_08B3AC10;
    }
L_08B3AC10:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4489), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B3AC4C;
      }
      goto L_08B3AC1C;
    }
L_08B3AC1C:
    ctx.gpr[4] = (ctx.gpr[16] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AC4C;
      }
      goto L_08B3AC28;
    }
L_08B3AC28:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AC4C;
      }
      goto L_08B3AC34;
    }
L_08B3AC34:
    ctx.gpr[31] = (0x08B3AC3Cu);
    // nop
    ctx.pc = 0x08B73104u;
    return;
L_08B3AC3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AC4C;
      }
      goto L_08B3AC44;
    }
L_08B3AC44:
    ctx.gpr[31] = (0x08B3AC4Cu);
    // nop
    ctx.pc = 0x08B730FCu;
    return;
L_08B3AC4C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3AC60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B3AC70u);
    // nop
    ctx.pc = 0x08B735F4u;
    return;
L_08B3AC70:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3AC80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B3AC90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B7312Cu;
    return;
L_08B3AC90:
    ctx.gpr[31] = (0x08B3AC98u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B73084u;
    return;
L_08B3AC98:
    ctx.gpr[31] = (0x08B3ACA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B7345Cu;
    return;
L_08B3ACA0:
    ctx.gpr[31] = (0x08B3ACA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4468)));
    ctx.pc = 0x08B7345Cu;
    return;
L_08B3ACA8:
    ctx.gpr[31] = (0x08B3ACB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4472)));
    ctx.pc = 0x08B7345Cu;
    return;
L_08B3ACB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3ACBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(4492));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B3ACDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21768));
    ctx.pc = 0x08B73444u;
    return;
L_08B3ACDC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3AE48;
      }
      goto L_08B3ACE8;
    }
L_08B3ACE8:
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(4468), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(4508));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B3AD00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21604));
    ctx.pc = 0x08B73444u;
    return;
L_08B3AD00:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3AE38;
      }
      goto L_08B3AD0C;
    }
L_08B3AD0C:
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(4464), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(4520));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B3AD24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21408));
    ctx.pc = 0x08B73444u;
    return;
L_08B3AD24:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3AE20;
      }
      goto L_08B3AD30;
    }
L_08B3AD30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4468)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(4472), ctx.gpr[16]);
    ctx.gpr[31] = (0x08B3AD40u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B7307Cu;
    return;
L_08B3AD40:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3AE00;
      }
      goto L_08B3AD4C;
    }
L_08B3AD4C:
    ctx.gpr[31] = (0x08B3AD54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B73124u;
    return;
L_08B3AD54:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3ADD8;
      }
      goto L_08B3AD60;
    }
L_08B3AD60:
    ctx.gpr[31] = (0x08B3AD68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4472)));
    ctx.pc = 0x08B735FCu;
    return;
L_08B3AD68:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3ADA8;
      }
      goto L_08B3AD74;
    }
L_08B3AD74:
    ctx.gpr[31] = (0x08B3AD7Cu);
    // nop
    goto L_08B3AA4C;
L_08B3AD7C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3AD98;
      }
      goto L_08B3AD88;
    }
L_08B3AD88:
    ctx.gpr[31] = (0x08B3AD90u);
    ctx.gpr[4] = (0u | 10000u);
    ctx.pc = 0x08B734DCu;
    return;
L_08B3AD90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AD88;
      }
      goto L_08B3AD98;
    }
L_08B3AD98:
    ctx.gpr[31] = (0x08B3ADA0u);
    // nop
    goto L_08B3AC80;
L_08B3ADA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B3AE4C;
      }
      goto L_08B3ADA8;
    }
L_08B3ADA8:
    ctx.gpr[31] = (0x08B3ADB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B7312Cu;
    return;
L_08B3ADB0:
    ctx.gpr[31] = (0x08B3ADB8u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B73084u;
    return;
L_08B3ADB8:
    ctx.gpr[31] = (0x08B3ADC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B7345Cu;
    return;
L_08B3ADC0:
    ctx.gpr[31] = (0x08B3ADC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4468)));
    ctx.pc = 0x08B7345Cu;
    return;
L_08B3ADC8:
    ctx.gpr[31] = (0x08B3ADD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4472)));
    ctx.pc = 0x08B7345Cu;
    return;
L_08B3ADD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B3AE4C;
      }
      goto L_08B3ADD8;
    }
L_08B3ADD8:
    ctx.gpr[31] = (0x08B3ADE0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B73084u;
    return;
L_08B3ADE0:
    ctx.gpr[31] = (0x08B3ADE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B7345Cu;
    return;
L_08B3ADE8:
    ctx.gpr[31] = (0x08B3ADF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4468)));
    ctx.pc = 0x08B7345Cu;
    return;
L_08B3ADF0:
    ctx.gpr[31] = (0x08B3ADF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4472)));
    ctx.pc = 0x08B7345Cu;
    return;
L_08B3ADF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B3AE4C;
      }
      goto L_08B3AE00;
    }
L_08B3AE00:
    ctx.gpr[31] = (0x08B3AE08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B7345Cu;
    return;
L_08B3AE08:
    ctx.gpr[31] = (0x08B3AE10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4468)));
    ctx.pc = 0x08B7345Cu;
    return;
L_08B3AE10:
    ctx.gpr[31] = (0x08B3AE18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4472)));
    ctx.pc = 0x08B7345Cu;
    return;
L_08B3AE18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B3AE4C;
      }
      goto L_08B3AE20;
    }
L_08B3AE20:
    ctx.gpr[31] = (0x08B3AE28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B7345Cu;
    return;
L_08B3AE28:
    ctx.gpr[31] = (0x08B3AE30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4468)));
    ctx.pc = 0x08B7345Cu;
    return;
L_08B3AE30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B3AE4C;
      }
      goto L_08B3AE38;
    }
L_08B3AE38:
    ctx.gpr[31] = (0x08B3AE40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4468)));
    ctx.pc = 0x08B7345Cu;
    return;
L_08B3AE40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B3AE4C;
      }
      goto L_08B3AE48;
    }
L_08B3AE48:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B3AE4C;
L_08B3AE4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3AE5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B3AE6Cu);
    // nop
    ctx.pc = 0x08B7347Cu;
    return;
L_08B3AE6C:
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(4484), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(4536));
    ctx.gpr[6] = (0u | 111u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08B3AE90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21316));
    ctx.pc = 0x08B734B4u;
    return;
L_08B3AE90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B3AEA0;
      }
      goto L_08B3AE98;
    }
L_08B3AE98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AEB8;
      }
      goto L_08B3AEA0;
    }
L_08B3AEA0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(4480), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08B3AEB4u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B73464u;
    return;
L_08B3AEB4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B3AEB8;
L_08B3AEB8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3AEC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (32801u << 16u);
    ctx.gpr[19] = (32801u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    goto L_08B3AEFC;
L_08B3AEFC:
    ctx.gpr[31] = (0x08B3AF04u);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_08B3AF04:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AF40;
      }
      goto L_08B3AF10;
    }
L_08B3AF10:
    ctx.gpr[31] = (0x08B3AF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08B3AF18u) goto L_08B3AF18;
    return;
L_08B3AF18:
    ctx.gpr[31] = (0x08B3AF20u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B735B4u;
    return;
L_08B3AF20:
    ctx.gpr[31] = (0x08B3AF28u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B7311Cu;
    return;
L_08B3AF28:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B3AF38;
      }
      goto L_08B3AF30;
    }
L_08B3AF30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B004;
      }
      goto L_08B3AF38;
    }
L_08B3AF38:
    ctx.gpr[31] = (0x08B3AF40u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    return;
L_08B3AF40:
    ctx.gpr[31] = (0x08B3AF48u);
    // nop
    goto L_08B3AAA4;
L_08B3AF48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B3AF58;
      }
      goto L_08B3AF50;
    }
L_08B3AF50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AF30;
      }
      goto L_08B3AF58;
    }
L_08B3AF58:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B3AF68u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B73654u;
    return;
L_08B3AF68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3AF78;
      }
      goto L_08B3AF70;
    }
L_08B3AF70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AF30;
      }
      goto L_08B3AF78;
    }
L_08B3AF78:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B3AF9C;
      }
      goto L_08B3AF80;
    }
L_08B3AF80:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B3AF9C;
      }
      goto L_08B3AF88;
    }
L_08B3AF88:
    ctx.gpr[31] = (0x08B3AF90u);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_08B3AF90:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AFCC;
      }
      goto L_08B3AF9C;
    }
L_08B3AF9C:
    ctx.gpr[31] = (0x08B3AFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08B3AFA4u) goto L_08B3AFA4;
    return;
L_08B3AFA4:
    ctx.gpr[31] = (0x08B3AFACu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B735B4u;
    return;
L_08B3AFAC:
    ctx.gpr[31] = (0x08B3AFB4u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08B7311Cu;
    return;
L_08B3AFB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B3AFC4;
      }
      goto L_08B3AFBC;
    }
L_08B3AFBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AF30;
      }
      goto L_08B3AFC4;
    }
L_08B3AFC4:
    ctx.gpr[31] = (0x08B3AFCCu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    return;
L_08B3AFCC:
    ctx.gpr[31] = (0x08B3AFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08B3AFD4u) goto L_08B3AFD4;
    return;
L_08B3AFD4:
    ctx.gpr[31] = (0x08B3AFDCu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B735B4u;
    return;
L_08B3AFDC:
    ctx.gpr[31] = (0x08B3AFE4u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B7311Cu;
    return;
L_08B3AFE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B3AFF4;
      }
      goto L_08B3AFEC;
    }
L_08B3AFEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AF30;
      }
      goto L_08B3AFF4;
    }
L_08B3AFF4:
    ctx.gpr[31] = (0x08B3AFFCu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    return;
L_08B3AFFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3AEFC;
      }
      goto L_08B3B004;
    }
L_08B3B004:
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
L_08B3B024:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B3B050u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08B3AAA4;
L_08B3B050:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3B0B4;
      }
      goto L_08B3B05C;
    }
L_08B3B05C:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B3B070u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B7362Cu;
    return;
L_08B3B070:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4564)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4560)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] ^ ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[16] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B0C0;
      }
      goto L_08B3B0A0;
    }
L_08B3B0A0:
    ctx.gpr[31] = (0x08B3B0A8u);
    // nop
    goto L_08B3AAC8;
L_08B3B0A8:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B3B0C8;
      }
      goto L_08B3B0B4;
    }
L_08B3B0B4:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B3B0C8;
      }
      goto L_08B3B0C0;
    }
L_08B3B0C0:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B3B0C8;
L_08B3B0C8:
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
L_08B3B0E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (32801u << 16u);
    ctx.gpr[19] = (32801u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08B3B120;
L_08B3B120:
    ctx.gpr[31] = (0x08B3B128u);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_08B3B128:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B168;
      }
      goto L_08B3B134;
    }
L_08B3B134:
    ctx.gpr[31] = (0x08B3B13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08B3B13Cu) goto L_08B3B13C;
    return;
L_08B3B13C:
    ctx.gpr[31] = (0x08B3B144u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B735B4u;
    return;
L_08B3B144:
    ctx.gpr[31] = (0x08B3B14Cu);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B7311Cu;
    return;
L_08B3B14C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B3B160;
      }
      goto L_08B3B158;
    }
L_08B3B158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08B3B240;
      }
      goto L_08B3B160;
    }
L_08B3B160:
    ctx.gpr[31] = (0x08B3B168u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    return;
L_08B3B168:
    ctx.gpr[31] = (0x08B3B170u);
    // nop
    goto L_08B3AAA4;
L_08B3B170:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B3B184;
      }
      goto L_08B3B17C;
    }
L_08B3B17C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B158;
      }
      goto L_08B3B184;
    }
L_08B3B184:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B3B194u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B73624u;
    return;
L_08B3B194:
    ctx.gpr[31] = (0x08B3B19Cu);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08B3AAC8;
L_08B3B19C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3B1AC;
      }
      goto L_08B3B1A4;
    }
L_08B3B1A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B158;
      }
      goto L_08B3B1AC;
    }
L_08B3B1AC:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B3B1D0;
      }
      goto L_08B3B1B4;
    }
L_08B3B1B4:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B3B1D0;
      }
      goto L_08B3B1BC;
    }
L_08B3B1BC:
    ctx.gpr[31] = (0x08B3B1C4u);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_08B3B1C4:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B204;
      }
      goto L_08B3B1D0;
    }
L_08B3B1D0:
    ctx.gpr[31] = (0x08B3B1D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08B3B1D8u) goto L_08B3B1D8;
    return;
L_08B3B1D8:
    ctx.gpr[31] = (0x08B3B1E0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B735B4u;
    return;
L_08B3B1E0:
    ctx.gpr[31] = (0x08B3B1E8u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08B7311Cu;
    return;
L_08B3B1E8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B3B1FC;
      }
      goto L_08B3B1F4;
    }
L_08B3B1F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B158;
      }
      goto L_08B3B1FC;
    }
L_08B3B1FC:
    ctx.gpr[31] = (0x08B3B204u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    return;
L_08B3B204:
    ctx.gpr[31] = (0x08B3B20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08B3B20Cu) goto L_08B3B20C;
    return;
L_08B3B20C:
    ctx.gpr[31] = (0x08B3B214u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B735B4u;
    return;
L_08B3B214:
    ctx.gpr[31] = (0x08B3B21Cu);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B7311Cu;
    return;
L_08B3B21C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B3B230;
      }
      goto L_08B3B228;
    }
L_08B3B228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B158;
      }
      goto L_08B3B230;
    }
L_08B3B230:
    ctx.gpr[31] = (0x08B3B238u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    return;
L_08B3B238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B120;
      }
      goto L_08B3B240;
    }
L_08B3B240:
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
L_08B3B264:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B3B290u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08B3AAA4;
L_08B3B290:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B3B314;
      }
      goto L_08B3B29C;
    }
L_08B3B29C:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B3B2B0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B7369Cu;
    return;
L_08B3B2B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4564)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4560)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] ^ ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B300;
      }
      goto L_08B3B2E0;
    }
L_08B3B2E0:
    ctx.gpr[31] = (0x08B3B2E8u);
    // nop
    goto L_08B3AAC8;
L_08B3B2E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B3B320;
      }
      goto L_08B3B2F4;
    }
L_08B3B2F4:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B3B328;
      }
      goto L_08B3B300;
    }
L_08B3B300:
    ctx.gpr[31] = (0x08B3B308u);
    // nop
    goto L_08B3AAC8;
L_08B3B308:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B3B328;
      }
      goto L_08B3B314;
    }
L_08B3B314:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B3B328;
      }
      goto L_08B3B320;
    }
L_08B3B320:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B3B328;
L_08B3B328:
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
L_08B3B344:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2234u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(13968));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B3B410;
      }
      goto L_08B3B374;
    }
L_08B3B374:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
        goto L_08B3B3E8;
    }
    goto L_08B3B384;
L_08B3B384:
    ctx.gpr[31] = (0x08B3B38Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 340u, 0x08B552D8u>(ctx, &aot_mem) && ctx.pc == 0x08B3B38Cu) goto L_08B3B38C;
    return;
L_08B3B38C:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B3B3A8;
      }
      goto L_08B3B398;
    }
L_08B3B398:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(-32));
    ctx.gpr[20] = (ctx.gpr[5] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 24u));
      if (branch_taken) {
          goto L_08B3B3A8;
      }
      goto L_08B3B3A8;
    }
L_08B3B3A8:
    ctx.gpr[31] = (0x08B3B3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 340u, 0x08B552D8u>(ctx, &aot_mem) && ctx.pc == 0x08B3B3B0u) goto L_08B3B3B0;
    return;
L_08B3B3B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B3B3C8;
      }
      goto L_08B3B3B8;
    }
L_08B3B3B8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_08B3B3C8;
      }
      goto L_08B3B3C8;
    }
L_08B3B3C8:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3B3D8;
      }
      goto L_08B3B3D0;
    }
L_08B3B3D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08B3B3F8;
      }
      goto L_08B3B3D8;
    }
L_08B3B3D8:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3B384;
      }
      goto L_08B3B3E4;
    }
L_08B3B3E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    goto L_08B3B3E8;
L_08B3B3E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3B3F8;
      }
      goto L_08B3B3F0;
    }
L_08B3B3F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08B3B3F8;
      }
      goto L_08B3B3F8;
    }
L_08B3B3F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B418;
      }
      goto L_08B3B400;
    }
L_08B3B400:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B374;
      }
      goto L_08B3B410;
    }
L_08B3B410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B3B41C;
      }
      goto L_08B3B418;
    }
L_08B3B418:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B3B41C;
L_08B3B41C:
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
L_08B3B43C:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[6] = (0u | 13u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08B3B448;
L_08B3B448:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B3B458;
      }
      goto L_08B3B450;
    }
L_08B3B450:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B3B464;
      }
      goto L_08B3B458;
    }
L_08B3B458:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B3B448;
      }
      goto L_08B3B464;
    }
L_08B3B464:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B474;
      }
      goto L_08B3B46C;
    }
L_08B3B46C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B47C;
      }
      goto L_08B3B474;
    }
L_08B3B474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3B4B0;
      }
      goto L_08B3B47C;
    }
L_08B3B47C:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B3B4A8;
      }
      goto L_08B3B484;
    }
L_08B3B484:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B3B4A8;
      }
      goto L_08B3B48C;
    }
L_08B3B48C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B4A8;
      }
      goto L_08B3B494;
    }
L_08B3B494:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B3B47C;
      }
      goto L_08B3B4A8;
    }
L_08B3B4A8:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_08B3B4B0;
L_08B3B4B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3B4B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B3B4DCu);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 525u, 0x0895B9F0u>(ctx, &aot_mem) && ctx.pc == 0x08B3B4DCu) goto L_08B3B4DC;
    return;
L_08B3B4DC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08B3B4E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 525u, 0x0895B9F0u>(ctx, &aot_mem) && ctx.pc == 0x08B3B4E8u) goto L_08B3B4E8;
    return;
L_08B3B4E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_08B3B544;
    }
    goto L_08B3B51C;
L_08B3B51C:
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08B3B530u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 233u, 0x088618A8u>(ctx, &aot_mem) && ctx.pc == 0x08B3B530u) goto L_08B3B530;
    return;
L_08B3B530:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B51C;
      }
      goto L_08B3B540;
    }
L_08B3B540:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08B3B544;
L_08B3B544:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B3B580;
      }
      goto L_08B3B57C;
    }
L_08B3B57C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08B3B580;
L_08B3B580:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_08B3B5A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27328));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30400));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B3B5E4u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem) && ctx.pc == 0x08B3B5E4u) goto L_08B3B5E4;
    return;
L_08B3B5E4:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B3B600;
      }
      goto L_08B3B5FC;
    }
L_08B3B5FC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B3B600;
L_08B3B600:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B3B618;
      }
      goto L_08B3B614;
    }
L_08B3B614:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08B3B618;
L_08B3B618:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3B670:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B3B698u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem) && ctx.pc == 0x08B3B698u) goto L_08B3B698;
    return;
L_08B3B698:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B3B6A4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x08B3B6A4u) goto L_08B3B6A4;
    return;
L_08B3B6A4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(500), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(496), ctx.gpr[2]);
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
L_08B3B6C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 380 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B3B78C;
      }
      goto L_08B3B6EC;
    }
L_08B3B6EC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 390 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B78C;
      }
      goto L_08B3B6F8;
    }
L_08B3B6F8:
    ctx.gpr[6] = (ctx.gpr[16] << 6u);
    ctx.gpr[7] = (ctx.gpr[16] << 4u);
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (2246u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(27328));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30400));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B3B734;
      }
      goto L_08B3B724;
    }
L_08B3B724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B3B734;
L_08B3B734:
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3B760;
      }
      goto L_08B3B750;
    }
L_08B3B750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B3B760;
L_08B3B760:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08B3B778u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B3B778u) goto L_08B3B778;
    return;
L_08B3B778:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B3B78Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B3B5A0;
L_08B3B78C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08B3B798u);
    ctx.gpr[4] = (0u | 544u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem) && ctx.pc == 0x08B3B798u) goto L_08B3B798;
    return;
L_08B3B798:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B3B7B4;
      }
      goto L_08B3B7A4;
    }
L_08B3B7A4:
    ctx.gpr[31] = (0x08B3B7ACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 144u, 0x08A196ACu>(ctx, &aot_mem) && ctx.pc == 0x08B3B7ACu) goto L_08B3B7AC;
    return;
L_08B3B7AC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B3B7B4;
L_08B3B7B4:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B3B7D0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B3B7D0u) goto L_08B3B7D0;
    return;
L_08B3B7D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_08B3B7E8;
    }
    goto L_08B3B7DC;
L_08B3B7DC:
    ctx.gpr[31] = (0x08B3B7E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 156u, 0x08A197FCu>(ctx, &aot_mem) && ctx.pc == 0x08B3B7E4u) goto L_08B3B7E4;
    return;
L_08B3B7E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_08B3B7E8;
L_08B3B7E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(7740), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
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
L_08B3B824:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(158)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B86C;
      }
      goto L_08B3B83C;
    }
L_08B3B83C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08B3B84Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 73u, 0x08A1C768u>(ctx, &aot_mem) && ctx.pc == 0x08B3B84Cu) goto L_08B3B84C;
    return;
L_08B3B84C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08B3B864;
    }
    goto L_08B3B864;
L_08B3B864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_08B3B870;
      }
      goto L_08B3B86C;
    }
L_08B3B86C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B3B870;
L_08B3B870:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3B880:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08B3B8B4;
    }
    goto L_08B3B8A8;
L_08B3B8A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B3B8C4;
      }
      goto L_08B3B8B4;
    }
L_08B3B8B4:
    ctx.gpr[2] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_08B3B8C4;
L_08B3B8C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3B8CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B3B8E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 222u, 0x088E2728u>(ctx, &aot_mem) && ctx.pc == 0x08B3B8E8u) goto L_08B3B8E8;
    return;
L_08B3B8E8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08B3B8F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x08B3B8F8u) goto L_08B3B8F8;
    return;
L_08B3B8F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
        goto L_08B3B92C;
    }
    goto L_08B3B920;
L_08B3B920:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08B3B92C;
L_08B3B92C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3B948:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(158)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3B9BC;
      }
      goto L_08B3B968;
    }
L_08B3B968:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08B3B97Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 140u, 0x08A1CE68u>(ctx, &aot_mem) && ctx.pc == 0x08B3B97Cu) goto L_08B3B97C;
    return;
L_08B3B97C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B3B988u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 268u, 0x08A1D5F0u>(ctx, &aot_mem) && ctx.pc == 0x08B3B988u) goto L_08B3B988;
    return;
L_08B3B988:
    ctx.gpr[31] = (0x08B3B990u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 218u, 0x08A1D29Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3B990u) goto L_08B3B990;
    return;
L_08B3B990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08B3B9A8;
    }
    goto L_08B3B99C;
L_08B3B99C:
    ctx.gpr[31] = (0x08B3B9A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08B3B9A4u) goto L_08B3B9A4;
    return;
L_08B3B9A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08B3B9A8;
L_08B3B9A8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08B3B9BCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08B3B9BCu) goto L_08B3B9BC;
    return;
L_08B3B9BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3B9CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B3BBC8;
      }
      goto L_08B3BA20;
    }
L_08B3BA20:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (0u | 2u);
    ctx.gpr[16] = (ctx.gpr[21] << 2u);
    goto L_08B3BA34;
L_08B3BA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7740)));
    ctx.gpr[31] = (0x08B3BA48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem) && ctx.pc == 0x08B3BA48u) goto L_08B3BA48;
    return;
L_08B3BA48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3BB3C;
      }
      goto L_08B3BA54;
    }
L_08B3BA54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(7740)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_08B3BA88;
    }
    goto L_08B3BA74;
L_08B3BA74:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B3BB2C;
      }
      goto L_08B3BA88;
    }
L_08B3BA88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 2u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08B3BAB0;
    }
    goto L_08B3BAA4;
L_08B3BAA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08B3BAB4;
      }
      goto L_08B3BAB0;
    }
L_08B3BAB0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    goto L_08B3BAB4;
L_08B3BAB4:
    ctx.gpr[18] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]));
    ctx.gpr[18] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[18]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(7740)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(7740)));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08B3BB2C;
L_08B3BB2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B3BB78;
      }
      goto L_08B3BB3C;
    }
L_08B3BB3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7740)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7740)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08B3BB78;
L_08B3BB78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08B3BB88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7740)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08B3BB88u) goto L_08B3BB88;
    return;
L_08B3BB88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7740)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08B3BBB4;
      }
      goto L_08B3BBA4;
    }
L_08B3BBA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08B3BBB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7740)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 73u, 0x08AD06ACu>(ctx, &aot_mem) && ctx.pc == 0x08B3BBB4u) goto L_08B3BBB4;
    return;
L_08B3BBB4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08B3BA34;
      }
      goto L_08B3BBC8;
    }
L_08B3BBC8:
    ctx.gpr[31] = (0x08B3BBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem) && ctx.pc == 0x08B3BBD0u) goto L_08B3BBD0;
    return;
L_08B3BBD0:
    ctx.gpr[31] = (0x08B3BBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem) && ctx.pc == 0x08B3BBD8u) goto L_08B3BBD8;
    return;
L_08B3BBD8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3BC20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(158)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B3BC7C;
      }
      goto L_08B3BC3C;
    }
L_08B3BC3C:
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32304));
    ctx.gpr[31] = (0x08B3BC4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 41u, 0x08A1C544u>(ctx, &aot_mem) && ctx.pc == 0x08B3BC4Cu) goto L_08B3BC4C;
    return;
L_08B3BC4C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08B3BC64;
      }
      goto L_08B3BC58;
    }
L_08B3BC58:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08B3BC64;
L_08B3BC64:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B3BC7Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 39u, 0x08A1C504u>(ctx, &aot_mem) && ctx.pc == 0x08B3BC7Cu) goto L_08B3BC7C;
    return;
L_08B3BC7C:
    ctx.gpr[31] = (0x08B3BC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B3BC84u) goto L_08B3BC84;
    return;
L_08B3BC84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B3BCC0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 8u, 0x08964108u>(ctx, &aot_mem) && ctx.pc == 0x08B3BCC0u) goto L_08B3BCC0;
    return;
L_08B3BCC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3BCD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (65528u << 16u);
      if (branch_taken) {
          goto L_08B3BE74;
      }
      goto L_08B3BD24;
    }
L_08B3BD24:
    ctx.gpr[4] = (16320u << 16u);
    ctx.gpr[23] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (8u << 16u);
    goto L_08B3BD40;
L_08B3BD40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[31] = (0x08B3BD54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4488));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 146u, 0x08AEC930u>(ctx, &aot_mem) && ctx.pc == 0x08B3BD54u) goto L_08B3BD54;
    return;
L_08B3BD54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3BE60;
      }
      goto L_08B3BD5C;
    }
L_08B3BD5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4480)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4484)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08B3BDB4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 327u, 0x08899BB4u>(ctx, &aot_mem) && ctx.pc == 0x08B3BDB4u) goto L_08B3BDB4;
    return;
L_08B3BDB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08B3BE60;
      }
      goto L_08B3BDC8;
    }
L_08B3BDC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3BE4C;
      }
      goto L_08B3BDE4;
    }
L_08B3BDE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6676), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6676)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(6676));
      if (branch_taken) {
          goto L_08B3BE34;
      }
      goto L_08B3BE14;
    }
L_08B3BE14:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B3BE20u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08B3BE20u) goto L_08B3BE20;
    return;
L_08B3BE20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(6676)));
    goto L_08B3BE34;
L_08B3BE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08B3BE4C;
L_08B3BE4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B3BDC8;
      }
      goto L_08B3BE60;
    }
L_08B3BE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08B3BD40;
      }
      goto L_08B3BE74;
    }
L_08B3BE74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3BEA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3BF30;
      }
      goto L_08B3BEDC;
    }
L_08B3BEDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3252)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 380 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 390 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3BF0C;
      }
      goto L_08B3BEF4;
    }
L_08B3BEF4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3BF0C;
      }
      goto L_08B3BEFC;
    }
L_08B3BEFC:
    ctx.gpr[31] = (0x08B3BF04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x08B3BF04u) goto L_08B3BF04;
    return;
L_08B3BF04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3BF28;
      }
      goto L_08B3BF0C;
    }
L_08B3BF0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B3BEDC;
      }
      goto L_08B3BF20;
    }
L_08B3BF20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3BF30;
      }
      goto L_08B3BF28;
    }
L_08B3BF28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 2u, 0x08B3C010u>(ctx, &aot_mem); return;
      }
      goto L_08B3BF30;
    }
L_08B3BF30:
    ctx.gpr[31] = (0x08B3BF38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 3u, 0x08B3C030u>(ctx, &aot_mem) && ctx.pc == 0x08B3BF38u) goto L_08B3BF38;
    return;
L_08B3BF38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3BFB4;
      }
      goto L_08B3BF4C;
    }
L_08B3BF4C:
    ctx.gpr[19] = (0u | 0u);
    goto L_08B3BF50;
L_08B3BF50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B3BF7C;
      }
      goto L_08B3BF64;
    }
L_08B3BF64:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3252)));
    ctx.gpr[31] = (0x08B3BF74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B3B6C4;
L_08B3BF74:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    goto L_08B3BF7C;
L_08B3BF7C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1650))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B3BF9C;
      }
      goto L_08B3BF8C;
    }
L_08B3BF8C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1650));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B3BF9Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08B3B8CC;
L_08B3BF9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B3BF50;
      }
      goto L_08B3BFB4;
    }
L_08B3BFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 2u, 0x08B3C010u>(ctx, &aot_mem); return;
      }
      goto L_08B3BFC8;
    }
L_08B3BFC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8200)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8196)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8204)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(7740)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7740)));
    ctx.gpr[31] = (0x08B3BFFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B3B670;
L_08B3BFFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.pc = 0x08B3C000u; return;
}

void recomp_unit_0205(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0205_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_205(Runtime &runtime) {
    runtime.register_generated_unit(205u, 0x08B38000u, 16384u, &recomp_unit_0205, &recomp_unit_0205_entry);
    runtime.register_function(0x08B38000u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38008u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38010u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38018u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38020u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38028u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38030u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38038u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38040u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38048u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38050u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3805Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38070u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38088u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38090u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38098u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B380A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B380B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B380BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B380F0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38100u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38110u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38124u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38138u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38150u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38158u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3816Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38184u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3818Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38194u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3819Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B381A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B381B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B381C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B381D0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B381DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B381F8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3820Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38238u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38240u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38248u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38250u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38254u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3825Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3826Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3827Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38284u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38298u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B382A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B382B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B382B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B382C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B382D0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B382E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B382ECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B382FCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38304u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3830Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38314u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3831Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3832Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38334u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38344u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38358u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38394u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B383BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B383C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B383CCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B383D4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B383E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B383E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B383F4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B383FCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38428u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38430u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38438u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38448u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38450u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38460u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38468u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3847Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38484u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38498u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B384A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B384ACu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B384C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B384C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B384D4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B384E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B384ECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B384F8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38508u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38514u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3851Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38524u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3852Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38534u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3853Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3854Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38554u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3855Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38564u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3856Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38578u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38580u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38584u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3858Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38598u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B385A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B385ACu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B385B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B385B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B385C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B385D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B385E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B385ECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B385F4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B385F8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38600u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3860Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38618u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38620u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38624u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38628u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38634u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3864Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38654u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3865Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3866Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38674u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3867Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38684u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3868Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38698u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B386A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B386A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B386ACu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B386B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B386C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B386CCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B386D0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B386D4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B386E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B386F8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38700u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3870Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38714u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38718u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38720u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3872Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38738u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38740u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38744u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38748u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38754u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3876Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38774u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38780u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38788u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3878Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38794u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B387A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B387ACu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B387B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B387B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B387BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B387C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B387E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B387ECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38800u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38808u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3881Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38824u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38838u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3884Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38854u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38860u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38870u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3887Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3889Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B388B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B388D4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B388DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B388E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B388ECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B388F4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B388FCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38900u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38908u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38910u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38918u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38920u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38938u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38964u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3896Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38974u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3897Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38984u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3898Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38998u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B389A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B389B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B389D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B389FCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38A1Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38A54u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38A64u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38A70u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38A78u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38A8Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38A98u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38AA8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38AB0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38AB8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38ACCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38AD4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38ADCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38AECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38B08u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38B10u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38B1Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38B28u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38B38u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38B48u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38B54u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38B70u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38B78u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38B8Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38B94u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BA0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BB8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BD4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BE0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C00u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C08u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C0Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C14u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C28u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C40u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C44u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C4Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C54u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C5Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C68u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C74u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C7Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C88u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C9Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38CB4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38CBCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38CC4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38CD0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38CF0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38D04u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38D28u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38D30u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38D38u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38D54u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38D80u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38D88u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38D90u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38D98u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38DA0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38DA8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38DB0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38DB8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38DC0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38DC8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38DD0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38DD8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38DE4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38DECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38DF4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38DFCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E08u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E10u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E44u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E5Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E64u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E98u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EB0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EB8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38ED0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EE0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EF4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EFCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F0Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F14u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F1Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F30u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F38u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F4Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F60u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F78u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F7Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F84u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F98u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38FACu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38FC4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38FC8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38FD0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38FE4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38FF0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38FFCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39014u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39018u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39020u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39030u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3903Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39048u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39060u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39064u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3906Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39088u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39090u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B390A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B390C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B390CCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B390D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B390E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B390F4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39104u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39110u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3912Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39140u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39160u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3916Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3917Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39184u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39190u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B391A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B391B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B391C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B391C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B391D0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B391D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B391E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B391F0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B391F8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39200u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39208u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39210u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39218u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39224u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39238u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39250u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39258u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39274u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3927Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39288u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39290u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39298u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392CCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392D4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392F0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392FCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3930Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39318u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39338u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3934Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39370u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39378u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39380u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3939Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393D0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393F4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39404u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39410u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39420u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39434u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3943Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39448u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39454u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39460u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39470u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3947Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39484u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39490u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3949Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394ACu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394F8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39500u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39508u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39520u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3952Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39538u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39544u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39550u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3955Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3957Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39590u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39598u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395F4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39610u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3961Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3962Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39640u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39648u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39654u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39660u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3966Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39678u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39684u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396D4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39700u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39708u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39714u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39728u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39740u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39748u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39750u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3975Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3977Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39790u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B397B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B397C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B397C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B397DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39814u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3982Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39884u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3988Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3989Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B398A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B398B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B398C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B398D4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B398DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B398E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B398F8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39908u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39918u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39920u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39938u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39944u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39948u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39970u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39978u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39984u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3999Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B399A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B399C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B399D0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B399D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B399E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B399ECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39A18u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39A34u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39A70u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39A78u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39A90u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39AB4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39ACCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39AD8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39AF8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39B04u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39B44u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39B50u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39B9Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39BA8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39BB4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39BBCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39BC0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39BC8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39BD0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39BFCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39C04u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39C38u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39C40u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39C48u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39C50u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39C58u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39C6Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39C74u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39C7Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39CB4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39CD0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39CF4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39CFCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39D10u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39D18u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39D30u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39D38u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39D50u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39D58u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39D70u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39D78u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39D90u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39D98u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39DBCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39DC4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39DDCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39DE4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39E08u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39E2Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39E5Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39E64u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39E6Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39E74u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39E7Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39E84u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39E8Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39E94u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39EBCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39EE0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39F00u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39F38u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39F44u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39F54u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39F60u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39F68u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39F7Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39F88u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39F90u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39F98u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39FA0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39FA8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39FB0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39FB8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39FC0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39FD0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39FECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39FF4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A000u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A00Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A01Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A02Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A038u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A054u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A068u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A084u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A090u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A09Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A0B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A0BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A0C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A0D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A0F0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A0F4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A0FCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A104u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A10Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A118u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A124u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A12Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A138u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A14Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A168u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A170u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A178u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A184u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A194u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A1A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A1C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A1D4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A1F8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A200u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A208u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A218u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A22Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A234u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A23Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A25Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A28Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A294u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A29Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A2A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A2A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A2B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A2B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A2C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A2D4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A2DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A2E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A2F8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A314u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A32Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A334u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A33Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A344u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A34Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A354u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A35Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A364u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A370u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A37Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A388u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A394u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A3B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A3C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A3C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A3D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A3E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A3F4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A410u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A41Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A424u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A430u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A448u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A464u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A470u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A494u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A49Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A4A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A4D0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A4D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A4E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A4F4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A4FCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A508u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A524u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A538u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A540u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A548u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A550u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A558u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A560u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A56Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A578u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A584u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A594u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A5B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A5C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A5E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A600u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A60Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A614u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A618u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A620u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A62Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A638u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A640u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A644u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A648u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A654u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A66Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A674u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A67Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A684u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A6A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A6ACu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A6B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A6BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A6C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A6E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A6FCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A720u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A728u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A730u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A750u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A77Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A784u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A78Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A794u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A79Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A7A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A7B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A7C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A7C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A7F0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A814u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A834u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A86Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A878u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A888u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A890u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A8A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A8A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A8B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A8C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A8D0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A8E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A8ECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A908u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A91Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A938u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A93Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A944u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A94Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A954u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A960u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A96Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A974u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A980u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A994u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A9ACu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A9B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A9BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A9C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A9E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A9FCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AA20u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AA28u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AA30u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AA4Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AA60u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AA7Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AA84u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AA8Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AA94u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AA98u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AAA4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AABCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AAC8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AADCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AAE8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AAF0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AAF8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB10u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB14u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB24u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB2Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB34u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB3Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB50u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB5Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB64u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB68u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB70u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB78u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB88u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB8Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB9Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ABB4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ABC0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ABCCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ABD0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ABDCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ABE8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ABF0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ABF4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AC04u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AC10u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AC1Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AC28u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AC34u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AC3Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AC44u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AC4Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AC60u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AC70u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AC80u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AC90u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AC98u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ACA0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ACA8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ACB0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ACBCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ACDCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ACE8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AD00u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AD0Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AD24u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AD30u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AD40u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AD4Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AD54u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AD60u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AD68u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AD74u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AD7Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AD88u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AD90u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AD98u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ADA0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ADA8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ADB0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ADB8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ADC0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ADC8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ADD0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ADD8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ADE0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ADE8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ADF0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ADF8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AE00u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AE08u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AE10u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AE18u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AE20u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AE28u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AE30u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AE38u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AE40u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AE48u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AE4Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AE5Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AE6Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AE90u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AE98u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AEA0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AEB4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AEB8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AEC4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AEFCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF04u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF10u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF18u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF20u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF28u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF30u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF38u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF40u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF48u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF50u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF58u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF68u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF70u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF78u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF80u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF88u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF90u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AF9Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AFA4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AFACu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AFB4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AFBCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AFC4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AFCCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AFD4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AFDCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AFE4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AFECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AFF4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AFFCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B004u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B024u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B050u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B05Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B070u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B0A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B0A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B0B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B0C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B0C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B0E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B120u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B128u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B134u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B13Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B144u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B14Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B158u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B160u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B168u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B170u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B17Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B184u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B194u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B19Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B1A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B1ACu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B1B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B1BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B1C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B1D0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B1D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B1E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B1E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B1F4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B1FCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B204u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B20Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B214u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B21Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B228u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B230u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B238u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B240u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B264u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B290u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B29Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B2B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B2E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B2E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B2F4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B300u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B308u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B314u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B320u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B328u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B344u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B374u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B384u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B38Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B398u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B3A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B3B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B3B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B3C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B3D0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B3D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B3E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B3E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B3F0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B3F8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B400u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B410u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B418u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B41Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B43Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B448u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B450u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B458u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B464u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B46Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B474u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B47Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B484u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B48Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B494u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B4A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B4B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B4B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B4DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B4E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B51Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B530u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B540u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B544u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B57Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B580u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B5A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B5E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B5FCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B600u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B614u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B618u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B670u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B698u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B6A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B6C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B6ECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B6F8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B724u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B734u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B750u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B760u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B778u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B78Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B798u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B7A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B7ACu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B7B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B7D0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B7DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B7E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B7E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B824u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B83Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B84Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B864u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B86Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B870u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B880u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B8A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B8B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B8C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B8CCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B8E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B8F8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B920u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B92Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B948u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B968u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B97Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B988u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B990u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B99Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B9A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B9A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B9BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B9CCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BA20u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BA34u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BA48u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BA54u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BA74u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BA88u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BAA4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BAB0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BAB4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BB2Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BB3Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BB78u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BB88u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BBA4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BBB4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BBC8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BBD0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BBD8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BC20u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BC3Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BC4Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BC58u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BC64u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BC7Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BC84u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BCC0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BCD4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BD24u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BD40u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BD54u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BD5Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BDB4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BDC8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BDE4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BE14u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BE20u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BE34u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BE4Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BE60u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BE74u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BEA8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BEDCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BEF4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BEFCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BF04u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BF0Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BF20u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BF28u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BF30u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BF38u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BF4Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BF50u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BF64u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BF74u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BF7Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BF8Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BF9Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BFB4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BFC8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BFFCu, &recomp_unit_0205, "recomp_unit_0205");
}
} // namespace psprecomp
