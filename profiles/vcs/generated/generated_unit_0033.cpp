#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0033[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 9, 0, 0, 10, 0,
    0, 11, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 19, 20, 0, 21, 0,
    22, 0, 23, 0, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33,
    34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41,
    0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 59, 0, 0, 0, 60, 0, 61,
    62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 0, 69, 0, 70, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 76,
    0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 0, 81, 82, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0,
    88, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0,
    0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 117, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 123, 0, 0, 124,
    0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0,
    0, 138, 0, 139, 0, 140, 0, 0, 0, 141, 0, 142, 0, 143, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147,
    0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 159, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0,
    168, 0, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 0, 179, 0, 180, 0, 181, 0,
    182, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191,
    0, 0, 192, 0, 193, 194, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 200, 0,
    201, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216,
    0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 220, 0, 221, 222, 0, 223, 0, 0, 224, 0, 225, 0, 0, 226, 0, 227, 228, 0, 229, 0, 0, 0,
    0, 230, 0, 231, 0, 0, 0, 0, 232, 0, 233, 234, 0, 235, 0, 0, 236, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 240, 0, 241, 242, 0,
    243, 0, 0, 244, 0, 245, 246, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0,
    264, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276, 277, 0, 278, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 296, 0, 0, 0, 297, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 304, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0,
    309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 313, 314, 0, 0, 0, 0, 0, 0, 315, 0, 316,
    0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 0, 0, 0, 327, 0, 328,
    0, 0, 0, 0, 329, 0, 330, 0, 331, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0,
    337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 343, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 358,
    0, 359, 0, 360, 0, 0, 361, 0, 0, 0, 362, 0, 0, 363, 364, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0,
    369, 0, 0, 370, 0, 0, 371, 372, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 377, 378, 0, 0, 0, 0, 0,
    379, 0, 0, 380, 0, 381, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 389, 0, 0, 0, 390,
    0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 399, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0,
    406, 0, 0, 0, 0, 407, 408, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412,
    0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0,
    0, 426, 0, 0, 427, 428, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 434, 0, 0, 435, 0, 436, 0,
    0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 0, 450, 0,
    451, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 457, 0, 0, 458, 0, 459, 0, 0, 460,
    0, 461, 0, 462, 0, 463, 0, 464, 0, 465, 0, 466, 0, 0, 467, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0,
    471, 0, 0, 472, 0, 473, 474, 0, 0, 0, 475, 476, 0, 0, 0, 477, 0, 0, 478, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 0, 0,
    0, 484, 0, 0, 0, 485, 0, 0, 486, 0, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 0,
    497, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 504, 0, 505, 0, 0, 506, 0, 507, 0, 508, 0, 509,
    0, 510, 0, 0, 0, 511, 0, 0, 512, 0, 513, 0, 514, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 518, 519, 0, 520, 0,
    521, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 525, 0, 526, 527, 0, 528, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 531, 0, 532, 0,
    0, 533, 0, 0, 0, 534, 0, 0, 535, 536, 0, 537, 0, 0, 0, 0, 538, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0,
    0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0,
    0, 0, 0, 0, 562, 0, 563, 0, 564, 0, 0, 0, 565, 0, 0, 0, 566, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 575, 576, 0, 577, 0, 0, 578, 0, 0, 0, 579, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 582, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 586, 0, 587, 0, 0, 0, 588,
    0, 589, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0,
    599, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 608, 0,
    609, 0, 610, 0, 0, 611, 0, 612, 0, 613, 0, 614, 0, 0, 615, 0, 0, 616, 0, 617, 0, 618, 0, 619, 0, 0, 620, 0, 621, 0, 622, 623,
    0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 626, 0, 627, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 630,
    0, 631, 632, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 641, 0, 642,
    0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0,
    0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 657, 658, 0, 659, 0, 0, 660, 0, 0, 661, 0, 662, 0, 663, 0, 0, 0, 0, 664,
    0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 670, 671, 0, 0, 672, 0, 673,
    674, 0, 675, 0, 676, 0, 0, 677, 0, 678, 679, 0, 680, 0, 681, 0, 0, 0, 682, 0, 683, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 686,
    687, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0, 690, 0, 691, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695, 696, 0, 0, 0,
    697, 0, 0, 0, 698, 0, 699, 0, 700, 0, 701, 0, 0, 702, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 706,
    0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 710, 0, 0, 711, 0, 0, 712, 0, 713, 0, 714, 0, 715, 0, 716,
    0, 717, 0, 0, 718, 0, 719, 0, 720, 0, 0, 0, 0, 721, 0, 722, 0, 723, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 729, 0,
    0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 734, 0, 0, 735, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 0, 0, 738, 0, 0, 739, 0, 740, 0, 741, 0, 0, 0, 0,
    742, 743, 0, 0, 0, 744, 0, 745, 0, 0, 746, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 751, 0, 752, 0, 753, 0, 754, 0, 755, 0, 0,
    756, 0, 0, 757, 0, 758, 0, 0, 0, 759, 0, 760, 0, 0, 0, 761, 0, 762, 0, 0, 0, 763, 0, 764, 0, 0, 0, 765, 0, 766, 0, 0,
    0, 767, 0, 768, 0, 0, 0, 769, 0, 770, 0, 0, 0, 771, 0, 772, 0, 0, 0, 773, 0, 774, 0, 0, 0, 775, 0, 776, 0, 0, 777, 0,
    778, 0, 0, 0, 779, 0, 0, 780, 0, 0, 781, 0, 0, 0, 782, 0, 783, 0, 0, 784, 0, 785, 786, 0, 0, 787, 0, 788, 0, 0, 789, 0,
    790, 0, 0, 791, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 0, 0, 794, 0, 795, 796, 0, 0, 797, 0, 798, 0, 799, 0, 0, 0, 0, 0,
    0, 800, 0, 801, 0, 0, 802, 0, 0, 803, 0, 804, 805, 0, 806, 0, 0, 807, 0, 808, 0, 809, 0, 810, 0, 0, 811, 0, 0, 812, 0, 813,
    814, 0, 815, 0, 816, 0, 0, 817, 0, 818, 0, 0, 819, 0, 0, 820, 0, 821, 822, 0, 823, 0, 824, 0, 0, 825, 0, 826, 0, 0, 827, 0,
    0, 828, 0, 829, 830, 0, 831, 0, 832, 0, 0, 833, 0, 834, 0, 0, 835, 0, 0, 836, 0, 837, 838, 0, 839, 0, 840, 0, 0, 841, 0, 842,
    0, 0, 843, 0, 0, 844, 0, 845, 846, 0, 847, 0, 848, 0, 0, 849, 0, 850, 0, 0, 851, 0, 0, 852, 0, 853, 854, 0, 855, 0, 856, 0,
    0, 857, 0, 858, 0, 0, 859, 0, 0, 860, 0, 861, 862, 0, 863, 0, 864, 0, 0, 865, 0, 866, 0, 0, 867, 0, 0, 868, 0, 869, 870, 0,
    871, 0, 872, 0, 0, 873, 0, 874, 0, 0, 875, 0, 0, 876, 0, 877, 878, 0, 879, 0, 880, 0, 0, 881, 0, 882, 883, 0, 884, 0, 885, 0,
    0, 886, 0, 887, 888, 0, 889, 0, 890, 0, 0, 891, 0, 892, 893, 0, 894, 0, 895, 0, 896, 0, 0, 897, 0, 898, 0, 899, 0, 900, 0, 0,
    901, 0, 0, 902, 0, 0, 903, 0, 904, 905, 0, 906, 0, 907, 0, 908, 0, 909, 0, 910, 911, 0, 912, 0, 913, 0, 0, 914, 0, 0, 0, 915,
    0, 916, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 918, 0, 919, 0, 0, 0, 920, 0, 921, 0, 0, 922, 0, 0, 0, 923, 0, 0, 924,
    0, 0, 925, 0, 0, 926, 0, 927, 928, 0, 929, 0, 0, 930, 0, 0, 931, 0, 932, 0, 0, 933, 0, 0, 0, 934, 0, 0, 935, 0, 0, 0,
    0, 936, 0, 937, 0, 0, 938, 0, 939, 0, 940, 0, 941, 0, 0, 0, 0, 0, 0, 0, 0, 0, 942, 0, 0, 0, 943, 0, 0, 944, 0, 945,
    0, 0, 0, 0, 946, 0, 0, 0, 947, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 948, 0, 0, 0, 0, 949, 0, 0, 0, 0, 0,
    0, 0, 0, 950, 0, 0, 0, 0, 0, 951, 0, 0, 0, 0, 952, 0, 953, 0, 0, 0, 0, 0, 0, 0, 0, 954, 0, 955, 0, 956, 0, 0,
    0, 0, 0, 957, 0, 0, 0, 0, 958, 0, 0, 0, 0, 0, 0, 959, 0, 0, 0, 0, 960, 0, 961, 0, 0, 962, 0, 963, 964, 0, 965, 0,
    0, 966, 0, 0, 967, 0, 968, 0, 0, 969, 0, 0, 970, 0, 0, 0, 971, 0, 972, 0, 0, 0, 973, 0, 0, 0, 0, 0, 0, 0, 0, 974,
    0, 0, 0, 0, 0, 0, 0, 0, 975, 0, 976, 0, 0, 0, 0, 977, 0, 978, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 979, 0, 980, 0,
    981, 0, 982, 983, 0, 984, 0, 0, 0, 985, 0, 0, 0, 986, 0, 0, 0, 987, 0, 0, 988, 0, 989, 0, 990, 0, 0, 991, 0, 0, 0, 992,
    0, 0, 993, 0, 0, 0, 0, 994, 0, 995, 0, 996, 0, 0, 0, 997, 0, 0, 998, 0, 0, 0, 0, 0, 0, 0, 0, 0, 999, 1000, 0, 0,
    0, 0, 1001, 0, 1002, 0, 1003, 0, 1004, 0, 1005, 0, 0, 1006, 0, 0, 0, 1007, 0, 0, 1008, 0, 0, 1009, 0, 0, 1010, 1011, 0, 1012, 0, 0,
    0, 0, 0, 1013, 0, 0, 0, 0, 0, 1014, 0, 0, 1015, 0, 1016, 0, 0, 0, 0, 1017, 0, 0, 1018, 0, 1019, 0, 1020, 0, 1021, 0, 0, 0,
    1022, 0, 1023, 0, 1024, 1025, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1026, 0, 1027, 0, 1028, 0, 0, 1029, 0, 1030, 1031, 0, 1032, 0, 0, 0,
    0, 0, 0, 0, 1033, 0, 1034, 0, 0, 1035, 0, 0, 1036, 0, 0, 1037, 0, 0, 1038, 0, 1039, 1040, 0, 1041, 1042, 0, 1043, 0, 1044, 0, 0, 1045,
    0, 0, 1046, 0, 0, 1047, 0, 1048, 0, 0, 1049, 0, 0, 1050, 0, 0, 1051, 0, 1052, 0, 0, 0, 1053, 0, 1054, 0, 0, 1055, 0, 0, 0, 1056,
    0, 0, 0, 0, 1057, 0, 0, 0, 1058, 0, 1059, 0, 0, 0, 1060, 0, 0, 0, 0, 0, 1061, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1062, 0, 0, 1063, 0, 0, 0, 0, 0, 0, 0, 1064, 0, 0, 0, 0, 0, 1065, 0, 0, 1066, 0, 0, 1067, 0, 1068, 0, 1069, 0,
    1070, 0, 1071, 1072, 0, 1073, 0, 0, 1074, 0, 1075, 0, 0, 0, 1076, 0, 1077, 0, 1078, 0, 0, 0, 1079, 0, 1080, 0, 1081, 0, 1082, 1083, 0, 1084,
    0, 1085, 0, 1086, 0, 1087, 0, 1088, 0, 1089, 0, 1090, 0, 1091, 0, 0, 1092, 0, 1093, 0, 1094, 0, 1095, 0, 0, 0, 1096, 0, 1097, 0, 0, 1098,
    0, 0, 0, 0, 1099, 0, 0, 1100, 0, 1101, 1102, 0, 1103, 0, 0, 1104, 0, 0, 0, 0, 1105, 0, 0, 1106, 0, 1107, 1108, 0, 1109, 0, 1110, 0,
    0, 0, 1111, 0, 0, 1112, 0, 0, 0, 0, 0, 0, 0, 1113, 0, 0, 0, 0, 1114, 0, 0, 0, 1115, 0, 0, 0, 0, 0, 0, 1116, 0, 0,
    1117, 0, 1118, 0, 0, 1119, 0, 0, 1120, 1121, 0, 0, 1122, 0, 1123, 0, 1124, 0, 0, 0, 0, 0, 0, 1125, 0, 0, 1126, 0, 0, 1127, 0, 0,
    0, 1128, 0, 0, 1129, 0, 0, 0, 1130, 1131, 0, 1132, 0, 0, 1133, 0, 1134, 0, 0, 1135, 0, 0, 1136, 0, 1137, 0, 0, 0, 0, 1138, 0, 1139,
    0, 0, 1140, 0, 0, 0, 1141, 0, 0, 1142, 0, 0, 1143, 0, 1144, 0, 0, 0, 1145, 0, 0, 1146, 0, 1147, 0, 0, 0, 1148, 0, 0, 0, 1149,
    0, 1150, 0, 0, 0, 0, 0, 0, 1151, 0, 0, 0, 0, 1152, 0, 0, 1153, 0, 0, 1154, 0, 0, 0, 0, 1155, 0, 1156, 0, 1157, 0, 1158, 0,
    0, 0, 1159, 0, 0, 1160, 0, 1161, 1162, 0, 1163, 0, 1164, 0, 0, 0, 0, 0, 1165, 0, 0, 0, 1166, 0, 1167, 0, 0, 0, 1168, 0, 0, 1169,
};
void recomp_unit_0033_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08888000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0033[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08888000;
    case 2u: goto L_08888008;
    case 3u: goto L_08888020;
    case 4u: goto L_08888028;
    case 5u: goto L_08888040;
    case 6u: goto L_08888050;
    case 7u: goto L_08888058;
    case 8u: goto L_08888060;
    case 9u: goto L_0888806C;
    case 10u: goto L_08888078;
    case 11u: goto L_08888084;
    case 12u: goto L_08888088;
    case 13u: goto L_08888090;
    case 14u: goto L_088880B4;
    case 15u: goto L_088880C0;
    case 16u: goto L_088880C8;
    case 17u: goto L_088880D8;
    case 18u: goto L_088880E4;
    case 19u: goto L_088880EC;
    case 20u: goto L_088880F0;
    case 21u: goto L_088880F8;
    case 22u: goto L_08888100;
    case 23u: goto L_08888108;
    case 24u: goto L_08888118;
    case 25u: goto L_08888120;
    case 26u: goto L_08888128;
    case 27u: goto L_08888130;
    case 28u: goto L_08888138;
    case 29u: goto L_08888140;
    case 30u: goto L_08888148;
    case 31u: goto L_08888150;
    case 32u: goto L_08888168;
    case 33u: goto L_0888817C;
    case 34u: goto L_08888180;
    case 35u: goto L_08888198;
    case 36u: goto L_088881AC;
    case 37u: goto L_088881B8;
    case 38u: goto L_088881C8;
    case 39u: goto L_088881D4;
    case 40u: goto L_088881F4;
    case 41u: goto L_088881FC;
    case 42u: goto L_08888208;
    case 43u: goto L_08888220;
    case 44u: goto L_0888822C;
    case 45u: goto L_0888823C;
    case 46u: goto L_08888244;
    case 47u: goto L_0888824C;
    case 48u: goto L_08888254;
    case 49u: goto L_0888825C;
    case 50u: goto L_08888264;
    case 51u: goto L_0888826C;
    case 52u: goto L_08888274;
    case 53u: goto L_0888827C;
    case 54u: goto L_0888828C;
    case 55u: goto L_088882BC;
    case 56u: goto L_088882C8;
    case 57u: goto L_088882D4;
    case 58u: goto L_088882E0;
    case 59u: goto L_088882E4;
    case 60u: goto L_088882F4;
    case 61u: goto L_088882FC;
    case 62u: goto L_08888300;
    case 63u: goto L_08888308;
    case 64u: goto L_08888310;
    case 65u: goto L_08888318;
    case 66u: goto L_08888320;
    case 67u: goto L_08888328;
    case 68u: goto L_08888330;
    case 69u: goto L_0888833C;
    case 70u: goto L_08888344;
    case 71u: goto L_08888348;
    case 72u: goto L_08888350;
    case 73u: goto L_0888835C;
    case 74u: goto L_08888364;
    case 75u: goto L_08888370;
    case 76u: goto L_0888837C;
    case 77u: goto L_08888384;
    case 78u: goto L_08888390;
    case 79u: goto L_08888398;
    case 80u: goto L_088883A0;
    case 81u: goto L_088883AC;
    case 82u: goto L_088883B0;
    case 83u: goto L_088883BC;
    case 84u: goto L_088883C4;
    case 85u: goto L_088883E0;
    case 86u: goto L_088883EC;
    case 87u: goto L_088883F8;
    case 88u: goto L_08888400;
    case 89u: goto L_08888408;
    case 90u: goto L_08888418;
    case 91u: goto L_08888420;
    case 92u: goto L_08888438;
    case 93u: goto L_08888448;
    case 94u: goto L_0888845C;
    case 95u: goto L_08888464;
    case 96u: goto L_08888474;
    case 97u: goto L_0888847C;
    case 98u: goto L_088884A0;
    case 99u: goto L_088884AC;
    case 100u: goto L_088884B8;
    case 101u: goto L_088884C8;
    case 102u: goto L_088884D4;
    case 103u: goto L_088884DC;
    case 104u: goto L_088884E8;
    case 105u: goto L_088884F0;
    case 106u: goto L_088884F8;
    case 107u: goto L_08888504;
    case 108u: goto L_0888850C;
    case 109u: goto L_08888514;
    case 110u: goto L_0888851C;
    case 111u: goto L_08888524;
    case 112u: goto L_0888853C;
    case 113u: goto L_08888548;
    case 114u: goto L_08888554;
    case 115u: goto L_08888568;
    case 116u: goto L_08888590;
    case 117u: goto L_08888594;
    case 118u: goto L_0888859C;
    case 119u: goto L_088885B4;
    case 120u: goto L_088885D4;
    case 121u: goto L_088885DC;
    case 122u: goto L_088885E4;
    case 123u: goto L_088885F0;
    case 124u: goto L_088885FC;
    case 125u: goto L_08888608;
    case 126u: goto L_08888610;
    case 127u: goto L_08888618;
    case 128u: goto L_08888620;
    case 129u: goto L_08888630;
    case 130u: goto L_08888638;
    case 131u: goto L_08888640;
    case 132u: goto L_0888864C;
    case 133u: goto L_08888654;
    case 134u: goto L_0888865C;
    case 135u: goto L_08888664;
    case 136u: goto L_0888866C;
    case 137u: goto L_08888674;
    case 138u: goto L_08888684;
    case 139u: goto L_0888868C;
    case 140u: goto L_08888694;
    case 141u: goto L_088886A4;
    case 142u: goto L_088886AC;
    case 143u: goto L_088886B4;
    case 144u: goto L_088886B8;
    case 145u: goto L_088886CC;
    case 146u: goto L_088886F4;
    case 147u: goto L_088886FC;
    case 148u: goto L_08888704;
    case 149u: goto L_08888710;
    case 150u: goto L_0888871C;
    case 151u: goto L_08888728;
    case 152u: goto L_08888730;
    case 153u: goto L_08888738;
    case 154u: goto L_08888740;
    case 155u: goto L_08888748;
    case 156u: goto L_08888750;
    case 157u: goto L_08888754;
    case 158u: goto L_0888876C;
    case 159u: goto L_08888784;
    case 160u: goto L_0888878C;
    case 161u: goto L_08888794;
    case 162u: goto L_088887A4;
    case 163u: goto L_088887B4;
    case 164u: goto L_088887C4;
    case 165u: goto L_088887D4;
    case 166u: goto L_088887E4;
    case 167u: goto L_088887EC;
    case 168u: goto L_08888800;
    case 169u: goto L_08888810;
    case 170u: goto L_08888818;
    case 171u: goto L_08888820;
    case 172u: goto L_08888828;
    case 173u: goto L_08888830;
    case 174u: goto L_0888883C;
    case 175u: goto L_08888844;
    case 176u: goto L_0888884C;
    case 177u: goto L_08888854;
    case 178u: goto L_0888885C;
    case 179u: goto L_08888868;
    case 180u: goto L_08888870;
    case 181u: goto L_08888878;
    case 182u: goto L_08888880;
    case 183u: goto L_08888888;
    case 184u: goto L_08888898;
    case 185u: goto L_088888A4;
    case 186u: goto L_088888B8;
    case 187u: goto L_088888C4;
    case 188u: goto L_088888D0;
    case 189u: goto L_088888D8;
    case 190u: goto L_088888F4;
    case 191u: goto L_088888FC;
    case 192u: goto L_08888908;
    case 193u: goto L_08888910;
    case 194u: goto L_08888914;
    case 195u: goto L_08888928;
    case 196u: goto L_08888934;
    case 197u: goto L_08888954;
    case 198u: goto L_08888960;
    case 199u: goto L_08888970;
    case 200u: goto L_08888978;
    case 201u: goto L_08888980;
    case 202u: goto L_08888988;
    case 203u: goto L_08888990;
    case 204u: goto L_0888899C;
    case 205u: goto L_088889A4;
    case 206u: goto L_088889AC;
    case 207u: goto L_088889B4;
    case 208u: goto L_088889BC;
    case 209u: goto L_088889C4;
    case 210u: goto L_088889CC;
    case 211u: goto L_088889D4;
    case 212u: goto L_088889DC;
    case 213u: goto L_088889E4;
    case 214u: goto L_088889EC;
    case 215u: goto L_088889F4;
    case 216u: goto L_088889FC;
    case 217u: goto L_08888A04;
    case 218u: goto L_08888A0C;
    case 219u: goto L_08888A14;
    case 220u: goto L_08888A28;
    case 221u: goto L_08888A30;
    case 222u: goto L_08888A34;
    case 223u: goto L_08888A3C;
    case 224u: goto L_08888A48;
    case 225u: goto L_08888A50;
    case 226u: goto L_08888A5C;
    case 227u: goto L_08888A64;
    case 228u: goto L_08888A68;
    case 229u: goto L_08888A70;
    case 230u: goto L_08888A84;
    case 231u: goto L_08888A8C;
    case 232u: goto L_08888AA0;
    case 233u: goto L_08888AA8;
    case 234u: goto L_08888AAC;
    case 235u: goto L_08888AB4;
    case 236u: goto L_08888AC0;
    case 237u: goto L_08888AC8;
    case 238u: goto L_08888AD8;
    case 239u: goto L_08888AE0;
    case 240u: goto L_08888AEC;
    case 241u: goto L_08888AF4;
    case 242u: goto L_08888AF8;
    case 243u: goto L_08888B00;
    case 244u: goto L_08888B0C;
    case 245u: goto L_08888B14;
    case 246u: goto L_08888B18;
    case 247u: goto L_08888B20;
    case 248u: goto L_08888B2C;
    case 249u: goto L_08888B44;
    case 250u: goto L_08888B4C;
    case 251u: goto L_08888B64;
    case 252u: goto L_08888BB4;
    case 253u: goto L_08888BBC;
    case 254u: goto L_08888BD0;
    case 255u: goto L_08888BE8;
    case 256u: goto L_08888C00;
    case 257u: goto L_08888C14;
    case 258u: goto L_08888C24;
    case 259u: goto L_08888C34;
    case 260u: goto L_08888C40;
    case 261u: goto L_08888C5C;
    case 262u: goto L_08888C64;
    case 263u: goto L_08888C74;
    case 264u: goto L_08888C80;
    case 265u: goto L_08888C98;
    case 266u: goto L_08888CA0;
    case 267u: goto L_08888CAC;
    case 268u: goto L_08888CB8;
    case 269u: goto L_08888CD4;
    case 270u: goto L_08888CDC;
    case 271u: goto L_08888CE4;
    case 272u: goto L_08888CF4;
    case 273u: goto L_08888D00;
    case 274u: goto L_08888D1C;
    case 275u: goto L_08888D24;
    case 276u: goto L_08888D34;
    case 277u: goto L_08888D38;
    case 278u: goto L_08888D40;
    case 279u: goto L_08888D4C;
    case 280u: goto L_08888D54;
    case 281u: goto L_08888D84;
    case 282u: goto L_08888DB4;
    case 283u: goto L_08888DD8;
    case 284u: goto L_08888DE4;
    case 285u: goto L_08888E00;
    case 286u: goto L_08888E0C;
    case 287u: goto L_08888E2C;
    case 288u: goto L_08888E30;
    case 289u: goto L_08888E4C;
    case 290u: goto L_08888E78;
    case 291u: goto L_08888E84;
    case 292u: goto L_08888E8C;
    case 293u: goto L_08888E9C;
    case 294u: goto L_08888EC8;
    case 295u: goto L_08888EF0;
    case 296u: goto L_08888F04;
    case 297u: goto L_08888F14;
    case 298u: goto L_08888F18;
    case 299u: goto L_08888F30;
    case 300u: goto L_08888F48;
    case 301u: goto L_08888F70;
    case 302u: goto L_08888F98;
    case 303u: goto L_08888FA8;
    case 304u: goto L_08888FAC;
    case 305u: goto L_08888FB4;
    case 306u: goto L_08888FC8;
    case 307u: goto L_08888FF0;
    case 308u: goto L_08888FF8;
    case 309u: goto L_08889000;
    case 310u: goto L_08889010;
    case 311u: goto L_0888903C;
    case 312u: goto L_08889044;
    case 313u: goto L_08889054;
    case 314u: goto L_08889058;
    case 315u: goto L_08889074;
    case 316u: goto L_0888907C;
    case 317u: goto L_08889098;
    case 318u: goto L_088890A0;
    case 319u: goto L_088890A8;
    case 320u: goto L_088890B0;
    case 321u: goto L_088890B8;
    case 322u: goto L_088890C0;
    case 323u: goto L_088890C8;
    case 324u: goto L_088890D0;
    case 325u: goto L_088890D8;
    case 326u: goto L_088890E0;
    case 327u: goto L_088890F4;
    case 328u: goto L_088890FC;
    case 329u: goto L_08889110;
    case 330u: goto L_08889118;
    case 331u: goto L_08889120;
    case 332u: goto L_08889128;
    case 333u: goto L_08889138;
    case 334u: goto L_08889144;
    case 335u: goto L_0888914C;
    case 336u: goto L_08889178;
    case 337u: goto L_08889180;
    case 338u: goto L_08889188;
    case 339u: goto L_088891AC;
    case 340u: goto L_088891B0;
    case 341u: goto L_088891CC;
    case 342u: goto L_088891E0;
    case 343u: goto L_088891E4;
    case 344u: goto L_08889200;
    case 345u: goto L_08889214;
    case 346u: goto L_0888921C;
    case 347u: goto L_0888922C;
    case 348u: goto L_0888923C;
    case 349u: goto L_08889258;
    case 350u: goto L_08889260;
    case 351u: goto L_0888926C;
    case 352u: goto L_088892B8;
    case 353u: goto L_088892C4;
    case 354u: goto L_088892CC;
    case 355u: goto L_088892D8;
    case 356u: goto L_088892E4;
    case 357u: goto L_088892F4;
    case 358u: goto L_088892FC;
    case 359u: goto L_08889304;
    case 360u: goto L_0888930C;
    case 361u: goto L_08889318;
    case 362u: goto L_08889328;
    case 363u: goto L_08889334;
    case 364u: goto L_08889338;
    case 365u: goto L_08889350;
    case 366u: goto L_0888935C;
    case 367u: goto L_08889368;
    case 368u: goto L_08889374;
    case 369u: goto L_08889380;
    case 370u: goto L_0888938C;
    case 371u: goto L_08889398;
    case 372u: goto L_0888939C;
    case 373u: goto L_088893B4;
    case 374u: goto L_088893C0;
    case 375u: goto L_088893CC;
    case 376u: goto L_088893D8;
    case 377u: goto L_088893E4;
    case 378u: goto L_088893E8;
    case 379u: goto L_08889400;
    case 380u: goto L_0888940C;
    case 381u: goto L_08889414;
    case 382u: goto L_0888941C;
    case 383u: goto L_08889428;
    case 384u: goto L_08889434;
    case 385u: goto L_08889440;
    case 386u: goto L_0888944C;
    case 387u: goto L_08889458;
    case 388u: goto L_08889464;
    case 389u: goto L_0888946C;
    case 390u: goto L_0888947C;
    case 391u: goto L_08889484;
    case 392u: goto L_088894AC;
    case 393u: goto L_088894B8;
    case 394u: goto L_08889510;
    case 395u: goto L_08889530;
    case 396u: goto L_08889548;
    case 397u: goto L_08889578;
    case 398u: goto L_088895D4;
    case 399u: goto L_08889604;
    case 400u: goto L_0888960C;
    case 401u: goto L_08889618;
    case 402u: goto L_08889634;
    case 403u: goto L_08889644;
    case 404u: goto L_08889654;
    case 405u: goto L_0888966C;
    case 406u: goto L_08889680;
    case 407u: goto L_08889694;
    case 408u: goto L_08889698;
    case 409u: goto L_088896A8;
    case 410u: goto L_088896B0;
    case 411u: goto L_088896EC;
    case 412u: goto L_088896FC;
    case 413u: goto L_0888970C;
    case 414u: goto L_0888974C;
    case 415u: goto L_0888975C;
    case 416u: goto L_0888976C;
    case 417u: goto L_088897A8;
    case 418u: goto L_088897B8;
    case 419u: goto L_088897C8;
    case 420u: goto L_088897E0;
    case 421u: goto L_088897E8;
    case 422u: goto L_08889814;
    case 423u: goto L_0888981C;
    case 424u: goto L_08889860;
    case 425u: goto L_0888986C;
    case 426u: goto L_08889884;
    case 427u: goto L_08889890;
    case 428u: goto L_08889894;
    case 429u: goto L_0888989C;
    case 430u: goto L_088898A4;
    case 431u: goto L_088898C4;
    case 432u: goto L_088898D0;
    case 433u: goto L_088898DC;
    case 434u: goto L_088898E4;
    case 435u: goto L_088898F0;
    case 436u: goto L_088898F8;
    case 437u: goto L_08889904;
    case 438u: goto L_0888990C;
    case 439u: goto L_08889914;
    case 440u: goto L_0888991C;
    case 441u: goto L_08889924;
    case 442u: goto L_0888992C;
    case 443u: goto L_08889934;
    case 444u: goto L_08889944;
    case 445u: goto L_08889950;
    case 446u: goto L_08889958;
    case 447u: goto L_08889960;
    case 448u: goto L_08889968;
    case 449u: goto L_08889970;
    case 450u: goto L_08889978;
    case 451u: goto L_08889980;
    case 452u: goto L_08889988;
    case 453u: goto L_0888999C;
    case 454u: goto L_088899BC;
    case 455u: goto L_088899C8;
    case 456u: goto L_088899D4;
    case 457u: goto L_088899DC;
    case 458u: goto L_088899E8;
    case 459u: goto L_088899F0;
    case 460u: goto L_088899FC;
    case 461u: goto L_08889A04;
    case 462u: goto L_08889A0C;
    case 463u: goto L_08889A14;
    case 464u: goto L_08889A1C;
    case 465u: goto L_08889A24;
    case 466u: goto L_08889A2C;
    case 467u: goto L_08889A38;
    case 468u: goto L_08889A40;
    case 469u: goto L_08889A48;
    case 470u: goto L_08889A64;
    case 471u: goto L_08889A80;
    case 472u: goto L_08889A8C;
    case 473u: goto L_08889A94;
    case 474u: goto L_08889A98;
    case 475u: goto L_08889AA8;
    case 476u: goto L_08889AAC;
    case 477u: goto L_08889ABC;
    case 478u: goto L_08889AC8;
    case 479u: goto L_08889AD0;
    case 480u: goto L_08889AD8;
    case 481u: goto L_08889AE0;
    case 482u: goto L_08889AE8;
    case 483u: goto L_08889AF0;
    case 484u: goto L_08889B04;
    case 485u: goto L_08889B14;
    case 486u: goto L_08889B20;
    case 487u: goto L_08889B2C;
    case 488u: goto L_08889B34;
    case 489u: goto L_08889B3C;
    case 490u: goto L_08889B44;
    case 491u: goto L_08889B4C;
    case 492u: goto L_08889B54;
    case 493u: goto L_08889B5C;
    case 494u: goto L_08889B64;
    case 495u: goto L_08889B6C;
    case 496u: goto L_08889B74;
    case 497u: goto L_08889B80;
    case 498u: goto L_08889B88;
    case 499u: goto L_08889B90;
    case 500u: goto L_08889B9C;
    case 501u: goto L_08889BA4;
    case 502u: goto L_08889BBC;
    case 503u: goto L_08889BC8;
    case 504u: goto L_08889BD0;
    case 505u: goto L_08889BD8;
    case 506u: goto L_08889BE4;
    case 507u: goto L_08889BEC;
    case 508u: goto L_08889BF4;
    case 509u: goto L_08889BFC;
    case 510u: goto L_08889C04;
    case 511u: goto L_08889C14;
    case 512u: goto L_08889C20;
    case 513u: goto L_08889C28;
    case 514u: goto L_08889C30;
    case 515u: goto L_08889C34;
    case 516u: goto L_08889C3C;
    case 517u: goto L_08889C64;
    case 518u: goto L_08889C6C;
    case 519u: goto L_08889C70;
    case 520u: goto L_08889C78;
    case 521u: goto L_08889C80;
    case 522u: goto L_08889C90;
    case 523u: goto L_08889C9C;
    case 524u: goto L_08889CA4;
    case 525u: goto L_08889CAC;
    case 526u: goto L_08889CB4;
    case 527u: goto L_08889CB8;
    case 528u: goto L_08889CC0;
    case 529u: goto L_08889CD0;
    case 530u: goto L_08889CD8;
    case 531u: goto L_08889CF0;
    case 532u: goto L_08889CF8;
    case 533u: goto L_08889D04;
    case 534u: goto L_08889D14;
    case 535u: goto L_08889D20;
    case 536u: goto L_08889D24;
    case 537u: goto L_08889D2C;
    case 538u: goto L_08889D40;
    case 539u: goto L_08889D4C;
    case 540u: goto L_08889D54;
    case 541u: goto L_08889D8C;
    case 542u: goto L_08889D94;
    case 543u: goto L_08889DBC;
    case 544u: goto L_08889DD0;
    case 545u: goto L_08889DD8;
    case 546u: goto L_08889DEC;
    case 547u: goto L_08889E3C;
    case 548u: goto L_08889E54;
    case 549u: goto L_08889E5C;
    case 550u: goto L_08889E74;
    case 551u: goto L_08889E94;
    case 552u: goto L_08889EC0;
    case 553u: goto L_08889ECC;
    case 554u: goto L_08889ED4;
    case 555u: goto L_08889EDC;
    case 556u: goto L_08889F0C;
    case 557u: goto L_08889F34;
    case 558u: goto L_08889F38;
    case 559u: goto L_08889F48;
    case 560u: goto L_08889F6C;
    case 561u: goto L_08889F78;
    case 562u: goto L_08889F90;
    case 563u: goto L_08889F98;
    case 564u: goto L_08889FA0;
    case 565u: goto L_08889FB0;
    case 566u: goto L_08889FC0;
    case 567u: goto L_08889FC4;
    case 568u: goto L_08889FD4;
    case 569u: goto L_0888A014;
    case 570u: goto L_0888A01C;
    case 571u: goto L_0888A028;
    case 572u: goto L_0888A034;
    case 573u: goto L_0888A058;
    case 574u: goto L_0888A064;
    case 575u: goto L_0888A094;
    case 576u: goto L_0888A098;
    case 577u: goto L_0888A0A0;
    case 578u: goto L_0888A0AC;
    case 579u: goto L_0888A0BC;
    case 580u: goto L_0888A0C0;
    case 581u: goto L_0888A0D8;
    case 582u: goto L_0888A104;
    case 583u: goto L_0888A124;
    case 584u: goto L_0888A144;
    case 585u: goto L_0888A158;
    case 586u: goto L_0888A164;
    case 587u: goto L_0888A16C;
    case 588u: goto L_0888A17C;
    case 589u: goto L_0888A184;
    case 590u: goto L_0888A18C;
    case 591u: goto L_0888A198;
    case 592u: goto L_0888A1A4;
    case 593u: goto L_0888A1B0;
    case 594u: goto L_0888A1C4;
    case 595u: goto L_0888A1D4;
    case 596u: goto L_0888A1E4;
    case 597u: goto L_0888A1F0;
    case 598u: goto L_0888A1F8;
    case 599u: goto L_0888A200;
    case 600u: goto L_0888A208;
    case 601u: goto L_0888A230;
    case 602u: goto L_0888A238;
    case 603u: goto L_0888A240;
    case 604u: goto L_0888A248;
    case 605u: goto L_0888A250;
    case 606u: goto L_0888A260;
    case 607u: goto L_0888A270;
    case 608u: goto L_0888A278;
    case 609u: goto L_0888A280;
    case 610u: goto L_0888A288;
    case 611u: goto L_0888A294;
    case 612u: goto L_0888A29C;
    case 613u: goto L_0888A2A4;
    case 614u: goto L_0888A2AC;
    case 615u: goto L_0888A2B8;
    case 616u: goto L_0888A2C4;
    case 617u: goto L_0888A2CC;
    case 618u: goto L_0888A2D4;
    case 619u: goto L_0888A2DC;
    case 620u: goto L_0888A2E8;
    case 621u: goto L_0888A2F0;
    case 622u: goto L_0888A2F8;
    case 623u: goto L_0888A2FC;
    case 624u: goto L_0888A310;
    case 625u: goto L_0888A33C;
    case 626u: goto L_0888A344;
    case 627u: goto L_0888A34C;
    case 628u: goto L_0888A35C;
    case 629u: goto L_0888A368;
    case 630u: goto L_0888A37C;
    case 631u: goto L_0888A384;
    case 632u: goto L_0888A388;
    case 633u: goto L_0888A398;
    case 634u: goto L_0888A3A0;
    case 635u: goto L_0888A3B4;
    case 636u: goto L_0888A3D0;
    case 637u: goto L_0888A3DC;
    case 638u: goto L_0888A440;
    case 639u: goto L_0888A448;
    case 640u: goto L_0888A454;
    case 641u: goto L_0888A474;
    case 642u: goto L_0888A47C;
    case 643u: goto L_0888A488;
    case 644u: goto L_0888A4B8;
    case 645u: goto L_0888A4D0;
    case 646u: goto L_0888A4DC;
    case 647u: goto L_0888A52C;
    case 648u: goto L_0888A538;
    case 649u: goto L_0888A588;
    case 650u: goto L_0888A59C;
    case 651u: goto L_0888A5C4;
    case 652u: goto L_0888A5C8;
    case 653u: goto L_0888A660;
    case 654u: goto L_0888A668;
    case 655u: goto L_0888A688;
    case 656u: goto L_0888A6AC;
    case 657u: goto L_0888A6B4;
    case 658u: goto L_0888A6B8;
    case 659u: goto L_0888A6C0;
    case 660u: goto L_0888A6CC;
    case 661u: goto L_0888A6D8;
    case 662u: goto L_0888A6E0;
    case 663u: goto L_0888A6E8;
    case 664u: goto L_0888A6FC;
    case 665u: goto L_0888A70C;
    case 666u: goto L_0888A720;
    case 667u: goto L_0888A728;
    case 668u: goto L_0888A738;
    case 669u: goto L_0888A74C;
    case 670u: goto L_0888A764;
    case 671u: goto L_0888A768;
    case 672u: goto L_0888A774;
    case 673u: goto L_0888A77C;
    case 674u: goto L_0888A780;
    case 675u: goto L_0888A788;
    case 676u: goto L_0888A790;
    case 677u: goto L_0888A79C;
    case 678u: goto L_0888A7A4;
    case 679u: goto L_0888A7A8;
    case 680u: goto L_0888A7B0;
    case 681u: goto L_0888A7B8;
    case 682u: goto L_0888A7C8;
    case 683u: goto L_0888A7D0;
    case 684u: goto L_0888A7DC;
    case 685u: goto L_0888A7F0;
    case 686u: goto L_0888A7FC;
    case 687u: goto L_0888A800;
    case 688u: goto L_0888A80C;
    case 689u: goto L_0888A818;
    case 690u: goto L_0888A82C;
    case 691u: goto L_0888A834;
    case 692u: goto L_0888A840;
    case 693u: goto L_0888A854;
    case 694u: goto L_0888A860;
    case 695u: goto L_0888A86C;
    case 696u: goto L_0888A870;
    case 697u: goto L_0888A880;
    case 698u: goto L_0888A890;
    case 699u: goto L_0888A898;
    case 700u: goto L_0888A8A0;
    case 701u: goto L_0888A8A8;
    case 702u: goto L_0888A8B4;
    case 703u: goto L_0888A8C0;
    case 704u: goto L_0888A8C8;
    case 705u: goto L_0888A8F4;
    case 706u: goto L_0888A8FC;
    case 707u: goto L_0888A904;
    case 708u: goto L_0888A934;
    case 709u: goto L_0888A93C;
    case 710u: goto L_0888A944;
    case 711u: goto L_0888A950;
    case 712u: goto L_0888A95C;
    case 713u: goto L_0888A964;
    case 714u: goto L_0888A96C;
    case 715u: goto L_0888A974;
    case 716u: goto L_0888A97C;
    case 717u: goto L_0888A984;
    case 718u: goto L_0888A990;
    case 719u: goto L_0888A998;
    case 720u: goto L_0888A9A0;
    case 721u: goto L_0888A9B4;
    case 722u: goto L_0888A9BC;
    case 723u: goto L_0888A9C4;
    case 724u: goto L_0888A9CC;
    case 725u: goto L_0888A9E4;
    case 726u: goto L_0888AABC;
    case 727u: goto L_0888AAC0;
    case 728u: goto L_0888AAF0;
    case 729u: goto L_0888AAF8;
    case 730u: goto L_0888AB0C;
    case 731u: goto L_0888AB28;
    case 732u: goto L_0888AB48;
    case 733u: goto L_0888AB5C;
    case 734u: goto L_0888AB68;
    case 735u: goto L_0888AB74;
    case 736u: goto L_0888ABB0;
    case 737u: goto L_0888ABB8;
    case 738u: goto L_0888ABD0;
    case 739u: goto L_0888ABDC;
    case 740u: goto L_0888ABE4;
    case 741u: goto L_0888ABEC;
    case 742u: goto L_0888AC00;
    case 743u: goto L_0888AC04;
    case 744u: goto L_0888AC14;
    case 745u: goto L_0888AC1C;
    case 746u: goto L_0888AC28;
    case 747u: goto L_0888AC44;
    case 748u: goto L_0888AC84;
    case 749u: goto L_0888ACBC;
    case 750u: goto L_0888ACCC;
    case 751u: goto L_0888ACD4;
    case 752u: goto L_0888ACDC;
    case 753u: goto L_0888ACE4;
    case 754u: goto L_0888ACEC;
    case 755u: goto L_0888ACF4;
    case 756u: goto L_0888AD00;
    case 757u: goto L_0888AD0C;
    case 758u: goto L_0888AD14;
    case 759u: goto L_0888AD24;
    case 760u: goto L_0888AD2C;
    case 761u: goto L_0888AD3C;
    case 762u: goto L_0888AD44;
    case 763u: goto L_0888AD54;
    case 764u: goto L_0888AD5C;
    case 765u: goto L_0888AD6C;
    case 766u: goto L_0888AD74;
    case 767u: goto L_0888AD84;
    case 768u: goto L_0888AD8C;
    case 769u: goto L_0888AD9C;
    case 770u: goto L_0888ADA4;
    case 771u: goto L_0888ADB4;
    case 772u: goto L_0888ADBC;
    case 773u: goto L_0888ADCC;
    case 774u: goto L_0888ADD4;
    case 775u: goto L_0888ADE4;
    case 776u: goto L_0888ADEC;
    case 777u: goto L_0888ADF8;
    case 778u: goto L_0888AE00;
    case 779u: goto L_0888AE10;
    case 780u: goto L_0888AE1C;
    case 781u: goto L_0888AE28;
    case 782u: goto L_0888AE38;
    case 783u: goto L_0888AE40;
    case 784u: goto L_0888AE4C;
    case 785u: goto L_0888AE54;
    case 786u: goto L_0888AE58;
    case 787u: goto L_0888AE64;
    case 788u: goto L_0888AE6C;
    case 789u: goto L_0888AE78;
    case 790u: goto L_0888AE80;
    case 791u: goto L_0888AE8C;
    case 792u: goto L_0888AE98;
    case 793u: goto L_0888AEAC;
    case 794u: goto L_0888AEC0;
    case 795u: goto L_0888AEC8;
    case 796u: goto L_0888AECC;
    case 797u: goto L_0888AED8;
    case 798u: goto L_0888AEE0;
    case 799u: goto L_0888AEE8;
    case 800u: goto L_0888AF04;
    case 801u: goto L_0888AF0C;
    case 802u: goto L_0888AF18;
    case 803u: goto L_0888AF24;
    case 804u: goto L_0888AF2C;
    case 805u: goto L_0888AF30;
    case 806u: goto L_0888AF38;
    case 807u: goto L_0888AF44;
    case 808u: goto L_0888AF4C;
    case 809u: goto L_0888AF54;
    case 810u: goto L_0888AF5C;
    case 811u: goto L_0888AF68;
    case 812u: goto L_0888AF74;
    case 813u: goto L_0888AF7C;
    case 814u: goto L_0888AF80;
    case 815u: goto L_0888AF88;
    case 816u: goto L_0888AF90;
    case 817u: goto L_0888AF9C;
    case 818u: goto L_0888AFA4;
    case 819u: goto L_0888AFB0;
    case 820u: goto L_0888AFBC;
    case 821u: goto L_0888AFC4;
    case 822u: goto L_0888AFC8;
    case 823u: goto L_0888AFD0;
    case 824u: goto L_0888AFD8;
    case 825u: goto L_0888AFE4;
    case 826u: goto L_0888AFEC;
    case 827u: goto L_0888AFF8;
    case 828u: goto L_0888B004;
    case 829u: goto L_0888B00C;
    case 830u: goto L_0888B010;
    case 831u: goto L_0888B018;
    case 832u: goto L_0888B020;
    case 833u: goto L_0888B02C;
    case 834u: goto L_0888B034;
    case 835u: goto L_0888B040;
    case 836u: goto L_0888B04C;
    case 837u: goto L_0888B054;
    case 838u: goto L_0888B058;
    case 839u: goto L_0888B060;
    case 840u: goto L_0888B068;
    case 841u: goto L_0888B074;
    case 842u: goto L_0888B07C;
    case 843u: goto L_0888B088;
    case 844u: goto L_0888B094;
    case 845u: goto L_0888B09C;
    case 846u: goto L_0888B0A0;
    case 847u: goto L_0888B0A8;
    case 848u: goto L_0888B0B0;
    case 849u: goto L_0888B0BC;
    case 850u: goto L_0888B0C4;
    case 851u: goto L_0888B0D0;
    case 852u: goto L_0888B0DC;
    case 853u: goto L_0888B0E4;
    case 854u: goto L_0888B0E8;
    case 855u: goto L_0888B0F0;
    case 856u: goto L_0888B0F8;
    case 857u: goto L_0888B104;
    case 858u: goto L_0888B10C;
    case 859u: goto L_0888B118;
    case 860u: goto L_0888B124;
    case 861u: goto L_0888B12C;
    case 862u: goto L_0888B130;
    case 863u: goto L_0888B138;
    case 864u: goto L_0888B140;
    case 865u: goto L_0888B14C;
    case 866u: goto L_0888B154;
    case 867u: goto L_0888B160;
    case 868u: goto L_0888B16C;
    case 869u: goto L_0888B174;
    case 870u: goto L_0888B178;
    case 871u: goto L_0888B180;
    case 872u: goto L_0888B188;
    case 873u: goto L_0888B194;
    case 874u: goto L_0888B19C;
    case 875u: goto L_0888B1A8;
    case 876u: goto L_0888B1B4;
    case 877u: goto L_0888B1BC;
    case 878u: goto L_0888B1C0;
    case 879u: goto L_0888B1C8;
    case 880u: goto L_0888B1D0;
    case 881u: goto L_0888B1DC;
    case 882u: goto L_0888B1E4;
    case 883u: goto L_0888B1E8;
    case 884u: goto L_0888B1F0;
    case 885u: goto L_0888B1F8;
    case 886u: goto L_0888B204;
    case 887u: goto L_0888B20C;
    case 888u: goto L_0888B210;
    case 889u: goto L_0888B218;
    case 890u: goto L_0888B220;
    case 891u: goto L_0888B22C;
    case 892u: goto L_0888B234;
    case 893u: goto L_0888B238;
    case 894u: goto L_0888B240;
    case 895u: goto L_0888B248;
    case 896u: goto L_0888B250;
    case 897u: goto L_0888B25C;
    case 898u: goto L_0888B264;
    case 899u: goto L_0888B26C;
    case 900u: goto L_0888B274;
    case 901u: goto L_0888B280;
    case 902u: goto L_0888B28C;
    case 903u: goto L_0888B298;
    case 904u: goto L_0888B2A0;
    case 905u: goto L_0888B2A4;
    case 906u: goto L_0888B2AC;
    case 907u: goto L_0888B2B4;
    case 908u: goto L_0888B2BC;
    case 909u: goto L_0888B2C4;
    case 910u: goto L_0888B2CC;
    case 911u: goto L_0888B2D0;
    case 912u: goto L_0888B2D8;
    case 913u: goto L_0888B2E0;
    case 914u: goto L_0888B2EC;
    case 915u: goto L_0888B2FC;
    case 916u: goto L_0888B304;
    case 917u: goto L_0888B31C;
    case 918u: goto L_0888B334;
    case 919u: goto L_0888B33C;
    case 920u: goto L_0888B34C;
    case 921u: goto L_0888B354;
    case 922u: goto L_0888B360;
    case 923u: goto L_0888B370;
    case 924u: goto L_0888B37C;
    case 925u: goto L_0888B388;
    case 926u: goto L_0888B394;
    case 927u: goto L_0888B39C;
    case 928u: goto L_0888B3A0;
    case 929u: goto L_0888B3A8;
    case 930u: goto L_0888B3B4;
    case 931u: goto L_0888B3C0;
    case 932u: goto L_0888B3C8;
    case 933u: goto L_0888B3D4;
    case 934u: goto L_0888B3E4;
    case 935u: goto L_0888B3F0;
    case 936u: goto L_0888B404;
    case 937u: goto L_0888B40C;
    case 938u: goto L_0888B418;
    case 939u: goto L_0888B420;
    case 940u: goto L_0888B428;
    case 941u: goto L_0888B430;
    case 942u: goto L_0888B458;
    case 943u: goto L_0888B468;
    case 944u: goto L_0888B474;
    case 945u: goto L_0888B47C;
    case 946u: goto L_0888B490;
    case 947u: goto L_0888B4A0;
    case 948u: goto L_0888B4D4;
    case 949u: goto L_0888B4E8;
    case 950u: goto L_0888B50C;
    case 951u: goto L_0888B524;
    case 952u: goto L_0888B538;
    case 953u: goto L_0888B540;
    case 954u: goto L_0888B564;
    case 955u: goto L_0888B56C;
    case 956u: goto L_0888B574;
    case 957u: goto L_0888B58C;
    case 958u: goto L_0888B5A0;
    case 959u: goto L_0888B5BC;
    case 960u: goto L_0888B5D0;
    case 961u: goto L_0888B5D8;
    case 962u: goto L_0888B5E4;
    case 963u: goto L_0888B5EC;
    case 964u: goto L_0888B5F0;
    case 965u: goto L_0888B5F8;
    case 966u: goto L_0888B604;
    case 967u: goto L_0888B610;
    case 968u: goto L_0888B618;
    case 969u: goto L_0888B624;
    case 970u: goto L_0888B630;
    case 971u: goto L_0888B640;
    case 972u: goto L_0888B648;
    case 973u: goto L_0888B658;
    case 974u: goto L_0888B67C;
    case 975u: goto L_0888B6A0;
    case 976u: goto L_0888B6A8;
    case 977u: goto L_0888B6BC;
    case 978u: goto L_0888B6C4;
    case 979u: goto L_0888B6F0;
    case 980u: goto L_0888B6F8;
    case 981u: goto L_0888B700;
    case 982u: goto L_0888B708;
    case 983u: goto L_0888B70C;
    case 984u: goto L_0888B714;
    case 985u: goto L_0888B724;
    case 986u: goto L_0888B734;
    case 987u: goto L_0888B744;
    case 988u: goto L_0888B750;
    case 989u: goto L_0888B758;
    case 990u: goto L_0888B760;
    case 991u: goto L_0888B76C;
    case 992u: goto L_0888B77C;
    case 993u: goto L_0888B788;
    case 994u: goto L_0888B79C;
    case 995u: goto L_0888B7A4;
    case 996u: goto L_0888B7AC;
    case 997u: goto L_0888B7BC;
    case 998u: goto L_0888B7C8;
    case 999u: goto L_0888B7F0;
    case 1000u: goto L_0888B7F4;
    case 1001u: goto L_0888B808;
    case 1002u: goto L_0888B810;
    case 1003u: goto L_0888B818;
    case 1004u: goto L_0888B820;
    case 1005u: goto L_0888B828;
    case 1006u: goto L_0888B834;
    case 1007u: goto L_0888B844;
    case 1008u: goto L_0888B850;
    case 1009u: goto L_0888B85C;
    case 1010u: goto L_0888B868;
    case 1011u: goto L_0888B86C;
    case 1012u: goto L_0888B874;
    case 1013u: goto L_0888B88C;
    case 1014u: goto L_0888B8A4;
    case 1015u: goto L_0888B8B0;
    case 1016u: goto L_0888B8B8;
    case 1017u: goto L_0888B8CC;
    case 1018u: goto L_0888B8D8;
    case 1019u: goto L_0888B8E0;
    case 1020u: goto L_0888B8E8;
    case 1021u: goto L_0888B8F0;
    case 1022u: goto L_0888B900;
    case 1023u: goto L_0888B908;
    case 1024u: goto L_0888B910;
    case 1025u: goto L_0888B914;
    case 1026u: goto L_0888B940;
    case 1027u: goto L_0888B948;
    case 1028u: goto L_0888B950;
    case 1029u: goto L_0888B95C;
    case 1030u: goto L_0888B964;
    case 1031u: goto L_0888B968;
    case 1032u: goto L_0888B970;
    case 1033u: goto L_0888B990;
    case 1034u: goto L_0888B998;
    case 1035u: goto L_0888B9A4;
    case 1036u: goto L_0888B9B0;
    case 1037u: goto L_0888B9BC;
    case 1038u: goto L_0888B9C8;
    case 1039u: goto L_0888B9D0;
    case 1040u: goto L_0888B9D4;
    case 1041u: goto L_0888B9DC;
    case 1042u: goto L_0888B9E0;
    case 1043u: goto L_0888B9E8;
    case 1044u: goto L_0888B9F0;
    case 1045u: goto L_0888B9FC;
    case 1046u: goto L_0888BA08;
    case 1047u: goto L_0888BA14;
    case 1048u: goto L_0888BA1C;
    case 1049u: goto L_0888BA28;
    case 1050u: goto L_0888BA34;
    case 1051u: goto L_0888BA40;
    case 1052u: goto L_0888BA48;
    case 1053u: goto L_0888BA58;
    case 1054u: goto L_0888BA60;
    case 1055u: goto L_0888BA6C;
    case 1056u: goto L_0888BA7C;
    case 1057u: goto L_0888BA90;
    case 1058u: goto L_0888BAA0;
    case 1059u: goto L_0888BAA8;
    case 1060u: goto L_0888BAB8;
    case 1061u: goto L_0888BAD0;
    case 1062u: goto L_0888BB0C;
    case 1063u: goto L_0888BB18;
    case 1064u: goto L_0888BB38;
    case 1065u: goto L_0888BB50;
    case 1066u: goto L_0888BB5C;
    case 1067u: goto L_0888BB68;
    case 1068u: goto L_0888BB70;
    case 1069u: goto L_0888BB78;
    case 1070u: goto L_0888BB80;
    case 1071u: goto L_0888BB88;
    case 1072u: goto L_0888BB8C;
    case 1073u: goto L_0888BB94;
    case 1074u: goto L_0888BBA0;
    case 1075u: goto L_0888BBA8;
    case 1076u: goto L_0888BBB8;
    case 1077u: goto L_0888BBC0;
    case 1078u: goto L_0888BBC8;
    case 1079u: goto L_0888BBD8;
    case 1080u: goto L_0888BBE0;
    case 1081u: goto L_0888BBE8;
    case 1082u: goto L_0888BBF0;
    case 1083u: goto L_0888BBF4;
    case 1084u: goto L_0888BBFC;
    case 1085u: goto L_0888BC04;
    case 1086u: goto L_0888BC0C;
    case 1087u: goto L_0888BC14;
    case 1088u: goto L_0888BC1C;
    case 1089u: goto L_0888BC24;
    case 1090u: goto L_0888BC2C;
    case 1091u: goto L_0888BC34;
    case 1092u: goto L_0888BC40;
    case 1093u: goto L_0888BC48;
    case 1094u: goto L_0888BC50;
    case 1095u: goto L_0888BC58;
    case 1096u: goto L_0888BC68;
    case 1097u: goto L_0888BC70;
    case 1098u: goto L_0888BC7C;
    case 1099u: goto L_0888BC90;
    case 1100u: goto L_0888BC9C;
    case 1101u: goto L_0888BCA4;
    case 1102u: goto L_0888BCA8;
    case 1103u: goto L_0888BCB0;
    case 1104u: goto L_0888BCBC;
    case 1105u: goto L_0888BCD0;
    case 1106u: goto L_0888BCDC;
    case 1107u: goto L_0888BCE4;
    case 1108u: goto L_0888BCE8;
    case 1109u: goto L_0888BCF0;
    case 1110u: goto L_0888BCF8;
    case 1111u: goto L_0888BD08;
    case 1112u: goto L_0888BD14;
    case 1113u: goto L_0888BD34;
    case 1114u: goto L_0888BD48;
    case 1115u: goto L_0888BD58;
    case 1116u: goto L_0888BD74;
    case 1117u: goto L_0888BD80;
    case 1118u: goto L_0888BD88;
    case 1119u: goto L_0888BD94;
    case 1120u: goto L_0888BDA0;
    case 1121u: goto L_0888BDA4;
    case 1122u: goto L_0888BDB0;
    case 1123u: goto L_0888BDB8;
    case 1124u: goto L_0888BDC0;
    case 1125u: goto L_0888BDDC;
    case 1126u: goto L_0888BDE8;
    case 1127u: goto L_0888BDF4;
    case 1128u: goto L_0888BE04;
    case 1129u: goto L_0888BE10;
    case 1130u: goto L_0888BE20;
    case 1131u: goto L_0888BE24;
    case 1132u: goto L_0888BE2C;
    case 1133u: goto L_0888BE38;
    case 1134u: goto L_0888BE40;
    case 1135u: goto L_0888BE4C;
    case 1136u: goto L_0888BE58;
    case 1137u: goto L_0888BE60;
    case 1138u: goto L_0888BE74;
    case 1139u: goto L_0888BE7C;
    case 1140u: goto L_0888BE88;
    case 1141u: goto L_0888BE98;
    case 1142u: goto L_0888BEA4;
    case 1143u: goto L_0888BEB0;
    case 1144u: goto L_0888BEB8;
    case 1145u: goto L_0888BEC8;
    case 1146u: goto L_0888BED4;
    case 1147u: goto L_0888BEDC;
    case 1148u: goto L_0888BEEC;
    case 1149u: goto L_0888BEFC;
    case 1150u: goto L_0888BF04;
    case 1151u: goto L_0888BF20;
    case 1152u: goto L_0888BF34;
    case 1153u: goto L_0888BF40;
    case 1154u: goto L_0888BF4C;
    case 1155u: goto L_0888BF60;
    case 1156u: goto L_0888BF68;
    case 1157u: goto L_0888BF70;
    case 1158u: goto L_0888BF78;
    case 1159u: goto L_0888BF88;
    case 1160u: goto L_0888BF94;
    case 1161u: goto L_0888BF9C;
    case 1162u: goto L_0888BFA0;
    case 1163u: goto L_0888BFA8;
    case 1164u: goto L_0888BFB0;
    case 1165u: goto L_0888BFC8;
    case 1166u: goto L_0888BFD8;
    case 1167u: goto L_0888BFE0;
    case 1168u: goto L_0888BFF0;
    case 1169u: goto L_0888BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08888000:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888008:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08888020u);
    ctx.gpr[5] = (0u | 23u);
    goto L_088888D8;
L_08888020:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888040;
      }
      goto L_08888028;
    }
L_08888028:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1540), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23248));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1536), ctx.gpr[4]);
    goto L_08888040;
L_08888040:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888050:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1540), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888058:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1552), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888060:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08888088;
      }
      goto L_0888806C;
    }
L_0888806C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888088;
      }
      goto L_08888078;
    }
L_08888078:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888088;
      }
      goto L_08888084;
    }
L_08888084:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08888088;
L_08888088:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08888180;
      }
      goto L_088880B4;
    }
L_088880B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 112 ? 1u : 0u);
      if (branch_taken) {
          goto L_08888180;
      }
      goto L_088880C0;
    }
L_088880C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888180;
      }
      goto L_088880C8;
    }
L_088880C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1400)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888180;
      }
      goto L_088880D8;
    }
L_088880D8:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x088880E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 548u, 0x08986064u>(ctx, &aot_mem) && ctx.pc == 0x088880E4u) goto L_088880E4;
    return;
L_088880E4:
    ctx.gpr[31] = (0x088880ECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem) && ctx.pc == 0x088880ECu) goto L_088880EC;
    return;
L_088880EC:
    ctx.gpr[17] = (0u | 0u);
    goto L_088880F0;
L_088880F0:
    ctx.gpr[31] = (0x088880F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x088880F8u) goto L_088880F8;
    return;
L_088880F8:
    ctx.gpr[31] = (0x08888100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 206u, 0x08934DB0u>(ctx, &aot_mem) && ctx.pc == 0x08888100u) goto L_08888100;
    return;
L_08888100:
    ctx.gpr[31] = (0x08888108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 57u, 0x0893441Cu>(ctx, &aot_mem) && ctx.pc == 0x08888108u) goto L_08888108;
    return;
L_08888108:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088880F0;
      }
      goto L_08888118;
    }
L_08888118:
    ctx.gpr[31] = (0x08888120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x08888120u) goto L_08888120;
    return;
L_08888120:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888150;
      }
      goto L_08888128;
    }
L_08888128:
    ctx.gpr[31] = (0x08888130u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 407u, 0x08AABB30u>(ctx, &aot_mem) && ctx.pc == 0x08888130u) goto L_08888130;
    return;
L_08888130:
    ctx.gpr[31] = (0x08888138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08888138u) goto L_08888138;
    return;
L_08888138:
    ctx.gpr[31] = (0x08888140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 206u, 0x08934DB0u>(ctx, &aot_mem) && ctx.pc == 0x08888140u) goto L_08888140;
    return;
L_08888140:
    ctx.gpr[31] = (0x08888148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 57u, 0x0893441Cu>(ctx, &aot_mem) && ctx.pc == 0x08888148u) goto L_08888148;
    return;
L_08888148:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888118;
      }
      goto L_08888150;
    }
L_08888150:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08888168u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 377u, 0x08AAB9A4u>(ctx, &aot_mem) && ctx.pc == 0x08888168u) goto L_08888168;
    return;
L_08888168:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x0888817Cu);
    ctx.gpr[7] = (0u | 1u);
    goto L_0888A144;
L_0888817C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08888180;
L_08888180:
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
L_08888198:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088881FC;
      }
      goto L_088881AC;
    }
L_088881AC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088881FC;
      }
      goto L_088881B8;
    }
L_088881B8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1400)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088881FC;
      }
      goto L_088881C8;
    }
L_088881C8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088881F4;
      }
      goto L_088881D4;
    }
L_088881D4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25948), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 113u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 113u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088881F4;
L_088881F4:
    ctx.gpr[31] = (0x088881FCu);
    // nop
    goto L_0888A16C;
L_088881FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888208:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888827C;
      }
      goto L_08888220;
    }
L_08888220:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888827C;
      }
      goto L_0888822C;
    }
L_0888822C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1400)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888827C;
      }
      goto L_0888823C;
    }
L_0888823C:
    ctx.gpr[31] = (0x08888244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x08888244u) goto L_08888244;
    return;
L_08888244:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888274;
      }
      goto L_0888824C;
    }
L_0888824C:
    ctx.gpr[31] = (0x08888254u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem) && ctx.pc == 0x08888254u) goto L_08888254;
    return;
L_08888254:
    ctx.gpr[31] = (0x0888825Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x0888825Cu) goto L_0888825C;
    return;
L_0888825C:
    ctx.gpr[31] = (0x08888264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 206u, 0x08934DB0u>(ctx, &aot_mem) && ctx.pc == 0x08888264u) goto L_08888264;
    return;
L_08888264:
    ctx.gpr[31] = (0x0888826Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 57u, 0x0893441Cu>(ctx, &aot_mem) && ctx.pc == 0x0888826Cu) goto L_0888826C;
    return;
L_0888826C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888823C;
      }
      goto L_08888274;
    }
L_08888274:
    ctx.gpr[4] = (0u | 113u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0888827C;
L_0888827C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888828C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (0u | 110u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088882C8;
      }
      goto L_088882BC;
    }
L_088882BC:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1544), 0u);
    goto L_088882C8;
L_088882C8:
    ctx.gpr[4] = (0u | 109u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088882E0;
      }
      goto L_088882D4;
    }
L_088882D4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1548), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088882E4;
      }
      goto L_088882E0;
    }
L_088882E0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1548), static_cast<std::uint8_t>(0u));
    goto L_088882E4;
L_088882E4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1513), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888300;
      }
      goto L_088882F4;
    }
L_088882F4:
    ctx.gpr[31] = (0x088882FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x088882FCu) goto L_088882FC;
    return;
L_088882FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08888300;
L_08888300:
    ctx.gpr[31] = (0x08888308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem) && ctx.pc == 0x08888308u) goto L_08888308;
    return;
L_08888308:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888364;
      }
      goto L_08888310;
    }
L_08888310:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888835C;
      }
      goto L_08888318;
    }
L_08888318:
    ctx.gpr[31] = (0x08888320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x08888320u) goto L_08888320;
    return;
L_08888320:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888330;
      }
      goto L_08888328;
    }
L_08888328:
    ctx.gpr[31] = (0x08888330u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem) && ctx.pc == 0x08888330u) goto L_08888330;
    return;
L_08888330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888348;
      }
      goto L_0888833C;
    }
L_0888833C:
    ctx.gpr[31] = (0x08888344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08888344u) goto L_08888344;
    return;
L_08888344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08888348;
L_08888348:
    ctx.gpr[31] = (0x08888350u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 277u, 0x088B5BCCu>(ctx, &aot_mem) && ctx.pc == 0x08888350u) goto L_08888350;
    return;
L_08888350:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1513), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08888364;
      }
      goto L_0888835C;
    }
L_0888835C:
    ctx.gpr[18] = (0u | 111u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08888364;
L_08888364:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088883C4;
      }
      goto L_08888370;
    }
L_08888370:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 112 ? 1u : 0u);
      if (branch_taken) {
          goto L_088883C4;
      }
      goto L_0888837C;
    }
L_0888837C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088883C4;
      }
      goto L_08888384;
    }
L_08888384:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1399)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1400)));
      if (branch_taken) {
          goto L_08888398;
      }
      goto L_08888390;
    }
L_08888390:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088883C4;
      }
      goto L_08888398;
    }
L_08888398:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088883B0;
      }
      goto L_088883A0;
    }
L_088883A0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1410)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088883B0;
      }
      goto L_088883AC;
    }
L_088883AC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1410), static_cast<std::uint8_t>(0u));
    goto L_088883B0;
L_088883B0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1401), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088883C4;
      }
      goto L_088883BC;
    }
L_088883BC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1412), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088883C4;
L_088883C4:
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
L_088883E0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1399)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088883F8;
      }
      goto L_088883EC;
    }
L_088883EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1400)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888400;
      }
      goto L_088883F8;
    }
L_088883F8:
    ctx.gpr[5] = (0u | 113u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08888400;
L_08888400:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888408:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1380), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1384), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888418:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(1416));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888420:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888438:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08888448;
L_08888448:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1416)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08888464;
      }
      goto L_0888845C;
    }
L_0888845C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_08888464;
L_08888464:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08888448;
      }
      goto L_08888474;
    }
L_08888474:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888847C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1397)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 111u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08888524;
      }
      goto L_088884A0;
    }
L_088884A0:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x088884ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem) && ctx.pc == 0x088884ACu) goto L_088884AC;
    return;
L_088884AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088884C8;
      }
      goto L_088884B8;
    }
L_088884B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
      if (branch_taken) {
          goto L_088884D4;
      }
      goto L_088884C8;
    }
L_088884C8:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
    goto L_088884D4;
L_088884D4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0888850C;
      }
      goto L_088884DC;
    }
L_088884DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088884F0;
      }
      goto L_088884E8;
    }
L_088884E8:
    ctx.gpr[31] = (0x088884F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x088884F0u) goto L_088884F0;
    return;
L_088884F0:
    ctx.gpr[31] = (0x088884F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem) && ctx.pc == 0x088884F8u) goto L_088884F8;
    return;
L_088884F8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
      if (branch_taken) {
          goto L_0888850C;
      }
      goto L_08888504;
    }
L_08888504:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
    goto L_0888850C;
L_0888850C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08888524;
      }
      goto L_08888514;
    }
L_08888514:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888524;
      }
      goto L_0888851C;
    }
L_0888851C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08888524;
L_08888524:
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
L_0888853C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08888594;
      }
      goto L_08888548;
    }
L_08888548:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 113 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888594;
      }
      goto L_08888554;
    }
L_08888554:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1389), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08888590;
      }
      goto L_08888568;
    }
L_08888568:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1392), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08888594;
      }
      goto L_08888590;
    }
L_08888590:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1392), ctx.gpr[7]);
    goto L_08888594;
L_08888594:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888859C:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088885B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088886B4;
      }
      goto L_088885D4;
    }
L_088885D4:
    ctx.gpr[31] = (0x088885DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0888876C;
L_088885DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888694;
      }
      goto L_088885E4;
    }
L_088885E4:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x088885F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem) && ctx.pc == 0x088885F0u) goto L_088885F0;
    return;
L_088885F0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888674;
      }
      goto L_088885FC;
    }
L_088885FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08888608u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08889B04;
L_08888608:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08888620;
      }
      goto L_08888610;
    }
L_08888610:
    ctx.gpr[31] = (0x08888618u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08889C04;
L_08888618:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888640;
      }
      goto L_08888620;
    }
L_08888620:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[4] = (0u | 113u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08888638;
      }
      goto L_08888630;
    }
L_08888630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_08888638;
    }
L_08888638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 31u);
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_08888640;
    }
L_08888640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888654;
      }
      goto L_0888864C;
    }
L_0888864C:
    ctx.gpr[31] = (0x08888654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08888654u) goto L_08888654;
    return;
L_08888654:
    ctx.gpr[31] = (0x0888865Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem) && ctx.pc == 0x0888865Cu) goto L_0888865C;
    return;
L_0888865C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888866C;
      }
      goto L_08888664;
    }
L_08888664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 111u);
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_0888866C;
    }
L_0888866C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_08888674;
    }
L_08888674:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[4] = (0u | 113u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888868C;
      }
      goto L_08888684;
    }
L_08888684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_0888868C;
    }
L_0888868C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_08888694;
    }
L_08888694:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[4] = (0u | 113u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088886AC;
      }
      goto L_088886A4;
    }
L_088886A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_088886AC;
    }
L_088886AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_088886B4;
    }
L_088886B4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088886B8;
L_088886B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088886CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888754;
      }
      goto L_088886F4;
    }
L_088886F4:
    ctx.gpr[31] = (0x088886FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0888876C;
L_088886FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888750;
      }
      goto L_08888704;
    }
L_08888704:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08888710u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem) && ctx.pc == 0x08888710u) goto L_08888710;
    return;
L_08888710:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888754;
      }
      goto L_0888871C;
    }
L_0888871C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08888728u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08889B04;
L_08888728:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08888748;
      }
      goto L_08888730;
    }
L_08888730:
    ctx.gpr[31] = (0x08888738u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08889C04;
L_08888738:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888748;
      }
      goto L_08888740;
    }
L_08888740:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08888754;
      }
      goto L_08888748;
    }
L_08888748:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1396), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08888754;
      }
      goto L_08888750;
    }
L_08888750:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1396), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08888754;
L_08888754:
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
L_0888876C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08888784u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem) && ctx.pc == 0x08888784u) goto L_08888784;
    return;
L_08888784:
    ctx.gpr[31] = (0x0888878Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0888878Cu) goto L_0888878C;
    return;
L_0888878C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08888880;
      }
      goto L_08888794;
    }
L_08888794:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08888820;
      }
      goto L_088887A4;
    }
L_088887A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08888820;
      }
      goto L_088887B4;
    }
L_088887B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08888820;
      }
      goto L_088887C4;
    }
L_088887C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888820;
      }
      goto L_088887D4;
    }
L_088887D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888820;
      }
      goto L_088887E4;
    }
L_088887E4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888883C;
      }
      goto L_088887EC;
    }
L_088887EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888818;
      }
      goto L_08888800;
    }
L_08888800:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 180 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -938 ? 1u : 0u);
      if (branch_taken) {
          goto L_08888828;
      }
      goto L_08888810;
    }
L_08888810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 247 ? 1u : 0u);
      if (branch_taken) {
          goto L_08888854;
      }
      goto L_08888818;
    }
L_08888818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08888888;
      }
      goto L_08888820;
    }
L_08888820:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08888888;
      }
      goto L_08888828;
    }
L_08888828:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 178 ? 1u : 0u);
      if (branch_taken) {
          goto L_08888844;
      }
      goto L_08888830;
    }
L_08888830:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -939 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888878;
      }
      goto L_0888883C;
    }
L_0888883C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08888888;
      }
      goto L_08888844;
    }
L_08888844:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888883C;
      }
      goto L_0888884C;
    }
L_0888884C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888878;
      }
      goto L_08888854;
    }
L_08888854:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 251u);
      if (branch_taken) {
          goto L_08888870;
      }
      goto L_0888885C;
    }
L_0888885C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 246 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888883C;
      }
      goto L_08888868;
    }
L_08888868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888878;
      }
      goto L_08888870;
    }
L_08888870:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888883C;
      }
      goto L_08888878;
    }
L_08888878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08888888;
      }
      goto L_08888880;
    }
L_08888880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08888888;
      }
      goto L_08888888;
    }
L_08888888:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888898:
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088888D0;
      }
      goto L_088888A4;
    }
L_088888A4:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088888C4;
      }
      goto L_088888B8;
    }
L_088888B8:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088888C4;
L_088888C4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1416)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088888D0;
L_088888D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088888D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088888F4u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x088888F4u) goto L_088888F4;
    return;
L_088888F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888910;
      }
      goto L_088888FC;
    }
L_088888FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08888910;
      }
      goto L_08888908;
    }
L_08888908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08888914;
      }
      goto L_08888910;
    }
L_08888910:
    ctx.gpr[2] = (0u | 0u);
    goto L_08888914;
L_08888914:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888928:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888934:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08888954u);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x08888954u) goto L_08888954;
    return;
L_08888954:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888970;
      }
      goto L_08888960;
    }
L_08888960:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    ctx.gpr[5] = (0u | 111u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888980;
      }
      goto L_08888970;
    }
L_08888970:
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
        goto L_08888990;
    }
    goto L_08888978;
L_08888978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088889DC;
      }
      goto L_08888980;
    }
L_08888980:
    ctx.gpr[31] = (0x08888988u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0888847C;
L_08888988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888B4C;
      }
      goto L_08888990;
    }
L_08888990:
    ctx.gpr[5] = (0u | 111u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088889DC;
      }
      goto L_0888899C;
    }
L_0888899C:
    ctx.gpr[31] = (0x088889A4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem) && ctx.pc == 0x088889A4u) goto L_088889A4;
    return;
L_088889A4:
    ctx.gpr[31] = (0x088889ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x088889ACu) goto L_088889AC;
    return;
L_088889AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088889DC;
      }
      goto L_088889B4;
    }
L_088889B4:
    ctx.gpr[31] = (0x088889BCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem) && ctx.pc == 0x088889BCu) goto L_088889BC;
    return;
L_088889BC:
    ctx.gpr[31] = (0x088889C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x088889C4u) goto L_088889C4;
    return;
L_088889C4:
    ctx.gpr[31] = (0x088889CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 206u, 0x08934DB0u>(ctx, &aot_mem) && ctx.pc == 0x088889CCu) goto L_088889CC;
    return;
L_088889CC:
    ctx.gpr[31] = (0x088889D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 57u, 0x0893441Cu>(ctx, &aot_mem) && ctx.pc == 0x088889D4u) goto L_088889D4;
    return;
L_088889D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088889A4;
      }
      goto L_088889DC;
    }
L_088889DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1400)));
      if (branch_taken) {
          goto L_088889EC;
      }
      goto L_088889E4;
    }
L_088889E4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1402), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1405), static_cast<std::uint8_t>(0u));
    goto L_088889EC;
L_088889EC:
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08888A04;
    }
    goto L_088889F4;
L_088889F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08888B4C;
      }
      goto L_088889FC;
    }
L_088889FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888A14;
      }
      goto L_08888A04;
    }
L_08888A04:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888A8C;
      }
      goto L_08888A0C;
    }
L_08888A0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888B4C;
      }
      goto L_08888A14;
    }
L_08888A14:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[5] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_08888A34;
      }
      goto L_08888A28;
    }
L_08888A28:
    ctx.gpr[31] = (0x08888A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08888A30u) goto L_08888A30;
    return;
L_08888A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08888A34;
L_08888A34:
    ctx.gpr[31] = (0x08888A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem) && ctx.pc == 0x08888A3Cu) goto L_08888A3C;
    return;
L_08888A3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08888A48u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 627u, 0x08A06798u>(ctx, &aot_mem) && ctx.pc == 0x08888A48u) goto L_08888A48;
    return;
L_08888A48:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888A84;
      }
      goto L_08888A50;
    }
L_08888A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888A68;
      }
      goto L_08888A5C;
    }
L_08888A5C:
    ctx.gpr[31] = (0x08888A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08888A64u) goto L_08888A64;
    return;
L_08888A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08888A68;
L_08888A68:
    ctx.gpr[31] = (0x08888A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem) && ctx.pc == 0x08888A70u) goto L_08888A70;
    return;
L_08888A70:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08888A84u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 559u, 0x08A06360u>(ctx, &aot_mem) && ctx.pc == 0x08888A84u) goto L_08888A84;
    return;
L_08888A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888B4C;
      }
      goto L_08888A8C;
    }
L_08888A8C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[5] | ctx.gpr[18]);
      if (branch_taken) {
          goto L_08888AAC;
      }
      goto L_08888AA0;
    }
L_08888AA0:
    ctx.gpr[31] = (0x08888AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08888AA8u) goto L_08888AA8;
    return;
L_08888AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08888AAC;
L_08888AAC:
    ctx.gpr[31] = (0x08888AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem) && ctx.pc == 0x08888AB4u) goto L_08888AB4;
    return;
L_08888AB4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08888AC0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 627u, 0x08A06798u>(ctx, &aot_mem) && ctx.pc == 0x08888AC0u) goto L_08888AC0;
    return;
L_08888AC0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888B44;
      }
      goto L_08888AC8;
    }
L_08888AC8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08888AD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0888876C;
L_08888AD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888B44;
      }
      goto L_08888AE0;
    }
L_08888AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888AF8;
      }
      goto L_08888AEC;
    }
L_08888AEC:
    ctx.gpr[31] = (0x08888AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08888AF4u) goto L_08888AF4;
    return;
L_08888AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08888AF8;
L_08888AF8:
    ctx.gpr[31] = (0x08888B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem) && ctx.pc == 0x08888B00u) goto L_08888B00;
    return;
L_08888B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08888B18;
      }
      goto L_08888B0C;
    }
L_08888B0C:
    ctx.gpr[31] = (0x08888B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08888B14u) goto L_08888B14;
    return;
L_08888B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08888B18;
L_08888B18:
    ctx.gpr[31] = (0x08888B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem) && ctx.pc == 0x08888B20u) goto L_08888B20;
    return;
L_08888B20:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08888B2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0888981C;
L_08888B2C:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08888B44u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 377u, 0x08AAB9A4u>(ctx, &aot_mem) && ctx.pc == 0x08888B44u) goto L_08888B44;
    return;
L_08888B44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888B4C;
      }
      goto L_08888B4C;
    }
L_08888B4C:
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
L_08888B64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 5u));
    ctx.gpr[9] = (ctx.gpr[9] >> 27u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 5u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08888BBC;
      }
      goto L_08888BB4;
    }
L_08888BB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08888BBC;
      }
      goto L_08888BBC;
    }
L_08888BBC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08888C24;
      }
      goto L_08888BD0;
    }
L_08888BD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x08888BE8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08888BE8u) goto L_08888BE8;
    return;
L_08888BE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08888C24;
      }
      goto L_08888C00;
    }
L_08888C00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x08888C14u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08888C14u) goto L_08888C14;
    return;
L_08888C14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08888C24;
L_08888C24:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888C64;
      }
      goto L_08888C34;
    }
L_08888C34:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
        goto L_08888C5C;
    }
    goto L_08888C40;
L_08888C40:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    goto L_08888C5C;
L_08888C5C:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888C34;
      }
      goto L_08888C64;
    }
L_08888C64:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08888CA0;
      }
      goto L_08888C74;
    }
L_08888C74:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C98;
      }
      goto L_08888C80;
    }
L_08888C80:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    goto L_08888C98;
L_08888C98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888CDC;
      }
      goto L_08888CA0;
    }
L_08888CA0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888CDC;
      }
      goto L_08888CAC;
    }
L_08888CAC:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08888CD4;
    }
    goto L_08888CB8;
L_08888CB8:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08888CD4;
L_08888CD4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888CAC;
      }
      goto L_08888CDC;
    }
L_08888CDC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888D24;
      }
      goto L_08888CE4;
    }
L_08888CE4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888D24;
      }
      goto L_08888CF4;
    }
L_08888CF4:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
        goto L_08888D1C;
    }
    goto L_08888D00;
L_08888D00:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_08888D1C;
L_08888D1C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888CF4;
      }
      goto L_08888D24;
    }
L_08888D24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888D40;
      }
      goto L_08888D34;
    }
L_08888D34:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    goto L_08888D38;
L_08888D38:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888D38;
      }
      goto L_08888D40;
    }
L_08888D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888D54;
      }
      goto L_08888D4C;
    }
L_08888D4C:
    ctx.gpr[31] = (0x08888D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08888D54u) goto L_08888D54;
    return;
L_08888D54:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_08888D84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08888DB4u);
    // nop
    goto L_08888050;
L_08888DB4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1532)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08888E0C;
      }
      goto L_08888DD8;
    }
L_08888DD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
        goto L_08888E00;
    }
    goto L_08888DE4;
L_08888DE4:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    goto L_08888E00;
L_08888E00:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1528), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08888E30;
      }
      goto L_08888E0C;
    }
L_08888E0C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1524));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08888E2Cu);
    ctx.gpr[9] = (0u | 1u);
    goto L_08888B64;
L_08888E2C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08888E30;
L_08888E30:
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
L_08888E4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08888F14;
      }
      goto L_08888E78;
    }
L_08888E78:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08888E84u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem) && ctx.pc == 0x08888E84u) goto L_08888E84;
    return;
L_08888E84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888F04;
      }
      goto L_08888E8C;
    }
L_08888E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08888EF0;
      }
      goto L_08888E9C;
    }
L_08888E9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 5u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] >> 27u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 5u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888EF0;
      }
      goto L_08888EC8;
    }
L_08888EC8:
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
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888EC8;
      }
      goto L_08888EF0;
    }
L_08888EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1528), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08888F18;
      }
      goto L_08888F04;
    }
L_08888F04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08888E78;
      }
      goto L_08888F14;
    }
L_08888F14:
    ctx.gpr[2] = (0u | 0u);
    goto L_08888F18;
L_08888F18:
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
L_08888F30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08888F48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08888050;
L_08888F48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 5u));
    ctx.gpr[7] = (ctx.gpr[7] >> 27u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 5u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888F98;
      }
      goto L_08888F70;
    }
L_08888F70:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888F70;
      }
      goto L_08888F98;
    }
L_08888F98:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888FB4;
      }
      goto L_08888FA8;
    }
L_08888FA8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_08888FAC;
L_08888FAC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888FAC;
      }
      goto L_08888FB4;
    }
L_08888FB4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1528), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888FC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08889118;
      }
      goto L_08888FF0;
    }
L_08888FF0:
    ctx.gpr[31] = (0x08888FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x08888FF8u) goto L_08888FF8;
    return;
L_08888FF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888907C;
      }
      goto L_08889000;
    }
L_08889000:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    ctx.gpr[5] = (0u | 113u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 113u);
      if (branch_taken) {
          goto L_08889044;
      }
      goto L_08889010;
    }
L_08889010:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x0888903Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_0888A144;
L_0888903C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088891E4;
      }
      goto L_08889044;
    }
L_08889044:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1403))))));
      if (branch_taken) {
          goto L_08889058;
      }
      goto L_08889054;
    }
L_08889054:
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    goto L_08889058;
L_08889058:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08889074u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 377u, 0x08AAB9A4u>(ctx, &aot_mem) && ctx.pc == 0x08889074u) goto L_08889074;
    return;
L_08889074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088891E4;
      }
      goto L_0888907C;
    }
L_0888907C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1403))))));
    ctx.gpr[5] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08889098u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 442u, 0x088CA414u>(ctx, &aot_mem) && ctx.pc == 0x08889098u) goto L_08889098;
    return;
L_08889098:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088890E0;
      }
      goto L_088890A0;
    }
L_088890A0:
    ctx.gpr[31] = (0x088890A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 442u, 0x088CA414u>(ctx, &aot_mem) && ctx.pc == 0x088890A8u) goto L_088890A8;
    return;
L_088890A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088890E0;
      }
      goto L_088890B0;
    }
L_088890B0:
    ctx.gpr[31] = (0x088890B8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 442u, 0x088CA414u>(ctx, &aot_mem) && ctx.pc == 0x088890B8u) goto L_088890B8;
    return;
L_088890B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088890E0;
      }
      goto L_088890C0;
    }
L_088890C0:
    ctx.gpr[31] = (0x088890C8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 442u, 0x088CA414u>(ctx, &aot_mem) && ctx.pc == 0x088890C8u) goto L_088890C8;
    return;
L_088890C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088890E0;
      }
      goto L_088890D0;
    }
L_088890D0:
    ctx.gpr[31] = (0x088890D8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 442u, 0x088CA414u>(ctx, &aot_mem) && ctx.pc == 0x088890D8u) goto L_088890D8;
    return;
L_088890D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088890FC;
      }
      goto L_088890E0;
    }
L_088890E0:
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088890F4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0888A144;
L_088890F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088891E4;
      }
      goto L_088890FC;
    }
L_088890FC:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x08889110u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0888A144;
L_08889110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088891E4;
      }
      goto L_08889118;
    }
L_08889118:
    ctx.gpr[31] = (0x08889120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x08889120u) goto L_08889120;
    return;
L_08889120:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889188;
      }
      goto L_08889128;
    }
L_08889128:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    ctx.gpr[5] = (0u | 113u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889178;
      }
      goto L_08889138;
    }
L_08889138:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25948)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889178;
      }
      goto L_08889144;
    }
L_08889144:
    ctx.gpr[31] = (0x0888914Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08889CF0;
L_0888914C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23248));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25948), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08889178;
L_08889178:
    ctx.gpr[31] = (0x08889180u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem) && ctx.pc == 0x08889180u) goto L_08889180;
    return;
L_08889180:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1520), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088891E4;
      }
      goto L_08889188;
    }
L_08889188:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25948), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 113u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1403))))));
      if (branch_taken) {
          goto L_088891B0;
      }
      goto L_088891AC;
    }
L_088891AC:
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    goto L_088891B0;
L_088891B0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088891CCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 377u, 0x08AAB9A4u>(ctx, &aot_mem) && ctx.pc == 0x088891CCu) goto L_088891CC;
    return;
L_088891CC:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088891E0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0888A144;
L_088891E0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088891E4;
L_088891E4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08889200:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08889214u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08889D2C;
L_08889214:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888922C;
      }
      goto L_0888921C;
    }
L_0888921C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
    ctx.gpr[5] = (0u | 113u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889258;
      }
      goto L_0888922C;
    }
L_0888922C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889464;
      }
      goto L_0888923C;
    }
L_0888923C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-23288)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_08889260;
    }
L_08889260:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8002)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088892C4;
      }
      goto L_0888926C;
    }
L_0888926C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25936));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17796u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088892C4;
      }
      goto L_088892B8;
    }
L_088892B8:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_088892C4;
    }
L_088892C4:
    ctx.gpr[31] = (0x088892CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 278u, 0x08AF99F8u>(ctx, &aot_mem) && ctx.pc == 0x088892CCu) goto L_088892CC;
    return;
L_088892CC:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088892F4;
      }
      goto L_088892D8;
    }
L_088892D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25916)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088892FC;
      }
      goto L_088892E4;
    }
L_088892E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25916)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25916), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088892FC;
      }
      goto L_088892F4;
    }
L_088892F4:
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25916), ctx.gpr[4]);
    goto L_088892FC;
L_088892FC:
    ctx.gpr[31] = (0x08889304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 278u, 0x08AF99F8u>(ctx, &aot_mem) && ctx.pc == 0x08889304u) goto L_08889304;
    return;
L_08889304:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08889368;
      }
      goto L_0888930C;
    }
L_0888930C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25916)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889368;
      }
      goto L_08889318;
    }
L_08889318:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    ctx.gpr[4] = (0u | 5u);
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
        goto L_08889338;
    }
    goto L_08889328;
L_08889328:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888935C;
      }
      goto L_08889334;
    }
L_08889334:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    goto L_08889338;
L_08889338:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888935C;
      }
      goto L_08889350;
    }
L_08889350:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08889414;
      }
      goto L_0888935C;
    }
L_0888935C:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08889414;
      }
      goto L_08889368;
    }
L_08889368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25916)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889414;
      }
      goto L_08889374;
    }
L_08889374:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2828)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_088893CC;
      }
      goto L_08889380;
    }
L_08889380:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
        goto L_0888939C;
    }
    goto L_0888938C;
L_0888938C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088893C0;
      }
      goto L_08889398;
    }
L_08889398:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    goto L_0888939C;
L_0888939C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088893C0;
      }
      goto L_088893B4;
    }
L_088893B4:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08889414;
      }
      goto L_088893C0;
    }
L_088893C0:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08889414;
      }
      goto L_088893CC;
    }
L_088893CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
        goto L_088893E8;
    }
    goto L_088893D8;
L_088893D8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888940C;
      }
      goto L_088893E4;
    }
L_088893E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    goto L_088893E8;
L_088893E8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888940C;
      }
      goto L_08889400;
    }
L_08889400:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08889414;
      }
      goto L_0888940C;
    }
L_0888940C:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08889414;
L_08889414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_0888941C;
    }
L_0888941C:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_08889428;
    }
L_08889428:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_08889434;
    }
L_08889434:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_08889440;
    }
L_08889440:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_0888944C;
    }
L_0888944C:
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_08889458;
    }
L_08889458:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_08889464;
    }
L_08889464:
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0888946C;
L_0888946C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888947C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889484:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x088894ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 866u, 0x08887C88u>(ctx, &aot_mem) && ctx.pc == 0x088894ACu) goto L_088894AC;
    return;
L_088894AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8002)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08889604;
      }
      goto L_088894B8;
    }
L_088894B8:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25936));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08889604;
      }
      goto L_08889510;
    }
L_08889510:
    ctx.gpr[4] = (17796u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17150u << 16u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088895D4;
      }
      goto L_08889530;
    }
L_08889530:
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 127u);
      if (branch_taken) {
          goto L_08889578;
      }
      goto L_08889548;
    }
L_08889548:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8002)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088897C8;
      }
      goto L_08889578;
    }
L_08889578:
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16948u << 16u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8002)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088897C8;
      }
      goto L_088895D4;
    }
L_088895D4:
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[4] = (17026u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088897C8;
      }
      goto L_08889604;
    }
L_08889604:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889618;
      }
      goto L_0888960C;
    }
L_0888960C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08889698;
      }
      goto L_08889618;
    }
L_08889618:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892)));
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08889698;
      }
      goto L_08889634;
    }
L_08889634:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1398)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16277u << 16u);
      if (branch_taken) {
          goto L_0888966C;
      }
      goto L_08889644;
    }
L_08889644:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1398)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16277u << 16u);
      if (branch_taken) {
          goto L_0888966C;
      }
      goto L_08889654;
    }
L_08889654:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08889680;
      }
      goto L_0888966C;
    }
L_0888966C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892)));
    ctx.gpr[4] = (ctx.gpr[4] | 21845u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08889680;
L_08889680:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08889698;
      }
      goto L_08889694;
    }
L_08889694:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08889698;
L_08889698:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1397)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088896FC;
      }
      goto L_088896A8;
    }
L_088896A8:
    ctx.gpr[31] = (0x088896B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 278u, 0x08AF99F8u>(ctx, &aot_mem) && ctx.pc == 0x088896B0u) goto L_088896B0;
    return;
L_088896B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17036u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088897B8;
      }
      goto L_088896EC;
    }
L_088896EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088897B8;
      }
      goto L_088896FC;
    }
L_088896FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1397)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888975C;
      }
      goto L_0888970C;
    }
L_0888970C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25916)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17036u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088897B8;
      }
      goto L_0888974C;
    }
L_0888974C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088897B8;
      }
      goto L_0888975C;
    }
L_0888975C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1397)));
    ctx.gpr[5] = (0u | 18u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892)));
        goto L_088897A8;
    }
    goto L_0888976C;
L_0888976C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892)));
    ctx.gpr[4] = (16025u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088897B8;
      }
      goto L_088897A8;
    }
L_088897A8:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088897B8;
L_088897B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088897C8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08889F48;
L_088897C8:
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
L_088897E0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    goto L_088897E8;
L_088897E8:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 53 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088897E8;
      }
      goto L_08889814;
    }
L_08889814:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888981C:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 5u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(20000));
      if (branch_taken) {
          goto L_08889884;
      }
      goto L_08889860;
    }
L_08889860:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 29 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889884;
      }
      goto L_0888986C;
    }
L_0888986C:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08889894;
      }
      goto L_08889884;
    }
L_08889884:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889894;
      }
      goto L_08889890;
    }
L_08889890:
    ctx.gpr[2] = (0u | 0u);
    goto L_08889894;
L_08889894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888989C;
      }
      goto L_0888989C;
    }
L_0888989C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088898A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x088898C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem) && ctx.pc == 0x088898C4u) goto L_088898C4;
    return;
L_088898C4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889980;
      }
      goto L_088898D0;
    }
L_088898D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088898DCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08889B04;
L_088898DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889914;
      }
      goto L_088898E4;
    }
L_088898E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088898F0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08889C04;
L_088898F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888990C;
      }
      goto L_088898F8;
    }
L_088898F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888991C;
      }
      goto L_08889904;
    }
L_08889904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889924;
      }
      goto L_0888990C;
    }
L_0888990C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_08889988;
      }
      goto L_08889914;
    }
L_08889914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08889988;
      }
      goto L_0888991C;
    }
L_0888991C:
    ctx.gpr[31] = (0x08889924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08889924u) goto L_08889924;
    return;
L_08889924:
    ctx.gpr[31] = (0x0888992Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem) && ctx.pc == 0x0888992Cu) goto L_0888992C;
    return;
L_0888992C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889960;
      }
      goto L_08889934;
    }
L_08889934:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    ctx.gpr[5] = (0u | 111u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889958;
      }
      goto L_08889944;
    }
L_08889944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889968;
      }
      goto L_08889950;
    }
L_08889950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889970;
      }
      goto L_08889958;
    }
L_08889958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
      if (branch_taken) {
          goto L_08889988;
      }
      goto L_08889960;
    }
L_08889960:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 111u);
      if (branch_taken) {
          goto L_08889988;
      }
      goto L_08889968;
    }
L_08889968:
    ctx.gpr[31] = (0x08889970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08889970u) goto L_08889970;
    return;
L_08889970:
    ctx.gpr[31] = (0x08889978u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem) && ctx.pc == 0x08889978u) goto L_08889978;
    return;
L_08889978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08889988;
      }
      goto L_08889980;
    }
L_08889980:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08889988;
      }
      goto L_08889988;
    }
L_08889988:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888999C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x088899BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem) && ctx.pc == 0x088899BCu) goto L_088899BC;
    return;
L_088899BC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889AE8;
      }
      goto L_088899C8;
    }
L_088899C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088899D4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08889B04;
L_088899D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889A0C;
      }
      goto L_088899DC;
    }
L_088899DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088899E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08889C04;
L_088899E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889A04;
      }
      goto L_088899F0;
    }
L_088899F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889A14;
      }
      goto L_088899FC;
    }
L_088899FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889A1C;
      }
      goto L_08889A04;
    }
L_08889A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_08889AF0;
      }
      goto L_08889A0C;
    }
L_08889A0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08889AF0;
      }
      goto L_08889A14;
    }
L_08889A14:
    ctx.gpr[31] = (0x08889A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08889A1Cu) goto L_08889A1C;
    return;
L_08889A1C:
    ctx.gpr[31] = (0x08889A24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem) && ctx.pc == 0x08889A24u) goto L_08889A24;
    return;
L_08889A24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889A40;
      }
      goto L_08889A2C;
    }
L_08889A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
        goto L_08889A48;
    }
    goto L_08889A38;
L_08889A38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889AAC;
      }
      goto L_08889A40;
    }
L_08889A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 111u);
      if (branch_taken) {
          goto L_08889AF0;
      }
      goto L_08889A48;
    }
L_08889A48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889A80;
      }
      goto L_08889A64;
    }
L_08889A64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889A64;
      }
      goto L_08889A80;
    }
L_08889A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
        goto L_08889A98;
    }
    goto L_08889A8C;
L_08889A8C:
    ctx.gpr[31] = (0x08889A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08889A94u) goto L_08889A94;
    return;
L_08889A94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    goto L_08889A98;
L_08889A98:
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[31] = (0x08889AA8u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 680u, 0x089C6F68u>(ctx, &aot_mem) && ctx.pc == 0x08889AA8u) goto L_08889AA8;
    return;
L_08889AA8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    goto L_08889AAC;
L_08889AAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    ctx.gpr[5] = (0u | 111u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889AE0;
      }
      goto L_08889ABC;
    }
L_08889ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889AD0;
      }
      goto L_08889AC8;
    }
L_08889AC8:
    ctx.gpr[31] = (0x08889AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08889AD0u) goto L_08889AD0;
    return;
L_08889AD0:
    ctx.gpr[31] = (0x08889AD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem) && ctx.pc == 0x08889AD8u) goto L_08889AD8;
    return;
L_08889AD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08889AF0;
      }
      goto L_08889AE0;
    }
L_08889AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
      if (branch_taken) {
          goto L_08889AF0;
      }
      goto L_08889AE8;
    }
L_08889AE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08889AF0;
      }
      goto L_08889AF0;
    }
L_08889AF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889B04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 219 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 275 ? 1u : 0u);
      if (branch_taken) {
          goto L_08889B88;
      }
      goto L_08889B14;
    }
L_08889B14:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 189 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 207 ? 1u : 0u);
      if (branch_taken) {
          goto L_08889B34;
      }
      goto L_08889B20;
    }
L_08889B20:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-992));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889B2C;
    }
L_08889B2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08889BFC;
      }
      goto L_08889B34;
    }
L_08889B34:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 195 ? 1u : 0u);
      if (branch_taken) {
          goto L_08889B74;
      }
      goto L_08889B3C;
    }
L_08889B3C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-189));
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889B44;
    }
L_08889B44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889B4C;
    }
L_08889B4C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889B54;
    }
L_08889B54:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889B5C;
    }
L_08889B5C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889B64;
    }
L_08889B64:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889B6C;
    }
L_08889B6C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889B74;
    }
L_08889B74:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 208 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889B80;
    }
L_08889B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08889BFC;
      }
      goto L_08889B88;
    }
L_08889B88:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 279 ? 1u : 0u);
      if (branch_taken) {
          goto L_08889BD0;
      }
      goto L_08889B90;
    }
L_08889B90:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 261 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 235 ? 1u : 0u);
      if (branch_taken) {
          goto L_08889BBC;
      }
      goto L_08889B9C;
    }
L_08889B9C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-219));
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889BA4;
    }
L_08889BA4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-23216)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889BBC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 262 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889BC8;
    }
L_08889BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889BD0;
    }
L_08889BD0:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 280 ? 1u : 0u);
        goto L_08889BEC;
    }
    goto L_08889BD8;
L_08889BD8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 276 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889BE4;
    }
L_08889BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889BEC;
    }
L_08889BEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889BF4;
    }
L_08889BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889BFC;
    }
L_08889BFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889C04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-937));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08889C30;
      }
      goto L_08889C14;
    }
L_08889C14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8001)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889C28;
      }
      goto L_08889C20;
    }
L_08889C20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08889C34;
      }
      goto L_08889C28;
    }
L_08889C28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08889C34;
      }
      goto L_08889C30;
    }
L_08889C30:
    ctx.gpr[2] = (0u | 0u);
    goto L_08889C34;
L_08889C34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889C3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08889C70;
      }
      goto L_08889C64;
    }
L_08889C64:
    ctx.gpr[31] = (0x08889C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08889C6Cu) goto L_08889C6C;
    return;
L_08889C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08889C70;
L_08889C70:
    ctx.gpr[31] = (0x08889C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem) && ctx.pc == 0x08889C78u) goto L_08889C78;
    return;
L_08889C78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889CD0;
      }
      goto L_08889C80;
    }
L_08889C80:
    ctx.gpr[4] = (2244u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27840));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08889CA4;
      }
      goto L_08889C90;
    }
L_08889C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889CAC;
      }
      goto L_08889C9C;
    }
L_08889C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889CB8;
      }
      goto L_08889CA4;
    }
L_08889CA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08889CD8;
      }
      goto L_08889CAC;
    }
L_08889CAC:
    ctx.gpr[31] = (0x08889CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x08889CB4u) goto L_08889CB4;
    return;
L_08889CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08889CB8;
L_08889CB8:
    ctx.gpr[31] = (0x08889CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 483u, 0x088B693Cu>(ctx, &aot_mem) && ctx.pc == 0x08889CC0u) goto L_08889CC0;
    return;
L_08889CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08889CD8;
      }
      goto L_08889CD0;
    }
L_08889CD0:
    ctx.gpr[2] = (ctx.gpr[17] ^ ctx.gpr[16]);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08889CD8;
L_08889CD8:
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
L_08889CF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889CF8:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889D24;
      }
      goto L_08889D04;
    }
L_08889D04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08889D20;
      }
      goto L_08889D14;
    }
L_08889D14:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08889D20;
L_08889D20:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08889D24;
L_08889D24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889D2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08889D40u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08889D40u) goto L_08889D40;
    return;
L_08889D40:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889D54;
      }
      goto L_08889D4C;
    }
L_08889D4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08889F38;
      }
      goto L_08889D54;
    }
L_08889D54:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 5u));
    ctx.gpr[6] = (ctx.gpr[6] >> 27u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 5u));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25888));
      if (branch_taken) {
          goto L_08889F34;
      }
      goto L_08889D8C;
    }
L_08889D8C:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    goto L_08889D94;
L_08889D94:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 5u));
    ctx.gpr[9] = (ctx.gpr[9] >> 27u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 5u));
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
        goto L_08889DEC;
    }
    goto L_08889DBC;
L_08889DBC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08889DD0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem) && ctx.pc == 0x08889DD0u) goto L_08889DD0;
    return;
L_08889DD0:
    ctx.gpr[31] = (0x08889DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem) && ctx.pc == 0x08889DD8u) goto L_08889DD8;
    return;
L_08889DD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    goto L_08889DEC;
L_08889DEC:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 5u));
    ctx.gpr[9] = (ctx.gpr[9] >> 27u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 5u));
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
        goto L_08889E74;
    }
    goto L_08889E3C;
L_08889E3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08889E54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem) && ctx.pc == 0x08889E54u) goto L_08889E54;
    return;
L_08889E54:
    ctx.gpr[31] = (0x08889E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem) && ctx.pc == 0x08889E5Cu) goto L_08889E5C;
    return;
L_08889E5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    goto L_08889E74;
L_08889E74:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
        goto L_08889F0C;
    }
    goto L_08889E94;
L_08889E94:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 5u));
    ctx.gpr[8] = (ctx.gpr[8] >> 27u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 5u));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1456), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08889EDC;
      }
      goto L_08889EC0;
    }
L_08889EC0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[31] = (0x08889ECCu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem) && ctx.pc == 0x08889ECCu) goto L_08889ECC;
    return;
L_08889ECC:
    ctx.gpr[31] = (0x08889ED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem) && ctx.pc == 0x08889ED4u) goto L_08889ED4;
    return;
L_08889ED4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08889EDC;
L_08889EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1472));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1488), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1492), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08889F38;
      }
      goto L_08889F0C;
    }
L_08889F0C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 5u));
    ctx.gpr[9] = (ctx.gpr[9] >> 27u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 5u));
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08889D94;
      }
      goto L_08889F34;
    }
L_08889F34:
    ctx.gpr[2] = (0u | 0u);
    goto L_08889F38;
L_08889F38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889F48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08889F6Cu);
    ctx.gpr[18] = (0u | 70u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08889F6Cu) goto L_08889F6C;
    return;
L_08889F6C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889F98;
      }
      goto L_08889F78;
    }
L_08889F78:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1456)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889FA0;
      }
      goto L_08889F90;
    }
L_08889F90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A0A0;
      }
      goto L_08889F98;
    }
L_08889F98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0888A0C0;
      }
      goto L_08889FA0;
    }
L_08889FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1492)));
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08889FC4;
      }
      goto L_08889FB0;
    }
L_08889FB0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08889FC4;
      }
      goto L_08889FC0;
    }
L_08889FC0:
    ctx.gpr[18] = (0u | 127u);
    goto L_08889FC4;
L_08889FC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1398)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1492)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A01C;
      }
      goto L_08889FD4;
    }
L_08889FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1492)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1472));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1488)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0888A028;
      }
      goto L_0888A014;
    }
L_0888A014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1488)));
      if (branch_taken) {
          goto L_0888A034;
      }
      goto L_0888A01C;
    }
L_0888A01C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0888A0C0;
      }
      goto L_0888A028;
    }
L_0888A028:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1488), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1488)));
    goto L_0888A034;
L_0888A034:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
      if (branch_taken) {
          goto L_0888A064;
      }
      goto L_0888A058;
    }
L_0888A058:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_0888A064;
L_0888A064:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 40u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A098;
      }
      goto L_0888A094;
    }
L_0888A094:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_0888A098;
L_0888A098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0888A0C0;
      }
      goto L_0888A0A0;
    }
L_0888A0A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1504)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0888A0BC;
      }
      goto L_0888A0AC;
    }
L_0888A0AC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1504)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1504), ctx.gpr[4]);
    goto L_0888A0BC;
L_0888A0BC:
    ctx.gpr[2] = (0u | 0u);
    goto L_0888A0C0;
L_0888A0C0:
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
L_0888A0D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8332), ctx.gpr[16]);
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888A104u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23376));
    ctx.pc = 0x08B734C4u;
    return;
L_0888A104:
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8336), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0888A124u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23356));
    ctx.pc = 0x08B7341Cu;
    return;
L_0888A124:
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8340), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23248));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A144:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888A158u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    goto L_0888A164;
L_0888A158:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A164:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25912), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A16C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888A17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 414u, 0x08AABBB4u>(ctx, &aot_mem) && ctx.pc == 0x0888A17Cu) goto L_0888A17C;
    return;
L_0888A17C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A18C;
      }
      goto L_0888A184;
    }
L_0888A184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A1A4;
      }
      goto L_0888A18C;
    }
L_0888A18C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8336)));
    ctx.gpr[31] = (0x0888A198u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B73424u;
    return;
L_0888A198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8356)));
    ctx.gpr[31] = (0x0888A1A4u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08B73424u;
    return;
L_0888A1A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A1B0:
    ctx.gpr[4] = (2244u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27968))))));
    ctx.gpr[5] = (0u | 82u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27968));
      if (branch_taken) {
          goto L_0888A1F0;
      }
      goto L_0888A1C4;
    }
L_0888A1C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (0u | 73u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888A1F0;
      }
      goto L_0888A1D4;
    }
L_0888A1D4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (0u | 70u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A1F0;
      }
      goto L_0888A1E4;
    }
L_0888A1E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A1F0;
      }
      goto L_0888A1F0;
    }
L_0888A1F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A1F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A200:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A208:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1008));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    ctx.gpr[5] = (0u | 111u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A240;
      }
      goto L_0888A230;
    }
L_0888A230:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888A248;
      }
      goto L_0888A238;
    }
L_0888A238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A288;
      }
      goto L_0888A240;
    }
L_0888A240:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0888A2FC;
      }
      goto L_0888A248;
    }
L_0888A248:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A288;
      }
      goto L_0888A250;
    }
L_0888A250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_0888A278;
      }
      goto L_0888A260;
    }
L_0888A260:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888A270u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x0888A270u) goto L_0888A270;
    return;
L_0888A270:
    ctx.gpr[31] = (0x0888A278u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25904));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0888A278u) goto L_0888A278;
    return;
L_0888A278:
    ctx.gpr[31] = (0x0888A280u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem) && ctx.pc == 0x0888A280u) goto L_0888A280;
    return;
L_0888A280:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A29C;
      }
      goto L_0888A288;
    }
L_0888A288:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888A2A4;
      }
      goto L_0888A294;
    }
L_0888A294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A2B8;
      }
      goto L_0888A29C;
    }
L_0888A29C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0888A2FC;
      }
      goto L_0888A2A4;
    }
L_0888A2A4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A2B8;
      }
      goto L_0888A2AC;
    }
L_0888A2AC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1456)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A2CC;
      }
      goto L_0888A2B8;
    }
L_0888A2B8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 53 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888A2D4;
      }
      goto L_0888A2C4;
    }
L_0888A2C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A2DC;
      }
      goto L_0888A2CC;
    }
L_0888A2CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0888A2FC;
      }
      goto L_0888A2D4;
    }
L_0888A2D4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A2F0;
      }
      goto L_0888A2DC;
    }
L_0888A2DC:
    ctx.gpr[5] = (0u | 109u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A2F8;
      }
      goto L_0888A2E8;
    }
L_0888A2E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0888A2FC;
      }
      goto L_0888A2F0;
    }
L_0888A2F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0888A2FC;
      }
      goto L_0888A2F8;
    }
L_0888A2F8:
    ctx.gpr[2] = (0u | 0u);
    goto L_0888A2FC;
L_0888A2FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A660;
      }
      goto L_0888A33C;
    }
L_0888A33C:
    ctx.gpr[31] = (0x0888A344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0888A344u) goto L_0888A344;
    return;
L_0888A344:
    ctx.gpr[31] = (0x0888A34Cu);
    // nop
    goto L_0888A0D8;
L_0888A34C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0888A35Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23336));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x0888A35Cu) goto L_0888A35C;
    return;
L_0888A35C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A388;
      }
      goto L_0888A368;
    }
L_0888A368:
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 18432u);
    ctx.gpr[31] = (0x0888A37Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23432));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x0888A37Cu) goto L_0888A37C;
    return;
L_0888A37C:
    ctx.gpr[31] = (0x0888A384u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x0888A384u) goto L_0888A384;
    return;
L_0888A384:
    ctx.gpr[17] = (0u | 1u);
    goto L_0888A388;
L_0888A388:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 112 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1380), static_cast<std::uint8_t>(0u));
        goto L_0888A5C8;
    }
    goto L_0888A398;
L_0888A398:
    ctx.gpr[31] = (0x0888A3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0888A3A0u) goto L_0888A3A0;
    return;
L_0888A3A0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25836)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25840)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0888A3B4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A3B4u) goto L_0888A3B4;
    return;
L_0888A3B4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] << 10u);
      if (branch_taken) {
          goto L_0888A47C;
      }
      goto L_0888A3D0;
    }
L_0888A3D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (17235u << 16u);
      if (branch_taken) {
          goto L_0888A47C;
      }
      goto L_0888A3DC;
    }
L_0888A3DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18756));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (20527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (18271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (12101u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (17490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (47u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-552));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0888A440u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem) && ctx.pc == 0x0888A440u) goto L_0888A440;
    return;
L_0888A440:
    ctx.gpr[31] = (0x0888A448u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x0888A448u) goto L_0888A448;
    return;
L_0888A448:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A47C;
      }
      goto L_0888A454;
    }
L_0888A454:
    ctx.gpr[4] = (ctx.gpr[19] << 11u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23432));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0888A474u);
    ctx.gpr[6] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x0888A474u) goto L_0888A474;
    return;
L_0888A474:
    ctx.gpr[31] = (0x0888A47Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x0888A47Cu) goto L_0888A47C;
    return;
L_0888A47C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2240u << 16u);
      if (branch_taken) {
          goto L_0888A4B8;
      }
      goto L_0888A488;
    }
L_0888A488:
    ctx.gpr[4] = (ctx.gpr[19] << 11u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23432));
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888A4D0;
      }
      goto L_0888A4B8;
    }
L_0888A4B8:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_0888A4D0;
L_0888A4D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_0888A52C;
      }
      goto L_0888A4DC;
    }
L_0888A4DC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26320)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888A59C;
      }
      goto L_0888A52C;
    }
L_0888A52C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_0888A588;
      }
      goto L_0888A538;
    }
L_0888A538:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26320)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888A59C;
      }
      goto L_0888A588;
    }
L_0888A588:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    goto L_0888A59C;
L_0888A59C:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 112 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A398;
      }
      goto L_0888A5C4;
    }
L_0888A5C4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1380), static_cast<std::uint8_t>(0u));
    goto L_0888A5C8;
L_0888A5C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1389), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1392), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 113u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1396), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1399), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1400), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1401), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1402), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 113u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1404), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1405), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1406), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1407), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1408), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1409), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1410), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1411), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1412), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1536), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1540), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1544), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1548), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0888A660u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1552), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 371u, 0x08AAB8F0u>(ctx, &aot_mem) && ctx.pc == 0x0888A660u) goto L_0888A660;
    return;
L_0888A660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0888A668;
      }
      goto L_0888A668;
    }
L_0888A668:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888A6B8;
      }
      goto L_0888A6AC;
    }
L_0888A6AC:
    ctx.gpr[31] = (0x0888A6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x0888A6B4u) goto L_0888A6B4;
    return;
L_0888A6B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888A6B8;
L_0888A6B8:
    ctx.gpr[31] = (0x0888A6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 252u, 0x088B5A64u>(ctx, &aot_mem) && ctx.pc == 0x0888A6C0u) goto L_0888A6C0;
    return;
L_0888A6C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1544)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0888A768;
      }
      goto L_0888A6CC;
    }
L_0888A6CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888A6D8u);
    ctx.gpr[5] = (0u | 110u);
    goto L_088888D8;
L_0888A6D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A6E8;
      }
      goto L_0888A6E0;
    }
L_0888A6E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1544), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0888A768;
      }
      goto L_0888A6E8;
    }
L_0888A6E8:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1399)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A728;
      }
      goto L_0888A6FC;
    }
L_0888A6FC:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0888A70Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem) && ctx.pc == 0x0888A70Cu) goto L_0888A70C;
    return;
L_0888A70C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 110u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0888A720u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 559u, 0x08A06360u>(ctx, &aot_mem) && ctx.pc == 0x0888A720u) goto L_0888A720;
    return;
L_0888A720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A74C;
      }
      goto L_0888A728;
    }
L_0888A728:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
    ctx.gpr[5] = (0u | 110u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A74C;
      }
      goto L_0888A738;
    }
L_0888A738:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 110u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0888A74Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 559u, 0x08A06360u>(ctx, &aot_mem) && ctx.pc == 0x0888A74Cu) goto L_0888A74C;
    return;
L_0888A74C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1544)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1544), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A768;
      }
      goto L_0888A764;
    }
L_0888A764:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1544), ctx.gpr[17]);
    goto L_0888A768;
L_0888A768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A780;
      }
      goto L_0888A774;
    }
L_0888A774:
    ctx.gpr[31] = (0x0888A77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x0888A77Cu) goto L_0888A77C;
    return;
L_0888A77C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888A780;
L_0888A780:
    ctx.gpr[31] = (0x0888A788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 484u, 0x088B6944u>(ctx, &aot_mem) && ctx.pc == 0x0888A788u) goto L_0888A788;
    return;
L_0888A788:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A7B8;
      }
      goto L_0888A790;
    }
L_0888A790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A7A8;
      }
      goto L_0888A79C;
    }
L_0888A79C:
    ctx.gpr[31] = (0x0888A7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x0888A7A4u) goto L_0888A7A4;
    return;
L_0888A7A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888A7A8;
L_0888A7A8:
    ctx.gpr[31] = (0x0888A7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem) && ctx.pc == 0x0888A7B0u) goto L_0888A7B0;
    return;
L_0888A7B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A7D0;
      }
      goto L_0888A7B8;
    }
L_0888A7B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
    ctx.gpr[5] = (0u | 111u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A7D0;
      }
      goto L_0888A7C8;
    }
L_0888A7C8:
    ctx.gpr[31] = (0x0888A7D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0888847C;
L_0888A7D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A800;
      }
      goto L_0888A7DC;
    }
L_0888A7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1380), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0888A7FC;
      }
      goto L_0888A7F0;
    }
L_0888A7F0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0888A7FC;
L_0888A7FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0888A800;
L_0888A800:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A80C;
    }
L_0888A80C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A818;
    }
L_0888A818:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1410)));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1400)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0888A834;
      }
      goto L_0888A82C;
    }
L_0888A82C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1399)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1411), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_0888A834;
L_0888A834:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1411)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888A944;
      }
      goto L_0888A840;
    }
L_0888A840:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1410), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1409)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A870;
      }
      goto L_0888A854;
    }
L_0888A854:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A870;
      }
      goto L_0888A860;
    }
L_0888A860:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26342)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A870;
      }
      goto L_0888A86C;
    }
L_0888A86C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1409), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_0888A870;
L_0888A870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26344)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A8A0;
      }
      goto L_0888A880;
    }
L_0888A880:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    ctx.gpr[31] = (0x0888A890u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x0888A890u) goto L_0888A890;
    return;
L_0888A890:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 113u);
      if (branch_taken) {
          goto L_0888A8A8;
      }
      goto L_0888A898;
    }
L_0888A898:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25832), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0888A904;
      }
      goto L_0888A8A0;
    }
L_0888A8A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A8A8;
    }
L_0888A8A8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888A8F4;
      }
      goto L_0888A8B4;
    }
L_0888A8B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25832)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A8F4;
      }
      goto L_0888A8C0;
    }
L_0888A8C0:
    ctx.gpr[31] = (0x0888A8C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08889CF0;
L_0888A8C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23248));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25832), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_0888A8F4;
L_0888A8F4:
    ctx.gpr[31] = (0x0888A8FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem) && ctx.pc == 0x0888A8FCu) goto L_0888A8FC;
    return;
L_0888A8FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A904;
    }
L_0888A904:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1411)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1410), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1400), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1402), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1404), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1405), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 113u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A93C;
      }
      goto L_0888A934;
    }
L_0888A934:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A93C;
    }
L_0888A93C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1412), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A944;
    }
L_0888A944:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A964;
      }
      goto L_0888A950;
    }
L_0888A950:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26342)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A964;
      }
      goto L_0888A95C;
    }
L_0888A95C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A984;
      }
      goto L_0888A964;
    }
L_0888A964:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888A990;
      }
      goto L_0888A96C;
    }
L_0888A96C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0888A9BC;
      }
      goto L_0888A974;
    }
L_0888A974:
    ctx.gpr[31] = (0x0888A97Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0888B67C;
L_0888A97C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A984;
    }
L_0888A984:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1400), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A990;
    }
L_0888A990:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888A9C4;
      }
      goto L_0888A998;
    }
L_0888A998:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A9BC;
      }
      goto L_0888A9A0;
    }
L_0888A9A0:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x0888A9B4u);
    ctx.gpr[7] = (0u | 1u);
    goto L_0888A144;
L_0888A9B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A9BC;
    }
L_0888A9BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A9C4;
    }
L_0888A9C4:
    ctx.gpr[31] = (0x0888A9CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0888BAD0;
L_0888A9CC:
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
L_0888A9E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1389), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1392), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 113u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1401), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1402), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 113u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1404), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1405), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1406), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1407), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1408), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1409), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1410), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1412), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1508)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1508), ctx.gpr[5]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-23496));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888AAC0;
      }
      goto L_0888AABC;
    }
L_0888AABC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1508), 0u);
    goto L_0888AAC0;
L_0888AAC0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2237u << 16u);
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (20224u << 16u);
    ctx.gpr[21] = (0u | 5u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28320));
    ctx.gpr[22] = (32768u << 16u);
    goto L_0888AAF0;
L_0888AAF0:
    ctx.gpr[31] = (0x0888AAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0888AAF8u) goto L_0888AAF8;
    return;
L_0888AAF8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25836)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25840)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0888AB0Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0888AB0Cu) goto L_0888AB0C;
    return;
L_0888AB0C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0888AB28u);
    ctx.gpr[18] = (ctx.gpr[18] << 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x0888AB28u) goto L_0888AB28;
    return;
L_0888AB28:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
        goto L_0888AB48;
    }
    goto L_0888AB48;
L_0888AB48:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
        goto L_0888AB68;
    }
    goto L_0888AB5C;
L_0888AB5C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0888AB74;
      }
      goto L_0888AB68;
    }
L_0888AB68:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    goto L_0888AB74;
L_0888AB74:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[20]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(26320)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888ABB8;
      }
      goto L_0888ABB0;
    }
L_0888ABB0:
    { const std::uint32_t dividend = ctx.gpr[18]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (ctx.hi);
    goto L_0888ABB8;
L_0888ABB8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0888AAF0;
      }
      goto L_0888ABD0;
    }
L_0888ABD0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    goto L_0888ABDC;
L_0888ABDC:
    ctx.gpr[31] = (0x0888ABE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 292u, 0x0899142Cu>(ctx, &aot_mem) && ctx.pc == 0x0888ABE4u) goto L_0888ABE4;
    return;
L_0888ABE4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0888AC04;
      }
      goto L_0888ABEC;
    }
L_0888ABEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888AC04;
      }
      goto L_0888AC00;
    }
L_0888AC00:
    ctx.gpr[16] = (0u | 1u);
    goto L_0888AC04;
L_0888AC04:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888ABDC;
      }
      goto L_0888AC14;
    }
L_0888AC14:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AC44;
      }
      goto L_0888AC1C;
    }
L_0888AC1C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_0888AC28;
L_0888AC28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888AC28;
      }
      goto L_0888AC44;
    }
L_0888AC44:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1552), 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888AC84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8360)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_0888AD00;
      }
      goto L_0888ACBC;
    }
L_0888ACBC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888AD00;
      }
      goto L_0888ACCC;
    }
L_0888ACCC:
    ctx.gpr[31] = (0x0888ACD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0888876C;
L_0888ACD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888ACDC;
    }
L_0888ACDC:
    ctx.gpr[31] = (0x0888ACE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0888ACE4u) goto L_0888ACE4;
    return;
L_0888ACE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888AD0C;
      }
      goto L_0888ACEC;
    }
L_0888ACEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AE10;
      }
      goto L_0888ACF4;
    }
L_0888ACF4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888AD00;
    }
L_0888AD00:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888AD0C;
    }
L_0888AD0C:
    ctx.gpr[31] = (0x0888AD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0888AD14u) goto L_0888AD14;
    return;
L_0888AD14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888AD24;
    }
L_0888AD24:
    ctx.gpr[31] = (0x0888AD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0888AD2Cu) goto L_0888AD2C;
    return;
L_0888AD2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[17] = (0u | 261u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888AD3C;
    }
L_0888AD3C:
    ctx.gpr[31] = (0x0888AD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0888AD44u) goto L_0888AD44;
    return;
L_0888AD44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 219u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888AD54;
    }
L_0888AD54:
    ctx.gpr[31] = (0x0888AD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0888AD5Cu) goto L_0888AD5C;
    return;
L_0888AD5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 207u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888AD6C;
    }
L_0888AD6C:
    ctx.gpr[31] = (0x0888AD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0888AD74u) goto L_0888AD74;
    return;
L_0888AD74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 234u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888AD84;
    }
L_0888AD84:
    ctx.gpr[31] = (0x0888AD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0888AD8Cu) goto L_0888AD8C;
    return;
L_0888AD8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 191u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888AD9C;
    }
L_0888AD9C:
    ctx.gpr[31] = (0x0888ADA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0888ADA4u) goto L_0888ADA4;
    return;
L_0888ADA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 279u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888ADB4;
    }
L_0888ADB4:
    ctx.gpr[31] = (0x0888ADBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0888ADBCu) goto L_0888ADBC;
    return;
L_0888ADBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 189u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888ADCC;
    }
L_0888ADCC:
    ctx.gpr[31] = (0x0888ADD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0888ADD4u) goto L_0888ADD4;
    return;
L_0888ADD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 194u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888ADE4;
    }
L_0888ADE4:
    ctx.gpr[31] = (0x0888ADECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0888ADECu) goto L_0888ADEC;
    return;
L_0888ADEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888ADF8;
    }
L_0888ADF8:
    ctx.gpr[31] = (0x0888AE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0888AE00u) goto L_0888AE00;
    return;
L_0888AE00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 275u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888AE10;
    }
L_0888AE10:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x0888AE1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem) && ctx.pc == 0x0888AE1Cu) goto L_0888AE1C;
    return;
L_0888AE1C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AE40;
      }
      goto L_0888AE28;
    }
L_0888AE28:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 31 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888AE4C;
      }
      goto L_0888AE38;
    }
L_0888AE38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AE58;
      }
      goto L_0888AE40;
    }
L_0888AE40:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888AE4C;
    }
L_0888AE4C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AE58;
      }
      goto L_0888AE54;
    }
L_0888AE54:
    ctx.gpr[17] = (0u | 9u);
    goto L_0888AE58;
L_0888AE58:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 111u);
      if (branch_taken) {
          goto L_0888AE6C;
      }
      goto L_0888AE64;
    }
L_0888AE64:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888AE80;
      }
      goto L_0888AE6C;
    }
L_0888AE6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
      if (branch_taken) {
          goto L_0888AE8C;
      }
      goto L_0888AE78;
    }
L_0888AE78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AEC8;
      }
      goto L_0888AE80;
    }
L_0888AE80:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888AE8C;
    }
L_0888AE8C:
    ctx.gpr[6] = (0u | 111u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888AEC8;
      }
      goto L_0888AE98;
    }
L_0888AE98:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888AECC;
      }
      goto L_0888AEAC;
    }
L_0888AEAC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-10));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AEAC;
      }
      goto L_0888AEC0;
    }
L_0888AEC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AECC;
      }
      goto L_0888AEC8;
    }
L_0888AEC8:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_0888AECC;
L_0888AECC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 31 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888AF04;
      }
      goto L_0888AED8;
    }
L_0888AED8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888AF4C;
      }
      goto L_0888AEE0;
    }
L_0888AEE0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AF18;
      }
      goto L_0888AEE8;
    }
L_0888AEE8:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-23152)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    jump_target = ctx.gpr[1];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888AF04:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 111u);
      if (branch_taken) {
          goto L_0888AF30;
      }
      goto L_0888AF0C;
    }
L_0888AF0C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888AF4C;
      }
      goto L_0888AF18;
    }
L_0888AF18:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B280;
      }
      goto L_0888AF24;
    }
L_0888AF24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25748));
      if (branch_taken) {
          goto L_0888B2AC;
      }
      goto L_0888AF2C;
    }
L_0888AF2C:
    ctx.gpr[18] = (0u | 111u);
    goto L_0888AF30;
L_0888AF30:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0888AF4C;
      }
      goto L_0888AF38;
    }
L_0888AF38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B1DC;
      }
      goto L_0888AF44;
    }
L_0888AF44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B1E8;
      }
      goto L_0888AF4C;
    }
L_0888AF4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888AF54;
    }
L_0888AF54:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25820));
      if (branch_taken) {
          goto L_0888AF88;
      }
      goto L_0888AF5C;
    }
L_0888AF5C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0888AF68u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0888AF68u) goto L_0888AF68;
    return;
L_0888AF68:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AF80;
      }
      goto L_0888AF74;
    }
L_0888AF74:
    ctx.gpr[31] = (0x0888AF7Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0888AF7Cu) goto L_0888AF7C;
    return;
L_0888AF7C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888AF80;
L_0888AF80:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25820));
    goto L_0888AF88;
L_0888AF88:
    ctx.gpr[31] = (0x0888AF90u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0888AF90u) goto L_0888AF90;
    return;
L_0888AF90:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888AF9C;
    }
L_0888AF9C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25812));
      if (branch_taken) {
          goto L_0888AFD0;
      }
      goto L_0888AFA4;
    }
L_0888AFA4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0888AFB0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0888AFB0u) goto L_0888AFB0;
    return;
L_0888AFB0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AFC8;
      }
      goto L_0888AFBC;
    }
L_0888AFBC:
    ctx.gpr[31] = (0x0888AFC4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0888AFC4u) goto L_0888AFC4;
    return;
L_0888AFC4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888AFC8;
L_0888AFC8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25812));
    goto L_0888AFD0;
L_0888AFD0:
    ctx.gpr[31] = (0x0888AFD8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0888AFD8u) goto L_0888AFD8;
    return;
L_0888AFD8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888AFE4;
    }
L_0888AFE4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25804));
      if (branch_taken) {
          goto L_0888B018;
      }
      goto L_0888AFEC;
    }
L_0888AFEC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0888AFF8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0888AFF8u) goto L_0888AFF8;
    return;
L_0888AFF8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B010;
      }
      goto L_0888B004;
    }
L_0888B004:
    ctx.gpr[31] = (0x0888B00Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B00Cu) goto L_0888B00C;
    return;
L_0888B00C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B010;
L_0888B010:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25804));
    goto L_0888B018;
L_0888B018:
    ctx.gpr[31] = (0x0888B020u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0888B020u) goto L_0888B020;
    return;
L_0888B020:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B02C;
    }
L_0888B02C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25796));
      if (branch_taken) {
          goto L_0888B060;
      }
      goto L_0888B034;
    }
L_0888B034:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0888B040u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0888B040u) goto L_0888B040;
    return;
L_0888B040:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B058;
      }
      goto L_0888B04C;
    }
L_0888B04C:
    ctx.gpr[31] = (0x0888B054u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B054u) goto L_0888B054;
    return;
L_0888B054:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B058;
L_0888B058:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25796));
    goto L_0888B060;
L_0888B060:
    ctx.gpr[31] = (0x0888B068u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0888B068u) goto L_0888B068;
    return;
L_0888B068:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B074;
    }
L_0888B074:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25788));
      if (branch_taken) {
          goto L_0888B0A8;
      }
      goto L_0888B07C;
    }
L_0888B07C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0888B088u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0888B088u) goto L_0888B088;
    return;
L_0888B088:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B0A0;
      }
      goto L_0888B094;
    }
L_0888B094:
    ctx.gpr[31] = (0x0888B09Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B09Cu) goto L_0888B09C;
    return;
L_0888B09C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B0A0;
L_0888B0A0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25788));
    goto L_0888B0A8;
L_0888B0A8:
    ctx.gpr[31] = (0x0888B0B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0888B0B0u) goto L_0888B0B0;
    return;
L_0888B0B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B0BC;
    }
L_0888B0BC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25780));
      if (branch_taken) {
          goto L_0888B0F0;
      }
      goto L_0888B0C4;
    }
L_0888B0C4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0888B0D0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0888B0D0u) goto L_0888B0D0;
    return;
L_0888B0D0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B0E8;
      }
      goto L_0888B0DC;
    }
L_0888B0DC:
    ctx.gpr[31] = (0x0888B0E4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B0E4u) goto L_0888B0E4;
    return;
L_0888B0E4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B0E8;
L_0888B0E8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25780));
    goto L_0888B0F0;
L_0888B0F0:
    ctx.gpr[31] = (0x0888B0F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0888B0F8u) goto L_0888B0F8;
    return;
L_0888B0F8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B104;
    }
L_0888B104:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25772));
      if (branch_taken) {
          goto L_0888B138;
      }
      goto L_0888B10C;
    }
L_0888B10C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0888B118u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0888B118u) goto L_0888B118;
    return;
L_0888B118:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B130;
      }
      goto L_0888B124;
    }
L_0888B124:
    ctx.gpr[31] = (0x0888B12Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B12Cu) goto L_0888B12C;
    return;
L_0888B12C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B130;
L_0888B130:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25772));
    goto L_0888B138;
L_0888B138:
    ctx.gpr[31] = (0x0888B140u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0888B140u) goto L_0888B140;
    return;
L_0888B140:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B14C;
    }
L_0888B14C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25764));
      if (branch_taken) {
          goto L_0888B180;
      }
      goto L_0888B154;
    }
L_0888B154:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0888B160u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0888B160u) goto L_0888B160;
    return;
L_0888B160:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B178;
      }
      goto L_0888B16C;
    }
L_0888B16C:
    ctx.gpr[31] = (0x0888B174u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B174u) goto L_0888B174;
    return;
L_0888B174:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B178;
L_0888B178:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25764));
    goto L_0888B180;
L_0888B180:
    ctx.gpr[31] = (0x0888B188u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0888B188u) goto L_0888B188;
    return;
L_0888B188:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B194;
    }
L_0888B194:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25756));
      if (branch_taken) {
          goto L_0888B1C8;
      }
      goto L_0888B19C;
    }
L_0888B19C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0888B1A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0888B1A8u) goto L_0888B1A8;
    return;
L_0888B1A8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B1C0;
      }
      goto L_0888B1B4;
    }
L_0888B1B4:
    ctx.gpr[31] = (0x0888B1BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B1BCu) goto L_0888B1BC;
    return;
L_0888B1BC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B1C0;
L_0888B1C0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25756));
    goto L_0888B1C8;
L_0888B1C8:
    ctx.gpr[31] = (0x0888B1D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0888B1D0u) goto L_0888B1D0;
    return;
L_0888B1D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B1DC;
    }
L_0888B1DC:
    ctx.gpr[31] = (0x0888B1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x0888B1E4u) goto L_0888B1E4;
    return;
L_0888B1E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888B1E8;
L_0888B1E8:
    ctx.gpr[31] = (0x0888B1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 484u, 0x088B6944u>(ctx, &aot_mem) && ctx.pc == 0x0888B1F0u) goto L_0888B1F0;
    return;
L_0888B1F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B220;
      }
      goto L_0888B1F8;
    }
L_0888B1F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B210;
      }
      goto L_0888B204;
    }
L_0888B204:
    ctx.gpr[31] = (0x0888B20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x0888B20Cu) goto L_0888B20C;
    return;
L_0888B20C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888B210;
L_0888B210:
    ctx.gpr[31] = (0x0888B218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem) && ctx.pc == 0x0888B218u) goto L_0888B218;
    return;
L_0888B218:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B250;
      }
      goto L_0888B220;
    }
L_0888B220:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0888B238;
      }
      goto L_0888B22C;
    }
L_0888B22C:
    ctx.gpr[31] = (0x0888B234u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0888847C;
L_0888B234:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
    goto L_0888B238;
L_0888B238:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0888B248;
      }
      goto L_0888B240;
    }
L_0888B240:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888AF18;
      }
      goto L_0888B248;
    }
L_0888B248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B250;
    }
L_0888B250:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0888B26C;
      }
      goto L_0888B25C;
    }
L_0888B25C:
    ctx.gpr[31] = (0x0888B264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x0888B264u) goto L_0888B264;
    return;
L_0888B264:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0888B26C;
L_0888B26C:
    ctx.gpr[31] = (0x0888B274u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 440u, 0x088B6698u>(ctx, &aot_mem) && ctx.pc == 0x0888B274u) goto L_0888B274;
    return;
L_0888B274:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B280;
    }
L_0888B280:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0888B28Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0888B28Cu) goto L_0888B28C;
    return;
L_0888B28C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B2A4;
      }
      goto L_0888B298;
    }
L_0888B298:
    ctx.gpr[31] = (0x0888B2A0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B2A0u) goto L_0888B2A0;
    return;
L_0888B2A0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B2A4;
L_0888B2A4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25748));
    goto L_0888B2AC;
L_0888B2AC:
    ctx.gpr[31] = (0x0888B2B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0888B2B4u) goto L_0888B2B4;
    return;
L_0888B2B4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0888B2BC;
L_0888B2BC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B2D0;
      }
      goto L_0888B2C4;
    }
L_0888B2C4:
    ctx.gpr[31] = (0x0888B2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0888B2CCu) goto L_0888B2CC;
    return;
L_0888B2CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0888B2D0;
L_0888B2D0:
    ctx.gpr[31] = (0x0888B2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 607u, 0x089BACE4u>(ctx, &aot_mem) && ctx.pc == 0x0888B2D8u) goto L_0888B2D8;
    return;
L_0888B2D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B31C;
      }
      goto L_0888B2E0;
    }
L_0888B2E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25822)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0888B304;
      }
      goto L_0888B2EC;
    }
L_0888B2EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 113u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B334;
      }
      goto L_0888B2FC;
    }
L_0888B2FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B33C;
      }
      goto L_0888B304;
    }
L_0888B304:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25822), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B31C;
    }
L_0888B31C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25822), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B334;
    }
L_0888B334:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1516), ctx.gpr[4]);
    goto L_0888B33C;
L_0888B33C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25828)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B34Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08889C3C;
L_0888B34C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B37C;
      }
      goto L_0888B354;
    }
L_0888B354:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B370;
      }
      goto L_0888B360;
    }
L_0888B360:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824)));
      if (branch_taken) {
          goto L_0888B404;
      }
      goto L_0888B370;
    }
L_0888B370:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B37C;
    }
L_0888B37C:
    ctx.gpr[4] = (0u | 111u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25828), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0888B3B4;
      }
      goto L_0888B388;
    }
L_0888B388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3A0;
      }
      goto L_0888B394;
    }
L_0888B394:
    ctx.gpr[31] = (0x0888B39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x0888B39Cu) goto L_0888B39C;
    return;
L_0888B39C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888B3A0;
L_0888B3A0:
    ctx.gpr[31] = (0x0888B3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 483u, 0x088B693Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B3A8u) goto L_0888B3A8;
    return;
L_0888B3A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1516)));
      if (branch_taken) {
          goto L_0888B3C0;
      }
      goto L_0888B3B4;
    }
L_0888B3B4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1516)));
    goto L_0888B3C0;
L_0888B3C0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3E4;
      }
      goto L_0888B3C8;
    }
L_0888B3C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B3F0;
      }
      goto L_0888B3D4;
    }
L_0888B3D4:
    ctx.gpr[4] = (0u | 60u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824)));
      if (branch_taken) {
          goto L_0888B404;
      }
      goto L_0888B3E4;
    }
L_0888B3E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1516), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B3F0;
    }
L_0888B3F0:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B404;
    }
L_0888B404:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B418;
      }
      goto L_0888B40C;
    }
L_0888B40C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B47C;
      }
      goto L_0888B418;
    }
L_0888B418:
    ctx.gpr[31] = (0x0888B420u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x0888B420u) goto L_0888B420;
    return;
L_0888B420:
    ctx.gpr[31] = (0x0888B428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B428u) goto L_0888B428;
    return;
L_0888B428:
    ctx.gpr[31] = (0x0888B430u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x0888B430u) goto L_0888B430;
    return;
L_0888B430:
    ctx.gpr[4] = (0u | 77u);
    ctx.gpr[5] = (0u | 155u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 210u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0888B458u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x0888B458u) goto L_0888B458;
    return;
L_0888B458:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B468u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x0888B468u) goto L_0888B468;
    return;
L_0888B468:
    ctx.gpr[4] = (0u | 111u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888B490;
      }
      goto L_0888B474;
    }
L_0888B474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B610;
      }
      goto L_0888B47C;
    }
L_0888B47C:
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B490;
    }
L_0888B490:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25740));
    ctx.gpr[31] = (0x0888B4A0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem) && ctx.pc == 0x0888B4A0u) goto L_0888B4A0;
    return;
L_0888B4A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (17948u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0888B4D4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x0888B4D4u) goto L_0888B4D4;
    return;
L_0888B4D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0888B4E8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 93u, 0x08B0C6DCu>(ctx, &aot_mem) && ctx.pc == 0x0888B4E8u) goto L_0888B4E8;
    return;
L_0888B4E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x0888B50Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x0888B50Cu) goto L_0888B50C;
    return;
L_0888B50C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0888B524u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 90u, 0x08B0C660u>(ctx, &aot_mem) && ctx.pc == 0x0888B524u) goto L_0888B524;
    return;
L_0888B524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-110));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0888B5D8;
      }
      goto L_0888B538;
    }
L_0888B538:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888B5D8;
      }
      goto L_0888B540;
    }
L_0888B540:
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.gpr[5] = (17366u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17287u << 16u);
    ctx.gpr[31] = (0x0888B564u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x0888B564u) goto L_0888B564;
    return;
L_0888B564:
    ctx.gpr[31] = (0x0888B56Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem) && ctx.pc == 0x0888B56Cu) goto L_0888B56C;
    return;
L_0888B56C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_0888B574;
L_0888B574:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(34)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(180), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0888B574;
      }
      goto L_0888B58C;
    }
L_0888B58C:
    ctx.gpr[4] = (0u | 32u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_0888B5A0;
L_0888B5A0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0888B5A0;
      }
      goto L_0888B5BC;
    }
L_0888B5BC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x0888B5D0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x0888B5D0u) goto L_0888B5D0;
    return;
L_0888B5D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B610;
      }
      goto L_0888B5D8;
    }
L_0888B5D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B5F0;
      }
      goto L_0888B5E4;
    }
L_0888B5E4:
    ctx.gpr[31] = (0x0888B5ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x0888B5ECu) goto L_0888B5EC;
    return;
L_0888B5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888B5F0;
L_0888B5F0:
    ctx.gpr[31] = (0x0888B5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 434u, 0x088B6620u>(ctx, &aot_mem) && ctx.pc == 0x0888B5F8u) goto L_0888B5F8;
    return;
L_0888B5F8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B610;
      }
      goto L_0888B604;
    }
L_0888B604:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B610u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 846u, 0x08887B30u>(ctx, &aot_mem) && ctx.pc == 0x0888B610u) goto L_0888B610;
    return;
L_0888B610:
    ctx.gpr[31] = (0x0888B618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 96u, 0x08B0C748u>(ctx, &aot_mem) && ctx.pc == 0x0888B618u) goto L_0888B618;
    return;
L_0888B618:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0888B624u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 283u, 0x08AFD8D8u>(ctx, &aot_mem) && ctx.pc == 0x0888B624u) goto L_0888B624;
    return;
L_0888B624:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B648;
      }
      goto L_0888B630;
    }
L_0888B630:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888B640u);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0888B640u) goto L_0888B640;
    return;
L_0888B640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B648;
    }
L_0888B648:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0888B658u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0888B658u) goto L_0888B658;
    return;
L_0888B658:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B67C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B714;
      }
      goto L_0888B6A0;
    }
L_0888B6A0:
    ctx.gpr[31] = (0x0888B6A8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem) && ctx.pc == 0x0888B6A8u) goto L_0888B6A8;
    return;
L_0888B6A8:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23248));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0888B6BCu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x0888B6BCu) goto L_0888B6BC;
    return;
L_0888B6BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B6F8;
      }
      goto L_0888B6C4;
    }
L_0888B6C4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25948), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 113u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 113u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[6] = (0u | 110u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0888B708;
      }
      goto L_0888B6F0;
    }
L_0888B6F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B70C;
      }
      goto L_0888B6F8;
    }
L_0888B6F8:
    ctx.gpr[31] = (0x0888B700u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088897E0;
L_0888B700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B708;
    }
L_0888B708:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0888B70C;
L_0888B70C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888B734;
      }
      goto L_0888B714;
    }
L_0888B714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0888B734;
      }
      goto L_0888B724;
    }
L_0888B724:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25948), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 113u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    goto L_0888B734;
L_0888B734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26344)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B758;
      }
      goto L_0888B744;
    }
L_0888B744:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1402)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
      if (branch_taken) {
          goto L_0888B760;
      }
      goto L_0888B750;
    }
L_0888B750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B77C;
      }
      goto L_0888B758;
    }
L_0888B758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B760;
    }
L_0888B760:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1405)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B77C;
      }
      goto L_0888B76C;
    }
L_0888B76C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1401)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1404), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_0888B77C;
L_0888B77C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1403))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888B8E0;
      }
      goto L_0888B788;
    }
L_0888B788:
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1402), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1405)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B818;
      }
      goto L_0888B79C;
    }
L_0888B79C:
    ctx.gpr[31] = (0x0888B7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x0888B7A4u) goto L_0888B7A4;
    return;
L_0888B7A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B818;
      }
      goto L_0888B7AC;
    }
L_0888B7AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    ctx.gpr[5] = (0u | 113u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B7F4;
      }
      goto L_0888B7BC;
    }
L_0888B7BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25736)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888B7F4;
      }
      goto L_0888B7C8;
    }
L_0888B7C8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23248));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[31] = (0x0888B7F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08889CF0;
L_0888B7F0:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25736), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_0888B7F4;
L_0888B7F4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x0888B808u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0888A144;
L_0888B808:
    ctx.gpr[31] = (0x0888B810u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem) && ctx.pc == 0x0888B810u) goto L_0888B810;
    return;
L_0888B810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B818;
    }
L_0888B818:
    ctx.gpr[31] = (0x0888B820u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25736), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x0888B820u) goto L_0888B820;
    return;
L_0888B820:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1403))))));
      if (branch_taken) {
          goto L_0888B834;
      }
      goto L_0888B828;
    }
L_0888B828:
    ctx.gpr[17] = (0u | 113u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0888B844;
      }
      goto L_0888B834;
    }
L_0888B834:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1405), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1402), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B844;
    }
L_0888B844:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B868;
      }
      goto L_0888B850;
    }
L_0888B850:
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x0888B85Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0888981C;
L_0888B85C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1403))))));
      if (branch_taken) {
          goto L_0888B86C;
      }
      goto L_0888B868;
    }
L_0888B868:
    ctx.gpr[5] = (0u | 0u);
    goto L_0888B86C;
L_0888B86C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B874;
    }
L_0888B874:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0888B88Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 377u, 0x08AAB9A4u>(ctx, &aot_mem) && ctx.pc == 0x0888B88Cu) goto L_0888B88C;
    return;
L_0888B88C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1403))))));
    ctx.gpr[6] = (0u | 110u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 100u);
      if (branch_taken) {
          goto L_0888B8B0;
      }
      goto L_0888B8A4;
    }
L_0888B8A4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_0888B8B8;
      }
      goto L_0888B8B0;
    }
L_0888B8B0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    goto L_0888B8B8;
L_0888B8B8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x0888B8CCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_0888A144;
L_0888B8CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1403))))));
    ctx.gpr[31] = (0x0888B8D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08889CF8;
L_0888B8D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1405), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B8E0;
    }
L_0888B8E0:
    ctx.gpr[31] = (0x0888B8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x0888B8E8u) goto L_0888B8E8;
    return;
L_0888B8E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B9F0;
      }
      goto L_0888B8F0;
    }
L_0888B8F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 109 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 111 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888B948;
      }
      goto L_0888B900;
    }
L_0888B900:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888B9E8;
      }
      goto L_0888B908;
    }
L_0888B908:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B9E8;
      }
      goto L_0888B910;
    }
L_0888B910:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_0888B914;
L_0888B914:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0888B940u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 377u, 0x08AAB9A4u>(ctx, &aot_mem) && ctx.pc == 0x0888B940u) goto L_0888B940;
    return;
L_0888B940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B948;
    }
L_0888B948:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 112 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888B968;
      }
      goto L_0888B950;
    }
L_0888B950:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 110 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888B914;
      }
      goto L_0888B95C;
    }
L_0888B95C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B998;
      }
      goto L_0888B964;
    }
L_0888B964:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 112 ? 1u : 0u);
    goto L_0888B968;
L_0888B968:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B9E8;
      }
      goto L_0888B970;
    }
L_0888B970:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0888B990u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 377u, 0x08AAB9A4u>(ctx, &aot_mem) && ctx.pc == 0x0888B990u) goto L_0888B990;
    return;
L_0888B990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B998;
    }
L_0888B998:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B9E0;
      }
      goto L_0888B9A4;
    }
L_0888B9A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888B9B0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 894u, 0x08887E98u>(ctx, &aot_mem) && ctx.pc == 0x0888B9B0u) goto L_0888B9B0;
    return;
L_0888B9B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1513)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B9DC;
      }
      goto L_0888B9BC;
    }
L_0888B9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
        goto L_0888B9D4;
    }
    goto L_0888B9C8;
L_0888B9C8:
    ctx.gpr[31] = (0x0888B9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x0888B9D0u) goto L_0888B9D0;
    return;
L_0888B9D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888B9D4;
L_0888B9D4:
    ctx.gpr[31] = (0x0888B9DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 277u, 0x088B5BCCu>(ctx, &aot_mem) && ctx.pc == 0x0888B9DCu) goto L_0888B9DC;
    return;
L_0888B9DC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1513), static_cast<std::uint8_t>(0u));
    goto L_0888B9E0;
L_0888B9E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B9E8;
    }
L_0888B9E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B9F0;
    }
L_0888B9F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0888BA08;
      }
      goto L_0888B9FC;
    }
L_0888B9FC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888BA08;
    }
L_0888BA08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1548)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_0888BA7C;
      }
      goto L_0888BA14;
    }
L_0888BA14:
    ctx.gpr[31] = (0x0888BA1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 74u, 0x08A1C770u>(ctx, &aot_mem) && ctx.pc == 0x0888BA1Cu) goto L_0888BA1C;
    return;
L_0888BA1C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888BA7C;
      }
      goto L_0888BA28;
    }
L_0888BA28:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x0888BA34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 559u, 0x0880A704u>(ctx, &aot_mem) && ctx.pc == 0x0888BA34u) goto L_0888BA34;
    return;
L_0888BA34:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 126 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA7C;
      }
      goto L_0888BA40;
    }
L_0888BA40:
    ctx.gpr[31] = (0x0888BA48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 559u, 0x0880A704u>(ctx, &aot_mem) && ctx.pc == 0x0888BA48u) goto L_0888BA48;
    return;
L_0888BA48:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x0888BA58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 557u, 0x0880A6F4u>(ctx, &aot_mem) && ctx.pc == 0x0888BA58u) goto L_0888BA58;
    return;
L_0888BA58:
    ctx.gpr[31] = (0x0888BA60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 559u, 0x0880A704u>(ctx, &aot_mem) && ctx.pc == 0x0888BA60u) goto L_0888BA60;
    return;
L_0888BA60:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA7C;
      }
      goto L_0888BA6C;
    }
L_0888BA6C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1548), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888BA7Cu);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 557u, 0x0880A6F4u>(ctx, &aot_mem) && ctx.pc == 0x0888BA7Cu) goto L_0888BA7C;
    return;
L_0888BA7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BAA8;
      }
      goto L_0888BA90;
    }
L_0888BA90:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_0888BAA0;
    }
    goto L_0888BAA0;
L_0888BAA0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    goto L_0888BAA8;
L_0888BAA8:
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x0888BAB8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0888A144;
L_0888BAB8:
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
L_0888BAD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 113u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1520), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0888BB0Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1456), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0888BB0Cu) goto L_0888BB0C;
    return;
L_0888BB0C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0888BB18u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem) && ctx.pc == 0x0888BB18u) goto L_0888BB18;
    return;
L_0888BB18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1406)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1406), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1407), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888BB5C;
      }
      goto L_0888BB38;
    }
L_0888BB38:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-23112)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888BB50:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1406), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1406)));
      if (branch_taken) {
          goto L_0888BB8C;
      }
      goto L_0888BB5C;
    }
L_0888BB5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7701)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BB70;
      }
      goto L_0888BB68;
    }
L_0888BB68:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1406), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0888BB88;
      }
      goto L_0888BB70;
    }
L_0888BB70:
    ctx.gpr[31] = (0x0888BB78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0888876C;
L_0888BB78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BB88;
      }
      goto L_0888BB80;
    }
L_0888BB80:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1406), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0888BB88;
L_0888BB88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1406)));
    goto L_0888BB8C;
L_0888BB8C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0888BD14;
      }
      goto L_0888BB94;
    }
L_0888BB94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD14;
      }
      goto L_0888BBA0;
    }
L_0888BBA0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BBA8;
    }
L_0888BBA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BBB8;
    }
L_0888BBB8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BBC0;
    }
L_0888BBC0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBF4;
      }
      goto L_0888BBC8;
    }
L_0888BBC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 194u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BBF4;
      }
      goto L_0888BBD8;
    }
L_0888BBD8:
    ctx.gpr[31] = (0x0888BBE0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0888BBE0u) goto L_0888BBE0;
    return;
L_0888BBE0:
    ctx.gpr[31] = (0x0888BBE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 347u, 0x0898CF8Cu>(ctx, &aot_mem) && ctx.pc == 0x0888BBE8u) goto L_0888BBE8;
    return;
L_0888BBE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBF4;
      }
      goto L_0888BBF0;
    }
L_0888BBF0:
    ctx.gpr[20] = (0u | 1u);
    goto L_0888BBF4;
L_0888BBF4:
    ctx.gpr[31] = (0x0888BBFCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0888BBFCu) goto L_0888BBFC;
    return;
L_0888BBFC:
    ctx.gpr[31] = (0x0888BC04u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 461u, 0x0898D410u>(ctx, &aot_mem) && ctx.pc == 0x0888BC04u) goto L_0888BC04;
    return;
L_0888BC04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BC24;
      }
      goto L_0888BC0C;
    }
L_0888BC0C:
    ctx.gpr[31] = (0x0888BC14u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0888BC14u) goto L_0888BC14;
    return;
L_0888BC14:
    ctx.gpr[31] = (0x0888BC1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 468u, 0x0898D464u>(ctx, &aot_mem) && ctx.pc == 0x0888BC1Cu) goto L_0888BC1C;
    return;
L_0888BC1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BC24;
    }
L_0888BC24:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BC2C;
    }
L_0888BC2C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BC34;
    }
L_0888BC34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888BC40u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08889B04;
L_0888BC40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BC48;
    }
L_0888BC48:
    ctx.gpr[31] = (0x0888BC50u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08889C04;
L_0888BC50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BC58;
    }
L_0888BC58:
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), ctx.gpr[4]);
    ctx.gpr[31] = (0x0888BC68u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0888BC68u) goto L_0888BC68;
    return;
L_0888BC68:
    ctx.gpr[31] = (0x0888BC70u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 461u, 0x0898D410u>(ctx, &aot_mem) && ctx.pc == 0x0888BC70u) goto L_0888BC70;
    return;
L_0888BC70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 111u);
      if (branch_taken) {
          goto L_0888BCBC;
      }
      goto L_0888BC7C;
    }
L_0888BC7C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888BCF8;
      }
      goto L_0888BC90;
    }
L_0888BC90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BCA8;
      }
      goto L_0888BC9C;
    }
L_0888BC9C:
    ctx.gpr[31] = (0x0888BCA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x0888BCA4u) goto L_0888BCA4;
    return;
L_0888BCA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888BCA8;
L_0888BCA8:
    ctx.gpr[31] = (0x0888BCB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 490u, 0x088B6998u>(ctx, &aot_mem) && ctx.pc == 0x0888BCB0u) goto L_0888BCB0;
    return;
L_0888BCB0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888BCF8;
      }
      goto L_0888BCBC;
    }
L_0888BCBC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888BCF8;
      }
      goto L_0888BCD0;
    }
L_0888BCD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BCE8;
      }
      goto L_0888BCDC;
    }
L_0888BCDC:
    ctx.gpr[31] = (0x0888BCE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x0888BCE4u) goto L_0888BCE4;
    return;
L_0888BCE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888BCE8;
L_0888BCE8:
    ctx.gpr[31] = (0x0888BCF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 501u, 0x088B6A70u>(ctx, &aot_mem) && ctx.pc == 0x0888BCF0u) goto L_0888BCF0;
    return;
L_0888BCF0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0888BCF8;
L_0888BCF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BD08;
    }
L_0888BD08:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BD14;
    }
L_0888BD14:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1408), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BD34;
    }
L_0888BD34:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1409)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888BD58;
      }
      goto L_0888BD48;
    }
L_0888BD48:
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23248));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_0888BD58;
L_0888BD58:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    goto L_0888BD74;
L_0888BD74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1409)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD88;
      }
      goto L_0888BD80;
    }
L_0888BD80:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1407), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1409), static_cast<std::uint8_t>(0u));
    goto L_0888BD88;
L_0888BD88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0888BDA4;
      }
      goto L_0888BD94;
    }
L_0888BD94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0888BDA4;
      }
      goto L_0888BDA0;
    }
L_0888BDA0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1407), static_cast<std::uint8_t>(0u));
    goto L_0888BDA4;
L_0888BDA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0888BDDC;
      }
      goto L_0888BDB0;
    }
L_0888BDB0:
    ctx.gpr[31] = (0x0888BDB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0888876C;
L_0888BDB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BDDC;
      }
      goto L_0888BDC0;
    }
L_0888BDC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1407), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    goto L_0888BDDC;
L_0888BDDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1406)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 50u, 0x0888C264u>(ctx, &aot_mem); return;
      }
      goto L_0888BDE8;
    }
L_0888BDE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1407)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 29u, 0x0888C170u>(ctx, &aot_mem); return;
      }
      goto L_0888BDF4;
    }
L_0888BDF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 112 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BE98;
      }
      goto L_0888BE04;
    }
L_0888BE04:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0888BE24;
      }
      goto L_0888BE10;
    }
L_0888BE10:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888BE24;
      }
      goto L_0888BE20;
    }
L_0888BE20:
    ctx.gpr[4] = (0u | 0u);
    goto L_0888BE24;
L_0888BE24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BE98;
      }
      goto L_0888BE2C;
    }
L_0888BE2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888BE38u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08888FC8;
L_0888BE38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BE98;
      }
      goto L_0888BE40;
    }
L_0888BE40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BE60;
      }
      goto L_0888BE4C;
    }
L_0888BE4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0888BE7C;
      }
      goto L_0888BE58;
    }
L_0888BE58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BE98;
      }
      goto L_0888BE60;
    }
L_0888BE60:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    ctx.gpr[31] = (0x0888BE74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088897E0;
L_0888BE74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 62u, 0x0888C2ECu>(ctx, &aot_mem); return;
      }
      goto L_0888BE7C;
    }
L_0888BE7C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[31] = (0x0888BE88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088898A4;
L_0888BE88:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    goto L_0888BE98;
L_0888BE98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1388)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BF34;
      }
      goto L_0888BEA4;
    }
L_0888BEA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888BEB0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08889B04;
L_0888BEB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888BEC8;
      }
      goto L_0888BEB8;
    }
L_0888BEB8:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
      if (branch_taken) {
          goto L_0888BEFC;
      }
      goto L_0888BEC8;
    }
L_0888BEC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888BED4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08889C04;
L_0888BED4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BEEC;
      }
      goto L_0888BEDC;
    }
L_0888BEDC:
    ctx.gpr[4] = (0u | 32u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
      if (branch_taken) {
          goto L_0888BEFC;
      }
      goto L_0888BEEC;
    }
L_0888BEEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1389)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    goto L_0888BEFC;
L_0888BEFC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0888BF20;
      }
      goto L_0888BF04;
    }
L_0888BF04:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    goto L_0888BF20;
L_0888BF20:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1397)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 16u, 0x0888C0C4u>(ctx, &aot_mem); return;
      }
      goto L_0888BF34;
    }
L_0888BF34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6008)));
      if (branch_taken) {
          goto L_0888BF60;
      }
      goto L_0888BF40;
    }
L_0888BF40:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888BF70;
      }
      goto L_0888BF4C;
    }
L_0888BF4C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0888BF70;
      }
      goto L_0888BF60;
    }
L_0888BF60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BF70;
      }
      goto L_0888BF68;
    }
L_0888BF68:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), ctx.gpr[4]);
    goto L_0888BF70;
L_0888BF70:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 7u, 0x0888C050u>(ctx, &aot_mem); return;
      }
      goto L_0888BF78;
    }
L_0888BF78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    ctx.gpr[5] = (0u | 111u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 7u, 0x0888C050u>(ctx, &aot_mem); return;
      }
      goto L_0888BF88;
    }
L_0888BF88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BFA0;
      }
      goto L_0888BF94;
    }
L_0888BF94:
    ctx.gpr[31] = (0x0888BF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem) && ctx.pc == 0x0888BF9Cu) goto L_0888BF9C;
    return;
L_0888BF9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888BFA0;
L_0888BFA0:
    ctx.gpr[31] = (0x0888BFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem) && ctx.pc == 0x0888BFA8u) goto L_0888BFA8;
    return;
L_0888BFA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 7u, 0x0888C050u>(ctx, &aot_mem); return;
      }
      goto L_0888BFB0;
    }
L_0888BFB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(695)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_0888BFD8;
      }
      goto L_0888BFC8;
    }
L_0888BFC8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BFC8;
      }
      goto L_0888BFD8;
    }
L_0888BFD8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BFFC;
      }
      goto L_0888BFE0;
    }
L_0888BFE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6008)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 7u, 0x0888C050u>(ctx, &aot_mem); return;
      }
      goto L_0888BFF0;
    }
L_0888BFF0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 7u, 0x0888C050u>(ctx, &aot_mem); return;
      }
      goto L_0888BFFC;
    }
L_0888BFFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.pc = 0x0888C000u; return;
}

void recomp_unit_0033(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0033_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_33(Runtime &runtime) {
    runtime.register_generated_unit(33u, 0x08888000u, 16384u, &recomp_unit_0033, &recomp_unit_0033_entry);
    runtime.register_function(0x08888000u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888008u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888020u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888028u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888040u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888050u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888058u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888060u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888806Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888078u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888084u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888088u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888090u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088880B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088880C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088880C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088880D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088880E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088880ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088880F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088880F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888100u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888108u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888118u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888120u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888128u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888130u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888138u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888140u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888148u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888150u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888168u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888817Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888180u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888198u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888208u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888220u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888822Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888823Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888244u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888824Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888254u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888825Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888264u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888826Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888274u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888827Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888828Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888300u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888308u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888310u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888318u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888320u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888328u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888330u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888833Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888344u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888348u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888350u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888835Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888364u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888370u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888837Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888384u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888390u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888398u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888400u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888408u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888418u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888420u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888438u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888448u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888845Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888464u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888474u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888847Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888504u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888850Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888514u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888851Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888524u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888853Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888548u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888554u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888568u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888590u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888594u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888859Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888608u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888610u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888618u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888620u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888630u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888638u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888640u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888864Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888654u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888865Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888664u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888866Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888674u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888684u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888868Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888694u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888704u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888710u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888871Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888728u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888730u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888738u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888740u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888748u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888750u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888754u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888876Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888784u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888878Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888794u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888800u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888810u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888818u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888820u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888828u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888830u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888883Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888844u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888884Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888854u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888885Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888868u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888870u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888878u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888880u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888888u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888898u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888908u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888910u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888914u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888928u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888934u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888954u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888960u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888970u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888978u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888980u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888988u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888990u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888899Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AE0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B18u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F18u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888F98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888FA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888FACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888FB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888FC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888FF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888FF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889000u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889010u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888903Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889044u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889054u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889058u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889074u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888907Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889098u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088890FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889110u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889118u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889120u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889128u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889138u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889144u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888914Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889178u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889180u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889188u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088891ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088891B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088891CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088891E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088891E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889200u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889214u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888921Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888922Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888923Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889258u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889260u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888926Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088892B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088892C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088892CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088892D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088892E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088892F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088892FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889304u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888930Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889318u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889328u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889334u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889338u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889350u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888935Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889368u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889374u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889380u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888938Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889398u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888939Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088893E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889400u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888940Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889414u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888941Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889428u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889434u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889440u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888944Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889458u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889464u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888946Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888947Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889484u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088894B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889510u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889530u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889548u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889578u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088895D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889604u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888960Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889618u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889634u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889644u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889654u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888966Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889680u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889694u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889698u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888970Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888974Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888975Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888976Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889814u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888981Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889860u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888986Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889884u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889890u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889894u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888989Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889904u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888990Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889914u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888991Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889924u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888992Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889934u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889944u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889950u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889958u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889960u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889968u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889970u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889978u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889980u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889988u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888999Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A94u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889ABCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AE0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889CF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889D94u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E94u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889ECCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889ED4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889EDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889F98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A014u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A01Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A028u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A034u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A058u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A064u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A094u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A098u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A104u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A124u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A144u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A158u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A164u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A16Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A17Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A184u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A18Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A198u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A200u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A208u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A230u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A238u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A240u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A248u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A250u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A260u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A270u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A278u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A280u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A288u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A294u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A29Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A310u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A33Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A344u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A34Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A35Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A368u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A37Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A384u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A388u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A398u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A440u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A448u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A454u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A474u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A47Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A488u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A52Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A538u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A588u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A59Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A660u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A668u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A688u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A70Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A720u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A728u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A738u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A74Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A764u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A768u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A774u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A77Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A780u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A788u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A790u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A79Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A800u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A80Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A818u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A82Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A834u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A840u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A854u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A860u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A86Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A870u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A880u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A890u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A898u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A8A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A8A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A8B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A8C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A8C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A8F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A8FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A904u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A934u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A93Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A944u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A950u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A95Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A964u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A96Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A974u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A97Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A984u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A990u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A998u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A9A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A9B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A9BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A9C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A9CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A9E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AABCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AAC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AAF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AAF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACCCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADCCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AECCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AED8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEE0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF18u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B004u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B00Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B010u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B018u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B020u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B02Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B034u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B040u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B04Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B054u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B058u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B060u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B068u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B074u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B07Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B088u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B094u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B09Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B104u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B10Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B118u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B124u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B12Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B130u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B138u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B140u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B14Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B154u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B160u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B16Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B174u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B178u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B180u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B188u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B194u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B19Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B204u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B20Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B210u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B218u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B220u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B22Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B234u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B238u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B240u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B248u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B250u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B25Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B264u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B26Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B274u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B280u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B28Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B298u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B304u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B31Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B334u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B33Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B34Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B354u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B360u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B370u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B37Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B388u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B394u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B39Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B404u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B40Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B418u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B420u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B428u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B430u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B458u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B468u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B474u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B47Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B490u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B50Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B524u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B538u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B540u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B564u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B56Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B574u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B58Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B5F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B604u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B610u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B618u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B624u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B630u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B640u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B648u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B658u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B67Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B6F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B700u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B708u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B70Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B714u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B724u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B734u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B744u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B750u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B758u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B760u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B76Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B77Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B788u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B79Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B808u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B810u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B818u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B820u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B828u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B834u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B844u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B850u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B85Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B868u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B86Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B874u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B88Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B8F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B900u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B908u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B910u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B914u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B940u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B948u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B950u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B95Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B964u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B968u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B970u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B990u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B998u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA08u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BA90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BAD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB18u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BB94u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBE0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BBFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BC9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BCF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD08u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BD94u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BDA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BDA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BDB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BDB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BDC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BDDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BDE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BDF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BE98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEB8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BED4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF94u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFE0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BFFCu, &recomp_unit_0033, "recomp_unit_0033");
}
} // namespace psprecomp
