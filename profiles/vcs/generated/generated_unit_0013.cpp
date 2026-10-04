#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0013[4096] = {
    1, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0,
    0, 11, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 0, 17, 18, 0, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0,
    0, 25, 0, 26, 0, 27, 0, 28, 0, 0, 29, 0, 30, 0, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 0, 35, 0, 36, 0, 0, 37, 0,
    38, 0, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 53, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0,
    0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 73, 0, 74, 0, 75,
    0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0, 87, 0,
    88, 0, 89, 90, 0, 91, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 96, 97, 0, 98, 0, 99, 0, 0, 100, 0, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 0, 109, 0,
    0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117,
    0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 0, 126, 0, 127,
    0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0,
    0, 141, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 159, 0, 160, 0, 161,
    0, 162, 0, 0, 0, 163, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169,
    170, 0, 171, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0,
    0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195,
    0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0,
    209, 0, 210, 211, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 219,
    0, 220, 0, 221, 0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0,
    0, 0, 229, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 239,
    0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0,
    248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0, 258, 0, 259,
    0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 264, 265, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0,
    0, 0, 269, 0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 277, 0,
    0, 0, 278, 0, 0, 0, 279, 0, 280, 0, 281, 0, 282, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0,
    0, 0, 0, 0, 289, 290, 0, 0, 0, 0, 291, 0, 292, 0, 293, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 296, 0, 297, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 305, 0, 306, 0, 307, 0,
    308, 0, 309, 0, 0, 310, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 0, 0, 316, 317, 0, 0, 0, 0,
    318, 0, 319, 0, 320, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0,
    327, 0, 0, 0, 328, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 335, 336, 0, 0, 0, 0,
    337, 0, 338, 0, 339, 0, 340, 341, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 345, 346, 0, 0, 0, 0, 347, 0, 348, 0, 349, 0, 350, 0,
    351, 0, 0, 352, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 0,
    0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 373, 0, 0, 374, 0,
    375, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 383, 0, 384, 0,
    385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0, 393, 0, 394, 0, 395, 0, 0, 0, 396, 0, 397, 0,
    398, 0, 0, 399, 400, 0, 0, 0, 0, 401, 0, 402, 0, 0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 0, 407, 0, 408, 0,
    409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 420, 0, 421, 0, 0,
    0, 422, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 427, 0, 428, 0, 429, 430, 0, 0, 0, 0, 431, 0, 432,
    0, 433, 0, 434, 435, 0, 0, 0, 0, 436, 0, 437, 0, 438, 0, 439, 440, 0, 0, 0, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 0,
    446, 0, 447, 0, 0, 448, 0, 449, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    453, 0, 0, 0, 454, 0, 0, 455, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 462, 0,
    463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 471, 0, 472, 473,
    0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 0, 477, 0, 0, 478, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 483, 0,
    484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 0, 0, 489, 0, 490, 0, 491, 0, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 495, 0, 496, 0,
    497, 0, 0, 498, 499, 0, 0, 0, 0, 500, 0, 501, 0, 0, 502, 0, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0,
    508, 0, 0, 509, 0, 510, 0, 0, 511, 512, 0, 513, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 518, 0, 0, 519, 520,
    0, 521, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 0, 526, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0,
    532, 0, 0, 533, 534, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 541, 0, 542,
    0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 544, 545, 0, 546, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0,
    0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 555,
    0, 0, 556, 0, 557, 0, 0, 558, 0, 0, 0, 559, 0, 560, 0, 561, 0, 562, 0, 0, 0, 563, 0, 564, 0, 565, 0, 566, 0, 0, 0, 567,
    0, 568, 0, 0, 0, 569, 0, 570, 0, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0,
    579, 0, 580, 0, 0, 581, 0, 0, 582, 0, 583, 0, 584, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0,
    589, 0, 590, 0, 591, 592, 0, 0, 593, 0, 594, 0, 0, 0, 0, 595, 0, 596, 0, 597, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 600, 0,
    601, 0, 0, 0, 602, 0, 603, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 0, 0, 0, 615, 616, 0, 617, 0, 618,
    0, 619, 0, 620, 0, 0, 621, 0, 622, 0, 623, 0, 0, 0, 0, 624, 0, 625, 0, 626, 0, 627, 0, 628, 0, 0, 0, 629, 0, 0, 0, 0,
    0, 630, 0, 631, 0, 632, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 636,
    0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 645, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 650,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 653, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0, 657, 0,
    0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 661, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 664, 0, 665, 0,
    0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 668, 0, 0, 669, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 673, 0,
    0, 0, 674, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0, 0, 679, 0, 0, 680, 0, 0, 0, 681,
    0, 0, 0, 682, 0, 683, 0, 0, 0, 684, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 0, 689, 0,
    0, 690, 0, 0, 0, 691, 0, 0, 0, 692, 0, 693, 0, 0, 0, 694, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697,
    0, 698, 0, 0, 699, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 702, 0, 703, 0, 0, 0, 704, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 710, 0, 0, 0, 0, 0, 0, 711, 0, 0,
    0, 712, 0, 713, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 716, 0, 717, 0, 0, 718, 0, 719, 0, 0, 720, 0, 721,
    0, 0, 722, 0, 723, 0, 0, 724, 725, 0, 726, 0, 727, 0, 728, 0, 729, 730, 0, 0, 731, 0, 0, 0, 732, 733, 0, 734, 0, 0, 735, 0,
    0, 736, 0, 0, 737, 0, 0, 738, 0, 0, 739, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0,
    0, 742, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 745, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 749, 0, 0, 750, 0,
    0, 751, 0, 0, 752, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 755, 756, 0, 757, 0,
    758, 0, 0, 759, 0, 0, 760, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 762, 0, 763, 0, 764, 0, 0, 765, 0, 0, 766, 0, 0, 767,
    0, 768, 0, 769, 0, 770, 0, 0, 771, 0, 0, 0, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 774,
    0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 776, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 780, 0, 0, 781, 0, 0, 782, 0, 783, 0, 0, 784, 0, 0, 785, 0, 0, 786, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 788, 0, 789, 0, 790, 0, 0, 791, 0, 792, 0, 0, 793, 0, 0, 0, 794,
    0, 795, 0, 0, 0, 0, 0, 796, 0, 0, 797, 0, 0, 0, 0, 798, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 801, 802, 0, 803, 0, 804, 0, 0, 0, 805, 0, 0, 806, 0, 0, 0, 0, 0, 807, 0, 0, 808, 0, 0, 809,
    0, 0, 810, 0, 0, 0, 811, 0, 0, 812, 0, 813, 0, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 818, 0, 819, 0, 0, 0, 820, 0, 821, 822, 0, 823, 0, 0, 0, 824, 0, 0, 0, 0,
    0, 0, 0, 0, 825, 0, 0, 826, 0, 0, 0, 827, 0, 828, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 830, 0, 0, 0, 831, 832, 0,
    0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 835, 0, 0, 836, 0, 0, 0, 0, 837, 0, 0, 0,
    838, 0, 0, 839, 840, 0, 0, 0, 0, 0, 841, 0, 0, 0, 842, 0, 0, 0, 0, 843, 0, 0, 844, 0, 0, 845, 0, 0, 846, 0, 0, 847,
    0, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 850, 0, 851, 0, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0,
    853, 0, 0, 0, 0, 0, 0, 854, 0, 0, 0, 855, 0, 0, 856, 0, 0, 857, 0, 0, 858, 0, 0, 859, 860, 0, 0, 0, 0, 0, 0, 861,
    0, 862, 0, 0, 863, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 866, 0, 0,
    867, 0, 868, 0, 0, 0, 0, 0, 0, 869, 0, 870, 0, 0, 0, 871, 0, 0, 0, 0, 872, 0, 0, 873, 0, 874, 0, 875, 0, 0, 0, 0,
    876, 0, 877, 0, 878, 0, 0, 879, 0, 880, 0, 881, 0, 882, 0, 0, 883, 0, 0, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 885, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 888, 0, 889, 890, 0, 891, 0, 0, 0, 0, 892,
    0, 893, 0, 0, 0, 894, 895, 0, 896, 0, 0, 897, 0, 0, 0, 0, 898, 0, 0, 899, 0, 900, 0, 901, 0, 902, 0, 903, 0, 904, 0, 905,
    0, 0, 906, 0, 907, 0, 908, 0, 0, 909, 0, 0, 910, 0, 911, 0, 912, 0, 913, 0, 914, 0, 915, 0, 916, 0, 917, 0, 918, 0, 919, 920,
    0, 0, 921, 0, 0, 922, 0, 923, 0, 0, 924, 0, 925, 0, 926, 0, 927, 928, 0, 929, 0, 0, 930, 0, 931, 0, 932, 0, 0, 0, 0, 0,
    0, 933, 0, 934, 0, 0, 0, 935, 0, 0, 0, 936, 0, 937, 0, 0, 938, 0, 939, 0, 0, 940, 0, 941, 0, 942, 0, 943, 0, 944, 0, 945,
    0, 946, 0, 947, 0, 0, 0, 948, 0, 0, 0, 0, 0, 0, 0, 949, 0, 0, 0, 0, 0, 950, 0, 0, 0, 0, 0, 951, 0, 952, 0, 0,
    953, 0, 0, 0, 0, 0, 0, 0, 0, 954, 0, 0, 0, 0, 0, 955, 0, 956, 0, 0, 0, 957, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 958, 0, 0, 0, 0, 959, 0, 0, 0, 0, 960, 0, 0, 0, 0, 0, 0, 0, 961, 0, 0, 0, 0, 962, 0, 0, 0, 0, 963, 0, 964,
    0, 965, 0, 966, 0, 0, 967, 0, 968, 0, 0, 969, 0, 0, 0, 0, 970, 0, 0, 971, 0, 972, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    973, 0, 974, 0, 0, 975, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 976, 0, 0, 0, 0, 0, 977, 0, 0, 0, 978, 0, 0,
    0, 0, 0, 979, 0, 980, 0, 981, 982, 0, 0, 983, 0, 0, 984, 0, 985, 986, 0, 0, 987, 0, 0, 988, 0, 989, 0, 990, 0, 0, 0, 991,
    992, 0, 0, 0, 0, 0, 0, 0, 0, 0, 993, 994, 0, 995, 0, 996, 0, 0, 997, 0, 0, 998, 0, 0, 0, 0, 0, 0, 0, 0, 0, 999,
    0, 1000, 0, 0, 1001, 0, 1002, 0, 0, 0, 1003, 1004, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1005, 0, 1006, 0, 0, 0, 0, 0, 0, 0, 0,
    1007, 0, 0, 0, 0, 0, 0, 0, 1008, 0, 0, 1009, 0, 1010, 0, 0, 0, 1011, 0, 1012, 0, 0, 0, 0, 1013, 0, 0, 0, 0, 1014, 0, 1015,
    0, 1016, 0, 1017, 0, 1018, 0, 0, 0, 0, 0, 0, 1019, 0, 1020, 0, 0, 0, 0, 0, 1021, 0, 1022, 0, 1023, 0, 1024, 0, 0, 0, 0, 0,
    1025, 0, 1026, 0, 1027, 0, 0, 0, 0, 1028, 0, 0, 1029, 0, 0, 1030, 0, 1031, 0, 1032, 0, 0, 0, 0, 0, 1033, 0, 1034, 0, 1035, 0, 1036,
    0, 0, 0, 0, 0, 1037, 0, 1038, 0, 1039, 0, 1040, 0, 1041, 0, 0, 0, 1042, 0, 0, 1043, 0, 0, 1044, 0, 1045, 0, 1046, 0, 0, 1047, 0,
    1048, 0, 1049, 0, 1050, 0, 1051, 0, 1052, 0, 1053, 0, 1054, 0, 0, 1055, 0, 0, 0, 0, 0, 1056, 1057, 0, 1058, 0, 0, 1059, 0, 1060, 0, 0,
    1061, 0, 1062, 0, 0, 0, 0, 0, 0, 1063, 0, 0, 1064, 0, 1065, 0, 1066, 0, 0, 0, 1067, 0, 1068, 0, 1069, 0, 0, 0, 0, 0, 0, 1070,
    0, 0, 1071, 0, 1072, 0, 1073, 0, 1074, 0, 0, 1075, 0, 0, 1076, 0, 0, 1077, 0, 0, 0, 1078, 0, 1079, 0, 0, 1080, 0, 1081, 0, 1082, 0,
    0, 1083, 0, 1084, 0, 1085, 0, 1086, 0, 1087, 0, 0, 0, 0, 0, 0, 1088, 0, 1089, 0, 0, 1090, 0, 1091, 0, 0, 1092, 0, 0, 0, 0, 0,
    0, 0, 1093, 0, 0, 1094, 0, 1095, 0, 1096, 0, 0, 1097, 0, 0, 0, 0, 0, 1098, 0, 0, 1099, 0, 1100, 0, 0, 0, 0, 0, 0, 0, 0,
    1101, 0, 0, 1102, 0, 1103, 0, 1104, 0, 0, 0, 1105, 0, 0, 0, 0, 0, 1106, 0, 0, 1107, 1108, 0, 0, 0, 1109, 0, 0, 1110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1111, 0, 1112, 0, 0, 1113, 0, 0, 0, 0, 0, 1114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1115, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1116, 0, 0, 0, 1117, 0, 0, 0, 0, 0, 0, 0, 0, 1118, 0, 0, 0, 0, 0, 1119, 0,
    0, 0, 0, 0, 0, 0, 1120, 0, 0, 0, 0, 0, 0, 0, 0, 1121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1122, 0, 0, 0, 0, 1123, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1124, 0, 1125, 0, 0, 1126, 0, 0, 1127, 0, 0, 0, 0, 0, 0, 0, 0, 1128, 0, 0, 0, 0, 0,
    0, 0, 1129, 0, 1130, 1131, 0, 0, 1132, 0, 0, 0, 0, 1133, 0, 0, 0, 0, 1134, 0, 1135, 0, 0, 0, 1136, 0, 0, 0, 0, 0, 1137, 0,
    0, 1138, 0, 1139, 0, 0, 1140, 0, 0, 1141, 0, 0, 1142, 1143, 0, 0, 1144, 0, 1145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1147, 0, 0, 1148, 0, 0, 0, 0, 0, 1149, 0, 0, 1150, 0, 1151, 0, 0, 0, 0, 0, 0, 1152, 0, 1153, 0, 0,
    0, 0, 0, 0, 1154, 0, 0, 0, 1155, 1156, 0, 1157, 0, 0, 0, 0, 0, 1158, 0, 1159, 0, 0, 1160, 0, 1161, 0, 1162, 0, 0, 0, 1163, 0,
    0, 0, 0, 1164, 0, 1165, 0, 0, 1166, 0, 0, 0, 0, 0, 0, 1167, 0, 1168, 0, 1169, 0, 1170, 0, 0, 0, 0, 0, 0, 1171, 0, 1172, 0,
    0, 0, 0, 1173, 0, 1174, 0, 0, 0, 0, 0, 1175, 0, 1176, 0, 0, 0, 0, 0, 1177, 0, 1178, 0, 1179, 0, 1180, 0, 1181, 0, 1182, 0, 1183,
};
void recomp_unit_0013_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08838000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0013[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08838000;
    case 2u: goto L_0883800C;
    case 3u: goto L_08838014;
    case 4u: goto L_0883801C;
    case 5u: goto L_0883802C;
    case 6u: goto L_08838038;
    case 7u: goto L_08838044;
    case 8u: goto L_08838054;
    case 9u: goto L_08838064;
    case 10u: goto L_0883806C;
    case 11u: goto L_08838084;
    case 12u: goto L_0883808C;
    case 13u: goto L_08838094;
    case 14u: goto L_0883809C;
    case 15u: goto L_088380A8;
    case 16u: goto L_088380B0;
    case 17u: goto L_088380BC;
    case 18u: goto L_088380C0;
    case 19u: goto L_088380D0;
    case 20u: goto L_088380D8;
    case 21u: goto L_088380E0;
    case 22u: goto L_088380E8;
    case 23u: goto L_088380F0;
    case 24u: goto L_088380F8;
    case 25u: goto L_08838104;
    case 26u: goto L_0883810C;
    case 27u: goto L_08838114;
    case 28u: goto L_0883811C;
    case 29u: goto L_08838128;
    case 30u: goto L_08838130;
    case 31u: goto L_0883813C;
    case 32u: goto L_08838144;
    case 33u: goto L_08838150;
    case 34u: goto L_08838158;
    case 35u: goto L_08838164;
    case 36u: goto L_0883816C;
    case 37u: goto L_08838178;
    case 38u: goto L_08838180;
    case 39u: goto L_0883818C;
    case 40u: goto L_08838194;
    case 41u: goto L_088381A0;
    case 42u: goto L_088381A8;
    case 43u: goto L_088381B4;
    case 44u: goto L_088381BC;
    case 45u: goto L_088381C4;
    case 46u: goto L_088381CC;
    case 47u: goto L_088381D8;
    case 48u: goto L_088381E4;
    case 49u: goto L_08838204;
    case 50u: goto L_0883820C;
    case 51u: goto L_08838214;
    case 52u: goto L_0883822C;
    case 53u: goto L_08838230;
    case 54u: goto L_08838240;
    case 55u: goto L_08838248;
    case 56u: goto L_08838250;
    case 57u: goto L_08838258;
    case 58u: goto L_08838260;
    case 59u: goto L_08838268;
    case 60u: goto L_08838270;
    case 61u: goto L_08838278;
    case 62u: goto L_08838284;
    case 63u: goto L_0883828C;
    case 64u: goto L_08838294;
    case 65u: goto L_0883829C;
    case 66u: goto L_088382A4;
    case 67u: goto L_088382AC;
    case 68u: goto L_088382B8;
    case 69u: goto L_088382C0;
    case 70u: goto L_088382D0;
    case 71u: goto L_088382D8;
    case 72u: goto L_088382E4;
    case 73u: goto L_088382EC;
    case 74u: goto L_088382F4;
    case 75u: goto L_088382FC;
    case 76u: goto L_08838304;
    case 77u: goto L_0883830C;
    case 78u: goto L_08838314;
    case 79u: goto L_08838328;
    case 80u: goto L_08838334;
    case 81u: goto L_0883833C;
    case 82u: goto L_08838348;
    case 83u: goto L_08838350;
    case 84u: goto L_08838358;
    case 85u: goto L_08838360;
    case 86u: goto L_0883836C;
    case 87u: goto L_08838378;
    case 88u: goto L_08838380;
    case 89u: goto L_08838388;
    case 90u: goto L_0883838C;
    case 91u: goto L_08838394;
    case 92u: goto L_0883839C;
    case 93u: goto L_088383A4;
    case 94u: goto L_088383B0;
    case 95u: goto L_088383C0;
    case 96u: goto L_088383D4;
    case 97u: goto L_088383D8;
    case 98u: goto L_088383E0;
    case 99u: goto L_088383E8;
    case 100u: goto L_088383F4;
    case 101u: goto L_08838400;
    case 102u: goto L_08838410;
    case 103u: goto L_0883843C;
    case 104u: goto L_08838448;
    case 105u: goto L_08838450;
    case 106u: goto L_08838458;
    case 107u: goto L_08838464;
    case 108u: goto L_0883846C;
    case 109u: goto L_08838478;
    case 110u: goto L_08838484;
    case 111u: goto L_088384B0;
    case 112u: goto L_088384BC;
    case 113u: goto L_088384C8;
    case 114u: goto L_088384D4;
    case 115u: goto L_088384E0;
    case 116u: goto L_088384F4;
    case 117u: goto L_088384FC;
    case 118u: goto L_08838504;
    case 119u: goto L_08838514;
    case 120u: goto L_0883851C;
    case 121u: goto L_08838528;
    case 122u: goto L_0883854C;
    case 123u: goto L_08838554;
    case 124u: goto L_08838560;
    case 125u: goto L_08838568;
    case 126u: goto L_08838574;
    case 127u: goto L_0883857C;
    case 128u: goto L_08838588;
    case 129u: goto L_08838590;
    case 130u: goto L_0883859C;
    case 131u: goto L_088385AC;
    case 132u: goto L_088385B8;
    case 133u: goto L_088385C4;
    case 134u: goto L_088385EC;
    case 135u: goto L_08838600;
    case 136u: goto L_08838614;
    case 137u: goto L_08838624;
    case 138u: goto L_08838660;
    case 139u: goto L_0883866C;
    case 140u: goto L_08838678;
    case 141u: goto L_08838684;
    case 142u: goto L_0883868C;
    case 143u: goto L_08838698;
    case 144u: goto L_088386A4;
    case 145u: goto L_088386B4;
    case 146u: goto L_088386CC;
    case 147u: goto L_088386D4;
    case 148u: goto L_088386DC;
    case 149u: goto L_088386EC;
    case 150u: goto L_088386F8;
    case 151u: goto L_08838714;
    case 152u: goto L_08838728;
    case 153u: goto L_08838730;
    case 154u: goto L_08838738;
    case 155u: goto L_08838740;
    case 156u: goto L_0883874C;
    case 157u: goto L_08838758;
    case 158u: goto L_08838760;
    case 159u: goto L_0883876C;
    case 160u: goto L_08838774;
    case 161u: goto L_0883877C;
    case 162u: goto L_08838784;
    case 163u: goto L_08838794;
    case 164u: goto L_08838798;
    case 165u: goto L_088387A4;
    case 166u: goto L_088387B8;
    case 167u: goto L_088387CC;
    case 168u: goto L_088387D4;
    case 169u: goto L_088387FC;
    case 170u: goto L_08838800;
    case 171u: goto L_08838808;
    case 172u: goto L_0883880C;
    case 173u: goto L_08838814;
    case 174u: goto L_0883881C;
    case 175u: goto L_08838824;
    case 176u: goto L_0883882C;
    case 177u: goto L_08838834;
    case 178u: goto L_08838844;
    case 179u: goto L_0883884C;
    case 180u: goto L_08838854;
    case 181u: goto L_08838864;
    case 182u: goto L_0883886C;
    case 183u: goto L_08838874;
    case 184u: goto L_08838884;
    case 185u: goto L_0883888C;
    case 186u: goto L_08838894;
    case 187u: goto L_088388A4;
    case 188u: goto L_088388B0;
    case 189u: goto L_088388B8;
    case 190u: goto L_088388C0;
    case 191u: goto L_088388C8;
    case 192u: goto L_088388E4;
    case 193u: goto L_088388EC;
    case 194u: goto L_088388F4;
    case 195u: goto L_088388FC;
    case 196u: goto L_0883890C;
    case 197u: goto L_08838914;
    case 198u: goto L_08838940;
    case 199u: goto L_0883894C;
    case 200u: goto L_08838954;
    case 201u: goto L_08838960;
    case 202u: goto L_08838968;
    case 203u: goto L_088389A4;
    case 204u: goto L_088389B0;
    case 205u: goto L_088389BC;
    case 206u: goto L_088389D0;
    case 207u: goto L_088389E4;
    case 208u: goto L_088389EC;
    case 209u: goto L_08838A00;
    case 210u: goto L_08838A08;
    case 211u: goto L_08838A0C;
    case 212u: goto L_08838A14;
    case 213u: goto L_08838A28;
    case 214u: goto L_08838A30;
    case 215u: goto L_08838A50;
    case 216u: goto L_08838A60;
    case 217u: goto L_08838A68;
    case 218u: goto L_08838A70;
    case 219u: goto L_08838A7C;
    case 220u: goto L_08838A84;
    case 221u: goto L_08838A8C;
    case 222u: goto L_08838A98;
    case 223u: goto L_08838AA0;
    case 224u: goto L_08838AAC;
    case 225u: goto L_08838AB8;
    case 226u: goto L_08838AC8;
    case 227u: goto L_08838AD0;
    case 228u: goto L_08838AF4;
    case 229u: goto L_08838B08;
    case 230u: goto L_08838B10;
    case 231u: goto L_08838B18;
    case 232u: goto L_08838B24;
    case 233u: goto L_08838B2C;
    case 234u: goto L_08838B38;
    case 235u: goto L_08838B50;
    case 236u: goto L_08838B58;
    case 237u: goto L_08838B60;
    case 238u: goto L_08838B78;
    case 239u: goto L_08838B7C;
    case 240u: goto L_08838B90;
    case 241u: goto L_08838B98;
    case 242u: goto L_08838BA0;
    case 243u: goto L_08838BB8;
    case 244u: goto L_08838BC0;
    case 245u: goto L_08838BCC;
    case 246u: goto L_08838BD4;
    case 247u: goto L_08838BF8;
    case 248u: goto L_08838C00;
    case 249u: goto L_08838C10;
    case 250u: goto L_08838C20;
    case 251u: goto L_08838C28;
    case 252u: goto L_08838C38;
    case 253u: goto L_08838C48;
    case 254u: goto L_08838C50;
    case 255u: goto L_08838C58;
    case 256u: goto L_08838C60;
    case 257u: goto L_08838C68;
    case 258u: goto L_08838C74;
    case 259u: goto L_08838C7C;
    case 260u: goto L_08838C88;
    case 261u: goto L_08838CA0;
    case 262u: goto L_08838CA8;
    case 263u: goto L_08838CB0;
    case 264u: goto L_08838CC8;
    case 265u: goto L_08838CCC;
    case 266u: goto L_08838CE0;
    case 267u: goto L_08838CE8;
    case 268u: goto L_08838CF0;
    case 269u: goto L_08838D08;
    case 270u: goto L_08838D10;
    case 271u: goto L_08838D1C;
    case 272u: goto L_08838D24;
    case 273u: goto L_08838D48;
    case 274u: goto L_08838D50;
    case 275u: goto L_08838D60;
    case 276u: goto L_08838D70;
    case 277u: goto L_08838D78;
    case 278u: goto L_08838D88;
    case 279u: goto L_08838D98;
    case 280u: goto L_08838DA0;
    case 281u: goto L_08838DA8;
    case 282u: goto L_08838DB0;
    case 283u: goto L_08838DBC;
    case 284u: goto L_08838DC4;
    case 285u: goto L_08838DD0;
    case 286u: goto L_08838DE8;
    case 287u: goto L_08838DF0;
    case 288u: goto L_08838DF8;
    case 289u: goto L_08838E10;
    case 290u: goto L_08838E14;
    case 291u: goto L_08838E28;
    case 292u: goto L_08838E30;
    case 293u: goto L_08838E38;
    case 294u: goto L_08838E50;
    case 295u: goto L_08838E58;
    case 296u: goto L_08838E64;
    case 297u: goto L_08838E6C;
    case 298u: goto L_08838E90;
    case 299u: goto L_08838E98;
    case 300u: goto L_08838EA8;
    case 301u: goto L_08838EB8;
    case 302u: goto L_08838EC0;
    case 303u: goto L_08838ED0;
    case 304u: goto L_08838EE0;
    case 305u: goto L_08838EE8;
    case 306u: goto L_08838EF0;
    case 307u: goto L_08838EF8;
    case 308u: goto L_08838F00;
    case 309u: goto L_08838F08;
    case 310u: goto L_08838F14;
    case 311u: goto L_08838F1C;
    case 312u: goto L_08838F28;
    case 313u: goto L_08838F40;
    case 314u: goto L_08838F48;
    case 315u: goto L_08838F50;
    case 316u: goto L_08838F68;
    case 317u: goto L_08838F6C;
    case 318u: goto L_08838F80;
    case 319u: goto L_08838F88;
    case 320u: goto L_08838F90;
    case 321u: goto L_08838FA8;
    case 322u: goto L_08838FB0;
    case 323u: goto L_08838FBC;
    case 324u: goto L_08838FC4;
    case 325u: goto L_08838FE8;
    case 326u: goto L_08838FF0;
    case 327u: goto L_08839000;
    case 328u: goto L_08839010;
    case 329u: goto L_08839018;
    case 330u: goto L_08839028;
    case 331u: goto L_08839038;
    case 332u: goto L_08839050;
    case 333u: goto L_08839058;
    case 334u: goto L_08839060;
    case 335u: goto L_08839068;
    case 336u: goto L_0883906C;
    case 337u: goto L_08839080;
    case 338u: goto L_08839088;
    case 339u: goto L_08839090;
    case 340u: goto L_08839098;
    case 341u: goto L_0883909C;
    case 342u: goto L_088390B0;
    case 343u: goto L_088390B8;
    case 344u: goto L_088390C0;
    case 345u: goto L_088390C8;
    case 346u: goto L_088390CC;
    case 347u: goto L_088390E0;
    case 348u: goto L_088390E8;
    case 349u: goto L_088390F0;
    case 350u: goto L_088390F8;
    case 351u: goto L_08839100;
    case 352u: goto L_0883910C;
    case 353u: goto L_08839114;
    case 354u: goto L_08839120;
    case 355u: goto L_08839130;
    case 356u: goto L_08839140;
    case 357u: goto L_0883914C;
    case 358u: goto L_08839158;
    case 359u: goto L_08839164;
    case 360u: goto L_08839174;
    case 361u: goto L_08839184;
    case 362u: goto L_0883918C;
    case 363u: goto L_088391B4;
    case 364u: goto L_088391C0;
    case 365u: goto L_088391DC;
    case 366u: goto L_088391EC;
    case 367u: goto L_088391F8;
    case 368u: goto L_08839224;
    case 369u: goto L_08839238;
    case 370u: goto L_0883924C;
    case 371u: goto L_08839254;
    case 372u: goto L_0883925C;
    case 373u: goto L_0883926C;
    case 374u: goto L_08839278;
    case 375u: goto L_08839280;
    case 376u: goto L_08839288;
    case 377u: goto L_08839298;
    case 378u: goto L_088392AC;
    case 379u: goto L_088392B4;
    case 380u: goto L_088392D0;
    case 381u: goto L_088392DC;
    case 382u: goto L_088392E8;
    case 383u: goto L_088392F0;
    case 384u: goto L_088392F8;
    case 385u: goto L_08839300;
    case 386u: goto L_08839308;
    case 387u: goto L_08839310;
    case 388u: goto L_08839318;
    case 389u: goto L_08839320;
    case 390u: goto L_08839330;
    case 391u: goto L_08839338;
    case 392u: goto L_08839340;
    case 393u: goto L_08839350;
    case 394u: goto L_08839358;
    case 395u: goto L_08839360;
    case 396u: goto L_08839370;
    case 397u: goto L_08839378;
    case 398u: goto L_08839380;
    case 399u: goto L_0883938C;
    case 400u: goto L_08839390;
    case 401u: goto L_088393A4;
    case 402u: goto L_088393AC;
    case 403u: goto L_088393B8;
    case 404u: goto L_088393C8;
    case 405u: goto L_088393D4;
    case 406u: goto L_088393E0;
    case 407u: goto L_088393F0;
    case 408u: goto L_088393F8;
    case 409u: goto L_08839400;
    case 410u: goto L_0883940C;
    case 411u: goto L_0883942C;
    case 412u: goto L_08839444;
    case 413u: goto L_0883944C;
    case 414u: goto L_08839458;
    case 415u: goto L_08839474;
    case 416u: goto L_088394AC;
    case 417u: goto L_088394B4;
    case 418u: goto L_088394DC;
    case 419u: goto L_088394E4;
    case 420u: goto L_088394EC;
    case 421u: goto L_088394F4;
    case 422u: goto L_08839504;
    case 423u: goto L_08839510;
    case 424u: goto L_08839520;
    case 425u: goto L_0883952C;
    case 426u: goto L_08839544;
    case 427u: goto L_0883954C;
    case 428u: goto L_08839554;
    case 429u: goto L_0883955C;
    case 430u: goto L_08839560;
    case 431u: goto L_08839574;
    case 432u: goto L_0883957C;
    case 433u: goto L_08839584;
    case 434u: goto L_0883958C;
    case 435u: goto L_08839590;
    case 436u: goto L_088395A4;
    case 437u: goto L_088395AC;
    case 438u: goto L_088395B4;
    case 439u: goto L_088395BC;
    case 440u: goto L_088395C0;
    case 441u: goto L_088395D4;
    case 442u: goto L_088395DC;
    case 443u: goto L_088395E4;
    case 444u: goto L_088395EC;
    case 445u: goto L_088395F4;
    case 446u: goto L_08839600;
    case 447u: goto L_08839608;
    case 448u: goto L_08839614;
    case 449u: goto L_0883961C;
    case 450u: goto L_08839628;
    case 451u: goto L_08839648;
    case 452u: goto L_08839650;
    case 453u: goto L_08839680;
    case 454u: goto L_08839690;
    case 455u: goto L_0883969C;
    case 456u: goto L_088396A4;
    case 457u: goto L_088396AC;
    case 458u: goto L_088396C8;
    case 459u: goto L_088396D8;
    case 460u: goto L_088396E4;
    case 461u: goto L_088396F0;
    case 462u: goto L_088396F8;
    case 463u: goto L_08839700;
    case 464u: goto L_0883971C;
    case 465u: goto L_08839730;
    case 466u: goto L_08839738;
    case 467u: goto L_08839744;
    case 468u: goto L_08839750;
    case 469u: goto L_0883975C;
    case 470u: goto L_08839768;
    case 471u: goto L_08839770;
    case 472u: goto L_08839778;
    case 473u: goto L_0883977C;
    case 474u: goto L_08839788;
    case 475u: goto L_08839794;
    case 476u: goto L_088397A0;
    case 477u: goto L_088397B0;
    case 478u: goto L_088397BC;
    case 479u: goto L_088397C4;
    case 480u: goto L_088397CC;
    case 481u: goto L_088397E8;
    case 482u: goto L_088397F0;
    case 483u: goto L_088397F8;
    case 484u: goto L_08839800;
    case 485u: goto L_08839808;
    case 486u: goto L_08839810;
    case 487u: goto L_08839818;
    case 488u: goto L_08839820;
    case 489u: goto L_08839830;
    case 490u: goto L_08839838;
    case 491u: goto L_08839840;
    case 492u: goto L_08839850;
    case 493u: goto L_08839858;
    case 494u: goto L_08839860;
    case 495u: goto L_08839870;
    case 496u: goto L_08839878;
    case 497u: goto L_08839880;
    case 498u: goto L_0883988C;
    case 499u: goto L_08839890;
    case 500u: goto L_088398A4;
    case 501u: goto L_088398AC;
    case 502u: goto L_088398B8;
    case 503u: goto L_088398C8;
    case 504u: goto L_088398D4;
    case 505u: goto L_088398DC;
    case 506u: goto L_088398E8;
    case 507u: goto L_088398F4;
    case 508u: goto L_08839900;
    case 509u: goto L_0883990C;
    case 510u: goto L_08839914;
    case 511u: goto L_08839920;
    case 512u: goto L_08839924;
    case 513u: goto L_0883992C;
    case 514u: goto L_08839940;
    case 515u: goto L_0883994C;
    case 516u: goto L_08839958;
    case 517u: goto L_08839964;
    case 518u: goto L_0883996C;
    case 519u: goto L_08839978;
    case 520u: goto L_0883997C;
    case 521u: goto L_08839984;
    case 522u: goto L_08839994;
    case 523u: goto L_088399A0;
    case 524u: goto L_088399BC;
    case 525u: goto L_088399C4;
    case 526u: goto L_088399D0;
    case 527u: goto L_088399D8;
    case 528u: goto L_088399E0;
    case 529u: goto L_088399E8;
    case 530u: goto L_088399F0;
    case 531u: goto L_088399F8;
    case 532u: goto L_08839A00;
    case 533u: goto L_08839A0C;
    case 534u: goto L_08839A10;
    case 535u: goto L_08839A18;
    case 536u: goto L_08839A20;
    case 537u: goto L_08839A3C;
    case 538u: goto L_08839A44;
    case 539u: goto L_08839A58;
    case 540u: goto L_08839A60;
    case 541u: goto L_08839A74;
    case 542u: goto L_08839A7C;
    case 543u: goto L_08839A90;
    case 544u: goto L_08839AAC;
    case 545u: goto L_08839AB0;
    case 546u: goto L_08839AB8;
    case 547u: goto L_08839AC4;
    case 548u: goto L_08839AEC;
    case 549u: goto L_08839B10;
    case 550u: goto L_08839B20;
    case 551u: goto L_08839B34;
    case 552u: goto L_08839B50;
    case 553u: goto L_08839B5C;
    case 554u: goto L_08839B6C;
    case 555u: goto L_08839B7C;
    case 556u: goto L_08839B88;
    case 557u: goto L_08839B90;
    case 558u: goto L_08839B9C;
    case 559u: goto L_08839BAC;
    case 560u: goto L_08839BB4;
    case 561u: goto L_08839BBC;
    case 562u: goto L_08839BC4;
    case 563u: goto L_08839BD4;
    case 564u: goto L_08839BDC;
    case 565u: goto L_08839BE4;
    case 566u: goto L_08839BEC;
    case 567u: goto L_08839BFC;
    case 568u: goto L_08839C04;
    case 569u: goto L_08839C14;
    case 570u: goto L_08839C1C;
    case 571u: goto L_08839C2C;
    case 572u: goto L_08839C34;
    case 573u: goto L_08839C3C;
    case 574u: goto L_08839C44;
    case 575u: goto L_08839C4C;
    case 576u: goto L_08839C54;
    case 577u: goto L_08839C5C;
    case 578u: goto L_08839C78;
    case 579u: goto L_08839C80;
    case 580u: goto L_08839C88;
    case 581u: goto L_08839C94;
    case 582u: goto L_08839CA0;
    case 583u: goto L_08839CA8;
    case 584u: goto L_08839CB0;
    case 585u: goto L_08839CC0;
    case 586u: goto L_08839CC8;
    case 587u: goto L_08839CE0;
    case 588u: goto L_08839CF4;
    case 589u: goto L_08839D00;
    case 590u: goto L_08839D08;
    case 591u: goto L_08839D10;
    case 592u: goto L_08839D14;
    case 593u: goto L_08839D20;
    case 594u: goto L_08839D28;
    case 595u: goto L_08839D3C;
    case 596u: goto L_08839D44;
    case 597u: goto L_08839D4C;
    case 598u: goto L_08839D58;
    case 599u: goto L_08839D70;
    case 600u: goto L_08839D78;
    case 601u: goto L_08839D80;
    case 602u: goto L_08839D90;
    case 603u: goto L_08839D98;
    case 604u: goto L_08839DA4;
    case 605u: goto L_08839DAC;
    case 606u: goto L_08839DEC;
    case 607u: goto L_08839DF4;
    case 608u: goto L_08839E20;
    case 609u: goto L_08839E28;
    case 610u: goto L_08839E34;
    case 611u: goto L_08839E3C;
    case 612u: goto L_08839E44;
    case 613u: goto L_08839E4C;
    case 614u: goto L_08839E54;
    case 615u: goto L_08839E68;
    case 616u: goto L_08839E6C;
    case 617u: goto L_08839E74;
    case 618u: goto L_08839E7C;
    case 619u: goto L_08839E84;
    case 620u: goto L_08839E8C;
    case 621u: goto L_08839E98;
    case 622u: goto L_08839EA0;
    case 623u: goto L_08839EA8;
    case 624u: goto L_08839EBC;
    case 625u: goto L_08839EC4;
    case 626u: goto L_08839ECC;
    case 627u: goto L_08839ED4;
    case 628u: goto L_08839EDC;
    case 629u: goto L_08839EEC;
    case 630u: goto L_08839F04;
    case 631u: goto L_08839F0C;
    case 632u: goto L_08839F14;
    case 633u: goto L_08839F1C;
    case 634u: goto L_08839F50;
    case 635u: goto L_08839F70;
    case 636u: goto L_08839F7C;
    case 637u: goto L_08839F8C;
    case 638u: goto L_08839F98;
    case 639u: goto L_08839FAC;
    case 640u: goto L_08839FC0;
    case 641u: goto L_08839FD8;
    case 642u: goto L_08839FE8;
    case 643u: goto L_0883A018;
    case 644u: goto L_0883A020;
    case 645u: goto L_0883A02C;
    case 646u: goto L_0883A038;
    case 647u: goto L_0883A048;
    case 648u: goto L_0883A058;
    case 649u: goto L_0883A06C;
    case 650u: goto L_0883A07C;
    case 651u: goto L_0883A0AC;
    case 652u: goto L_0883A0B8;
    case 653u: goto L_0883A0C4;
    case 654u: goto L_0883A0D0;
    case 655u: goto L_0883A0E0;
    case 656u: goto L_0883A0F0;
    case 657u: goto L_0883A0F8;
    case 658u: goto L_0883A108;
    case 659u: goto L_0883A130;
    case 660u: goto L_0883A138;
    case 661u: goto L_0883A144;
    case 662u: goto L_0883A150;
    case 663u: goto L_0883A160;
    case 664u: goto L_0883A170;
    case 665u: goto L_0883A178;
    case 666u: goto L_0883A188;
    case 667u: goto L_0883A1B0;
    case 668u: goto L_0883A1B8;
    case 669u: goto L_0883A1C4;
    case 670u: goto L_0883A1D0;
    case 671u: goto L_0883A1E0;
    case 672u: goto L_0883A1F0;
    case 673u: goto L_0883A1F8;
    case 674u: goto L_0883A208;
    case 675u: goto L_0883A214;
    case 676u: goto L_0883A224;
    case 677u: goto L_0883A24C;
    case 678u: goto L_0883A254;
    case 679u: goto L_0883A260;
    case 680u: goto L_0883A26C;
    case 681u: goto L_0883A27C;
    case 682u: goto L_0883A28C;
    case 683u: goto L_0883A294;
    case 684u: goto L_0883A2A4;
    case 685u: goto L_0883A2AC;
    case 686u: goto L_0883A2BC;
    case 687u: goto L_0883A2E4;
    case 688u: goto L_0883A2EC;
    case 689u: goto L_0883A2F8;
    case 690u: goto L_0883A304;
    case 691u: goto L_0883A314;
    case 692u: goto L_0883A324;
    case 693u: goto L_0883A32C;
    case 694u: goto L_0883A33C;
    case 695u: goto L_0883A344;
    case 696u: goto L_0883A354;
    case 697u: goto L_0883A37C;
    case 698u: goto L_0883A384;
    case 699u: goto L_0883A390;
    case 700u: goto L_0883A39C;
    case 701u: goto L_0883A3AC;
    case 702u: goto L_0883A3BC;
    case 703u: goto L_0883A3C4;
    case 704u: goto L_0883A3D4;
    case 705u: goto L_0883A3DC;
    case 706u: goto L_0883A3EC;
    case 707u: goto L_0883A414;
    case 708u: goto L_0883A43C;
    case 709u: goto L_0883A44C;
    case 710u: goto L_0883A458;
    case 711u: goto L_0883A474;
    case 712u: goto L_0883A484;
    case 713u: goto L_0883A48C;
    case 714u: goto L_0883A49C;
    case 715u: goto L_0883A4AC;
    case 716u: goto L_0883A4CC;
    case 717u: goto L_0883A4D4;
    case 718u: goto L_0883A4E0;
    case 719u: goto L_0883A4E8;
    case 720u: goto L_0883A4F4;
    case 721u: goto L_0883A4FC;
    case 722u: goto L_0883A508;
    case 723u: goto L_0883A510;
    case 724u: goto L_0883A51C;
    case 725u: goto L_0883A520;
    case 726u: goto L_0883A528;
    case 727u: goto L_0883A530;
    case 728u: goto L_0883A538;
    case 729u: goto L_0883A540;
    case 730u: goto L_0883A544;
    case 731u: goto L_0883A550;
    case 732u: goto L_0883A560;
    case 733u: goto L_0883A564;
    case 734u: goto L_0883A56C;
    case 735u: goto L_0883A578;
    case 736u: goto L_0883A584;
    case 737u: goto L_0883A590;
    case 738u: goto L_0883A59C;
    case 739u: goto L_0883A5A8;
    case 740u: goto L_0883A5B0;
    case 741u: goto L_0883A5E8;
    case 742u: goto L_0883A604;
    case 743u: goto L_0883A610;
    case 744u: goto L_0883A628;
    case 745u: goto L_0883A634;
    case 746u: goto L_0883A640;
    case 747u: goto L_0883A650;
    case 748u: goto L_0883A660;
    case 749u: goto L_0883A66C;
    case 750u: goto L_0883A678;
    case 751u: goto L_0883A684;
    case 752u: goto L_0883A690;
    case 753u: goto L_0883A69C;
    case 754u: goto L_0883A6D4;
    case 755u: goto L_0883A6EC;
    case 756u: goto L_0883A6F0;
    case 757u: goto L_0883A6F8;
    case 758u: goto L_0883A700;
    case 759u: goto L_0883A70C;
    case 760u: goto L_0883A718;
    case 761u: goto L_0883A730;
    case 762u: goto L_0883A748;
    case 763u: goto L_0883A750;
    case 764u: goto L_0883A758;
    case 765u: goto L_0883A764;
    case 766u: goto L_0883A770;
    case 767u: goto L_0883A77C;
    case 768u: goto L_0883A784;
    case 769u: goto L_0883A78C;
    case 770u: goto L_0883A794;
    case 771u: goto L_0883A7A0;
    case 772u: goto L_0883A7B8;
    case 773u: goto L_0883A7C8;
    case 774u: goto L_0883A7FC;
    case 775u: goto L_0883A820;
    case 776u: goto L_0883A82C;
    case 777u: goto L_0883A838;
    case 778u: goto L_0883A840;
    case 779u: goto L_0883A8A4;
    case 780u: goto L_0883A8B0;
    case 781u: goto L_0883A8BC;
    case 782u: goto L_0883A8C8;
    case 783u: goto L_0883A8D0;
    case 784u: goto L_0883A8DC;
    case 785u: goto L_0883A8E8;
    case 786u: goto L_0883A8F4;
    case 787u: goto L_0883A934;
    case 788u: goto L_0883A93C;
    case 789u: goto L_0883A944;
    case 790u: goto L_0883A94C;
    case 791u: goto L_0883A958;
    case 792u: goto L_0883A960;
    case 793u: goto L_0883A96C;
    case 794u: goto L_0883A97C;
    case 795u: goto L_0883A984;
    case 796u: goto L_0883A99C;
    case 797u: goto L_0883A9A8;
    case 798u: goto L_0883A9BC;
    case 799u: goto L_0883A9C0;
    case 800u: goto L_0883A9E8;
    case 801u: goto L_0883AA1C;
    case 802u: goto L_0883AA20;
    case 803u: goto L_0883AA28;
    case 804u: goto L_0883AA30;
    case 805u: goto L_0883AA40;
    case 806u: goto L_0883AA4C;
    case 807u: goto L_0883AA64;
    case 808u: goto L_0883AA70;
    case 809u: goto L_0883AA7C;
    case 810u: goto L_0883AA88;
    case 811u: goto L_0883AA98;
    case 812u: goto L_0883AAA4;
    case 813u: goto L_0883AAAC;
    case 814u: goto L_0883AAC0;
    case 815u: goto L_0883AACC;
    case 816u: goto L_0883AAE8;
    case 817u: goto L_0883AB18;
    case 818u: goto L_0883AB30;
    case 819u: goto L_0883AB38;
    case 820u: goto L_0883AB48;
    case 821u: goto L_0883AB50;
    case 822u: goto L_0883AB54;
    case 823u: goto L_0883AB5C;
    case 824u: goto L_0883AB6C;
    case 825u: goto L_0883AB90;
    case 826u: goto L_0883AB9C;
    case 827u: goto L_0883ABAC;
    case 828u: goto L_0883ABB4;
    case 829u: goto L_0883ABCC;
    case 830u: goto L_0883ABE4;
    case 831u: goto L_0883ABF4;
    case 832u: goto L_0883ABF8;
    case 833u: goto L_0883AC18;
    case 834u: goto L_0883AC34;
    case 835u: goto L_0883AC50;
    case 836u: goto L_0883AC5C;
    case 837u: goto L_0883AC70;
    case 838u: goto L_0883AC80;
    case 839u: goto L_0883AC8C;
    case 840u: goto L_0883AC90;
    case 841u: goto L_0883ACA8;
    case 842u: goto L_0883ACB8;
    case 843u: goto L_0883ACCC;
    case 844u: goto L_0883ACD8;
    case 845u: goto L_0883ACE4;
    case 846u: goto L_0883ACF0;
    case 847u: goto L_0883ACFC;
    case 848u: goto L_0883AD10;
    case 849u: goto L_0883AD20;
    case 850u: goto L_0883AD3C;
    case 851u: goto L_0883AD44;
    case 852u: goto L_0883AD6C;
    case 853u: goto L_0883AD80;
    case 854u: goto L_0883AD9C;
    case 855u: goto L_0883ADAC;
    case 856u: goto L_0883ADB8;
    case 857u: goto L_0883ADC4;
    case 858u: goto L_0883ADD0;
    case 859u: goto L_0883ADDC;
    case 860u: goto L_0883ADE0;
    case 861u: goto L_0883ADFC;
    case 862u: goto L_0883AE04;
    case 863u: goto L_0883AE10;
    case 864u: goto L_0883AE1C;
    case 865u: goto L_0883AE5C;
    case 866u: goto L_0883AE74;
    case 867u: goto L_0883AE80;
    case 868u: goto L_0883AE88;
    case 869u: goto L_0883AEA4;
    case 870u: goto L_0883AEAC;
    case 871u: goto L_0883AEBC;
    case 872u: goto L_0883AED0;
    case 873u: goto L_0883AEDC;
    case 874u: goto L_0883AEE4;
    case 875u: goto L_0883AEEC;
    case 876u: goto L_0883AF00;
    case 877u: goto L_0883AF08;
    case 878u: goto L_0883AF10;
    case 879u: goto L_0883AF1C;
    case 880u: goto L_0883AF24;
    case 881u: goto L_0883AF2C;
    case 882u: goto L_0883AF34;
    case 883u: goto L_0883AF40;
    case 884u: goto L_0883AF50;
    case 885u: goto L_0883AF90;
    case 886u: goto L_0883AFA4;
    case 887u: goto L_0883AFC8;
    case 888u: goto L_0883AFD4;
    case 889u: goto L_0883AFDC;
    case 890u: goto L_0883AFE0;
    case 891u: goto L_0883AFE8;
    case 892u: goto L_0883AFFC;
    case 893u: goto L_0883B004;
    case 894u: goto L_0883B014;
    case 895u: goto L_0883B018;
    case 896u: goto L_0883B020;
    case 897u: goto L_0883B02C;
    case 898u: goto L_0883B040;
    case 899u: goto L_0883B04C;
    case 900u: goto L_0883B054;
    case 901u: goto L_0883B05C;
    case 902u: goto L_0883B064;
    case 903u: goto L_0883B06C;
    case 904u: goto L_0883B074;
    case 905u: goto L_0883B07C;
    case 906u: goto L_0883B088;
    case 907u: goto L_0883B090;
    case 908u: goto L_0883B098;
    case 909u: goto L_0883B0A4;
    case 910u: goto L_0883B0B0;
    case 911u: goto L_0883B0B8;
    case 912u: goto L_0883B0C0;
    case 913u: goto L_0883B0C8;
    case 914u: goto L_0883B0D0;
    case 915u: goto L_0883B0D8;
    case 916u: goto L_0883B0E0;
    case 917u: goto L_0883B0E8;
    case 918u: goto L_0883B0F0;
    case 919u: goto L_0883B0F8;
    case 920u: goto L_0883B0FC;
    case 921u: goto L_0883B108;
    case 922u: goto L_0883B114;
    case 923u: goto L_0883B11C;
    case 924u: goto L_0883B128;
    case 925u: goto L_0883B130;
    case 926u: goto L_0883B138;
    case 927u: goto L_0883B140;
    case 928u: goto L_0883B144;
    case 929u: goto L_0883B14C;
    case 930u: goto L_0883B158;
    case 931u: goto L_0883B160;
    case 932u: goto L_0883B168;
    case 933u: goto L_0883B184;
    case 934u: goto L_0883B18C;
    case 935u: goto L_0883B19C;
    case 936u: goto L_0883B1AC;
    case 937u: goto L_0883B1B4;
    case 938u: goto L_0883B1C0;
    case 939u: goto L_0883B1C8;
    case 940u: goto L_0883B1D4;
    case 941u: goto L_0883B1DC;
    case 942u: goto L_0883B1E4;
    case 943u: goto L_0883B1EC;
    case 944u: goto L_0883B1F4;
    case 945u: goto L_0883B1FC;
    case 946u: goto L_0883B204;
    case 947u: goto L_0883B20C;
    case 948u: goto L_0883B21C;
    case 949u: goto L_0883B23C;
    case 950u: goto L_0883B254;
    case 951u: goto L_0883B26C;
    case 952u: goto L_0883B274;
    case 953u: goto L_0883B280;
    case 954u: goto L_0883B2A4;
    case 955u: goto L_0883B2BC;
    case 956u: goto L_0883B2C4;
    case 957u: goto L_0883B2D4;
    case 958u: goto L_0883B304;
    case 959u: goto L_0883B318;
    case 960u: goto L_0883B32C;
    case 961u: goto L_0883B34C;
    case 962u: goto L_0883B360;
    case 963u: goto L_0883B374;
    case 964u: goto L_0883B37C;
    case 965u: goto L_0883B384;
    case 966u: goto L_0883B38C;
    case 967u: goto L_0883B398;
    case 968u: goto L_0883B3A0;
    case 969u: goto L_0883B3AC;
    case 970u: goto L_0883B3C0;
    case 971u: goto L_0883B3CC;
    case 972u: goto L_0883B3D4;
    case 973u: goto L_0883B400;
    case 974u: goto L_0883B408;
    case 975u: goto L_0883B414;
    case 976u: goto L_0883B44C;
    case 977u: goto L_0883B464;
    case 978u: goto L_0883B474;
    case 979u: goto L_0883B48C;
    case 980u: goto L_0883B494;
    case 981u: goto L_0883B49C;
    case 982u: goto L_0883B4A0;
    case 983u: goto L_0883B4AC;
    case 984u: goto L_0883B4B8;
    case 985u: goto L_0883B4C0;
    case 986u: goto L_0883B4C4;
    case 987u: goto L_0883B4D0;
    case 988u: goto L_0883B4DC;
    case 989u: goto L_0883B4E4;
    case 990u: goto L_0883B4EC;
    case 991u: goto L_0883B4FC;
    case 992u: goto L_0883B500;
    case 993u: goto L_0883B528;
    case 994u: goto L_0883B52C;
    case 995u: goto L_0883B534;
    case 996u: goto L_0883B53C;
    case 997u: goto L_0883B548;
    case 998u: goto L_0883B554;
    case 999u: goto L_0883B57C;
    case 1000u: goto L_0883B584;
    case 1001u: goto L_0883B590;
    case 1002u: goto L_0883B598;
    case 1003u: goto L_0883B5A8;
    case 1004u: goto L_0883B5AC;
    case 1005u: goto L_0883B5D4;
    case 1006u: goto L_0883B5DC;
    case 1007u: goto L_0883B600;
    case 1008u: goto L_0883B620;
    case 1009u: goto L_0883B62C;
    case 1010u: goto L_0883B634;
    case 1011u: goto L_0883B644;
    case 1012u: goto L_0883B64C;
    case 1013u: goto L_0883B660;
    case 1014u: goto L_0883B674;
    case 1015u: goto L_0883B67C;
    case 1016u: goto L_0883B684;
    case 1017u: goto L_0883B68C;
    case 1018u: goto L_0883B694;
    case 1019u: goto L_0883B6B0;
    case 1020u: goto L_0883B6B8;
    case 1021u: goto L_0883B6D0;
    case 1022u: goto L_0883B6D8;
    case 1023u: goto L_0883B6E0;
    case 1024u: goto L_0883B6E8;
    case 1025u: goto L_0883B700;
    case 1026u: goto L_0883B708;
    case 1027u: goto L_0883B710;
    case 1028u: goto L_0883B724;
    case 1029u: goto L_0883B730;
    case 1030u: goto L_0883B73C;
    case 1031u: goto L_0883B744;
    case 1032u: goto L_0883B74C;
    case 1033u: goto L_0883B764;
    case 1034u: goto L_0883B76C;
    case 1035u: goto L_0883B774;
    case 1036u: goto L_0883B77C;
    case 1037u: goto L_0883B794;
    case 1038u: goto L_0883B79C;
    case 1039u: goto L_0883B7A4;
    case 1040u: goto L_0883B7AC;
    case 1041u: goto L_0883B7B4;
    case 1042u: goto L_0883B7C4;
    case 1043u: goto L_0883B7D0;
    case 1044u: goto L_0883B7DC;
    case 1045u: goto L_0883B7E4;
    case 1046u: goto L_0883B7EC;
    case 1047u: goto L_0883B7F8;
    case 1048u: goto L_0883B800;
    case 1049u: goto L_0883B808;
    case 1050u: goto L_0883B810;
    case 1051u: goto L_0883B818;
    case 1052u: goto L_0883B820;
    case 1053u: goto L_0883B828;
    case 1054u: goto L_0883B830;
    case 1055u: goto L_0883B83C;
    case 1056u: goto L_0883B854;
    case 1057u: goto L_0883B858;
    case 1058u: goto L_0883B860;
    case 1059u: goto L_0883B86C;
    case 1060u: goto L_0883B874;
    case 1061u: goto L_0883B880;
    case 1062u: goto L_0883B888;
    case 1063u: goto L_0883B8A4;
    case 1064u: goto L_0883B8B0;
    case 1065u: goto L_0883B8B8;
    case 1066u: goto L_0883B8C0;
    case 1067u: goto L_0883B8D0;
    case 1068u: goto L_0883B8D8;
    case 1069u: goto L_0883B8E0;
    case 1070u: goto L_0883B8FC;
    case 1071u: goto L_0883B908;
    case 1072u: goto L_0883B910;
    case 1073u: goto L_0883B918;
    case 1074u: goto L_0883B920;
    case 1075u: goto L_0883B92C;
    case 1076u: goto L_0883B938;
    case 1077u: goto L_0883B944;
    case 1078u: goto L_0883B954;
    case 1079u: goto L_0883B95C;
    case 1080u: goto L_0883B968;
    case 1081u: goto L_0883B970;
    case 1082u: goto L_0883B978;
    case 1083u: goto L_0883B984;
    case 1084u: goto L_0883B98C;
    case 1085u: goto L_0883B994;
    case 1086u: goto L_0883B99C;
    case 1087u: goto L_0883B9A4;
    case 1088u: goto L_0883B9C0;
    case 1089u: goto L_0883B9C8;
    case 1090u: goto L_0883B9D4;
    case 1091u: goto L_0883B9DC;
    case 1092u: goto L_0883B9E8;
    case 1093u: goto L_0883BA08;
    case 1094u: goto L_0883BA14;
    case 1095u: goto L_0883BA1C;
    case 1096u: goto L_0883BA24;
    case 1097u: goto L_0883BA30;
    case 1098u: goto L_0883BA48;
    case 1099u: goto L_0883BA54;
    case 1100u: goto L_0883BA5C;
    case 1101u: goto L_0883BA80;
    case 1102u: goto L_0883BA8C;
    case 1103u: goto L_0883BA94;
    case 1104u: goto L_0883BA9C;
    case 1105u: goto L_0883BAAC;
    case 1106u: goto L_0883BAC4;
    case 1107u: goto L_0883BAD0;
    case 1108u: goto L_0883BAD4;
    case 1109u: goto L_0883BAE4;
    case 1110u: goto L_0883BAF0;
    case 1111u: goto L_0883BB1C;
    case 1112u: goto L_0883BB24;
    case 1113u: goto L_0883BB30;
    case 1114u: goto L_0883BB48;
    case 1115u: goto L_0883BB74;
    case 1116u: goto L_0883BBAC;
    case 1117u: goto L_0883BBBC;
    case 1118u: goto L_0883BBE0;
    case 1119u: goto L_0883BBF8;
    case 1120u: goto L_0883BC18;
    case 1121u: goto L_0883BC3C;
    case 1122u: goto L_0883BC64;
    case 1123u: goto L_0883BC78;
    case 1124u: goto L_0883BCA4;
    case 1125u: goto L_0883BCAC;
    case 1126u: goto L_0883BCB8;
    case 1127u: goto L_0883BCC4;
    case 1128u: goto L_0883BCE8;
    case 1129u: goto L_0883BD08;
    case 1130u: goto L_0883BD10;
    case 1131u: goto L_0883BD14;
    case 1132u: goto L_0883BD20;
    case 1133u: goto L_0883BD34;
    case 1134u: goto L_0883BD48;
    case 1135u: goto L_0883BD50;
    case 1136u: goto L_0883BD60;
    case 1137u: goto L_0883BD78;
    case 1138u: goto L_0883BD84;
    case 1139u: goto L_0883BD8C;
    case 1140u: goto L_0883BD98;
    case 1141u: goto L_0883BDA4;
    case 1142u: goto L_0883BDB0;
    case 1143u: goto L_0883BDB4;
    case 1144u: goto L_0883BDC0;
    case 1145u: goto L_0883BDC8;
    case 1146u: goto L_0883BDF0;
    case 1147u: goto L_0883BE18;
    case 1148u: goto L_0883BE24;
    case 1149u: goto L_0883BE3C;
    case 1150u: goto L_0883BE48;
    case 1151u: goto L_0883BE50;
    case 1152u: goto L_0883BE6C;
    case 1153u: goto L_0883BE74;
    case 1154u: goto L_0883BE90;
    case 1155u: goto L_0883BEA0;
    case 1156u: goto L_0883BEA4;
    case 1157u: goto L_0883BEAC;
    case 1158u: goto L_0883BEC4;
    case 1159u: goto L_0883BECC;
    case 1160u: goto L_0883BED8;
    case 1161u: goto L_0883BEE0;
    case 1162u: goto L_0883BEE8;
    case 1163u: goto L_0883BEF8;
    case 1164u: goto L_0883BF0C;
    case 1165u: goto L_0883BF14;
    case 1166u: goto L_0883BF20;
    case 1167u: goto L_0883BF3C;
    case 1168u: goto L_0883BF44;
    case 1169u: goto L_0883BF4C;
    case 1170u: goto L_0883BF54;
    case 1171u: goto L_0883BF70;
    case 1172u: goto L_0883BF78;
    case 1173u: goto L_0883BF8C;
    case 1174u: goto L_0883BF94;
    case 1175u: goto L_0883BFAC;
    case 1176u: goto L_0883BFB4;
    case 1177u: goto L_0883BFCC;
    case 1178u: goto L_0883BFD4;
    case 1179u: goto L_0883BFDC;
    case 1180u: goto L_0883BFE4;
    case 1181u: goto L_0883BFEC;
    case 1182u: goto L_0883BFF4;
    case 1183u: goto L_0883BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08838000:
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1820), ctx.gpr[23]);
        goto L_08838038;
    }
    goto L_0883800C;
L_0883800C:
    ctx.gpr[31] = (0x08838014u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x08838014u) goto L_08838014;
    return;
L_08838014:
    ctx.gpr[31] = (0x0883801Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 82u, 0x08830634u>(ctx, &aot_mem) && ctx.pc == 0x0883801Cu) goto L_0883801C;
    return;
L_0883801C:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1820), ctx.gpr[23]);
        goto L_08838038;
    }
    goto L_0883802C;
L_0883802C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1815), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088380C0;
      }
      goto L_08838038;
    }
L_08838038:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[31] = (0x08838044u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x08838044u) goto L_08838044;
    return;
L_08838044:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08838054u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08838054u) goto L_08838054;
    return;
L_08838054:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08838064u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem) && ctx.pc == 0x08838064u) goto L_08838064;
    return;
L_08838064:
    ctx.gpr[31] = (0x0883806Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 82u, 0x08830634u>(ctx, &aot_mem) && ctx.pc == 0x0883806Cu) goto L_0883806C;
    return;
L_0883806C:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1820)));
      if (branch_taken) {
          goto L_0883808C;
      }
      goto L_08838084;
    }
L_08838084:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1815), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0883808C;
L_0883808C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088380C0;
      }
      goto L_08838094;
    }
L_08838094:
    ctx.gpr[31] = (0x0883809Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883809Cu) goto L_0883809C;
    return;
L_0883809C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088380C0;
      }
      goto L_088380A8;
    }
L_088380A8:
    ctx.gpr[31] = (0x088380B0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x088380B0u) goto L_088380B0;
    return;
L_088380B0:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088380C0;
      }
      goto L_088380BC;
    }
L_088380BC:
    ctx.gpr[18] = (0u | 1u);
    goto L_088380C0;
L_088380C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088380D8;
      }
      goto L_088380D0;
    }
L_088380D0:
    ctx.gpr[31] = (0x088380D8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 626u, 0x088479DCu>(ctx, &aot_mem) && ctx.pc == 0x088380D8u) goto L_088380D8;
    return;
L_088380D8:
    ctx.gpr[31] = (0x088380E0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 385u, 0x08B015F0u>(ctx, &aot_mem) && ctx.pc == 0x088380E0u) goto L_088380E0;
    return;
L_088380E0:
    ctx.gpr[31] = (0x088380E8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x088380E8u) goto L_088380E8;
    return;
L_088380E8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088381BC;
      }
      goto L_088380F0;
    }
L_088380F0:
    ctx.gpr[31] = (0x088380F8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x088380F8u) goto L_088380F8;
    return;
L_088380F8:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088381BC;
      }
      goto L_08838104;
    }
L_08838104:
    ctx.gpr[31] = (0x0883810Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883810Cu) goto L_0883810C;
    return;
L_0883810C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088381BC;
      }
      goto L_08838114;
    }
L_08838114:
    ctx.gpr[31] = (0x0883811Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883811Cu) goto L_0883811C;
    return;
L_0883811C:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088381BC;
      }
      goto L_08838128;
    }
L_08838128:
    ctx.gpr[31] = (0x08838130u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x08838130u) goto L_08838130;
    return;
L_08838130:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088381BC;
      }
      goto L_0883813C;
    }
L_0883813C:
    ctx.gpr[31] = (0x08838144u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x08838144u) goto L_08838144;
    return;
L_08838144:
    ctx.gpr[4] = (0u | 193u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088381B4;
      }
      goto L_08838150;
    }
L_08838150:
    ctx.gpr[31] = (0x08838158u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x08838158u) goto L_08838158;
    return;
L_08838158:
    ctx.gpr[4] = (0u | 207u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088381B4;
      }
      goto L_08838164;
    }
L_08838164:
    ctx.gpr[31] = (0x0883816Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883816Cu) goto L_0883816C;
    return;
L_0883816C:
    ctx.gpr[4] = (0u | 234u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088381B4;
      }
      goto L_08838178;
    }
L_08838178:
    ctx.gpr[31] = (0x08838180u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x08838180u) goto L_08838180;
    return;
L_08838180:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-958));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088381B4;
      }
      goto L_0883818C;
    }
L_0883818C:
    ctx.gpr[31] = (0x08838194u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x08838194u) goto L_08838194;
    return;
L_08838194:
    ctx.gpr[4] = (0u | 246u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088381B4;
      }
      goto L_088381A0;
    }
L_088381A0:
    ctx.gpr[31] = (0x088381A8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x088381A8u) goto L_088381A8;
    return;
L_088381A8:
    ctx.gpr[4] = (0u | 218u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088381BC;
      }
      goto L_088381B4;
    }
L_088381B4:
    ctx.gpr[31] = (0x088381BCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 605u, 0x088329ACu>(ctx, &aot_mem) && ctx.pc == 0x088381BCu) goto L_088381BC;
    return;
L_088381BC:
    ctx.gpr[31] = (0x088381C4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x088381C4u) goto L_088381C4;
    return;
L_088381C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1653))))));
      if (branch_taken) {
          goto L_088382D8;
      }
      goto L_088381CC;
    }
L_088381CC:
    ctx.gpr[4] = (ctx.gpr[16] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 7u);
      if (branch_taken) {
          goto L_08838230;
      }
      goto L_088381D8;
    }
L_088381D8:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08838230;
      }
      goto L_088381E4;
    }
L_088381E4:
    ctx.gpr[4] = (0u | 1000u);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1656)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(668), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (16256u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08838214;
      }
      goto L_08838204;
    }
L_08838204:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838214;
      }
      goto L_0883820C;
    }
L_0883820C:
    ctx.gpr[31] = (0x08838214u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(668));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08838214u) goto L_08838214;
    return;
L_08838214:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 93u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883822Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0883822Cu) goto L_0883822C;
    return;
L_0883822C:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1653))))));
    goto L_08838230;
L_08838230:
    ctx.gpr[4] = (ctx.gpr[16] | 16u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08838240u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem) && ctx.pc == 0x08838240u) goto L_08838240;
    return;
L_08838240:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088382E4;
      }
      goto L_08838248;
    }
L_08838248:
    ctx.gpr[31] = (0x08838250u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 327u, 0x08B011C8u>(ctx, &aot_mem) && ctx.pc == 0x08838250u) goto L_08838250;
    return;
L_08838250:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088382E4;
      }
      goto L_08838258;
    }
L_08838258:
    ctx.gpr[31] = (0x08838260u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x08838260u) goto L_08838260;
    return;
L_08838260:
    ctx.gpr[31] = (0x08838268u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08838268u) goto L_08838268;
    return;
L_08838268:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088382E4;
      }
      goto L_08838270;
    }
L_08838270:
    ctx.gpr[31] = (0x08838278u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x08838278u) goto L_08838278;
    return;
L_08838278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883829C;
      }
      goto L_08838284;
    }
L_08838284:
    ctx.gpr[31] = (0x0883828Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x0883828Cu) goto L_0883828C;
    return;
L_0883828C:
    ctx.gpr[31] = (0x08838294u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(676)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08838294u) goto L_08838294;
    return;
L_08838294:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088382E4;
      }
      goto L_0883829C;
    }
L_0883829C:
    ctx.gpr[31] = (0x088382A4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x088382A4u) goto L_088382A4;
    return;
L_088382A4:
    ctx.gpr[31] = (0x088382ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 856u, 0x08833F4Cu>(ctx, &aot_mem) && ctx.pc == 0x088382ACu) goto L_088382AC;
    return;
L_088382AC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088382E4;
      }
      goto L_088382B8;
    }
L_088382B8:
    ctx.gpr[31] = (0x088382C0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x088382C0u) goto L_088382C0;
    return;
L_088382C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x088382D0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x088382D0u) goto L_088382D0;
    return;
L_088382D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088382E4;
      }
      goto L_088382D8;
    }
L_088382D8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088382E4;
L_088382E4:
    ctx.gpr[31] = (0x088382ECu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 559u, 0x08B021B0u>(ctx, &aot_mem) && ctx.pc == 0x088382ECu) goto L_088382EC;
    return;
L_088382EC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1814), static_cast<std::uint8_t>(ctx.gpr[18]));
        goto L_088383D8;
    }
    goto L_088382F4;
L_088382F4:
    ctx.gpr[31] = (0x088382FCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem) && ctx.pc == 0x088382FCu) goto L_088382FC;
    return;
L_088382FC:
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1814), static_cast<std::uint8_t>(ctx.gpr[18]));
        goto L_088383D8;
    }
    goto L_08838304;
L_08838304:
    ctx.gpr[31] = (0x0883830Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 327u, 0x08B011C8u>(ctx, &aot_mem) && ctx.pc == 0x0883830Cu) goto L_0883830C;
    return;
L_0883830C:
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1814), static_cast<std::uint8_t>(ctx.gpr[18]));
        goto L_088383D8;
    }
    goto L_08838314;
L_08838314:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(565)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_088383D4;
      }
      goto L_08838328;
    }
L_08838328:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08838334u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08838334u) goto L_08838334;
    return;
L_08838334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088383C0;
      }
      goto L_0883833C;
    }
L_0883833C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08838348u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08838348u) goto L_08838348;
    return;
L_08838348:
    ctx.gpr[31] = (0x08838350u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08838350u) goto L_08838350;
    return;
L_08838350:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_088383C0;
      }
      goto L_08838358;
    }
L_08838358:
    ctx.gpr[31] = (0x08838360u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08838360u) goto L_08838360;
    return;
L_08838360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_0883838C;
      }
      goto L_0883836C;
    }
L_0883836C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08838378u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08838378u) goto L_08838378;
    return;
L_08838378:
    ctx.gpr[31] = (0x08838380u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(676)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08838380u) goto L_08838380;
    return;
L_08838380:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088383C0;
      }
      goto L_08838388;
    }
L_08838388:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_0883838C;
L_0883838C:
    ctx.gpr[31] = (0x08838394u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08838394u) goto L_08838394;
    return;
L_08838394:
    ctx.gpr[31] = (0x0883839Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 856u, 0x08833F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0883839Cu) goto L_0883839C;
    return;
L_0883839C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088383C0;
      }
      goto L_088383A4;
    }
L_088383A4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088383B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088383B0u) goto L_088383B0;
    return;
L_088383B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x088383C0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x088383C0u) goto L_088383C0;
    return;
L_088383C0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(565)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838328;
      }
      goto L_088383D4;
    }
L_088383D4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1814), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_088383D8;
L_088383D8:
    ctx.gpr[31] = (0x088383E0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 191u, 0x08A919A4u>(ctx, &aot_mem) && ctx.pc == 0x088383E0u) goto L_088383E0;
    return;
L_088383E0:
    ctx.gpr[31] = (0x088383E8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 868u, 0x08AFFA50u>(ctx, &aot_mem) && ctx.pc == 0x088383E8u) goto L_088383E8;
    return;
L_088383E8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088383F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 179u, 0x08830D54u>(ctx, &aot_mem) && ctx.pc == 0x088383F4u) goto L_088383F4;
    return;
L_088383F4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08838400u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 180u, 0x08830D74u>(ctx, &aot_mem) && ctx.pc == 0x08838400u) goto L_08838400;
    return;
L_08838400:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1778)));
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883843C;
      }
      goto L_08838410;
    }
L_08838410:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1672)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1704)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(617))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
      if (branch_taken) {
          goto L_088384F4;
      }
      goto L_0883843C;
    }
L_0883843C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x08838448u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem) && ctx.pc == 0x08838448u) goto L_08838448;
    return;
L_08838448:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088384B0;
      }
      goto L_08838450;
    }
L_08838450:
    ctx.gpr[31] = (0x08838458u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x08838458u) goto L_08838458;
    return;
L_08838458:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088384B0;
      }
      goto L_08838464;
    }
L_08838464:
    ctx.gpr[31] = (0x0883846Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 176u, 0x08830D3Cu>(ctx, &aot_mem) && ctx.pc == 0x0883846Cu) goto L_0883846C;
    return;
L_0883846C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08838478u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 118u, 0x08830880u>(ctx, &aot_mem) && ctx.pc == 0x08838478u) goto L_08838478;
    return;
L_08838478:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08838484u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 176u, 0x08830D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08838484u) goto L_08838484;
    return;
L_08838484:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(617))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
      if (branch_taken) {
          goto L_088384F4;
      }
      goto L_088384B0;
    }
L_088384B0:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x088384BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 176u, 0x08830D3Cu>(ctx, &aot_mem) && ctx.pc == 0x088384BCu) goto L_088384BC;
    return;
L_088384BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088384C8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x088384C8u) goto L_088384C8;
    return;
L_088384C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x088384D4u);
    ctx.gpr[5] = (128u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem) && ctx.pc == 0x088384D4u) goto L_088384D4;
    return;
L_088384D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(617))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
      if (branch_taken) {
          goto L_088384F4;
      }
      goto L_088384E0;
    }
L_088384E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(196)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(364)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088384F4;
L_088384F4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
      if (branch_taken) {
          goto L_08838698;
      }
      goto L_088384FC;
    }
L_088384FC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838698;
      }
      goto L_08838504;
    }
L_08838504:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08838698;
      }
      goto L_08838514;
    }
L_08838514:
    ctx.gpr[31] = (0x0883851Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 178u, 0x08830D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0883851Cu) goto L_0883851C;
    return;
L_0883851C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08838698;
      }
      goto L_08838528;
    }
L_08838528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 22u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838698;
      }
      goto L_0883854C;
    }
L_0883854C:
    ctx.gpr[31] = (0x08838554u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x08838554u) goto L_08838554;
    return;
L_08838554:
    ctx.gpr[4] = (0u | 226u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08838698;
      }
      goto L_08838560;
    }
L_08838560:
    ctx.gpr[31] = (0x08838568u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x08838568u) goto L_08838568;
    return;
L_08838568:
    ctx.gpr[4] = (0u | 183u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08838698;
      }
      goto L_08838574;
    }
L_08838574:
    ctx.gpr[31] = (0x0883857Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883857Cu) goto L_0883857C;
    return;
L_0883857C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-959));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08838698;
      }
      goto L_08838588;
    }
L_08838588:
    ctx.gpr[31] = (0x08838590u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x08838590u) goto L_08838590;
    return;
L_08838590:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-937));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08838698;
      }
      goto L_0883859C;
    }
L_0883859C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1808), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1820), ctx.gpr[23]);
    ctx.gpr[31] = (0x088385ACu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x088385ACu) goto L_088385AC;
    return;
L_088385AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088385B8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x088385B8u) goto L_088385B8;
    return;
L_088385B8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088385C4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem) && ctx.pc == 0x088385C4u) goto L_088385C4;
    return;
L_088385C4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088385ECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem) && ctx.pc == 0x088385ECu) goto L_088385EC;
    return;
L_088385EC:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08838600u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x08838600u) goto L_08838600;
    return;
L_08838600:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08838614u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem) && ctx.pc == 0x08838614u) goto L_08838614;
    return;
L_08838614:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08838624u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x08838624u) goto L_08838624;
    return;
L_08838624:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08838660u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem) && ctx.pc == 0x08838660u) goto L_08838660;
    return;
L_08838660:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1820)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1808)));
      if (branch_taken) {
          goto L_0883868C;
      }
      goto L_0883866C;
    }
L_0883866C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08838698;
      }
      goto L_08838678;
    }
L_08838678:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08838684u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 464u, 0x08B0DEA0u>(ctx, &aot_mem) && ctx.pc == 0x08838684u) goto L_08838684;
    return;
L_08838684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838698;
      }
      goto L_0883868C;
    }
L_0883868C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08838698u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 464u, 0x08B0DEA0u>(ctx, &aot_mem) && ctx.pc == 0x08838698u) goto L_08838698;
    return;
L_08838698:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088386A4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x088386A4u) goto L_088386A4;
    return;
L_088386A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839994;
      }
      goto L_088386B4;
    }
L_088386B4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(18480)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088386CC:
    ctx.gpr[31] = (0x088386D4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088386D4u) goto L_088386D4;
    return;
L_088386D4:
    ctx.gpr[31] = (0x088386DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 351u, 0x0898CFB8u>(ctx, &aot_mem) && ctx.pc == 0x088386DCu) goto L_088386DC;
    return;
L_088386DC:
    ctx.gpr[16] = (2238u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6992));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08838738;
      }
      goto L_088386EC;
    }
L_088386EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1786)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838738;
      }
      goto L_088386F8;
    }
L_088386F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1808), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1820), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08838714u);
    ctx.gpr[22] = (ctx.gpr[30] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08838714u) goto L_08838714;
    return;
L_08838714:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08838728u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08838728u) goto L_08838728;
    return;
L_08838728:
    ctx.gpr[31] = (0x08838730u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 962u, 0x0897FD10u>(ctx, &aot_mem) && ctx.pc == 0x08838730u) goto L_08838730;
    return;
L_08838730:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1820)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1808)));
    goto L_08838738;
L_08838738:
    ctx.gpr[31] = (0x08838740u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x08838740u) goto L_08838740;
    return;
L_08838740:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088387D4;
      }
      goto L_0883874C;
    }
L_0883874C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1787)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088387D4;
      }
      goto L_08838758;
    }
L_08838758:
    ctx.gpr[31] = (0x08838760u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x08838760u) goto L_08838760;
    return;
L_08838760:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x0883876Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem) && ctx.pc == 0x0883876Cu) goto L_0883876C;
    return;
L_0883876C:
    ctx.gpr[31] = (0x08838774u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08838774u) goto L_08838774;
    return;
L_08838774:
    ctx.gpr[31] = (0x0883877Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 238u, 0x08831070u>(ctx, &aot_mem) && ctx.pc == 0x0883877Cu) goto L_0883877C;
    return;
L_0883877C:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1808), ctx.gpr[22]);
        goto L_08838798;
    }
    goto L_08838784;
L_08838784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088387D4;
      }
      goto L_08838794;
    }
L_08838794:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1808), ctx.gpr[22]);
    goto L_08838798;
L_08838798:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1820), ctx.gpr[23]);
    ctx.gpr[31] = (0x088387A4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 962u, 0x0897FD10u>(ctx, &aot_mem) && ctx.pc == 0x088387A4u) goto L_088387A4;
    return;
L_088387A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x088387B8u);
    ctx.gpr[22] = (ctx.gpr[30] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088387B8u) goto L_088387B8;
    return;
L_088387B8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088387CCu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088387CCu) goto L_088387CC;
    return;
L_088387CC:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1820)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1808)));
    goto L_088387D4;
L_088387D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08838800;
      }
      goto L_088387FC;
    }
L_088387FC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08838800;
L_08838800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883880C;
      }
      goto L_08838808;
    }
L_08838808:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_0883880C;
L_0883880C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088388A4;
      }
      goto L_08838814;
    }
L_08838814:
    ctx.gpr[31] = (0x0883881Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x0883881Cu) goto L_0883881C;
    return;
L_0883881C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088392E8;
      }
      goto L_08838824;
    }
L_08838824:
    ctx.gpr[31] = (0x0883882Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x0883882Cu) goto L_0883882C;
    return;
L_0883882C:
    ctx.gpr[31] = (0x08838834u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 829u, 0x08833D04u>(ctx, &aot_mem) && ctx.pc == 0x08838834u) goto L_08838834;
    return;
L_08838834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088392E8;
      }
      goto L_08838844;
    }
L_08838844:
    ctx.gpr[31] = (0x0883884Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x0883884Cu) goto L_0883884C;
    return;
L_0883884C:
    ctx.gpr[31] = (0x08838854u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 829u, 0x08833D04u>(ctx, &aot_mem) && ctx.pc == 0x08838854u) goto L_08838854;
    return;
L_08838854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088392E8;
      }
      goto L_08838864;
    }
L_08838864:
    ctx.gpr[31] = (0x0883886Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x0883886Cu) goto L_0883886C;
    return;
L_0883886C:
    ctx.gpr[31] = (0x08838874u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 829u, 0x08833D04u>(ctx, &aot_mem) && ctx.pc == 0x08838874u) goto L_08838874;
    return;
L_08838874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088392E8;
      }
      goto L_08838884;
    }
L_08838884:
    ctx.gpr[31] = (0x0883888Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x0883888Cu) goto L_0883888C;
    return;
L_0883888C:
    ctx.gpr[31] = (0x08838894u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 829u, 0x08833D04u>(ctx, &aot_mem) && ctx.pc == 0x08838894u) goto L_08838894;
    return;
L_08838894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088392E8;
      }
      goto L_088388A4;
    }
L_088388A4:
    ctx.gpr[16] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6992));
      if (branch_taken) {
          goto L_088388C8;
      }
      goto L_088388B0;
    }
L_088388B0:
    ctx.gpr[31] = (0x088388B8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x088388B8u) goto L_088388B8;
    return;
L_088388B8:
    ctx.gpr[31] = (0x088388C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 830u, 0x08833D0Cu>(ctx, &aot_mem) && ctx.pc == 0x088388C0u) goto L_088388C0;
    return;
L_088388C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088388E4;
      }
      goto L_088388C8;
    }
L_088388C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088388E4u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088388E4u) goto L_088388E4;
    return;
L_088388E4:
    ctx.gpr[31] = (0x088388ECu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 450u, 0x08A930F8u>(ctx, &aot_mem) && ctx.pc == 0x088388ECu) goto L_088388EC;
    return;
L_088388EC:
    ctx.gpr[31] = (0x088388F4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x088388F4u) goto L_088388F4;
    return;
L_088388F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838914;
      }
      goto L_088388FC;
    }
L_088388FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7892)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08838914;
      }
      goto L_0883890C;
    }
L_0883890C:
    ctx.gpr[31] = (0x08838914u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 264u, 0x08A51E10u>(ctx, &aot_mem) && ctx.pc == 0x08838914u) goto L_08838914;
    return;
L_08838914:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(252)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838A68;
      }
      goto L_08838940;
    }
L_08838940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883894Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem) && ctx.pc == 0x0883894Cu) goto L_0883894C;
    return;
L_0883894C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838A68;
      }
      goto L_08838954;
    }
L_08838954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x08838960u);
    ctx.gpr[5] = (1024u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem) && ctx.pc == 0x08838960u) goto L_08838960;
    return;
L_08838960:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838A68;
      }
      goto L_08838968;
    }
L_08838968:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(252)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-500));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[5] = (0u | 1000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[5]);
    ctx.gpr[31] = (0x088389A4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(548));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 64u, 0x08830470u>(ctx, &aot_mem) && ctx.pc == 0x088389A4u) goto L_088389A4;
    return;
L_088389A4:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_088389BC;
      }
      goto L_088389B0;
    }
L_088389B0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_088389BC;
L_088389BC:
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[31] = (0x088389D0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x088389D0u) goto L_088389D0;
    return;
L_088389D0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08838A60;
      }
      goto L_088389E4;
    }
L_088389E4:
    ctx.gpr[31] = (0x088389ECu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem) && ctx.pc == 0x088389ECu) goto L_088389EC;
    return;
L_088389EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
      if (branch_taken) {
          goto L_08838A08;
      }
      goto L_08838A00;
    }
L_08838A00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838A0C;
      }
      goto L_08838A08;
    }
L_08838A08:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    goto L_08838A0C;
L_08838A0C:
    ctx.gpr[31] = (0x08838A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 176u, 0x08830D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08838A14u) goto L_08838A14;
    return;
L_08838A14:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29860)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x08838A28u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838A28u) goto L_08838A28;
    return;
L_08838A28:
    ctx.gpr[31] = (0x08838A30u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem) && ctx.pc == 0x08838A30u) goto L_08838A30;
    return;
L_08838A30:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x08838A50u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 119u, 0x08830888u>(ctx, &aot_mem) && ctx.pc == 0x08838A50u) goto L_08838A50;
    return;
L_08838A50:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[22] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_08838A60;
L_08838A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1884)));
      if (branch_taken) {
          goto L_08838A7C;
      }
      goto L_08838A68;
    }
L_08838A68:
    ctx.gpr[31] = (0x08838A70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 176u, 0x08830D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08838A70u) goto L_08838A70;
    return;
L_08838A70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1884)));
    goto L_08838A7C;
L_08838A7C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839038;
      }
      goto L_08838A84;
    }
L_08838A84:
    ctx.gpr[31] = (0x08838A8Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x08838A8Cu) goto L_08838A8C;
    return;
L_08838A8C:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08839038;
      }
      goto L_08838A98;
    }
L_08838A98:
    ctx.gpr[31] = (0x08838AA0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x08838AA0u) goto L_08838AA0;
    return;
L_08838AA0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08839038;
      }
      goto L_08838AAC;
    }
L_08838AAC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29808)));
    ctx.gpr[31] = (0x08838AB8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 195u, 0x08830E24u>(ctx, &aot_mem) && ctx.pc == 0x08838AB8u) goto L_08838AB8;
    return;
L_08838AB8:
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(236)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
      if (branch_taken) {
          goto L_08838EE8;
      }
      goto L_08838AC8;
    }
L_08838AC8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838EE8;
      }
      goto L_08838AD0;
    }
L_08838AD0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[31] = (0x08838AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 77u, 0x088305BCu>(ctx, &aot_mem) && ctx.pc == 0x08838AF4u) goto L_08838AF4;
    return;
L_08838AF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x08838B08u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838B08u) goto L_08838B08;
    return;
L_08838B08:
    ctx.gpr[31] = (0x08838B10u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 367u, 0x0898D050u>(ctx, &aot_mem) && ctx.pc == 0x08838B10u) goto L_08838B10;
    return;
L_08838B10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838C50;
      }
      goto L_08838B18;
    }
L_08838B18:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08838B24u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x08838B24u) goto L_08838B24;
    return;
L_08838B24:
    ctx.gpr[31] = (0x08838B2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x08838B2Cu) goto L_08838B2C;
    return;
L_08838B2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08838B38u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem) && ctx.pc == 0x08838B38u) goto L_08838B38;
    return;
L_08838B38:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29804)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29804)));
        goto L_08838B7C;
    }
    goto L_08838B50;
L_08838B50:
    ctx.gpr[31] = (0x08838B58u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838B58u) goto L_08838B58;
    return;
L_08838B58:
    ctx.gpr[31] = (0x08838B60u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem) && ctx.pc == 0x08838B60u) goto L_08838B60;
    return;
L_08838B60:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08838BB8;
      }
      goto L_08838B78;
    }
L_08838B78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29804)));
    goto L_08838B7C;
L_08838B7C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08838D98;
      }
      goto L_08838B90;
    }
L_08838B90:
    ctx.gpr[31] = (0x08838B98u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838B98u) goto L_08838B98;
    return;
L_08838B98:
    ctx.gpr[31] = (0x08838BA0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem) && ctx.pc == 0x08838BA0u) goto L_08838BA0;
    return;
L_08838BA0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08838D98;
      }
      goto L_08838BB8;
    }
L_08838BB8:
    ctx.gpr[31] = (0x08838BC0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x08838BC0u) goto L_08838BC0;
    return;
L_08838BC0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08838BCCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838BCCu) goto L_08838BCC;
    return;
L_08838BCC:
    ctx.gpr[31] = (0x08838BD4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem) && ctx.pc == 0x08838BD4u) goto L_08838BD4;
    return;
L_08838BD4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[31] = (0x08838BF8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x08838BF8u) goto L_08838BF8;
    return;
L_08838BF8:
    ctx.gpr[31] = (0x08838C00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem) && ctx.pc == 0x08838C00u) goto L_08838C00;
    return;
L_08838C00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08838C10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x08838C10u) goto L_08838C10;
    return;
L_08838C10:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[23] = (ctx.gpr[30] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x08838C20u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x08838C20u) goto L_08838C20;
    return;
L_08838C20:
    ctx.gpr[31] = (0x08838C28u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x08838C28u) goto L_08838C28;
    return;
L_08838C28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08838C38u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x08838C38u) goto L_08838C38;
    return;
L_08838C38:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08838C48u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 155u, 0x08830B68u>(ctx, &aot_mem) && ctx.pc == 0x08838C48u) goto L_08838C48;
    return;
L_08838C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838D98;
      }
      goto L_08838C50;
    }
L_08838C50:
    ctx.gpr[31] = (0x08838C58u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838C58u) goto L_08838C58;
    return;
L_08838C58:
    ctx.gpr[31] = (0x08838C60u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x08838C60u) goto L_08838C60;
    return;
L_08838C60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838D98;
      }
      goto L_08838C68;
    }
L_08838C68:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08838C74u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x08838C74u) goto L_08838C74;
    return;
L_08838C74:
    ctx.gpr[31] = (0x08838C7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x08838C7Cu) goto L_08838C7C;
    return;
L_08838C7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08838C88u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem) && ctx.pc == 0x08838C88u) goto L_08838C88;
    return;
L_08838C88:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29804)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29804)));
        goto L_08838CCC;
    }
    goto L_08838CA0;
L_08838CA0:
    ctx.gpr[31] = (0x08838CA8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838CA8u) goto L_08838CA8;
    return;
L_08838CA8:
    ctx.gpr[31] = (0x08838CB0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem) && ctx.pc == 0x08838CB0u) goto L_08838CB0;
    return;
L_08838CB0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08838D08;
      }
      goto L_08838CC8;
    }
L_08838CC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29804)));
    goto L_08838CCC;
L_08838CCC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08838D98;
      }
      goto L_08838CE0;
    }
L_08838CE0:
    ctx.gpr[31] = (0x08838CE8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838CE8u) goto L_08838CE8;
    return;
L_08838CE8:
    ctx.gpr[31] = (0x08838CF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem) && ctx.pc == 0x08838CF0u) goto L_08838CF0;
    return;
L_08838CF0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08838D98;
      }
      goto L_08838D08;
    }
L_08838D08:
    ctx.gpr[31] = (0x08838D10u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x08838D10u) goto L_08838D10;
    return;
L_08838D10:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08838D1Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838D1Cu) goto L_08838D1C;
    return;
L_08838D1C:
    ctx.gpr[31] = (0x08838D24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem) && ctx.pc == 0x08838D24u) goto L_08838D24;
    return;
L_08838D24:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[31] = (0x08838D48u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x08838D48u) goto L_08838D48;
    return;
L_08838D48:
    ctx.gpr[31] = (0x08838D50u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem) && ctx.pc == 0x08838D50u) goto L_08838D50;
    return;
L_08838D50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08838D60u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x08838D60u) goto L_08838D60;
    return;
L_08838D60:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[23] = (ctx.gpr[30] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x08838D70u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x08838D70u) goto L_08838D70;
    return;
L_08838D70:
    ctx.gpr[31] = (0x08838D78u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x08838D78u) goto L_08838D78;
    return;
L_08838D78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08838D88u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x08838D88u) goto L_08838D88;
    return;
L_08838D88:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08838D98u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 155u, 0x08830B68u>(ctx, &aot_mem) && ctx.pc == 0x08838D98u) goto L_08838D98;
    return;
L_08838D98:
    ctx.gpr[31] = (0x08838DA0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838DA0u) goto L_08838DA0;
    return;
L_08838DA0:
    ctx.gpr[31] = (0x08838DA8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x08838DA8u) goto L_08838DA8;
    return;
L_08838DA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839038;
      }
      goto L_08838DB0;
    }
L_08838DB0:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08838DBCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x08838DBCu) goto L_08838DBC;
    return;
L_08838DBC:
    ctx.gpr[31] = (0x08838DC4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem) && ctx.pc == 0x08838DC4u) goto L_08838DC4;
    return;
L_08838DC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08838DD0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem) && ctx.pc == 0x08838DD0u) goto L_08838DD0;
    return;
L_08838DD0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29804)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29804)));
        goto L_08838E14;
    }
    goto L_08838DE8;
L_08838DE8:
    ctx.gpr[31] = (0x08838DF0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838DF0u) goto L_08838DF0;
    return;
L_08838DF0:
    ctx.gpr[31] = (0x08838DF8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem) && ctx.pc == 0x08838DF8u) goto L_08838DF8;
    return;
L_08838DF8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08838E50;
      }
      goto L_08838E10;
    }
L_08838E10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29804)));
    goto L_08838E14;
L_08838E14:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08839038;
      }
      goto L_08838E28;
    }
L_08838E28:
    ctx.gpr[31] = (0x08838E30u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838E30u) goto L_08838E30;
    return;
L_08838E30:
    ctx.gpr[31] = (0x08838E38u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem) && ctx.pc == 0x08838E38u) goto L_08838E38;
    return;
L_08838E38:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08839038;
      }
      goto L_08838E50;
    }
L_08838E50:
    ctx.gpr[31] = (0x08838E58u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x08838E58u) goto L_08838E58;
    return;
L_08838E58:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08838E64u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838E64u) goto L_08838E64;
    return;
L_08838E64:
    ctx.gpr[31] = (0x08838E6Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem) && ctx.pc == 0x08838E6Cu) goto L_08838E6C;
    return;
L_08838E6C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x08838E90u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x08838E90u) goto L_08838E90;
    return;
L_08838E90:
    ctx.gpr[31] = (0x08838E98u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x08838E98u) goto L_08838E98;
    return;
L_08838E98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08838EA8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x08838EA8u) goto L_08838EA8;
    return;
L_08838EA8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[23] = (ctx.gpr[30] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x08838EB8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x08838EB8u) goto L_08838EB8;
    return;
L_08838EB8:
    ctx.gpr[31] = (0x08838EC0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x08838EC0u) goto L_08838EC0;
    return;
L_08838EC0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08838ED0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x08838ED0u) goto L_08838ED0;
    return;
L_08838ED0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08838EE0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 155u, 0x08830B68u>(ctx, &aot_mem) && ctx.pc == 0x08838EE0u) goto L_08838EE0;
    return;
L_08838EE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839038;
      }
      goto L_08838EE8;
    }
L_08838EE8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839038;
      }
      goto L_08838EF0;
    }
L_08838EF0:
    ctx.gpr[31] = (0x08838EF8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838EF8u) goto L_08838EF8;
    return;
L_08838EF8:
    ctx.gpr[31] = (0x08838F00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x08838F00u) goto L_08838F00;
    return;
L_08838F00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839038;
      }
      goto L_08838F08;
    }
L_08838F08:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08838F14u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x08838F14u) goto L_08838F14;
    return;
L_08838F14:
    ctx.gpr[31] = (0x08838F1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem) && ctx.pc == 0x08838F1Cu) goto L_08838F1C;
    return;
L_08838F1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08838F28u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem) && ctx.pc == 0x08838F28u) goto L_08838F28;
    return;
L_08838F28:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29804)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29804)));
        goto L_08838F6C;
    }
    goto L_08838F40;
L_08838F40:
    ctx.gpr[31] = (0x08838F48u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838F48u) goto L_08838F48;
    return;
L_08838F48:
    ctx.gpr[31] = (0x08838F50u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem) && ctx.pc == 0x08838F50u) goto L_08838F50;
    return;
L_08838F50:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08838FA8;
      }
      goto L_08838F68;
    }
L_08838F68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29804)));
    goto L_08838F6C;
L_08838F6C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08839038;
      }
      goto L_08838F80;
    }
L_08838F80:
    ctx.gpr[31] = (0x08838F88u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838F88u) goto L_08838F88;
    return;
L_08838F88:
    ctx.gpr[31] = (0x08838F90u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem) && ctx.pc == 0x08838F90u) goto L_08838F90;
    return;
L_08838F90:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08839038;
      }
      goto L_08838FA8;
    }
L_08838FA8:
    ctx.gpr[31] = (0x08838FB0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x08838FB0u) goto L_08838FB0;
    return;
L_08838FB0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08838FBCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08838FBCu) goto L_08838FBC;
    return;
L_08838FBC:
    ctx.gpr[31] = (0x08838FC4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem) && ctx.pc == 0x08838FC4u) goto L_08838FC4;
    return;
L_08838FC4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15488u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x08838FE8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x08838FE8u) goto L_08838FE8;
    return;
L_08838FE8:
    ctx.gpr[31] = (0x08838FF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x08838FF0u) goto L_08838FF0;
    return;
L_08838FF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08839000u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x08839000u) goto L_08839000;
    return;
L_08839000:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[23] = (ctx.gpr[30] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x08839010u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x08839010u) goto L_08839010;
    return;
L_08839010:
    ctx.gpr[31] = (0x08839018u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x08839018u) goto L_08839018;
    return;
L_08839018:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08839028u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x08839028u) goto L_08839028;
    return;
L_08839028:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08839038u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 155u, 0x08830B68u>(ctx, &aot_mem) && ctx.pc == 0x08839038u) goto L_08839038;
    return;
L_08839038:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1520)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1524)));
        goto L_0883906C;
    }
    goto L_08839050;
L_08839050:
    ctx.gpr[31] = (0x08839058u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x08839058u) goto L_08839058;
    return;
L_08839058:
    ctx.gpr[31] = (0x08839060u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem) && ctx.pc == 0x08839060u) goto L_08839060;
    return;
L_08839060:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088390F8;
      }
      goto L_08839068;
    }
L_08839068:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1524)));
    goto L_0883906C;
L_0883906C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1528)));
        goto L_0883909C;
    }
    goto L_08839080;
L_08839080:
    ctx.gpr[31] = (0x08839088u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1424));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x08839088u) goto L_08839088;
    return;
L_08839088:
    ctx.gpr[31] = (0x08839090u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem) && ctx.pc == 0x08839090u) goto L_08839090;
    return;
L_08839090:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088390F8;
      }
      goto L_08839098;
    }
L_08839098:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1528)));
    goto L_0883909C;
L_0883909C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1532)));
        goto L_088390CC;
    }
    goto L_088390B0;
L_088390B0:
    ctx.gpr[31] = (0x088390B8u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1456));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x088390B8u) goto L_088390B8;
    return;
L_088390B8:
    ctx.gpr[31] = (0x088390C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem) && ctx.pc == 0x088390C0u) goto L_088390C0;
    return;
L_088390C0:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088390F8;
      }
      goto L_088390C8;
    }
L_088390C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1532)));
    goto L_088390CC;
L_088390CC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088393D4;
      }
      goto L_088390E0;
    }
L_088390E0:
    ctx.gpr[31] = (0x088390E8u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1488));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x088390E8u) goto L_088390E8;
    return;
L_088390E8:
    ctx.gpr[31] = (0x088390F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem) && ctx.pc == 0x088390F0u) goto L_088390F0;
    return;
L_088390F0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088393D4;
      }
      goto L_088390F8;
    }
L_088390F8:
    ctx.gpr[31] = (0x08839100u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x08839100u) goto L_08839100;
    return;
L_08839100:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088393D4;
      }
      goto L_0883910C;
    }
L_0883910C:
    ctx.gpr[31] = (0x08839114u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x08839114u) goto L_08839114;
    return;
L_08839114:
    ctx.gpr[4] = (0u | 246u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088393D4;
      }
      goto L_08839120;
    }
L_08839120:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1808), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[31] = (0x08839130u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x08839130u) goto L_08839130;
    return;
L_08839130:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[31] = (0x08839140u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x08839140u) goto L_08839140;
    return;
L_08839140:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883914Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x0883914Cu) goto L_0883914C;
    return;
L_0883914C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08839158u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem) && ctx.pc == 0x08839158u) goto L_08839158;
    return;
L_08839158:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08839164u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x08839164u) goto L_08839164;
    return;
L_08839164:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08839174u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x08839174u) goto L_08839174;
    return;
L_08839174:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08839184u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem) && ctx.pc == 0x08839184u) goto L_08839184;
    return;
L_08839184:
    ctx.gpr[31] = (0x0883918Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 83u, 0x08830650u>(ctx, &aot_mem) && ctx.pc == 0x0883918Cu) goto L_0883918C;
    return;
L_0883918C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29816)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1808)));
      if (branch_taken) {
          goto L_08839238;
      }
      goto L_088391B4;
    }
L_088391B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1808), ctx.gpr[22]);
    ctx.gpr[31] = (0x088391C0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 72u, 0x0883053Cu>(ctx, &aot_mem) && ctx.pc == 0x088391C0u) goto L_088391C0;
    return;
L_088391C0:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29816)));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088391DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x088391DCu) goto L_088391DC;
    return;
L_088391DC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088391ECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 46u, 0x08830348u>(ctx, &aot_mem) && ctx.pc == 0x088391ECu) goto L_088391EC;
    return;
L_088391EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088391F8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x088391F8u) goto L_088391F8;
    return;
L_088391F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08839224u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(756));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem) && ctx.pc == 0x08839224u) goto L_08839224;
    return;
L_08839224:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29820)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1808)));
      if (branch_taken) {
          goto L_0883924C;
      }
      goto L_08839238;
    }
L_08839238:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1654))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1654), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29820)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    goto L_0883924C;
L_0883924C:
    ctx.gpr[31] = (0x08839254u);
    ctx.gpr[5] = (32u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem) && ctx.pc == 0x08839254u) goto L_08839254;
    return;
L_08839254:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883926C;
      }
      goto L_0883925C;
    }
L_0883925C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29888)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
      if (branch_taken) {
          goto L_08839288;
      }
      goto L_0883926C;
    }
L_0883926C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x08839278u);
    ctx.gpr[5] = (16u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem) && ctx.pc == 0x08839278u) goto L_08839278;
    return;
L_08839278:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
      if (branch_taken) {
          goto L_08839288;
      }
      goto L_08839280;
    }
L_08839280:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29880)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08839288;
L_08839288:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088392AC;
      }
      goto L_08839298;
    }
L_08839298:
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_088392AC;
L_088392AC:
    ctx.gpr[31] = (0x088392B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x088392B4u) goto L_088392B4;
    return;
L_088392B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088392D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x088392D0u) goto L_088392D0;
    return;
L_088392D0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088392DCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 153u, 0x08830B44u>(ctx, &aot_mem) && ctx.pc == 0x088392DCu) goto L_088392DC;
    return;
L_088392DC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1813), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088393D4;
      }
      goto L_088392E8;
    }
L_088392E8:
    ctx.gpr[31] = (0x088392F0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x088392F0u) goto L_088392F0;
    return;
L_088392F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088393D4;
      }
      goto L_088392F8;
    }
L_088392F8:
    ctx.gpr[31] = (0x08839300u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x08839300u) goto L_08839300;
    return;
L_08839300:
    ctx.gpr[31] = (0x08839308u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08839308u) goto L_08839308;
    return;
L_08839308:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088393D4;
      }
      goto L_08839310;
    }
L_08839310:
    ctx.gpr[31] = (0x08839318u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x08839318u) goto L_08839318;
    return;
L_08839318:
    ctx.gpr[31] = (0x08839320u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 829u, 0x08833D04u>(ctx, &aot_mem) && ctx.pc == 0x08839320u) goto L_08839320;
    return;
L_08839320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088393AC;
      }
      goto L_08839330;
    }
L_08839330:
    ctx.gpr[31] = (0x08839338u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x08839338u) goto L_08839338;
    return;
L_08839338:
    ctx.gpr[31] = (0x08839340u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 829u, 0x08833D04u>(ctx, &aot_mem) && ctx.pc == 0x08839340u) goto L_08839340;
    return;
L_08839340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088393AC;
      }
      goto L_08839350;
    }
L_08839350:
    ctx.gpr[31] = (0x08839358u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x08839358u) goto L_08839358;
    return;
L_08839358:
    ctx.gpr[31] = (0x08839360u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 829u, 0x08833D04u>(ctx, &aot_mem) && ctx.pc == 0x08839360u) goto L_08839360;
    return;
L_08839360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 63u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
        goto L_08839390;
    }
    goto L_08839370;
L_08839370:
    ctx.gpr[31] = (0x08839378u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x08839378u) goto L_08839378;
    return;
L_08839378:
    ctx.gpr[31] = (0x08839380u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 768u, 0x08833764u>(ctx, &aot_mem) && ctx.pc == 0x08839380u) goto L_08839380;
    return;
L_08839380:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088393D4;
      }
      goto L_0883938C;
    }
L_0883938C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    goto L_08839390;
L_08839390:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(408));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088393A4u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088393A4u) goto L_088393A4;
    return;
L_088393A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088393D4;
      }
      goto L_088393AC;
    }
L_088393AC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088393B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x088393B8u) goto L_088393B8;
    return;
L_088393B8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088393C8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 192u, 0x08830E0Cu>(ctx, &aot_mem) && ctx.pc == 0x088393C8u) goto L_088393C8;
    return;
L_088393C8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088393D4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 190u, 0x08830DFCu>(ctx, &aot_mem) && ctx.pc == 0x088393D4u) goto L_088393D4;
    return;
L_088393D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_088399A0;
      }
      goto L_088393E0;
    }
L_088393E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088399A0;
      }
      goto L_088393F0;
    }
L_088393F0:
    ctx.gpr[31] = (0x088393F8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 658u, 0x08B0EBDCu>(ctx, &aot_mem) && ctx.pc == 0x088393F8u) goto L_088393F8;
    return;
L_088393F8:
    ctx.gpr[31] = (0x08839400u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem) && ctx.pc == 0x08839400u) goto L_08839400;
    return;
L_08839400:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883940Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 466u, 0x08B41F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0883940Cu) goto L_0883940C;
    return;
L_0883940C:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1884), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1885)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1886), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1885), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883942Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 177u, 0x08830D44u>(ctx, &aot_mem) && ctx.pc == 0x0883942Cu) goto L_0883942C;
    return;
L_0883942C:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(644));
    ctx.gpr[31] = (0x08839444u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 658u, 0x088DBBACu>(ctx, &aot_mem) && ctx.pc == 0x08839444u) goto L_08839444;
    return;
L_08839444:
    ctx.gpr[31] = (0x0883944Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883944Cu) goto L_0883944C;
    return;
L_0883944C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08839458u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x08839458u) goto L_08839458;
    return;
L_08839458:
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08839474u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 209u, 0x08B00C34u>(ctx, &aot_mem) && ctx.pc == 0x08839474u) goto L_08839474;
    return;
L_08839474:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1604)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1604), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1608)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1612)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1612), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1616)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088394ACu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 210u, 0x08830EE4u>(ctx, &aot_mem) && ctx.pc == 0x088394ACu) goto L_088394AC;
    return;
L_088394AC:
    ctx.gpr[31] = (0x088394B4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 207u, 0x08830EC8u>(ctx, &aot_mem) && ctx.pc == 0x088394B4u) goto L_088394B4;
    return;
L_088394B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 196u, 0x0883CCFCu>(ctx, &aot_mem); return;
      }
      goto L_088394DC;
    }
L_088394DC:
    ctx.gpr[31] = (0x088394E4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 658u, 0x08B0EBDCu>(ctx, &aot_mem) && ctx.pc == 0x088394E4u) goto L_088394E4;
    return;
L_088394E4:
    ctx.gpr[31] = (0x088394ECu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 442u, 0x08B461ACu>(ctx, &aot_mem) && ctx.pc == 0x088394ECu) goto L_088394EC;
    return;
L_088394EC:
    ctx.gpr[31] = (0x088394F4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 210u, 0x08830EE4u>(ctx, &aot_mem) && ctx.pc == 0x088394F4u) goto L_088394F4;
    return;
L_088394F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0883952C;
      }
      goto L_08839504;
    }
L_08839504:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08839510u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 190u, 0x08830DFCu>(ctx, &aot_mem) && ctx.pc == 0x08839510u) goto L_08839510;
    return;
L_08839510:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08839520u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 192u, 0x08830E0Cu>(ctx, &aot_mem) && ctx.pc == 0x08839520u) goto L_08839520;
    return;
L_08839520:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883952Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x0883952Cu) goto L_0883952C;
    return;
L_0883952C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1520)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1524)));
        goto L_08839560;
    }
    goto L_08839544;
L_08839544:
    ctx.gpr[31] = (0x0883954Cu);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883954Cu) goto L_0883954C;
    return;
L_0883954C:
    ctx.gpr[31] = (0x08839554u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem) && ctx.pc == 0x08839554u) goto L_08839554;
    return;
L_08839554:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088395EC;
      }
      goto L_0883955C;
    }
L_0883955C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1524)));
    goto L_08839560;
L_08839560:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1528)));
        goto L_08839590;
    }
    goto L_08839574;
L_08839574:
    ctx.gpr[31] = (0x0883957Cu);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1424));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883957Cu) goto L_0883957C;
    return;
L_0883957C:
    ctx.gpr[31] = (0x08839584u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem) && ctx.pc == 0x08839584u) goto L_08839584;
    return;
L_08839584:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088395EC;
      }
      goto L_0883958C;
    }
L_0883958C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1528)));
    goto L_08839590;
L_08839590:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1532)));
        goto L_088395C0;
    }
    goto L_088395A4;
L_088395A4:
    ctx.gpr[31] = (0x088395ACu);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1456));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x088395ACu) goto L_088395AC;
    return;
L_088395AC:
    ctx.gpr[31] = (0x088395B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem) && ctx.pc == 0x088395B4u) goto L_088395B4;
    return;
L_088395B4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088395EC;
      }
      goto L_088395BC;
    }
L_088395BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1532)));
    goto L_088395C0;
L_088395C0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088396E4;
      }
      goto L_088395D4;
    }
L_088395D4:
    ctx.gpr[31] = (0x088395DCu);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1488));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x088395DCu) goto L_088395DC;
    return;
L_088395DC:
    ctx.gpr[31] = (0x088395E4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem) && ctx.pc == 0x088395E4u) goto L_088395E4;
    return;
L_088395E4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088396E4;
      }
      goto L_088395EC;
    }
L_088395EC:
    ctx.gpr[31] = (0x088395F4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x088395F4u) goto L_088395F4;
    return;
L_088395F4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088396E4;
      }
      goto L_08839600;
    }
L_08839600:
    ctx.gpr[31] = (0x08839608u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x08839608u) goto L_08839608;
    return;
L_08839608:
    ctx.gpr[4] = (0u | 245u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088396E4;
      }
      goto L_08839614;
    }
L_08839614:
    ctx.gpr[31] = (0x0883961Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883961Cu) goto L_0883961C;
    return;
L_0883961C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-967));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088396E4;
      }
      goto L_08839628;
    }
L_08839628:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1654))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1654), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088396A4;
      }
      goto L_08839648;
    }
L_08839648:
    ctx.gpr[31] = (0x08839650u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x08839650u) goto L_08839650;
    return;
L_08839650:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29820)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08839680u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x08839680u) goto L_08839680;
    return;
L_08839680:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08839690u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x08839690u) goto L_08839690;
    return;
L_08839690:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883969Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 153u, 0x08830B44u>(ctx, &aot_mem) && ctx.pc == 0x0883969Cu) goto L_0883969C;
    return;
L_0883969C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088396E4;
      }
      goto L_088396A4;
    }
L_088396A4:
    ctx.gpr[31] = (0x088396ACu);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x088396ACu) goto L_088396AC;
    return;
L_088396AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29820)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x088396C8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x088396C8u) goto L_088396C8;
    return;
L_088396C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088396D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x088396D8u) goto L_088396D8;
    return;
L_088396D8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088396E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 153u, 0x08830B44u>(ctx, &aot_mem) && ctx.pc == 0x088396E4u) goto L_088396E4;
    return;
L_088396E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_088399A0;
      }
      goto L_088396F0;
    }
L_088396F0:
    ctx.gpr[31] = (0x088396F8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x088396F8u) goto L_088396F8;
    return;
L_088396F8:
    ctx.gpr[31] = (0x08839700u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 83u, 0x08830650u>(ctx, &aot_mem) && ctx.pc == 0x08839700u) goto L_08839700;
    return;
L_08839700:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08839738;
      }
      goto L_0883971C;
    }
L_0883971C:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08839730u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 192u, 0x08830E0Cu>(ctx, &aot_mem) && ctx.pc == 0x08839730u) goto L_08839730;
    return;
L_08839730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839744;
      }
      goto L_08839738;
    }
L_08839738:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08839744u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 192u, 0x08830E0Cu>(ctx, &aot_mem) && ctx.pc == 0x08839744u) goto L_08839744;
    return;
L_08839744:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08839750u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x08839750u) goto L_08839750;
    return;
L_08839750:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883975Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 189u, 0x08830DF4u>(ctx, &aot_mem) && ctx.pc == 0x0883975Cu) goto L_0883975C;
    return;
L_0883975C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08839768u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 190u, 0x08830DFCu>(ctx, &aot_mem) && ctx.pc == 0x08839768u) goto L_08839768;
    return;
L_08839768:
    ctx.gpr[31] = (0x08839770u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 196u, 0x08830E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08839770u) goto L_08839770;
    return;
L_08839770:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(615))))));
      if (branch_taken) {
          goto L_0883977C;
      }
      goto L_08839778;
    }
L_08839778:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(700), 0u);
    goto L_0883977C;
L_0883977C:
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088397B0;
      }
      goto L_08839788;
    }
L_08839788:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08839794u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 190u, 0x08830DFCu>(ctx, &aot_mem) && ctx.pc == 0x08839794u) goto L_08839794;
    return;
L_08839794:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088397A0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x088397A0u) goto L_088397A0;
    return;
L_088397A0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088397B0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 192u, 0x08830E0Cu>(ctx, &aot_mem) && ctx.pc == 0x088397B0u) goto L_088397B0;
    return;
L_088397B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_088399A0;
      }
      goto L_088397BC;
    }
L_088397BC:
    ctx.gpr[31] = (0x088397C4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x088397C4u) goto L_088397C4;
    return;
L_088397C4:
    ctx.gpr[31] = (0x088397CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 83u, 0x08830650u>(ctx, &aot_mem) && ctx.pc == 0x088397CCu) goto L_088397CC;
    return;
L_088397CC:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088398AC;
      }
      goto L_088397E8;
    }
L_088397E8:
    ctx.gpr[31] = (0x088397F0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x088397F0u) goto L_088397F0;
    return;
L_088397F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088398DC;
      }
      goto L_088397F8;
    }
L_088397F8:
    ctx.gpr[31] = (0x08839800u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x08839800u) goto L_08839800;
    return;
L_08839800:
    ctx.gpr[31] = (0x08839808u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08839808u) goto L_08839808;
    return;
L_08839808:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088398DC;
      }
      goto L_08839810;
    }
L_08839810:
    ctx.gpr[31] = (0x08839818u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x08839818u) goto L_08839818;
    return;
L_08839818:
    ctx.gpr[31] = (0x08839820u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 829u, 0x08833D04u>(ctx, &aot_mem) && ctx.pc == 0x08839820u) goto L_08839820;
    return;
L_08839820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088398AC;
      }
      goto L_08839830;
    }
L_08839830:
    ctx.gpr[31] = (0x08839838u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x08839838u) goto L_08839838;
    return;
L_08839838:
    ctx.gpr[31] = (0x08839840u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 829u, 0x08833D04u>(ctx, &aot_mem) && ctx.pc == 0x08839840u) goto L_08839840;
    return;
L_08839840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088398AC;
      }
      goto L_08839850;
    }
L_08839850:
    ctx.gpr[31] = (0x08839858u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x08839858u) goto L_08839858;
    return;
L_08839858:
    ctx.gpr[31] = (0x08839860u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 829u, 0x08833D04u>(ctx, &aot_mem) && ctx.pc == 0x08839860u) goto L_08839860;
    return;
L_08839860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 63u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
        goto L_08839890;
    }
    goto L_08839870;
L_08839870:
    ctx.gpr[31] = (0x08839878u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x08839878u) goto L_08839878;
    return;
L_08839878:
    ctx.gpr[31] = (0x08839880u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 768u, 0x08833764u>(ctx, &aot_mem) && ctx.pc == 0x08839880u) goto L_08839880;
    return;
L_08839880:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088398DC;
      }
      goto L_0883988C;
    }
L_0883988C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    goto L_08839890;
L_08839890:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(408));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088398A4u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088398A4u) goto L_088398A4;
    return;
L_088398A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088398DC;
      }
      goto L_088398AC;
    }
L_088398AC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088398B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x088398B8u) goto L_088398B8;
    return;
L_088398B8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088398C8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 192u, 0x08830E0Cu>(ctx, &aot_mem) && ctx.pc == 0x088398C8u) goto L_088398C8;
    return;
L_088398C8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088398D4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 190u, 0x08830DFCu>(ctx, &aot_mem) && ctx.pc == 0x088398D4u) goto L_088398D4;
    return;
L_088398D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088398F4;
      }
      goto L_088398DC;
    }
L_088398DC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088398E8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 192u, 0x08830E0Cu>(ctx, &aot_mem) && ctx.pc == 0x088398E8u) goto L_088398E8;
    return;
L_088398E8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088398F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x088398F4u) goto L_088398F4;
    return;
L_088398F4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08839900u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 189u, 0x08830DF4u>(ctx, &aot_mem) && ctx.pc == 0x08839900u) goto L_08839900;
    return;
L_08839900:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883990Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 190u, 0x08830DFCu>(ctx, &aot_mem) && ctx.pc == 0x0883990Cu) goto L_0883990C;
    return;
L_0883990C:
    ctx.gpr[31] = (0x08839914u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 196u, 0x08830E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08839914u) goto L_08839914;
    return;
L_08839914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_08839924;
      }
      goto L_08839920;
    }
L_08839920:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(700), 0u);
    goto L_08839924;
L_08839924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088399A0;
      }
      goto L_0883992C;
    }
L_0883992C:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08839940u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 192u, 0x08830E0Cu>(ctx, &aot_mem) && ctx.pc == 0x08839940u) goto L_08839940;
    return;
L_08839940:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883994Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x0883994Cu) goto L_0883994C;
    return;
L_0883994C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08839958u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 189u, 0x08830DF4u>(ctx, &aot_mem) && ctx.pc == 0x08839958u) goto L_08839958;
    return;
L_08839958:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08839964u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 190u, 0x08830DFCu>(ctx, &aot_mem) && ctx.pc == 0x08839964u) goto L_08839964;
    return;
L_08839964:
    ctx.gpr[31] = (0x0883996Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 196u, 0x08830E2Cu>(ctx, &aot_mem) && ctx.pc == 0x0883996Cu) goto L_0883996C;
    return;
L_0883996C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1656)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0883997C;
      }
      goto L_08839978;
    }
L_08839978:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(700), 0u);
    goto L_0883997C;
L_0883997C:
    ctx.gpr[31] = (0x08839984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 367u, 0x08A42004u>(ctx, &aot_mem) && ctx.pc == 0x08839984u) goto L_08839984;
    return;
L_08839984:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1656), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_088399A0;
      }
      goto L_08839994;
    }
L_08839994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_088399A0;
L_088399A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088399BCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088399BCu) goto L_088399BC;
    return;
L_088399BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088399E0;
      }
      goto L_088399C4;
    }
L_088399C4:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x088399D0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 131u, 0x0883098Cu>(ctx, &aot_mem) && ctx.pc == 0x088399D0u) goto L_088399D0;
    return;
L_088399D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088399E8;
      }
      goto L_088399D8;
    }
L_088399D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839D44;
      }
      goto L_088399E0;
    }
L_088399E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 196u, 0x0883CCFCu>(ctx, &aot_mem); return;
      }
      goto L_088399E8;
    }
L_088399E8:
    ctx.gpr[31] = (0x088399F0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x088399F0u) goto L_088399F0;
    return;
L_088399F0:
    if (ctx.gpr[2] == ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
        goto L_08839A10;
    }
    goto L_088399F8;
L_088399F8:
    ctx.gpr[31] = (0x08839A00u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x08839A00u) goto L_08839A00;
    return;
L_08839A00:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08839D44;
      }
      goto L_08839A0C;
    }
L_08839A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    goto L_08839A10;
L_08839A10:
    ctx.gpr[31] = (0x08839A18u);
    ctx.gpr[5] = (128u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem) && ctx.pc == 0x08839A18u) goto L_08839A18;
    return;
L_08839A18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839D44;
      }
      goto L_08839A20;
    }
L_08839A20:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(160));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_08839AB0;
      }
      goto L_08839A3C;
    }
L_08839A3C:
    ctx.gpr[31] = (0x08839A44u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x08839A44u) goto L_08839A44;
    return;
L_08839A44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08839AB0;
      }
      goto L_08839A58;
    }
L_08839A58:
    ctx.gpr[31] = (0x08839A60u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x08839A60u) goto L_08839A60;
    return;
L_08839A60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08839AB0;
      }
      goto L_08839A74;
    }
L_08839A74:
    ctx.gpr[31] = (0x08839A7Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x08839A7Cu) goto L_08839A7C;
    return;
L_08839A7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08839AB0;
      }
      goto L_08839A90;
    }
L_08839A90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1548)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08839AB0;
      }
      goto L_08839AAC;
    }
L_08839AAC:
    ctx.gpr[18] = (0u | 1u);
    goto L_08839AB0;
L_08839AB0:
    ctx.gpr[31] = (0x08839AB8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x08839AB8u) goto L_08839AB8;
    return;
L_08839AB8:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08839AEC;
      }
      goto L_08839AC4;
    }
L_08839AC4:
    ctx.gpr[4] = (15300u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15044u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08839B10;
      }
      goto L_08839AEC;
    }
L_08839AEC:
    ctx.gpr[4] = (15172u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (14955u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60923u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08839B10;
L_08839B10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1808), ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1812), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[31] = (0x08839B20u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x08839B20u) goto L_08839B20;
    return;
L_08839B20:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08839B34u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x08839B34u) goto L_08839B34;
    return;
L_08839B34:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08839B50u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 46u, 0x08830348u>(ctx, &aot_mem) && ctx.pc == 0x08839B50u) goto L_08839B50;
    return;
L_08839B50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08839B5Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x08839B5Cu) goto L_08839B5C;
    return;
L_08839B5C:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08839B6Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x08839B6Cu) goto L_08839B6C;
    return;
L_08839B6C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08839B7Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 46u, 0x08830348u>(ctx, &aot_mem) && ctx.pc == 0x08839B7Cu) goto L_08839B7C;
    return;
L_08839B7C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08839B88u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x08839B88u) goto L_08839B88;
    return;
L_08839B88:
    ctx.gpr[31] = (0x08839B90u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 127u, 0x08830920u>(ctx, &aot_mem) && ctx.pc == 0x08839B90u) goto L_08839B90;
    return;
L_08839B90:
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1812)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1808)));
      if (branch_taken) {
          goto L_08839D10;
      }
      goto L_08839B9C;
    }
L_08839B9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(619))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839D10;
      }
      goto L_08839BAC;
    }
L_08839BAC:
    ctx.gpr[31] = (0x08839BB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 83u, 0x08830650u>(ctx, &aot_mem) && ctx.pc == 0x08839BB4u) goto L_08839BB4;
    return;
L_08839BB4:
    ctx.gpr[31] = (0x08839BBCu);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x08839BBCu) goto L_08839BBC;
    return;
L_08839BBC:
    ctx.gpr[31] = (0x08839BC4u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 71u, 0x08830534u>(ctx, &aot_mem) && ctx.pc == 0x08839BC4u) goto L_08839BC4;
    return;
L_08839BC4:
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08839C54;
      }
      goto L_08839BD4;
    }
L_08839BD4:
    ctx.gpr[31] = (0x08839BDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 83u, 0x08830650u>(ctx, &aot_mem) && ctx.pc == 0x08839BDCu) goto L_08839BDC;
    return;
L_08839BDC:
    ctx.gpr[31] = (0x08839BE4u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x08839BE4u) goto L_08839BE4;
    return;
L_08839BE4:
    ctx.gpr[31] = (0x08839BECu);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 71u, 0x08830534u>(ctx, &aot_mem) && ctx.pc == 0x08839BECu) goto L_08839BEC;
    return;
L_08839BEC:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08839C54;
      }
      goto L_08839BFC;
    }
L_08839BFC:
    ctx.gpr[31] = (0x08839C04u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 159u, 0x08830C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08839C04u) goto L_08839C04;
    return;
L_08839C04:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08839C54;
      }
      goto L_08839C14;
    }
L_08839C14:
    ctx.gpr[31] = (0x08839C1Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 151u, 0x08830B34u>(ctx, &aot_mem) && ctx.pc == 0x08839C1Cu) goto L_08839C1C;
    return;
L_08839C1C:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08839C5C;
      }
      goto L_08839C2C;
    }
L_08839C2C:
    ctx.gpr[31] = (0x08839C34u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 152u, 0x08830B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08839C34u) goto L_08839C34;
    return;
L_08839C34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C5C;
      }
      goto L_08839C3C;
    }
L_08839C3C:
    ctx.gpr[31] = (0x08839C44u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 152u, 0x08830B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08839C44u) goto L_08839C44;
    return;
L_08839C44:
    ctx.gpr[31] = (0x08839C4Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 126u, 0x0883090Cu>(ctx, &aot_mem) && ctx.pc == 0x08839C4Cu) goto L_08839C4C;
    return;
L_08839C4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C5C;
      }
      goto L_08839C54;
    }
L_08839C54:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839D08;
      }
      goto L_08839C5C;
    }
L_08839C5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(309)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(309)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C80;
      }
      goto L_08839C78;
    }
L_08839C78:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839D14;
      }
      goto L_08839C80;
    }
L_08839C80:
    ctx.gpr[31] = (0x08839C88u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x08839C88u) goto L_08839C88;
    return;
L_08839C88:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08839C94u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x08839C94u) goto L_08839C94;
    return;
L_08839C94:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08839CA0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 487u, 0x08B42144u>(ctx, &aot_mem) && ctx.pc == 0x08839CA0u) goto L_08839CA0;
    return;
L_08839CA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839D14;
      }
      goto L_08839CA8;
    }
L_08839CA8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839CC0;
      }
      goto L_08839CB0;
    }
L_08839CB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(309)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839CC8;
      }
      goto L_08839CC0;
    }
L_08839CC0:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08839CC8;
L_08839CC8:
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08839CE0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x08839CE0u) goto L_08839CE0;
    return;
L_08839CE0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08839CF4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x08839CF4u) goto L_08839CF4;
    return;
L_08839CF4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08839D00u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x08839D00u) goto L_08839D00;
    return;
L_08839D00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839D14;
      }
      goto L_08839D08;
    }
L_08839D08:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08839D14;
      }
      goto L_08839D10;
    }
L_08839D10:
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(0u));
    goto L_08839D14;
L_08839D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x08839D20u);
    ctx.gpr[5] = (512u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem) && ctx.pc == 0x08839D20u) goto L_08839D20;
    return;
L_08839D20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839D44;
      }
      goto L_08839D28;
    }
L_08839D28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1640)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08839D44;
      }
      goto L_08839D3C;
    }
L_08839D3C:
    ctx.gpr[23] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(0u));
    goto L_08839D44;
L_08839D44:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    goto L_08839D4C;
L_08839D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839D80;
      }
      goto L_08839D58;
    }
L_08839D58:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7893)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839D80;
      }
      goto L_08839D70;
    }
L_08839D70:
    ctx.gpr[31] = (0x08839D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 133u, 0x088309C4u>(ctx, &aot_mem) && ctx.pc == 0x08839D78u) goto L_08839D78;
    return;
L_08839D78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839D98;
      }
      goto L_08839D80;
    }
L_08839D80:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08839D4C;
      }
      goto L_08839D90;
    }
L_08839D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839DAC;
      }
      goto L_08839D98;
    }
L_08839D98:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08839DA4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 134u, 0x088309D4u>(ctx, &aot_mem) && ctx.pc == 0x08839DA4u) goto L_08839DA4;
    return;
L_08839DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 196u, 0x0883CCFCu>(ctx, &aot_mem); return;
      }
      goto L_08839DAC;
    }
L_08839DAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[5] = (ctx.gpr[4] & 32u);
    ctx.gpr[17] = (0u | 246u);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (15651u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55051u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(944));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1800), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08839DF4;
      }
      goto L_08839DEC;
    }
L_08839DEC:
    ctx.gpr[23] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(0u));
    goto L_08839DF4;
L_08839DF4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(416));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    jump_target = ctx.gpr[10];
    ctx.gpr[31] = (0x08839E20u);
    ctx.gpr[9] = (0u | 42u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08839E20u) goto L_08839E20;
    return;
L_08839E20:
    ctx.gpr[31] = (0x08839E28u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x08839E28u) goto L_08839E28;
    return;
L_08839E28:
    ctx.gpr[4] = (0u | 251u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_08839E3C;
      }
      goto L_08839E34;
    }
L_08839E34:
    ctx.gpr[31] = (0x08839E3Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 42u, 0x088485ECu>(ctx, &aot_mem) && ctx.pc == 0x08839E3Cu) goto L_08839E3C;
    return;
L_08839E3C:
    ctx.gpr[31] = (0x08839E44u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x08839E44u) goto L_08839E44;
    return;
L_08839E44:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08839E84;
      }
      goto L_08839E4C;
    }
L_08839E4C:
    ctx.gpr[31] = (0x08839E54u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 663u, 0x08847C68u>(ctx, &aot_mem) && ctx.pc == 0x08839E54u) goto L_08839E54;
    return;
L_08839E54:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839E6C;
      }
      goto L_08839E68;
    }
L_08839E68:
    ctx.gpr[4] = (0u | 0u);
    goto L_08839E6C;
L_08839E6C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839E7C;
      }
      goto L_08839E74;
    }
L_08839E74:
    ctx.gpr[31] = (0x08839E7Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 629u, 0x08832B18u>(ctx, &aot_mem) && ctx.pc == 0x08839E7Cu) goto L_08839E7C;
    return;
L_08839E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A4CC;
      }
      goto L_08839E84;
    }
L_08839E84:
    ctx.gpr[31] = (0x08839E8Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x08839E8Cu) goto L_08839E8C;
    return;
L_08839E8C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-994));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08839EA8;
      }
      goto L_08839E98;
    }
L_08839E98:
    ctx.gpr[31] = (0x08839EA0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 208u, 0x08835560u>(ctx, &aot_mem) && ctx.pc == 0x08839EA0u) goto L_08839EA0;
    return;
L_08839EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A4CC;
      }
      goto L_08839EA8;
    }
L_08839EA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1816)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1778)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A4CC;
      }
      goto L_08839EBC;
    }
L_08839EBC:
    ctx.gpr[31] = (0x08839EC4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x08839EC4u) goto L_08839EC4;
    return;
L_08839EC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A4CC;
      }
      goto L_08839ECC;
    }
L_08839ECC:
    ctx.gpr[31] = (0x08839ED4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x08839ED4u) goto L_08839ED4;
    return;
L_08839ED4:
    ctx.gpr[31] = (0x08839EDCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 83u, 0x08830650u>(ctx, &aot_mem) && ctx.pc == 0x08839EDCu) goto L_08839EDC;
    return;
L_08839EDC:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883A4CC;
      }
      goto L_08839EEC;
    }
L_08839EEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1520)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883A4CC;
      }
      goto L_08839F04;
    }
L_08839F04:
    ctx.gpr[31] = (0x08839F0Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08839F0Cu) goto L_08839F0C;
    return;
L_08839F0C:
    ctx.gpr[31] = (0x08839F14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 333u, 0x0898CF00u>(ctx, &aot_mem) && ctx.pc == 0x08839F14u) goto L_08839F14;
    return;
L_08839F14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A4CC;
      }
      goto L_08839F1C;
    }
L_08839F1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1836), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1832), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1828), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1808), ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1812), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1824), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1820), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 20u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08839F50u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08839F50u) goto L_08839F50;
    return;
L_08839F50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1844), ctx.gpr[18]);
    ctx.gpr[6] = (0u | 13u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08839F70u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1840), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08839F70u) goto L_08839F70;
    return;
L_08839F70:
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(1392));
    ctx.gpr[31] = (0x08839F7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x08839F7Cu) goto L_08839F7C;
    return;
L_08839F7C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08839F8Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x08839F8Cu) goto L_08839F8C;
    return;
L_08839F8C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08839F98u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x08839F98u) goto L_08839F98;
    return;
L_08839F98:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08839FACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x08839FACu) goto L_08839FAC;
    return;
L_08839FAC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08839FC0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x08839FC0u) goto L_08839FC0;
    return;
L_08839FC0:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08839FD8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x08839FD8u) goto L_08839FD8;
    return;
L_08839FD8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08839FE8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x08839FE8u) goto L_08839FE8;
    return;
L_08839FE8:
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883A018u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883A018u) goto L_0883A018;
    return;
L_0883A018:
    ctx.gpr[31] = (0x0883A020u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883A020u) goto L_0883A020;
    return;
L_0883A020:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883A02Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883A02Cu) goto L_0883A02C;
    return;
L_0883A02C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883A038u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x0883A038u) goto L_0883A038;
    return;
L_0883A038:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883A048u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A048u) goto L_0883A048;
    return;
L_0883A048:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883A058u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883A058u) goto L_0883A058;
    return;
L_0883A058:
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883A06Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883A06Cu) goto L_0883A06C;
    return;
L_0883A06C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x0883A07Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A07Cu) goto L_0883A07C;
    return;
L_0883A07C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883A0ACu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883A0ACu) goto L_0883A0AC;
    return;
L_0883A0AC:
    ctx.gpr[21] = (ctx.gpr[30] + static_cast<std::uint32_t>(1456));
    ctx.gpr[31] = (0x0883A0B8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883A0B8u) goto L_0883A0B8;
    return;
L_0883A0B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883A0C4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883A0C4u) goto L_0883A0C4;
    return;
L_0883A0C4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883A0D0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x0883A0D0u) goto L_0883A0D0;
    return;
L_0883A0D0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883A0E0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A0E0u) goto L_0883A0E0;
    return;
L_0883A0E0:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883A0F0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883A0F0u) goto L_0883A0F0;
    return;
L_0883A0F0:
    ctx.gpr[31] = (0x0883A0F8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883A0F8u) goto L_0883A0F8;
    return;
L_0883A0F8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883A108u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A108u) goto L_0883A108;
    return;
L_0883A108:
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883A130u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883A130u) goto L_0883A130;
    return;
L_0883A130:
    ctx.gpr[31] = (0x0883A138u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883A138u) goto L_0883A138;
    return;
L_0883A138:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883A144u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883A144u) goto L_0883A144;
    return;
L_0883A144:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883A150u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x0883A150u) goto L_0883A150;
    return;
L_0883A150:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883A160u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A160u) goto L_0883A160;
    return;
L_0883A160:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883A170u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883A170u) goto L_0883A170;
    return;
L_0883A170:
    ctx.gpr[31] = (0x0883A178u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883A178u) goto L_0883A178;
    return;
L_0883A178:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x0883A188u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A188u) goto L_0883A188;
    return;
L_0883A188:
    ctx.gpr[4] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883A1B0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883A1B0u) goto L_0883A1B0;
    return;
L_0883A1B0:
    ctx.gpr[31] = (0x0883A1B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883A1B8u) goto L_0883A1B8;
    return;
L_0883A1B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883A1C4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883A1C4u) goto L_0883A1C4;
    return;
L_0883A1C4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883A1D0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x0883A1D0u) goto L_0883A1D0;
    return;
L_0883A1D0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883A1E0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A1E0u) goto L_0883A1E0;
    return;
L_0883A1E0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883A1F0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883A1F0u) goto L_0883A1F0;
    return;
L_0883A1F0:
    ctx.gpr[31] = (0x0883A1F8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A1F8u) goto L_0883A1F8;
    return;
L_0883A1F8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0883A208u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem) && ctx.pc == 0x0883A208u) goto L_0883A208;
    return;
L_0883A208:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[31] = (0x0883A214u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883A214u) goto L_0883A214;
    return;
L_0883A214:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883A224u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A224u) goto L_0883A224;
    return;
L_0883A224:
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883A24Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883A24Cu) goto L_0883A24C;
    return;
L_0883A24C:
    ctx.gpr[31] = (0x0883A254u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883A254u) goto L_0883A254;
    return;
L_0883A254:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883A260u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883A260u) goto L_0883A260;
    return;
L_0883A260:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883A26Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x0883A26Cu) goto L_0883A26C;
    return;
L_0883A26C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883A27Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A27Cu) goto L_0883A27C;
    return;
L_0883A27C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883A28Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883A28Cu) goto L_0883A28C;
    return;
L_0883A28C:
    ctx.gpr[31] = (0x0883A294u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A294u) goto L_0883A294;
    return;
L_0883A294:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0883A2A4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem) && ctx.pc == 0x0883A2A4u) goto L_0883A2A4;
    return;
L_0883A2A4:
    ctx.gpr[31] = (0x0883A2ACu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883A2ACu) goto L_0883A2AC;
    return;
L_0883A2AC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x0883A2BCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A2BCu) goto L_0883A2BC;
    return;
L_0883A2BC:
    ctx.gpr[4] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883A2E4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883A2E4u) goto L_0883A2E4;
    return;
L_0883A2E4:
    ctx.gpr[31] = (0x0883A2ECu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883A2ECu) goto L_0883A2EC;
    return;
L_0883A2EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883A2F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883A2F8u) goto L_0883A2F8;
    return;
L_0883A2F8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883A304u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x0883A304u) goto L_0883A304;
    return;
L_0883A304:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883A314u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A314u) goto L_0883A314;
    return;
L_0883A314:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883A324u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883A324u) goto L_0883A324;
    return;
L_0883A324:
    ctx.gpr[31] = (0x0883A32Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A32Cu) goto L_0883A32C;
    return;
L_0883A32C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0883A33Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem) && ctx.pc == 0x0883A33Cu) goto L_0883A33C;
    return;
L_0883A33C:
    ctx.gpr[31] = (0x0883A344u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883A344u) goto L_0883A344;
    return;
L_0883A344:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883A354u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A354u) goto L_0883A354;
    return;
L_0883A354:
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883A37Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883A37Cu) goto L_0883A37C;
    return;
L_0883A37C:
    ctx.gpr[31] = (0x0883A384u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883A384u) goto L_0883A384;
    return;
L_0883A384:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883A390u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883A390u) goto L_0883A390;
    return;
L_0883A390:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883A39Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x0883A39Cu) goto L_0883A39C;
    return;
L_0883A39C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883A3ACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A3ACu) goto L_0883A3AC;
    return;
L_0883A3AC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883A3BCu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883A3BCu) goto L_0883A3BC;
    return;
L_0883A3BC:
    ctx.gpr[31] = (0x0883A3C4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A3C4u) goto L_0883A3C4;
    return;
L_0883A3C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0883A3D4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem) && ctx.pc == 0x0883A3D4u) goto L_0883A3D4;
    return;
L_0883A3D4:
    ctx.gpr[31] = (0x0883A3DCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883A3DCu) goto L_0883A3DC;
    return;
L_0883A3DC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x0883A3ECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A3ECu) goto L_0883A3EC;
    return;
L_0883A3EC:
    ctx.gpr[4] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883A414u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883A414u) goto L_0883A414;
    return;
L_0883A414:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1840)));
    ctx.gpr[31] = (0x0883A43Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883A43Cu) goto L_0883A43C;
    return;
L_0883A43C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883A44Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A44Cu) goto L_0883A44C;
    return;
L_0883A44C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883A458u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 153u, 0x08830B44u>(ctx, &aot_mem) && ctx.pc == 0x0883A458u) goto L_0883A458;
    return;
L_0883A458:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x0883A474u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x0883A474u) goto L_0883A474;
    return;
L_0883A474:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883A484u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A484u) goto L_0883A484;
    return;
L_0883A484:
    ctx.gpr[31] = (0x0883A48Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A48Cu) goto L_0883A48C;
    return;
L_0883A48C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x0883A49Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883A49Cu) goto L_0883A49C;
    return;
L_0883A49C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883A4ACu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 155u, 0x08830B68u>(ctx, &aot_mem) && ctx.pc == 0x0883A4ACu) goto L_0883A4AC;
    return;
L_0883A4AC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1820)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1824)));
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1808)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1832)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1836)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1844)));
    goto L_0883A4CC;
L_0883A4CC:
    ctx.gpr[31] = (0x0883A4D4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883A4D4u) goto L_0883A4D4;
    return;
L_0883A4D4:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883A4F4;
      }
      goto L_0883A4E0;
    }
L_0883A4E0:
    ctx.gpr[31] = (0x0883A4E8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883A4E8u) goto L_0883A4E8;
    return;
L_0883A4E8:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883A520;
      }
      goto L_0883A4F4;
    }
L_0883A4F4:
    ctx.gpr[31] = (0x0883A4FCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 178u, 0x08830D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A4FCu) goto L_0883A4FC;
    return;
L_0883A4FC:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883A51C;
      }
      goto L_0883A508;
    }
L_0883A508:
    ctx.gpr[31] = (0x0883A510u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 178u, 0x08830D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A510u) goto L_0883A510;
    return;
L_0883A510:
    ctx.gpr[4] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883A520;
      }
      goto L_0883A51C;
    }
L_0883A51C:
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_0883A520;
L_0883A520:
    ctx.gpr[31] = (0x0883A528u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 127u, 0x08830920u>(ctx, &aot_mem) && ctx.pc == 0x0883A528u) goto L_0883A528;
    return;
L_0883A528:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A550;
      }
      goto L_0883A530;
    }
L_0883A530:
    ctx.gpr[31] = (0x0883A538u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 160u, 0x08830C94u>(ctx, &aot_mem) && ctx.pc == 0x0883A538u) goto L_0883A538;
    return;
L_0883A538:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(304))))));
      if (branch_taken) {
          goto L_0883A544;
      }
      goto L_0883A540;
    }
L_0883A540:
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_0883A544;
L_0883A544:
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0883A56C;
      }
      goto L_0883A550;
    }
L_0883A550:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(304))))));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A564;
      }
      goto L_0883A560;
    }
L_0883A560:
    ctx.gpr[23] = (0u | 0u);
    goto L_0883A564;
L_0883A564:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0883A56C;
L_0883A56C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1812), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A640;
      }
      goto L_0883A578;
    }
L_0883A578:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883A584u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 129u, 0x08830944u>(ctx, &aot_mem) && ctx.pc == 0x0883A584u) goto L_0883A584;
    return;
L_0883A584:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883A590u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 132u, 0x0883099Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A590u) goto L_0883A590;
    return;
L_0883A590:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883A59Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 134u, 0x088309D4u>(ctx, &aot_mem) && ctx.pc == 0x0883A59Cu) goto L_0883A59C;
    return;
L_0883A59C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883A5A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 135u, 0x088309FCu>(ctx, &aot_mem) && ctx.pc == 0x0883A5A8u) goto L_0883A5A8;
    return;
L_0883A5A8:
    ctx.gpr[31] = (0x0883A5B0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 149u, 0x08830B18u>(ctx, &aot_mem) && ctx.pc == 0x0883A5B0u) goto L_0883A5B0;
    return;
L_0883A5B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (65520u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0883A5E8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 150u, 0x08830B20u>(ctx, &aot_mem) && ctx.pc == 0x0883A5E8u) goto L_0883A5E8;
    return;
L_0883A5E8:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(144));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0883A604u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883A604u) goto L_0883A604;
    return;
L_0883A604:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883A610u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883A610u) goto L_0883A610;
    return;
L_0883A610:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0883A628u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883A628u) goto L_0883A628;
    return;
L_0883A628:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883A634u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883A634u) goto L_0883A634;
    return;
L_0883A634:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1712), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1800)));
      if (branch_taken) {
          goto L_0883B858;
      }
      goto L_0883A640;
    }
L_0883A640:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A77C;
      }
      goto L_0883A650;
    }
L_0883A650:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883A660u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem) && ctx.pc == 0x0883A660u) goto L_0883A660;
    return;
L_0883A660:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883A66Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 130u, 0x08830968u>(ctx, &aot_mem) && ctx.pc == 0x0883A66Cu) goto L_0883A66C;
    return;
L_0883A66C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883A678u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 129u, 0x08830944u>(ctx, &aot_mem) && ctx.pc == 0x0883A678u) goto L_0883A678;
    return;
L_0883A678:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883A684u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 132u, 0x0883099Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A684u) goto L_0883A684;
    return;
L_0883A684:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883A690u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 134u, 0x088309D4u>(ctx, &aot_mem) && ctx.pc == 0x0883A690u) goto L_0883A690;
    return;
L_0883A690:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883A69Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 135u, 0x088309FCu>(ctx, &aot_mem) && ctx.pc == 0x0883A69Cu) goto L_0883A69C;
    return;
L_0883A69C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0883A6D4u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883A6D4u) goto L_0883A6D4;
    return;
L_0883A6D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0883A6ECu);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883A6ECu) goto L_0883A6EC;
    return;
L_0883A6EC:
    ctx.gpr[16] = (0u | 0u);
    goto L_0883A6F0;
L_0883A6F0:
    ctx.gpr[31] = (0x0883A6F8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 727u, 0x08A67B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A6F8u) goto L_0883A6F8;
    return;
L_0883A6F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883A750;
      }
      goto L_0883A700;
    }
L_0883A700:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_0883A750;
      }
      goto L_0883A70C;
    }
L_0883A70C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883A718u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x0883A718u) goto L_0883A718;
    return;
L_0883A718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0883A730u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883A730u) goto L_0883A730;
    return;
L_0883A730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0883A748u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883A748u) goto L_0883A748;
    return;
L_0883A748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A6F0;
      }
      goto L_0883A750;
    }
L_0883A750:
    ctx.gpr[31] = (0x0883A758u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 6u, 0x08860314u>(ctx, &aot_mem) && ctx.pc == 0x0883A758u) goto L_0883A758;
    return;
L_0883A758:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883A764u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 132u, 0x0883099Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A764u) goto L_0883A764;
    return;
L_0883A764:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883A770u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 130u, 0x08830968u>(ctx, &aot_mem) && ctx.pc == 0x0883A770u) goto L_0883A770;
    return;
L_0883A770:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883A77Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 93u, 0x0883072Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A77Cu) goto L_0883A77C;
    return;
L_0883A77C:
    ctx.gpr[31] = (0x0883A784u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem) && ctx.pc == 0x0883A784u) goto L_0883A784;
    return;
L_0883A784:
    ctx.gpr[31] = (0x0883A78Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 385u, 0x08836A24u>(ctx, &aot_mem) && ctx.pc == 0x0883A78Cu) goto L_0883A78C;
    return;
L_0883A78C:
    ctx.gpr[31] = (0x0883A794u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883A794u) goto L_0883A794;
    return;
L_0883A794:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883A7B8;
      }
      goto L_0883A7A0;
    }
L_0883A7A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(432));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0883A7B8u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883A7B8u) goto L_0883A7B8;
    return;
L_0883A7B8:
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_0883A7C8;
L_0883A7C8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1672)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1688)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1520)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[12]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0883A7C8;
      }
      goto L_0883A7FC;
    }
L_0883A7FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1808), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1804), ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0883A820u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883A820u) goto L_0883A820;
    return;
L_0883A820:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883A82Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A82Cu) goto L_0883A82C;
    return;
L_0883A82C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883A838u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem) && ctx.pc == 0x0883A838u) goto L_0883A838;
    return;
L_0883A838:
    ctx.gpr[31] = (0x0883A840u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem) && ctx.pc == 0x0883A840u) goto L_0883A840;
    return;
L_0883A840:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(98));
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1796), ctx.gpr[4]);
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1280));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1312));
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(1392));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    goto L_0883A8A4;
L_0883A8A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[31] = (0x0883A8B0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem) && ctx.pc == 0x0883A8B0u) goto L_0883A8B0;
    return;
L_0883A8B0:
    ctx.gpr[4] = (0u | 2u);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1800)));
        goto L_0883A8C8;
    }
    goto L_0883A8BC;
L_0883A8BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883AA20;
      }
      goto L_0883A8C8;
    }
L_0883A8C8:
    ctx.gpr[31] = (0x0883A8D0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem) && ctx.pc == 0x0883A8D0u) goto L_0883A8D0;
    return;
L_0883A8D0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883A93C;
      }
      goto L_0883A8DC;
    }
L_0883A8DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1796)));
    ctx.gpr[31] = (0x0883A8E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 145u, 0x08830A98u>(ctx, &aot_mem) && ctx.pc == 0x0883A8E8u) goto L_0883A8E8;
    return;
L_0883A8E8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AA20;
      }
      goto L_0883A8F4;
    }
L_0883A8F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1520)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1688)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1672)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883AA20;
      }
      goto L_0883A934;
    }
L_0883A934:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883AA20;
      }
      goto L_0883A93C;
    }
L_0883A93C:
    ctx.gpr[31] = (0x0883A944u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883A944u) goto L_0883A944;
    return;
L_0883A944:
    ctx.gpr[31] = (0x0883A94Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem) && ctx.pc == 0x0883A94Cu) goto L_0883A94C;
    return;
L_0883A94C:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883AA20;
      }
      goto L_0883A958;
    }
L_0883A958:
    ctx.gpr[31] = (0x0883A960u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883A960u) goto L_0883A960;
    return;
L_0883A960:
    ctx.gpr[4] = (0u | 246u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883AA20;
      }
      goto L_0883A96C;
    }
L_0883A96C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883A97Cu);
    ctx.gpr[5] = (32u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem) && ctx.pc == 0x0883A97Cu) goto L_0883A97C;
    return;
L_0883A97C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A99C;
      }
      goto L_0883A984;
    }
L_0883A984:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29876)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29816)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1520)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_0883A9C0;
      }
      goto L_0883A99C;
    }
L_0883A99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883A9A8u);
    ctx.gpr[5] = (16u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem) && ctx.pc == 0x0883A9A8u) goto L_0883A9A8;
    return;
L_0883A9A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29816)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1520)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_0883A9C0;
      }
      goto L_0883A9BC;
    }
L_0883A9BC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29892)));
    goto L_0883A9C0;
L_0883A9C0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1264), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = ctx.fpr[28] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    ctx.gpr[31] = (0x0883A9E8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1268));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem) && ctx.pc == 0x0883A9E8u) goto L_0883A9E8;
    return;
L_0883A9E8:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1688)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1672)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[16] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883AA20;
      }
      goto L_0883AA1C;
    }
L_0883AA1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0883AA20;
L_0883AA20:
    ctx.gpr[31] = (0x0883AA28u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x0883AA28u) goto L_0883AA28;
    return;
L_0883AA28:
    ctx.gpr[31] = (0x0883AA30u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x0883AA30u) goto L_0883AA30;
    return;
L_0883AA30:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0883AA40u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883AA40u) goto L_0883AA40;
    return;
L_0883AA40:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0883AA4Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883AA4Cu) goto L_0883AA4C;
    return;
L_0883AA4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1520)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883AAAC;
      }
      goto L_0883AA64;
    }
L_0883AA64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1844), ctx.gpr[23]);
    ctx.gpr[31] = (0x0883AA70u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883AA70u) goto L_0883AA70;
    return;
L_0883AA70:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    ctx.gpr[31] = (0x0883AA7Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883AA7Cu) goto L_0883AA7C;
    return;
L_0883AA7C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883AA88u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x0883AA88u) goto L_0883AA88;
    return;
L_0883AA88:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0883AA98u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem) && ctx.pc == 0x0883AA98u) goto L_0883AA98;
    return;
L_0883AA98:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883AAA4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883AAA4u) goto L_0883AAA4;
    return;
L_0883AAA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1844)));
      if (branch_taken) {
          goto L_0883AACC;
      }
      goto L_0883AAAC;
    }
L_0883AAAC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0883AAC0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883AAC0u) goto L_0883AAC0;
    return;
L_0883AAC0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883AACCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883AACCu) goto L_0883AACC;
    return;
L_0883AACC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0883A8A4;
      }
      goto L_0883AAE8;
    }
L_0883AAE8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(1392));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[4] = (15235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4718u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0883AB18;
L_0883AB18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1520)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883ABF8;
      }
      goto L_0883AB30;
    }
L_0883AB30:
    ctx.gpr[31] = (0x0883AB38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 173u, 0x08830D24u>(ctx, &aot_mem) && ctx.pc == 0x0883AB38u) goto L_0883AB38;
    return;
L_0883AB38:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[30] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0883AB50;
      }
      goto L_0883AB48;
    }
L_0883AB48:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0883AB54;
      }
      goto L_0883AB50;
    }
L_0883AB50:
    ctx.fpr[20] = ctx.fpr[22] - ctx.fpr[20];
    goto L_0883AB54;
L_0883AB54:
    ctx.gpr[31] = (0x0883AB5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 171u, 0x08830D14u>(ctx, &aot_mem) && ctx.pc == 0x0883AB5Cu) goto L_0883AB5C;
    return;
L_0883AB5C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1520)));
    ctx.gpr[31] = (0x0883AB6Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 139u, 0x08830A58u>(ctx, &aot_mem) && ctx.pc == 0x0883AB6Cu) goto L_0883AB6C;
    return;
L_0883AB6C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883AB90u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 9u, 0x08A68118u>(ctx, &aot_mem) && ctx.pc == 0x0883AB90u) goto L_0883AB90;
    return;
L_0883AB90:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1600), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0883AB9Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883AB9Cu) goto L_0883AB9C;
    return;
L_0883AB9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 34 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883ABF4;
      }
      goto L_0883ABAC;
    }
L_0883ABAC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0883ABF4;
      }
      goto L_0883ABB4;
    }
L_0883ABB4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(18536)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883ABCC:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1580), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1600), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883ABF8;
      }
      goto L_0883ABE4;
    }
L_0883ABE4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1580), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883ABF8;
      }
      goto L_0883ABF4;
    }
L_0883ABF4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1580), 0u);
    goto L_0883ABF8;
L_0883ABF8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0883AB18;
      }
      goto L_0883AC18;
    }
L_0883AC18:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1360));
    goto L_0883AC34;
L_0883AC34:
    ctx.gpr[17] = (ctx.gpr[19] << 4u);
    ctx.gpr[20] = (ctx.gpr[29] + ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(1008));
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(1072));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883AC50u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 158u, 0x08830C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0883AC50u) goto L_0883AC50;
    return;
L_0883AC50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883AC5Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883AC5Cu) goto L_0883AC5C;
    return;
L_0883AC5C:
    ctx.gpr[18] = (ctx.gpr[19] << 2u);
    ctx.gpr[18] = (ctx.gpr[30] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AC90;
      }
      goto L_0883AC70;
    }
L_0883AC70:
    ctx.gpr[6] = (ctx.gpr[30] + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1776));
    ctx.gpr[31] = (0x0883AC80u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 158u, 0x08830C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0883AC80u) goto L_0883AC80;
    return;
L_0883AC80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883AC8Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x0883AC8Cu) goto L_0883AC8C;
    return;
L_0883AC8C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1756), 0u);
    goto L_0883AC90;
L_0883AC90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1520)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_0883ACFC;
      }
      goto L_0883ACA8;
    }
L_0883ACA8:
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1392));
    ctx.gpr[31] = (0x0883ACB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 139u, 0x08830A58u>(ctx, &aot_mem) && ctx.pc == 0x0883ACB8u) goto L_0883ACB8;
    return;
L_0883ACB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883ACFC;
      }
      goto L_0883ACCC;
    }
L_0883ACCC:
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(944));
    ctx.gpr[31] = (0x0883ACD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 139u, 0x08830A58u>(ctx, &aot_mem) && ctx.pc == 0x0883ACD8u) goto L_0883ACD8;
    return;
L_0883ACD8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1376));
    ctx.gpr[31] = (0x0883ACE4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883ACE4u) goto L_0883ACE4;
    return;
L_0883ACE4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883ACF0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 41u, 0x088302CCu>(ctx, &aot_mem) && ctx.pc == 0x0883ACF0u) goto L_0883ACF0;
    return;
L_0883ACF0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883ACFCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883ACFCu) goto L_0883ACFC;
    return;
L_0883ACFC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883AC34;
      }
      goto L_0883AD10;
    }
L_0883AD10:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (16255u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65368u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0883AD20;
L_0883AD20:
    ctx.gpr[16] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883AD6C;
      }
      goto L_0883AD3C;
    }
L_0883AD3C:
    ctx.gpr[31] = (0x0883AD44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 172u, 0x08830D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0883AD44u) goto L_0883AD44;
    return;
L_0883AD44:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(944));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1072));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883AD6Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 21u, 0x08A6828Cu>(ctx, &aot_mem) && ctx.pc == 0x0883AD6Cu) goto L_0883AD6C;
    return;
L_0883AD6C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883AD20;
      }
      goto L_0883AD80;
    }
L_0883AD80:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1392));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1408));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(1776));
    goto L_0883AD9C;
L_0883AD9C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0883ADACu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 158u, 0x08830C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0883ADACu) goto L_0883ADAC;
    return;
L_0883ADAC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883ADB8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883ADB8u) goto L_0883ADB8;
    return;
L_0883ADB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883ADE0;
      }
      goto L_0883ADC4;
    }
L_0883ADC4:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883ADD0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 158u, 0x08830C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0883ADD0u) goto L_0883ADD0;
    return;
L_0883ADD0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883ADDCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x0883ADDCu) goto L_0883ADDC;
    return;
L_0883ADDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1756), 0u);
    goto L_0883ADE0;
L_0883ADE0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0883AD9C;
      }
      goto L_0883ADFC;
    }
L_0883ADFC:
    ctx.gpr[31] = (0x0883AE04u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883AE04u) goto L_0883AE04;
    return;
L_0883AE04:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883AE10u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883AE10u) goto L_0883AE10;
    return;
L_0883AE10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883AE1Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem) && ctx.pc == 0x0883AE1Cu) goto L_0883AE1C;
    return;
L_0883AE1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1884), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1885)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1886), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1885), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1424));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1428));
    ctx.gpr[19] = (0u | 82u);
    ctx.gpr[18] = (0u | 70u);
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[23] = (0u | 2u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0883AE5C;
L_0883AE5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1520)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883AE80;
      }
      goto L_0883AE74;
    }
L_0883AE74:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1552), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0883AEAC;
      }
      goto L_0883AE80;
    }
L_0883AE80:
    ctx.gpr[31] = (0x0883AE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x0883AE88u) goto L_0883AE88;
    return;
L_0883AE88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1552)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1428), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883AEA4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem) && ctx.pc == 0x0883AEA4u) goto L_0883AEA4;
    return;
L_0883AEA4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1552), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0883AEAC;
L_0883AEAC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883AF40;
      }
      goto L_0883AEBC;
    }
L_0883AEBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1884)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1884), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0883AED0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 161u, 0x08830CA4u>(ctx, &aot_mem) && ctx.pc == 0x0883AED0u) goto L_0883AED0;
    return;
L_0883AED0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0883AF00;
      }
      goto L_0883AEDC;
    }
L_0883AEDC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[5] = (0u | 52u);
      if (branch_taken) {
          goto L_0883AF24;
      }
      goto L_0883AEE4;
    }
L_0883AEE4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883AF40;
      }
      goto L_0883AEEC;
    }
L_0883AEEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1885)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1885), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AF40;
      }
      goto L_0883AF00;
    }
L_0883AF00:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[22];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0883AF10;
      }
      goto L_0883AF08;
    }
L_0883AF08:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883AF1C;
      }
      goto L_0883AF10;
    }
L_0883AF10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1885)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1885), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0883AF1C;
L_0883AF1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AF40;
      }
      goto L_0883AF24;
    }
L_0883AF24:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AF34;
      }
      goto L_0883AF2C;
    }
L_0883AF2C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0883AF40;
      }
      goto L_0883AF34;
    }
L_0883AF34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1885)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1885), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0883AF40;
L_0883AF40:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0883AE5C;
      }
      goto L_0883AF50;
    }
L_0883AF50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(604));
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(644));
    ctx.gpr[7] = (ctx.gpr[30] + static_cast<std::uint32_t>(648));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[9] = (ctx.gpr[30] + static_cast<std::uint32_t>(1572));
    ctx.gpr[10] = (ctx.gpr[30] + static_cast<std::uint32_t>(1576));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1814)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1885)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1778)));
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[3]);
    ctx.gpr[11] = (0u < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[11] & 255u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883AF90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 665u, 0x088DBC28u>(ctx, &aot_mem) && ctx.pc == 0x0883AF90u) goto L_0883AF90;
    return;
L_0883AF90:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(216)));
    ctx.fpr[26] = ctx.fpr[0] / ctx.fpr[26];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883AFA4u);
    ctx.gpr[5] = (512u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem) && ctx.pc == 0x0883AFA4u) goto L_0883AFA4;
    return;
L_0883AFA4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1804)));
    ctx.gpr[21] = (0u | 4u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
      if (branch_taken) {
          goto L_0883AFDC;
      }
      goto L_0883AFC8;
    }
L_0883AFC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883AFD4u);
    ctx.gpr[5] = (1024u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem) && ctx.pc == 0x0883AFD4u) goto L_0883AFD4;
    return;
L_0883AFD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AFE0;
      }
      goto L_0883AFDC;
    }
L_0883AFDC:
    ctx.fpr[26] = std::bit_cast<float>(0u);
    goto L_0883AFE0;
L_0883AFE0:
    ctx.gpr[31] = (0x0883AFE8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem) && ctx.pc == 0x0883AFE8u) goto L_0883AFE8;
    return;
L_0883AFE8:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883B014;
      }
      goto L_0883AFFC;
    }
L_0883AFFC:
    ctx.gpr[31] = (0x0883B004u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem) && ctx.pc == 0x0883B004u) goto L_0883B004;
    return;
L_0883B004:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(640)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883B018;
      }
      goto L_0883B014;
    }
L_0883B014:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0883B018;
L_0883B018:
    ctx.gpr[31] = (0x0883B020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x0883B020u) goto L_0883B020;
    return;
L_0883B020:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0883B02Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 167u, 0x08830CF4u>(ctx, &aot_mem) && ctx.pc == 0x0883B02Cu) goto L_0883B02C;
    return;
L_0883B02C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(608)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.gpr[31] = (0x0883B040u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 202u, 0x08830E6Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B040u) goto L_0883B040;
    return;
L_0883B040:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883B04Cu);
    ctx.gpr[5] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 185u, 0x08830DC4u>(ctx, &aot_mem) && ctx.pc == 0x0883B04Cu) goto L_0883B04C;
    return;
L_0883B04C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B07C;
      }
      goto L_0883B054;
    }
L_0883B054:
    ctx.gpr[31] = (0x0883B05Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 188u, 0x08830DE4u>(ctx, &aot_mem) && ctx.pc == 0x0883B05Cu) goto L_0883B05C;
    return;
L_0883B05C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B074;
      }
      goto L_0883B064;
    }
L_0883B064:
    ctx.gpr[31] = (0x0883B06Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883B06Cu) goto L_0883B06C;
    return;
L_0883B06C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0883B07C;
      }
      goto L_0883B074;
    }
L_0883B074:
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0883B07C;
L_0883B07C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0883B088u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883B088u) goto L_0883B088;
    return;
L_0883B088:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
        goto L_0883B0C0;
    }
    goto L_0883B090;
L_0883B090:
    ctx.gpr[31] = (0x0883B098u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883B098u) goto L_0883B098;
    return;
L_0883B098:
    ctx.gpr[4] = (0u | 12u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
        goto L_0883B0C0;
    }
    goto L_0883B0A4;
L_0883B0A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883B0B0u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem) && ctx.pc == 0x0883B0B0u) goto L_0883B0B0;
    return;
L_0883B0B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_0883B0C0;
      }
      goto L_0883B0B8;
    }
L_0883B0B8:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_0883B0C0;
L_0883B0C0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0883B0D0;
      }
      goto L_0883B0C8;
    }
L_0883B0C8:
    ctx.gpr[31] = (0x0883B0D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 168u, 0x08830CFCu>(ctx, &aot_mem) && ctx.pc == 0x0883B0D0u) goto L_0883B0D0;
    return;
L_0883B0D0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B0E0;
      }
      goto L_0883B0D8;
    }
L_0883B0D8:
    ctx.gpr[31] = (0x0883B0E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 168u, 0x08830CFCu>(ctx, &aot_mem) && ctx.pc == 0x0883B0E0u) goto L_0883B0E0;
    return;
L_0883B0E0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B0F0;
      }
      goto L_0883B0E8;
    }
L_0883B0E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
      if (branch_taken) {
          goto L_0883B0FC;
      }
      goto L_0883B0F0;
    }
L_0883B0F0:
    ctx.gpr[31] = (0x0883B0F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 170u, 0x08830D0Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B0F8u) goto L_0883B0F8;
    return;
L_0883B0F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    goto L_0883B0FC;
L_0883B0FC:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B144;
      }
      goto L_0883B108;
    }
L_0883B108:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1844), ctx.gpr[23]);
    ctx.gpr[31] = (0x0883B114u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 193u, 0x08830E14u>(ctx, &aot_mem) && ctx.pc == 0x0883B114u) goto L_0883B114;
    return;
L_0883B114:
    ctx.gpr[31] = (0x0883B11Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1848), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0883B11Cu) goto L_0883B11C;
    return;
L_0883B11C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1848)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1844)));
      if (branch_taken) {
          goto L_0883B144;
      }
      goto L_0883B128;
    }
L_0883B128:
    ctx.gpr[31] = (0x0883B130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0883B130u) goto L_0883B130;
    return;
L_0883B130:
    ctx.gpr[31] = (0x0883B138u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 858u, 0x08833F5Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B138u) goto L_0883B138;
    return;
L_0883B138:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B144;
      }
      goto L_0883B140;
    }
L_0883B140:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0883B144;
L_0883B144:
    ctx.gpr[31] = (0x0883B14Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883B14Cu) goto L_0883B14C;
    return;
L_0883B14C:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
      if (branch_taken) {
          goto L_0883B160;
      }
      goto L_0883B158;
    }
L_0883B158:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B184;
      }
      goto L_0883B160;
    }
L_0883B160:
    ctx.gpr[31] = (0x0883B168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 164u, 0x08830CCCu>(ctx, &aot_mem) && ctx.pc == 0x0883B168u) goto L_0883B168;
    return;
L_0883B168:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1708)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1778)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(216)));
      if (branch_taken) {
          goto L_0883B19C;
      }
      goto L_0883B184;
    }
L_0883B184:
    ctx.gpr[31] = (0x0883B18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 164u, 0x08830CCCu>(ctx, &aot_mem) && ctx.pc == 0x0883B18Cu) goto L_0883B18C;
    return;
L_0883B18C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1778)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(216)));
    goto L_0883B19C;
L_0883B19C:
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    ctx.gpr[5] = (16256u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0883B1C8;
      }
      goto L_0883B1AC;
    }
L_0883B1AC:
    ctx.gpr[31] = (0x0883B1B4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 202u, 0x08830E6Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B1B4u) goto L_0883B1B4;
    return;
L_0883B1B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883B1C0u);
    ctx.gpr[5] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 185u, 0x08830DC4u>(ctx, &aot_mem) && ctx.pc == 0x0883B1C0u) goto L_0883B1C0;
    return;
L_0883B1C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B1D4;
      }
      goto L_0883B1C8;
    }
L_0883B1C8:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_0883B1D4;
L_0883B1D4:
    ctx.gpr[31] = (0x0883B1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0883B1DCu) goto L_0883B1DC;
    return;
L_0883B1DC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1814)));
        goto L_0883B2C4;
    }
    goto L_0883B1E4;
L_0883B1E4:
    ctx.gpr[31] = (0x0883B1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0883B1ECu) goto L_0883B1EC;
    return;
L_0883B1EC:
    if (ctx.gpr[2] != ctx.gpr[30]) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1814)));
        goto L_0883B2C4;
    }
    goto L_0883B1F4;
L_0883B1F4:
    ctx.gpr[31] = (0x0883B1FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0883B1FCu) goto L_0883B1FC;
    return;
L_0883B1FC:
    ctx.gpr[31] = (0x0883B204u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 351u, 0x0898CFB8u>(ctx, &aot_mem) && ctx.pc == 0x0883B204u) goto L_0883B204;
    return;
L_0883B204:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B318;
      }
      goto L_0883B20C;
    }
L_0883B20C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1653))))));
    ctx.gpr[4] = (ctx.gpr[7] & 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0883B274;
      }
      goto L_0883B21C;
    }
L_0883B21C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 7000u);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0883B23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0883B23Cu) goto L_0883B23C;
    return;
L_0883B23C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(668), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29676));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 3000u);
    ctx.gpr[31] = (0x0883B254u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem) && ctx.pc == 0x0883B254u) goto L_0883B254;
    return;
L_0883B254:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 90u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x0883B26Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0883B26Cu) goto L_0883B26C;
    return;
L_0883B26C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B318;
      }
      goto L_0883B274;
    }
L_0883B274:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883B318;
      }
      goto L_0883B280;
    }
L_0883B280:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 5u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29676));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 3000u);
    ctx.gpr[31] = (0x0883B2A4u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem) && ctx.pc == 0x0883B2A4u) goto L_0883B2A4;
    return;
L_0883B2A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 92u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x0883B2BCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0883B2BCu) goto L_0883B2BC;
    return;
L_0883B2BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B318;
      }
      goto L_0883B2C4;
    }
L_0883B2C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1778)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B318;
      }
      goto L_0883B2D4;
    }
L_0883B2D4:
    ctx.gpr[5] = (16281u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[5] = (16307u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1815)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B318;
      }
      goto L_0883B304;
    }
L_0883B304:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_0883B318;
L_0883B318:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29680)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883B4C4;
      }
      goto L_0883B32C;
    }
L_0883B32C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883B4B8;
      }
      goto L_0883B34C;
    }
L_0883B34C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1552)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883B374;
      }
      goto L_0883B360;
    }
L_0883B360:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1556)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883B4B8;
      }
      goto L_0883B374;
    }
L_0883B374:
    ctx.gpr[31] = (0x0883B37Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883B37Cu) goto L_0883B37C;
    return;
L_0883B37C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B4B8;
      }
      goto L_0883B384;
    }
L_0883B384:
    ctx.gpr[31] = (0x0883B38Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883B38Cu) goto L_0883B38C;
    return;
L_0883B38C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883B398u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x0883B398u) goto L_0883B398;
    return;
L_0883B398:
    ctx.gpr[31] = (0x0883B3A0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem) && ctx.pc == 0x0883B3A0u) goto L_0883B3A0;
    return;
L_0883B3A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883B3ACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem) && ctx.pc == 0x0883B3ACu) goto L_0883B3AC;
    return;
L_0883B3AC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1440));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883B3C0u);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 140u, 0x08830A60u>(ctx, &aot_mem) && ctx.pc == 0x0883B3C0u) goto L_0883B3C0;
    return;
L_0883B3C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883B3CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 141u, 0x08830A68u>(ctx, &aot_mem) && ctx.pc == 0x0883B3CCu) goto L_0883B3CC;
    return;
L_0883B3CC:
    ctx.gpr[31] = (0x0883B3D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 231u, 0x08A91E18u>(ctx, &aot_mem) && ctx.pc == 0x0883B3D4u) goto L_0883B3D4;
    return;
L_0883B3D4:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29680)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[31] = (0x0883B400u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 77u, 0x088305BCu>(ctx, &aot_mem) && ctx.pc == 0x0883B400u) goto L_0883B400;
    return;
L_0883B400:
    ctx.gpr[31] = (0x0883B408u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 69u, 0x088304E0u>(ctx, &aot_mem) && ctx.pc == 0x0883B408u) goto L_0883B408;
    return;
L_0883B408:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0883B414u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 169u, 0x08830D04u>(ctx, &aot_mem) && ctx.pc == 0x0883B414u) goto L_0883B414;
    return;
L_0883B414:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15692u << 16u);
      if (branch_taken) {
          goto L_0883B464;
      }
      goto L_0883B44C;
    }
L_0883B44C:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883B49C;
      }
      goto L_0883B464;
    }
L_0883B464:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (48460u << 16u);
      if (branch_taken) {
          goto L_0883B48C;
      }
      goto L_0883B474;
    }
L_0883B474:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883B49C;
      }
      goto L_0883B48C;
    }
L_0883B48C:
    ctx.gpr[31] = (0x0883B494u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 188u, 0x08830DE4u>(ctx, &aot_mem) && ctx.pc == 0x0883B494u) goto L_0883B494;
    return;
L_0883B494:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B4A0;
      }
      goto L_0883B49C;
    }
L_0883B49C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_0883B4A0;
L_0883B4A0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x0883B4ACu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 77u, 0x088305BCu>(ctx, &aot_mem) && ctx.pc == 0x0883B4ACu) goto L_0883B4AC;
    return;
L_0883B4AC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_0883B4C0;
      }
      goto L_0883B4B8;
    }
L_0883B4B8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_0883B4C0;
L_0883B4C0:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0883B4C4;
L_0883B4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883B4D0u);
    ctx.gpr[5] = (8192u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem) && ctx.pc == 0x0883B4D0u) goto L_0883B4D0;
    return;
L_0883B4D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
      if (branch_taken) {
          goto L_0883B52C;
      }
      goto L_0883B4DC;
    }
L_0883B4DC:
    ctx.gpr[31] = (0x0883B4E4u);
    ctx.gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem) && ctx.pc == 0x0883B4E4u) goto L_0883B4E4;
    return;
L_0883B4E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B4FC;
      }
      goto L_0883B4EC;
    }
L_0883B4EC:
    ctx.gpr[4] = (50297u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0883B500;
      }
      goto L_0883B4FC;
    }
L_0883B4FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    goto L_0883B500;
L_0883B500:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x0883B528u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 452u, 0x0884A620u>(ctx, &aot_mem) && ctx.pc == 0x0883B528u) goto L_0883B528;
    return;
L_0883B528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    goto L_0883B52C;
L_0883B52C:
    ctx.gpr[31] = (0x0883B534u);
    ctx.gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem) && ctx.pc == 0x0883B534u) goto L_0883B534;
    return;
L_0883B534:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B548;
      }
      goto L_0883B53C;
    }
L_0883B53C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0883B554;
      }
      goto L_0883B548;
    }
L_0883B548:
    ctx.gpr[4] = (50297u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0883B554;
L_0883B554:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x0883B57Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 452u, 0x0884A620u>(ctx, &aot_mem) && ctx.pc == 0x0883B57Cu) goto L_0883B57C;
    return;
L_0883B57C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B5D4;
      }
      goto L_0883B584;
    }
L_0883B584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883B590u);
    ctx.gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem) && ctx.pc == 0x0883B590u) goto L_0883B590;
    return;
L_0883B590:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B5A8;
      }
      goto L_0883B598;
    }
L_0883B598:
    ctx.gpr[4] = (50297u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0883B5AC;
      }
      goto L_0883B5A8;
    }
L_0883B5A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    goto L_0883B5AC;
L_0883B5AC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x0883B5D4u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 452u, 0x0884A620u>(ctx, &aot_mem) && ctx.pc == 0x0883B5D4u) goto L_0883B5D4;
    return;
L_0883B5D4:
    ctx.gpr[31] = (0x0883B5DCu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem) && ctx.pc == 0x0883B5DCu) goto L_0883B5DC;
    return;
L_0883B5DC:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-994));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1808)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    goto L_0883B600;
L_0883B600:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1520)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883B62C;
      }
      goto L_0883B620;
    }
L_0883B620:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1672)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_0883B62C;
L_0883B62C:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_0883B64C;
      }
      goto L_0883B634;
    }
L_0883B634:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B64C;
      }
      goto L_0883B644;
    }
L_0883B644:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1620), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883B660;
      }
      goto L_0883B64C;
    }
L_0883B64C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1620)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1620), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0883B660;
L_0883B660:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0883B600;
      }
      goto L_0883B674;
    }
L_0883B674:
    ctx.gpr[31] = (0x0883B67Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883B67Cu) goto L_0883B67C;
    return;
L_0883B67C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B810;
      }
      goto L_0883B684;
    }
L_0883B684:
    ctx.gpr[31] = (0x0883B68Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 238u, 0x08B00E18u>(ctx, &aot_mem) && ctx.pc == 0x0883B68Cu) goto L_0883B68C;
    return;
L_0883B68C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B7B4;
      }
      goto L_0883B694;
    }
L_0883B694:
    ctx.gpr[7] = (2238u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6640));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(166)));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_0883B744;
      }
      goto L_0883B6B0;
    }
L_0883B6B0:
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_0883B6D0;
    }
    goto L_0883B6B8;
L_0883B6B8:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(158)));
      if (branch_taken) {
          goto L_0883B6D8;
      }
      goto L_0883B6D0;
    }
L_0883B6D0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(158)));
    goto L_0883B6D8;
L_0883B6D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883B73C;
      }
      goto L_0883B6E0;
    }
L_0883B6E0:
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_0883B700;
    }
    goto L_0883B6E8;
L_0883B6E8:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(158)));
      if (branch_taken) {
          goto L_0883B708;
      }
      goto L_0883B700;
    }
L_0883B700:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(158)));
    goto L_0883B708;
L_0883B708:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B73C;
      }
      goto L_0883B710;
    }
L_0883B710:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(700), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[5] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
      if (branch_taken) {
          goto L_0883B730;
      }
      goto L_0883B724;
    }
L_0883B724:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0883B828;
      }
      goto L_0883B730;
    }
L_0883B730:
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0883B828;
      }
      goto L_0883B73C;
    }
L_0883B73C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(700), 0u);
      if (branch_taken) {
          goto L_0883B828;
      }
      goto L_0883B744;
    }
L_0883B744:
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_0883B764;
    }
    goto L_0883B74C;
L_0883B74C:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(158)));
      if (branch_taken) {
          goto L_0883B76C;
      }
      goto L_0883B764;
    }
L_0883B764:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(158)));
    goto L_0883B76C;
L_0883B76C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883B7AC;
      }
      goto L_0883B774;
    }
L_0883B774:
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_0883B794;
    }
    goto L_0883B77C;
L_0883B77C:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(158)));
      if (branch_taken) {
          goto L_0883B79C;
      }
      goto L_0883B794;
    }
L_0883B794:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(158)));
    goto L_0883B79C;
L_0883B79C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B7AC;
      }
      goto L_0883B7A4;
    }
L_0883B7A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(700), ctx.gpr[20]);
      if (branch_taken) {
          goto L_0883B828;
      }
      goto L_0883B7AC;
    }
L_0883B7AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(700), 0u);
      if (branch_taken) {
          goto L_0883B828;
      }
      goto L_0883B7B4;
    }
L_0883B7B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-994));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883B828;
      }
      goto L_0883B7C4;
    }
L_0883B7C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1778)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B828;
      }
      goto L_0883B7D0;
    }
L_0883B7D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1816)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B828;
      }
      goto L_0883B7DC;
    }
L_0883B7DC:
    ctx.gpr[31] = (0x0883B7E4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 196u, 0x08830E2Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B7E4u) goto L_0883B7E4;
    return;
L_0883B7E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B828;
      }
      goto L_0883B7EC;
    }
L_0883B7EC:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[31] = (0x0883B7F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6640));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 319u, 0x0898CE74u>(ctx, &aot_mem) && ctx.pc == 0x0883B7F8u) goto L_0883B7F8;
    return;
L_0883B7F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B808;
      }
      goto L_0883B800;
    }
L_0883B800:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(700), ctx.gpr[20]);
      if (branch_taken) {
          goto L_0883B828;
      }
      goto L_0883B808;
    }
L_0883B808:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(700), 0u);
      if (branch_taken) {
          goto L_0883B828;
      }
      goto L_0883B810;
    }
L_0883B810:
    ctx.gpr[31] = (0x0883B818u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 196u, 0x08830E2Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B818u) goto L_0883B818;
    return;
L_0883B818:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B828;
      }
      goto L_0883B820;
    }
L_0883B820:
    ctx.gpr[31] = (0x0883B828u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 207u, 0x08830EC8u>(ctx, &aot_mem) && ctx.pc == 0x0883B828u) goto L_0883B828;
    return;
L_0883B828:
    ctx.gpr[31] = (0x0883B830u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883B830u) goto L_0883B830;
    return;
L_0883B830:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883B854;
      }
      goto L_0883B83C;
    }
L_0883B83C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(432));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0883B854u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883B854u) goto L_0883B854;
    return;
L_0883B854:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1800)));
    goto L_0883B858;
L_0883B858:
    ctx.gpr[31] = (0x0883B860u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 387u, 0x08B0D970u>(ctx, &aot_mem) && ctx.pc == 0x0883B860u) goto L_0883B860;
    return;
L_0883B860:
    ctx.gpr[16] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x0883B86Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 195u, 0x08830E24u>(ctx, &aot_mem) && ctx.pc == 0x0883B86Cu) goto L_0883B86C;
    return;
L_0883B86C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0883B8B8;
      }
      goto L_0883B874;
    }
L_0883B874:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[31] = (0x0883B880u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 63u, 0x08A1C6C0u>(ctx, &aot_mem) && ctx.pc == 0x0883B880u) goto L_0883B880;
    return;
L_0883B880:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B8B8;
      }
      goto L_0883B888;
    }
L_0883B888:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1472));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0883B8A4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883B8A4u) goto L_0883B8A4;
    return;
L_0883B8A4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883B8B0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883B8B0u) goto L_0883B8B0;
    return;
L_0883B8B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B938;
      }
      goto L_0883B8B8;
    }
L_0883B8B8:
    ctx.gpr[31] = (0x0883B8C0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883B8C0u) goto L_0883B8C0;
    return;
L_0883B8C0:
    ctx.gpr[4] = (0u | 222u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1792)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.fpr[24] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0883B910;
      }
      goto L_0883B8D0;
    }
L_0883B8D0:
    ctx.gpr[31] = (0x0883B8D8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 63u, 0x08A1C6C0u>(ctx, &aot_mem) && ctx.pc == 0x0883B8D8u) goto L_0883B8D8;
    return;
L_0883B8D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B910;
      }
      goto L_0883B8E0;
    }
L_0883B8E0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1488));
    ctx.gpr[5] = (16428u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0883B8FCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883B8FCu) goto L_0883B8FC;
    return;
L_0883B8FC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883B908u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883B908u) goto L_0883B908;
    return;
L_0883B908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B938;
      }
      goto L_0883B910;
    }
L_0883B910:
    ctx.gpr[31] = (0x0883B918u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883B918u) goto L_0883B918;
    return;
L_0883B918:
    ctx.gpr[31] = (0x0883B920u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem) && ctx.pc == 0x0883B920u) goto L_0883B920;
    return;
L_0883B920:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883B92Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 184u, 0x08830DB4u>(ctx, &aot_mem) && ctx.pc == 0x0883B92Cu) goto L_0883B92C;
    return;
L_0883B92C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883B938u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883B938u) goto L_0883B938;
    return;
L_0883B938:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883B944u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 382u, 0x08B0D940u>(ctx, &aot_mem) && ctx.pc == 0x0883B944u) goto L_0883B944;
    return;
L_0883B944:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_0883B970;
    }
    goto L_0883B954;
L_0883B954:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0883B984;
      }
      goto L_0883B95C;
    }
L_0883B95C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29840));
    ctx.gpr[31] = (0x0883B968u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0883B968u) goto L_0883B968;
    return;
L_0883B968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B984;
      }
      goto L_0883B970;
    }
L_0883B970:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B984;
      }
      goto L_0883B978;
    }
L_0883B978:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29856));
    ctx.gpr[31] = (0x0883B984u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0883B984u) goto L_0883B984;
    return;
L_0883B984:
    ctx.gpr[31] = (0x0883B98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0883B98Cu) goto L_0883B98C;
    return;
L_0883B98C:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883BA94;
      }
      goto L_0883B994;
    }
L_0883B994:
    ctx.gpr[31] = (0x0883B99Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 63u, 0x08A1C6C0u>(ctx, &aot_mem) && ctx.pc == 0x0883B99Cu) goto L_0883B99C;
    return;
L_0883B99C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BA94;
      }
      goto L_0883B9A4;
    }
L_0883B9A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(636)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0883BAD4;
      }
      goto L_0883B9C0;
    }
L_0883B9C0:
    ctx.gpr[31] = (0x0883B9C8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883B9C8u) goto L_0883B9C8;
    return;
L_0883B9C8:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0883BAD4;
      }
      goto L_0883B9D4;
    }
L_0883B9D4:
    ctx.gpr[31] = (0x0883B9DCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883B9DCu) goto L_0883B9DC;
    return;
L_0883B9DC:
    ctx.gpr[4] = (0u | 194u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883BA1C;
      }
      goto L_0883B9E8;
    }
L_0883B9E8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1504));
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (48716u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0883BA08u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883BA08u) goto L_0883BA08;
    return;
L_0883BA08:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883BA14u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0883BA14u) goto L_0883BA14;
    return;
L_0883BA14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0883BAD4;
      }
      goto L_0883BA1C;
    }
L_0883BA1C:
    ctx.gpr[31] = (0x0883BA24u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883BA24u) goto L_0883BA24;
    return;
L_0883BA24:
    ctx.gpr[4] = (0u | 198u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883BA5C;
      }
      goto L_0883BA30;
    }
L_0883BA30:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1520));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0883BA48u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883BA48u) goto L_0883BA48;
    return;
L_0883BA48:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883BA54u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0883BA54u) goto L_0883BA54;
    return;
L_0883BA54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0883BAD4;
      }
      goto L_0883BA5C;
    }
L_0883BA5C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    ctx.gpr[5] = (16281u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (48972u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0883BA80u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883BA80u) goto L_0883BA80;
    return;
L_0883BA80:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883BA8Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0883BA8Cu) goto L_0883BA8C;
    return;
L_0883BA8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0883BAD4;
      }
      goto L_0883BA94;
    }
L_0883BA94:
    ctx.gpr[31] = (0x0883BA9Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883BA9Cu) goto L_0883BA9C;
    return;
L_0883BA9C:
    ctx.gpr[4] = (0u | 198u);
    ctx.gpr[5] = (17274u << 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0883BAD0;
      }
      goto L_0883BAAC;
    }
L_0883BAAC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1552));
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0883BAC4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883BAC4u) goto L_0883BAC4;
    return;
L_0883BAC4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883BAD0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0883BAD0u) goto L_0883BAD0;
    return;
L_0883BAD0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_0883BAD4;
L_0883BAD4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883BAE4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883BAE4u) goto L_0883BAE4;
    return;
L_0883BAE4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883BAF0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883BAF0u) goto L_0883BAF0;
    return;
L_0883BAF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(636)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883BD10;
      }
      goto L_0883BB1C;
    }
L_0883BB1C:
    ctx.gpr[31] = (0x0883BB24u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883BB24u) goto L_0883BB24;
    return;
L_0883BB24:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_0883BD10;
      }
      goto L_0883BB30;
    }
L_0883BB30:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883BB48u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem) && ctx.pc == 0x0883BB48u) goto L_0883BB48;
    return;
L_0883BB48:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1600), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1604), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (15436u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x0883BB74u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem) && ctx.pc == 0x0883BB74u) goto L_0883BB74;
    return;
L_0883BB74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1600));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 27u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883BBACu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883BBACu) goto L_0883BBAC;
    return;
L_0883BBAC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1616));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0883BBBCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem) && ctx.pc == 0x0883BBBCu) goto L_0883BBBC;
    return;
L_0883BBBC:
    ctx.gpr[4] = (48928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (16160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883BBE0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem) && ctx.pc == 0x0883BBE0u) goto L_0883BBE0;
    return;
L_0883BBE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1616)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883BBF8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem) && ctx.pc == 0x0883BBF8u) goto L_0883BBF8;
    return;
L_0883BBF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1620)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1620), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x0883BC18u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem) && ctx.pc == 0x0883BC18u) goto L_0883BC18;
    return;
L_0883BC18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1624)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1568));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0883BC3Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883BC3Cu) goto L_0883BC3C;
    return;
L_0883BC3C:
    ctx.gpr[4] = (0u | 57u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883BC64u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883BC64u) goto L_0883BC64;
    return;
L_0883BC64:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0883BC78u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883BC78u) goto L_0883BC78;
    return;
L_0883BC78:
    ctx.gpr[4] = (0u | 56u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883BCA4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883BCA4u) goto L_0883BCA4;
    return;
L_0883BCA4:
    ctx.gpr[31] = (0x0883BCACu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1752)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 121u, 0x08830898u>(ctx, &aot_mem) && ctx.pc == 0x0883BCACu) goto L_0883BCAC;
    return;
L_0883BCAC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0883BCC4;
      }
      goto L_0883BCB8;
    }
L_0883BCB8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0883BCC4;
L_0883BCC4:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1752), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883BD08;
      }
      goto L_0883BCE8;
    }
L_0883BCE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1840)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0883BD08u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883BD08u) goto L_0883BD08;
    return;
L_0883BD08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BD14;
      }
      goto L_0883BD10;
    }
L_0883BD10:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1752), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_0883BD14;
L_0883BD14:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 226 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1804), ctx.gpr[18]);
        goto L_0883BD48;
    }
    goto L_0883BD20;
L_0883BD20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(636)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1804), ctx.gpr[18]);
        goto L_0883BD48;
    }
    goto L_0883BD34;
L_0883BD34:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1804), ctx.gpr[18]);
    goto L_0883BD48;
L_0883BD48:
    ctx.gpr[31] = (0x0883BD50u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 947u, 0x08AFFEFCu>(ctx, &aot_mem) && ctx.pc == 0x0883BD50u) goto L_0883BD50;
    return;
L_0883BD50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[26] = std::bit_cast<float>(0u);
        goto L_0883BDB4;
    }
    goto L_0883BD60;
L_0883BD60:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1804), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[5] = (0u | 5u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.fpr[26] = std::bit_cast<float>(0u);
        goto L_0883BDB4;
    }
    goto L_0883BD78;
L_0883BD78:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1804), ctx.gpr[18]);
    ctx.gpr[31] = (0x0883BD84u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 238u, 0x08B00E18u>(ctx, &aot_mem) && ctx.pc == 0x0883BD84u) goto L_0883BD84;
    return;
L_0883BD84:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[26] = std::bit_cast<float>(0u);
        goto L_0883BDB4;
    }
    goto L_0883BD8C;
L_0883BD8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1804), ctx.gpr[18]);
    ctx.gpr[31] = (0x0883BD98u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883BD98u) goto L_0883BD98;
    return;
L_0883BD98:
    ctx.gpr[4] = (0u | 244u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.fpr[26] = std::bit_cast<float>(0u);
        goto L_0883BDB4;
    }
    goto L_0883BDA4;
L_0883BDA4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1804), ctx.gpr[18]);
    ctx.gpr[31] = (0x0883BDB0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 149u, 0x08B1096Cu>(ctx, &aot_mem) && ctx.pc == 0x0883BDB0u) goto L_0883BDB0;
    return;
L_0883BDB0:
    ctx.fpr[26] = std::bit_cast<float>(0u);
    goto L_0883BDB4;
L_0883BDB4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0883BDC0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883BDC0u) goto L_0883BDC0;
    return;
L_0883BDC0:
    ctx.gpr[31] = (0x0883BDC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 83u, 0x08830650u>(ctx, &aot_mem) && ctx.pc == 0x0883BDC8u) goto L_0883BDC8;
    return;
L_0883BDC8:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 25u);
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(1392));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (0u | 2u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1804)));
    goto L_0883BDF0;
L_0883BDF0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1536)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1520)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883BEA4;
      }
      goto L_0883BE18;
    }
L_0883BE18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1813)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15651u << 16u);
      if (branch_taken) {
          goto L_0883BEA4;
      }
      goto L_0883BE24;
    }
L_0883BE24:
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883BEA4;
      }
      goto L_0883BE3C;
    }
L_0883BE3C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0883BE48u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem) && ctx.pc == 0x0883BE48u) goto L_0883BE48;
    return;
L_0883BE48:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_0883BE74;
      }
      goto L_0883BE50;
    }
L_0883BE50:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[31] = (0x0883BE6Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0883BE6Cu) goto L_0883BE6C;
    return;
L_0883BE6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BE90;
      }
      goto L_0883BE74;
    }
L_0883BE74:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 13u);
    ctx.gpr[31] = (0x0883BE90u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0883BE90u) goto L_0883BE90;
    return;
L_0883BE90:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883BEA4;
      }
      goto L_0883BEA0;
    }
L_0883BEA0:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0883BEA4;
L_0883BEA4:
    ctx.gpr[31] = (0x0883BEACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883BEACu) goto L_0883BEAC;
    return;
L_0883BEAC:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883BEE8;
      }
      goto L_0883BEC4;
    }
L_0883BEC4:
    ctx.gpr[31] = (0x0883BECCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883BECCu) goto L_0883BECC;
    return;
L_0883BECC:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883BEE8;
      }
      goto L_0883BED8;
    }
L_0883BED8:
    ctx.gpr[31] = (0x0883BEE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883BEE0u) goto L_0883BEE0;
    return;
L_0883BEE0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0883BF0C;
      }
      goto L_0883BEE8;
    }
L_0883BEE8:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1552)));
      if (branch_taken) {
          goto L_0883BF78;
      }
      goto L_0883BEF8;
    }
L_0883BEF8:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BF78;
      }
      goto L_0883BF0C;
    }
L_0883BF0C:
    ctx.gpr[31] = (0x0883BF14u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883BF14u) goto L_0883BF14;
    return;
L_0883BF14:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883BF44;
      }
      goto L_0883BF20;
    }
L_0883BF20:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1552)));
      if (branch_taken) {
          goto L_0883BF78;
      }
      goto L_0883BF3C;
    }
L_0883BF3C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0883BF78;
      }
      goto L_0883BF44;
    }
L_0883BF44:
    ctx.gpr[31] = (0x0883BF4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883BF4Cu) goto L_0883BF4C;
    return;
L_0883BF4C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1552)));
      if (branch_taken) {
          goto L_0883BF78;
      }
      goto L_0883BF54;
    }
L_0883BF54:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_0883BF78;
      }
      goto L_0883BF70;
    }
L_0883BF70:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0883BF78;
L_0883BF78:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 3u, 0x0883C01Cu>(ctx, &aot_mem); return;
      }
      goto L_0883BF8C;
    }
L_0883BF8C:
    ctx.gpr[31] = (0x0883BF94u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 191u, 0x08830E04u>(ctx, &aot_mem) && ctx.pc == 0x0883BF94u) goto L_0883BF94;
    return;
L_0883BF94:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883BFCC;
      }
      goto L_0883BFAC;
    }
L_0883BFAC:
    ctx.gpr[31] = (0x0883BFB4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 191u, 0x08830E04u>(ctx, &aot_mem) && ctx.pc == 0x0883BFB4u) goto L_0883BFB4;
    return;
L_0883BFB4:
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 3u, 0x0883C01Cu>(ctx, &aot_mem); return;
      }
      goto L_0883BFCC;
    }
L_0883BFCC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BFDC;
      }
      goto L_0883BFD4;
    }
L_0883BFD4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0883BFEC;
      }
      goto L_0883BFDC;
    }
L_0883BFDC:
    ctx.gpr[31] = (0x0883BFE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 162u, 0x08830CACu>(ctx, &aot_mem) && ctx.pc == 0x0883BFE4u) goto L_0883BFE4;
    return;
L_0883BFE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 2u, 0x0883C00Cu>(ctx, &aot_mem); return;
      }
      goto L_0883BFEC;
    }
L_0883BFEC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[20];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0883BFFC;
      }
      goto L_0883BFF4;
    }
L_0883BFF4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 3u, 0x0883C01Cu>(ctx, &aot_mem); return;
      }
      goto L_0883BFFC;
    }
L_0883BFFC:
    ctx.gpr[31] = (0x0883C004u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    (void)rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 163u, 0x08830CBCu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0013(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0013_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_13(Runtime &runtime) {
    runtime.register_generated_unit(13u, 0x08838000u, 16384u, &recomp_unit_0013, &recomp_unit_0013_entry);
    runtime.register_function(0x08838000u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883800Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838014u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883801Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883802Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838038u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838044u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838054u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838064u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883806Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838084u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883808Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838094u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883809Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838104u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883810Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838114u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883811Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838128u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838130u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883813Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838144u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838150u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838158u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838164u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883816Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838178u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838180u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883818Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838194u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838204u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883820Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838214u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883822Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838230u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838240u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838248u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838250u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838258u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838260u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838268u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838270u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838278u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838284u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883828Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838294u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883829Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838304u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883830Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838314u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838328u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838334u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883833Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838348u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838350u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838358u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838360u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883836Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838378u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838380u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838388u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883838Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838394u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883839Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838400u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838410u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883843Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838448u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838450u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838458u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838464u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883846Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838478u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838484u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838504u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838514u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883851Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838528u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883854Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838554u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838560u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838568u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838574u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883857Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838588u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838590u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883859Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088385ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088385B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088385C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088385ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838600u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838614u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838624u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838660u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883866Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838678u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838684u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883868Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838698u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838714u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838728u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838730u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838738u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838740u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883874Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838758u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838760u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883876Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838774u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883877Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838784u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838794u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838798u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088387A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088387B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088387CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088387D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088387FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838800u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838808u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883880Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838814u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883881Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838824u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883882Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838834u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838844u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883884Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838854u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838864u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883886Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838874u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838884u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883888Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838894u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883890Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838914u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838940u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883894Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838954u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838960u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838968u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A0Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A14u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A30u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A60u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A7Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A84u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A8Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838AA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838AACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838AB8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838AC8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838AD0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838AF4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B18u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B2Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B60u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B7Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BB8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BCCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BD4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BF8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C60u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C74u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C7Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CA8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CB0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CC8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CCCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CF0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D60u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DA8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DB0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DBCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DD0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DF0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DF8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E14u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E30u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E64u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E6Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838EA8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838EB8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838EC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838ED0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838EE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838EE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838EF0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838EF8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F14u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F6Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838FA8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838FB0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838FBCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838FC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838FE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838FF0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839000u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839010u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839018u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839028u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839038u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839050u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839058u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839060u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839068u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883906Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839080u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839088u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839090u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839098u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883909Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088390B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088390B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088390C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088390C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088390CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088390E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088390E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088390F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088390F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839100u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883910Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839114u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839120u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839130u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839140u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883914Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839158u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839164u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839174u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839184u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883918Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088391B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088391C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088391DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088391ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088391F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839224u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839238u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883924Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839254u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883925Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883926Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839278u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839280u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839288u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839298u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839300u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839308u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839310u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839318u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839320u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839330u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839338u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839340u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839350u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839358u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839360u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839370u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839378u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839380u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883938Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839390u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839400u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883940Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883942Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839444u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883944Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839458u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839474u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839504u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839510u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839520u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883952Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839544u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883954Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839554u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883955Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839560u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839574u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883957Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839584u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883958Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839590u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839600u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839608u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839614u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883961Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839628u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839648u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839650u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839680u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839690u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883969Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088396A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088396ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088396C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088396D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088396E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088396F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088396F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839700u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883971Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839730u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839738u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839744u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839750u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883975Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839768u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839770u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839778u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883977Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839788u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839794u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088397A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088397B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088397BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088397C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088397CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088397E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088397F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088397F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839800u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839808u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839810u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839818u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839820u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839830u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839838u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839840u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839850u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839858u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839860u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839870u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839878u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839880u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883988Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839890u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839900u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883990Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839914u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839920u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839924u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883992Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839940u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883994Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839958u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839964u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883996Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839978u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883997Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839984u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839994u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A0Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A18u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A60u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A74u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A7Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839AACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839AB0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839AB8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839AC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839AECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B34u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B6Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B7Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B9Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BB4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BBCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BD4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BDCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BE4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BFCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C04u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C14u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C2Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C34u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C4Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C94u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839CA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839CA8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839CB0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839CC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839CC8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839CE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839CF4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D14u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D4Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839DA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839DACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839DECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839DF4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E34u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E4Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E6Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E74u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E7Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E84u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E8Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839EA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839EA8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839EBCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839EC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839ECCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839ED4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839EDCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839EECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F04u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F0Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F14u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F7Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F8Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839FACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839FC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839FD8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839FE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A018u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A020u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A02Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A038u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A048u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A058u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A06Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A07Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A0ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A0B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A0C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A0D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A0E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A0F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A0F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A108u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A130u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A138u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A144u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A150u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A160u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A170u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A178u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A188u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A1B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A1B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A1C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A1D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A1E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A1F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A1F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A208u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A214u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A224u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A24Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A254u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A260u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A26Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A27Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A28Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A294u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A304u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A314u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A324u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A32Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A33Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A344u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A354u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A37Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A384u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A390u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A39Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A414u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A43Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A44Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A458u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A474u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A484u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A48Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A49Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A508u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A510u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A51Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A520u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A528u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A530u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A538u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A540u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A544u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A550u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A560u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A564u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A56Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A578u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A584u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A590u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A59Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A5A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A5B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A5E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A604u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A610u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A628u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A634u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A640u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A650u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A660u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A66Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A678u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A684u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A690u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A69Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A6D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A6ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A6F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A6F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A700u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A70Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A718u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A730u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A748u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A750u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A758u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A764u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A770u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A77Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A784u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A78Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A794u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A7A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A7B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A7C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A7FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A820u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A82Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A838u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A840u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A934u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A93Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A944u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A94Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A958u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A960u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A96Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A97Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A984u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A99Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A9A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A9BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A9C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A9E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA30u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA4Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA64u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA7Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AAA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AAACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AAC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AACCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AAE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB18u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB30u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB6Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB9Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABB4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABCCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABE4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABF4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABF8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC18u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC34u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC8Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACA8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACB8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACCCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACD8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACE4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACF0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACFCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD6Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD9Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADB8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADD0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADDCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADFCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AE04u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AE10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AE1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AE5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AE74u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AE80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AE88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AEA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AEACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AEBCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AED0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AEDCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AEE4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AEECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF2Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF34u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFC8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFD4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFDCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFFCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B004u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B014u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B018u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B020u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B02Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B040u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B04Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B054u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B05Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B064u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B06Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B074u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B07Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B088u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B090u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B098u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B108u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B114u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B11Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B128u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B130u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B138u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B140u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B144u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B14Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B158u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B160u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B168u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B184u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B18Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B19Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B204u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B20Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B21Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B23Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B254u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B26Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B274u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B280u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B2A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B2BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B2C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B2D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B304u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B318u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B32Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B34Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B360u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B374u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B37Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B384u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B38Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B398u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B3A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B3ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B3C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B3CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B3D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B400u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B408u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B414u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B44Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B464u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B474u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B48Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B494u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B49Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B4A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B4ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B4B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B4C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B4C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B4D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B4DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B4E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B4ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B4FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B500u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B528u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B52Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B534u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B53Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B548u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B554u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B57Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B584u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B590u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B598u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B5A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B5ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B5D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B5DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B600u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B620u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B62Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B634u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B644u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B64Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B660u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B674u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B67Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B684u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B68Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B694u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B6B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B6B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B6D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B6D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B6E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B6E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B700u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B708u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B710u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B724u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B730u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B73Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B744u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B74Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B764u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B76Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B774u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B77Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B794u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B79Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B800u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B808u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B810u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B818u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B820u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B828u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B830u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B83Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B854u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B858u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B860u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B86Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B874u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B880u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B888u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B908u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B910u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B918u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B920u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B92Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B938u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B944u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B954u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B95Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B968u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B970u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B978u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B984u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B98Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B994u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B99Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA14u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA30u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA8Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA94u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA9Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BAACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BAC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BAD0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BAD4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BAE4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BAF0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB30u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB74u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BBACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BBBCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BBE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BBF8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC18u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC64u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BCA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BCACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BCB8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BCC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BCE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD14u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD34u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD60u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD84u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD8Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BDA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BDB0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BDB4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BDC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BDC8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BDF0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE18u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE6Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE74u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BEA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BEA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BEACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BEC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BECCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BED8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BEE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BEE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BEF8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF0Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF14u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF4Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF8Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF94u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFB4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFCCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFD4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFDCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFE4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFF4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFFCu, &recomp_unit_0013, "recomp_unit_0013");
}
} // namespace psprecomp
