#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0178[4094] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0,
    11, 0, 12, 0, 13, 0, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0,
    0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 29, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0,
    0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0,
    0, 0, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 55, 0,
    56, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 0, 64, 0, 0, 65, 0, 66, 0, 67,
    0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 75, 0, 76, 0, 0, 77, 0, 0, 78, 0,
    79, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0, 90,
    0, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 96, 0, 97, 0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 101, 0,
    102, 0, 0, 103, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0,
    0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 0, 0, 0, 0, 120, 0,
    121, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0,
    0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 144, 0, 145, 0, 0, 146, 0,
    147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 156,
    0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0,
    164, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 0,
    176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 182,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0,
    0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 0,
    0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 208, 0,
    209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0,
    218, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 235,
    0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 244, 245, 0, 0, 0, 0, 0, 0,
    246, 0, 247, 0, 0, 248, 0, 249, 0, 250, 0, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0,
    258, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 271,
    0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 280, 0, 281, 0, 282, 0, 0, 283, 0, 284,
    0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 0, 0, 294, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0,
    298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 0, 304, 0, 305, 0, 306, 0, 307, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 0, 311,
    0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 0, 316, 0, 317, 0, 318, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0,
    0, 321, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 329,
    0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 333, 0, 0, 334, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 339, 0, 340,
    0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    352, 0, 0, 353, 0, 354, 0, 355, 0, 0, 356, 0, 357, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 362, 0, 0, 363, 0, 364, 0, 0, 365, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 369, 0, 370, 0, 371, 0, 0,
    372, 0, 373, 0, 374, 0, 375, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 380, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0,
    383, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 387, 0, 388, 0, 389, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0,
    395, 0, 0, 0, 396, 0, 0, 397, 0, 398, 0, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 402, 0, 403, 404, 0, 0, 405, 0, 406, 0, 0,
    407, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 0, 413, 0, 414, 0, 415, 0, 416, 0, 0, 0,
    0, 0, 417, 0, 418, 0, 419, 0, 420, 0, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 424, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0, 428,
    0, 429, 0, 430, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0,
    0, 445, 0, 446, 0, 0, 447, 0, 448, 0, 449, 0, 450, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 0, 0,
    458, 0, 459, 0, 460, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 0, 468, 0, 0, 469, 0, 470,
    0, 0, 0, 471, 0, 0, 472, 0, 473, 0, 0, 474, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 480, 0,
    481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0,
    0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 0, 496, 0, 497, 0, 498, 0, 499,
    0, 500, 0, 501, 0, 502, 0, 503, 0, 0, 504, 0, 505, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 510, 0, 0,
    511, 0, 512, 0, 513, 0, 0, 514, 0, 515, 0, 0, 516, 0, 0, 0, 0, 517, 0, 518, 0, 519, 0, 0, 520, 0, 0, 0, 0, 521, 0, 522,
    0, 523, 0, 524, 0, 0, 525, 0, 0, 0, 526, 0, 527, 0, 528, 0, 529, 0, 530, 0, 0, 531, 0, 532, 0, 533, 0, 534, 0, 0, 535, 0,
    536, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 541, 0, 542, 0, 543, 0, 544, 0, 545, 0, 0, 0, 546, 0, 547,
    0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0, 554, 0, 555, 0, 556, 0, 0, 557, 0, 0, 558, 0, 559, 0, 0, 560, 0, 561, 0,
    562, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 570,
    0, 0, 0, 571, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 0,
    582, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0, 589, 0, 590, 591, 0,
    592, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 596, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 602, 0, 0, 603,
    0, 604, 0, 605, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 612,
    0, 0, 0, 0, 0, 613, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0, 0, 620, 0,
    0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 623, 0, 624, 0, 0, 625, 0, 626, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0,
    0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 635, 0, 636, 0,
    0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 641, 0, 642, 0, 0, 643, 0,
    0, 644, 0, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 0, 648, 0, 649, 0, 0, 650, 0, 0, 651, 0, 0, 652, 0, 653, 0,
    0, 654, 0, 0, 655, 0, 0, 656, 0, 657, 0, 0, 658, 0, 659, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 664, 0, 665, 0, 666, 0, 667, 0, 0, 668, 0, 669, 0, 670, 0, 0, 0, 671, 0, 0, 0,
    0, 0, 672, 0, 0, 673, 0, 674, 0, 0, 0, 675, 0, 676, 0, 677, 0, 678, 0, 679, 0, 0, 680, 0, 681, 0, 682, 0, 683, 0, 684, 0,
    0, 685, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 692, 0, 693, 0, 0, 0, 0,
    0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0, 699, 0, 0, 0, 700, 0, 0, 701, 0, 0, 702, 0, 0,
    0, 703, 0, 0, 704, 0, 0, 705, 0, 0, 0, 706, 0, 0, 707, 0, 0, 708, 0, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0,
    0, 0, 712, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 718, 0, 719, 0, 720, 0, 721, 0, 722, 0, 723, 0, 0, 0, 0, 0,
    0, 0, 0, 724, 0, 725, 0, 726, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 729, 0, 0, 730, 0, 731, 0, 732, 0, 0, 733, 0, 734, 735,
    0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 739, 0, 740, 0,
    741, 0, 742, 0, 0, 0, 743, 0, 744, 0, 745, 0, 746, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0,
    751, 0, 752, 0, 753, 0, 754, 0, 755, 0, 0, 756, 0, 757, 0, 0, 0, 0, 758, 0, 759, 0, 760, 0, 761, 0, 0, 762, 0, 0, 0, 0,
    0, 0, 763, 0, 764, 0, 765, 0, 0, 766, 0, 767, 768, 0, 769, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0, 0,
    0, 0, 0, 773, 0, 774, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0,
    0, 0, 0, 779, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 784, 0, 0, 785, 0, 0,
    0, 0, 0, 0, 0, 786, 0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789,
    0, 790, 0, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 795, 0, 796, 797, 0,
    0, 0, 798, 0, 799, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 803, 804, 0, 0, 0, 805, 0,
    0, 0, 0, 0, 0, 806, 807, 0, 0, 0, 808, 0, 809, 0, 0, 0, 810, 0, 811, 0, 0, 0, 812, 0, 0, 0, 813, 0, 0, 0, 814, 0,
    0, 0, 0, 0, 0, 815, 816, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 818, 819, 0, 0, 0, 820, 0, 821, 0, 0, 0, 822, 0, 823, 0,
    0, 0, 824, 0, 0, 0, 825, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 827, 828, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 830, 831, 0,
    0, 0, 832, 0, 833, 834, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 0, 0,
    0, 838, 0, 839, 0, 840, 841, 0, 0, 842, 0, 0, 0, 843, 0, 0, 844, 0, 0, 0, 0, 845, 846, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0,
    0, 0, 849, 0, 0, 0, 0, 0, 0, 850, 0, 851, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0,
    853, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 856, 0, 0, 0, 857, 0, 0, 858, 0, 859, 0, 860, 0,
    0, 0, 861, 0, 862, 0, 863, 0, 864, 0, 0, 865, 0, 866, 867, 0, 0, 868, 0, 869, 0, 0, 870, 0, 871, 872, 0, 0, 0, 873, 0, 0,
    0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    876, 0, 0, 0, 877, 0, 0, 0, 0, 0, 878, 0, 879, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0,
    882, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 884, 0, 0, 0, 885,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 887, 0, 0,
    0, 888, 0, 0, 889, 0, 890, 0, 0, 891, 0, 892, 893, 0, 0, 0, 0, 0, 894, 0, 895, 0, 0, 896, 0, 897, 898, 0, 0, 0, 0, 0,
    899, 900, 0, 901, 0, 0, 902, 0, 0, 0, 0, 0, 903, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0,
    905, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 908, 0, 909, 0, 0, 0, 0, 910, 0, 0, 0, 0, 0, 0, 911, 0,
    912, 0, 913, 0, 0, 0, 914, 0, 0, 0, 915, 0, 0, 0, 0, 0, 0, 0, 0, 916, 0, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 919, 0, 920, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 0, 922, 0, 0, 0, 0, 0, 0, 0, 0, 0, 923, 0, 924, 0, 0, 0, 925, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 926, 0, 0, 0, 0,
    927, 0, 928, 0, 0, 0, 929, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 930, 0, 0, 0, 931, 0, 0, 932, 0, 0, 0, 0, 0, 0, 0, 933, 0, 0, 0, 0, 934, 935, 0, 0, 0, 0, 0,
    0, 936, 0, 0, 0, 0, 937, 0, 0, 0, 0, 0, 0, 938, 0, 0, 0, 939, 0, 0, 0, 940, 0, 941, 0, 942, 0, 0, 0, 0, 0, 943,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 944, 0, 0, 0, 945, 0, 0, 0, 946, 0, 947, 0, 948, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 949, 0, 0, 0, 0, 950, 0, 0, 0, 951, 0, 0, 952, 953, 0, 0, 0, 954, 0, 0, 0, 0, 955,
    0, 0, 0, 956, 957, 0, 0, 0, 0, 0, 0, 958, 0, 0, 959, 0, 960, 0, 0, 0, 961, 0, 0, 0, 962, 963, 0, 0, 0, 964, 0, 0,
    0, 965, 966, 0, 967, 0, 968, 0, 0, 0, 0, 0, 0, 0, 969, 0, 0, 0, 970, 0, 971, 0, 972, 0, 973, 0, 0, 974, 0, 0, 975, 0,
    976, 977, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 978, 0, 979, 0, 0, 980, 0, 0, 981, 0, 0, 0, 0, 0, 0, 0, 982, 0, 983,
    0, 0, 984, 0, 0, 985, 0, 0, 0, 0, 0, 0, 0, 986, 0, 0, 987, 0, 988, 0, 0, 989, 0, 0, 990, 0, 0, 991, 0, 0, 992, 0,
    993, 994, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 995, 0, 996, 0, 0, 997, 0, 0, 998, 0, 999, 1000, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1001, 0, 0, 0, 0, 0, 0, 0, 0, 1002, 0, 1003, 0, 0, 0, 0, 0, 0, 0, 1004, 0, 0, 0, 1005, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1006, 0, 0, 0, 1007, 0, 0, 0, 1008, 0, 0, 0, 0, 0, 0, 0, 1009, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1010, 0, 1011, 0, 0, 0, 0, 0, 0, 1012, 0, 1013, 0, 1014, 0, 0, 1015, 0, 0, 1016, 0, 1017, 1018, 0, 0, 0, 0, 0, 1019, 0, 0,
    0, 1020, 0, 0, 0, 0, 0, 1021, 0, 0, 0, 0, 0, 1022, 0, 1023, 0, 1024, 0, 1025, 0, 1026, 0, 1027, 0, 1028, 0, 1029, 0, 1030, 0, 1031,
    0, 1032, 0, 1033, 0, 1034, 0, 1035, 0, 1036, 0, 1037, 1038, 0, 0, 1039, 0, 0, 0, 0, 0, 0, 1040, 0, 0, 0, 1041, 0, 0, 1042, 0, 1043,
    0, 1044, 0, 1045, 0, 1046, 0, 0, 0, 1047, 0, 0, 1048, 0, 1049, 1050, 0, 1051, 0, 1052, 0, 0, 0, 0, 1053, 0, 1054, 0, 1055, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1056, 0, 0, 1057, 0, 0, 1058, 0, 0, 1059, 0, 0, 1060, 0, 0, 1061, 0, 0, 1062, 0, 0, 1063, 0, 0, 1064,
    0, 0, 1065, 0, 0, 1066, 0, 0, 1067, 0, 1068, 0, 0, 0, 0, 0, 0, 0, 1069, 0, 1070, 0, 1071, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1072, 0, 0, 0, 1073, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1074, 0, 0, 1075, 0, 0, 1076, 0, 0, 1077, 0, 0, 1078, 0,
    0, 1079, 0, 0, 1080, 0, 0, 1081, 0, 0, 1082, 0, 0, 1083, 0, 0, 1084, 0, 0, 1085, 0, 1086, 0, 0, 0, 0, 0, 0, 0, 1087, 0, 1088,
    0, 1089, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1090, 0, 1091, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1092, 0, 0, 0, 1093, 0, 0,
    0, 0, 0, 1094, 0, 0, 1095, 0, 0, 0, 0, 0, 0, 1096, 0, 1097, 0, 1098, 0, 0, 0, 1099, 0, 0, 0, 1100, 0, 0, 0, 1101, 0, 0,
    1102, 0, 1103, 1104, 1105, 0, 0, 0, 0, 0, 1106, 0, 1107, 0, 0, 0, 1108, 0, 0, 0, 1109, 0, 0, 1110, 0, 1111, 1112, 1113, 0, 0, 0, 0,
    0, 1114, 0, 0, 1115, 0, 1116, 0, 0, 0, 0, 0, 1117, 0, 0, 0, 0, 0, 0, 0, 1118, 0, 0, 0, 1119, 0, 1120, 0, 1121, 0, 0, 0,
    1122, 0, 0, 1123, 0, 1124, 1125, 1126, 0, 0, 0, 0, 0, 1127, 0, 1128, 0, 0, 0, 1129, 0, 0, 0, 1130, 0, 0, 1131, 0, 1132, 1133, 1134, 0,
    0, 0, 0, 0, 1135, 0, 0, 0, 0, 1136, 0, 0, 0, 1137, 0, 1138, 0, 0, 0, 0, 1139, 0, 0, 0, 0, 0, 1140, 0, 0, 0, 0, 1141,
    0, 0, 0, 1142, 0, 1143, 0, 0, 0, 1144, 0, 0, 0, 1145, 0, 1146, 0, 0, 0, 0, 1147, 0, 0, 0, 0, 0, 0, 0, 0, 1148,
};
void recomp_unit_0178_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08ACC000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0178[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08ACC000;
    case 2u: goto L_08ACC010;
    case 3u: goto L_08ACC01C;
    case 4u: goto L_08ACC02C;
    case 5u: goto L_08ACC034;
    case 6u: goto L_08ACC03C;
    case 7u: goto L_08ACC044;
    case 8u: goto L_08ACC04C;
    case 9u: goto L_08ACC05C;
    case 10u: goto L_08ACC078;
    case 11u: goto L_08ACC080;
    case 12u: goto L_08ACC088;
    case 13u: goto L_08ACC090;
    case 14u: goto L_08ACC0A0;
    case 15u: goto L_08ACC0A8;
    case 16u: goto L_08ACC0B0;
    case 17u: goto L_08ACC0B8;
    case 18u: goto L_08ACC0C0;
    case 19u: goto L_08ACC0CC;
    case 20u: goto L_08ACC0D4;
    case 21u: goto L_08ACC0DC;
    case 22u: goto L_08ACC0E4;
    case 23u: goto L_08ACC0F4;
    case 24u: goto L_08ACC104;
    case 25u: goto L_08ACC10C;
    case 26u: goto L_08ACC11C;
    case 27u: goto L_08ACC134;
    case 28u: goto L_08ACC140;
    case 29u: goto L_08ACC148;
    case 30u: goto L_08ACC154;
    case 31u: goto L_08ACC15C;
    case 32u: goto L_08ACC164;
    case 33u: goto L_08ACC16C;
    case 34u: goto L_08ACC174;
    case 35u: goto L_08ACC18C;
    case 36u: goto L_08ACC194;
    case 37u: goto L_08ACC1B4;
    case 38u: goto L_08ACC1C0;
    case 39u: goto L_08ACC1C8;
    case 40u: goto L_08ACC1D4;
    case 41u: goto L_08ACC1DC;
    case 42u: goto L_08ACC1E4;
    case 43u: goto L_08ACC1F0;
    case 44u: goto L_08ACC1F8;
    case 45u: goto L_08ACC210;
    case 46u: goto L_08ACC21C;
    case 47u: goto L_08ACC224;
    case 48u: goto L_08ACC230;
    case 49u: goto L_08ACC238;
    case 50u: goto L_08ACC244;
    case 51u: goto L_08ACC24C;
    case 52u: goto L_08ACC258;
    case 53u: goto L_08ACC264;
    case 54u: goto L_08ACC26C;
    case 55u: goto L_08ACC278;
    case 56u: goto L_08ACC280;
    case 57u: goto L_08ACC28C;
    case 58u: goto L_08ACC294;
    case 59u: goto L_08ACC2A4;
    case 60u: goto L_08ACC2BC;
    case 61u: goto L_08ACC2C4;
    case 62u: goto L_08ACC2CC;
    case 63u: goto L_08ACC2D4;
    case 64u: goto L_08ACC2E0;
    case 65u: goto L_08ACC2EC;
    case 66u: goto L_08ACC2F4;
    case 67u: goto L_08ACC2FC;
    case 68u: goto L_08ACC308;
    case 69u: goto L_08ACC310;
    case 70u: goto L_08ACC328;
    case 71u: goto L_08ACC334;
    case 72u: goto L_08ACC33C;
    case 73u: goto L_08ACC344;
    case 74u: goto L_08ACC34C;
    case 75u: goto L_08ACC358;
    case 76u: goto L_08ACC360;
    case 77u: goto L_08ACC36C;
    case 78u: goto L_08ACC378;
    case 79u: goto L_08ACC380;
    case 80u: goto L_08ACC38C;
    case 81u: goto L_08ACC394;
    case 82u: goto L_08ACC3A0;
    case 83u: goto L_08ACC3AC;
    case 84u: goto L_08ACC3BC;
    case 85u: goto L_08ACC3C4;
    case 86u: goto L_08ACC3D0;
    case 87u: goto L_08ACC3D8;
    case 88u: goto L_08ACC3E4;
    case 89u: goto L_08ACC3EC;
    case 90u: goto L_08ACC3FC;
    case 91u: goto L_08ACC408;
    case 92u: goto L_08ACC410;
    case 93u: goto L_08ACC424;
    case 94u: goto L_08ACC434;
    case 95u: goto L_08ACC440;
    case 96u: goto L_08ACC444;
    case 97u: goto L_08ACC44C;
    case 98u: goto L_08ACC458;
    case 99u: goto L_08ACC460;
    case 100u: goto L_08ACC46C;
    case 101u: goto L_08ACC478;
    case 102u: goto L_08ACC480;
    case 103u: goto L_08ACC48C;
    case 104u: goto L_08ACC494;
    case 105u: goto L_08ACC49C;
    case 106u: goto L_08ACC4A4;
    case 107u: goto L_08ACC4B8;
    case 108u: goto L_08ACC4C4;
    case 109u: goto L_08ACC4D8;
    case 110u: goto L_08ACC4E4;
    case 111u: goto L_08ACC4F0;
    case 112u: goto L_08ACC504;
    case 113u: goto L_08ACC50C;
    case 114u: goto L_08ACC524;
    case 115u: goto L_08ACC530;
    case 116u: goto L_08ACC544;
    case 117u: goto L_08ACC550;
    case 118u: goto L_08ACC558;
    case 119u: goto L_08ACC564;
    case 120u: goto L_08ACC578;
    case 121u: goto L_08ACC580;
    case 122u: goto L_08ACC588;
    case 123u: goto L_08ACC590;
    case 124u: goto L_08ACC598;
    case 125u: goto L_08ACC5A4;
    case 126u: goto L_08ACC5AC;
    case 127u: goto L_08ACC5B4;
    case 128u: goto L_08ACC5C0;
    case 129u: goto L_08ACC5C8;
    case 130u: goto L_08ACC5D4;
    case 131u: goto L_08ACC5DC;
    case 132u: goto L_08ACC5E4;
    case 133u: goto L_08ACC5EC;
    case 134u: goto L_08ACC604;
    case 135u: goto L_08ACC60C;
    case 136u: goto L_08ACC614;
    case 137u: goto L_08ACC61C;
    case 138u: goto L_08ACC628;
    case 139u: goto L_08ACC630;
    case 140u: goto L_08ACC638;
    case 141u: goto L_08ACC644;
    case 142u: goto L_08ACC650;
    case 143u: goto L_08ACC658;
    case 144u: goto L_08ACC664;
    case 145u: goto L_08ACC66C;
    case 146u: goto L_08ACC678;
    case 147u: goto L_08ACC680;
    case 148u: goto L_08ACC690;
    case 149u: goto L_08ACC6A0;
    case 150u: goto L_08ACC6A8;
    case 151u: goto L_08ACC6B0;
    case 152u: goto L_08ACC6B8;
    case 153u: goto L_08ACC6D0;
    case 154u: goto L_08ACC6D8;
    case 155u: goto L_08ACC6F4;
    case 156u: goto L_08ACC6FC;
    case 157u: goto L_08ACC708;
    case 158u: goto L_08ACC71C;
    case 159u: goto L_08ACC724;
    case 160u: goto L_08ACC734;
    case 161u: goto L_08ACC744;
    case 162u: goto L_08ACC74C;
    case 163u: goto L_08ACC774;
    case 164u: goto L_08ACC780;
    case 165u: goto L_08ACC790;
    case 166u: goto L_08ACC79C;
    case 167u: goto L_08ACC7A4;
    case 168u: goto L_08ACC7B0;
    case 169u: goto L_08ACC7B8;
    case 170u: goto L_08ACC7C0;
    case 171u: goto L_08ACC7C8;
    case 172u: goto L_08ACC7D0;
    case 173u: goto L_08ACC7D8;
    case 174u: goto L_08ACC7EC;
    case 175u: goto L_08ACC7F4;
    case 176u: goto L_08ACC800;
    case 177u: goto L_08ACC80C;
    case 178u: goto L_08ACC84C;
    case 179u: goto L_08ACC85C;
    case 180u: goto L_08ACC864;
    case 181u: goto L_08ACC86C;
    case 182u: goto L_08ACC87C;
    case 183u: goto L_08ACC888;
    case 184u: goto L_08ACC8A4;
    case 185u: goto L_08ACC8B8;
    case 186u: goto L_08ACC8C4;
    case 187u: goto L_08ACC8DC;
    case 188u: goto L_08ACC8EC;
    case 189u: goto L_08ACC8F8;
    case 190u: goto L_08ACC904;
    case 191u: goto L_08ACC91C;
    case 192u: goto L_08ACC92C;
    case 193u: goto L_08ACC938;
    case 194u: goto L_08ACC944;
    case 195u: goto L_08ACC94C;
    case 196u: goto L_08ACC958;
    case 197u: goto L_08ACC964;
    case 198u: goto L_08ACC96C;
    case 199u: goto L_08ACC974;
    case 200u: goto L_08ACC984;
    case 201u: goto L_08ACC994;
    case 202u: goto L_08ACC9AC;
    case 203u: goto L_08ACC9B4;
    case 204u: goto L_08ACC9CC;
    case 205u: goto L_08ACC9D8;
    case 206u: goto L_08ACC9E0;
    case 207u: goto L_08ACC9E8;
    case 208u: goto L_08ACC9F8;
    case 209u: goto L_08ACCA00;
    case 210u: goto L_08ACCA10;
    case 211u: goto L_08ACCA2C;
    case 212u: goto L_08ACCA34;
    case 213u: goto L_08ACCA48;
    case 214u: goto L_08ACCA50;
    case 215u: goto L_08ACCA58;
    case 216u: goto L_08ACCA6C;
    case 217u: goto L_08ACCA78;
    case 218u: goto L_08ACCA80;
    case 219u: goto L_08ACCA88;
    case 220u: goto L_08ACCA90;
    case 221u: goto L_08ACCAA8;
    case 222u: goto L_08ACCAB0;
    case 223u: goto L_08ACCAB8;
    case 224u: goto L_08ACCAC0;
    case 225u: goto L_08ACCACC;
    case 226u: goto L_08ACCAD4;
    case 227u: goto L_08ACCADC;
    case 228u: goto L_08ACCAE4;
    case 229u: goto L_08ACCAF4;
    case 230u: goto L_08ACCB00;
    case 231u: goto L_08ACCB38;
    case 232u: goto L_08ACCB4C;
    case 233u: goto L_08ACCB60;
    case 234u: goto L_08ACCB6C;
    case 235u: goto L_08ACCB7C;
    case 236u: goto L_08ACCB88;
    case 237u: goto L_08ACCB98;
    case 238u: goto L_08ACCBA4;
    case 239u: goto L_08ACCBAC;
    case 240u: goto L_08ACCBBC;
    case 241u: goto L_08ACCBC4;
    case 242u: goto L_08ACCBCC;
    case 243u: goto L_08ACCBD4;
    case 244u: goto L_08ACCBE0;
    case 245u: goto L_08ACCBE4;
    case 246u: goto L_08ACCC00;
    case 247u: goto L_08ACCC08;
    case 248u: goto L_08ACCC14;
    case 249u: goto L_08ACCC1C;
    case 250u: goto L_08ACCC24;
    case 251u: goto L_08ACCC34;
    case 252u: goto L_08ACCC3C;
    case 253u: goto L_08ACCC44;
    case 254u: goto L_08ACCC4C;
    case 255u: goto L_08ACCC60;
    case 256u: goto L_08ACCC68;
    case 257u: goto L_08ACCC78;
    case 258u: goto L_08ACCC80;
    case 259u: goto L_08ACCC8C;
    case 260u: goto L_08ACCC94;
    case 261u: goto L_08ACCC9C;
    case 262u: goto L_08ACCCA4;
    case 263u: goto L_08ACCCBC;
    case 264u: goto L_08ACCCC4;
    case 265u: goto L_08ACCCCC;
    case 266u: goto L_08ACCCD4;
    case 267u: goto L_08ACCCDC;
    case 268u: goto L_08ACCCE4;
    case 269u: goto L_08ACCCEC;
    case 270u: goto L_08ACCCF4;
    case 271u: goto L_08ACCCFC;
    case 272u: goto L_08ACCD04;
    case 273u: goto L_08ACCD0C;
    case 274u: goto L_08ACCD14;
    case 275u: goto L_08ACCD1C;
    case 276u: goto L_08ACCD24;
    case 277u: goto L_08ACCD3C;
    case 278u: goto L_08ACCD44;
    case 279u: goto L_08ACCD4C;
    case 280u: goto L_08ACCD58;
    case 281u: goto L_08ACCD60;
    case 282u: goto L_08ACCD68;
    case 283u: goto L_08ACCD74;
    case 284u: goto L_08ACCD7C;
    case 285u: goto L_08ACCD84;
    case 286u: goto L_08ACCD8C;
    case 287u: goto L_08ACCD94;
    case 288u: goto L_08ACCD9C;
    case 289u: goto L_08ACCDA4;
    case 290u: goto L_08ACCDAC;
    case 291u: goto L_08ACCDB4;
    case 292u: goto L_08ACCDBC;
    case 293u: goto L_08ACCDC4;
    case 294u: goto L_08ACCDD4;
    case 295u: goto L_08ACCDDC;
    case 296u: goto L_08ACCDE4;
    case 297u: goto L_08ACCDF4;
    case 298u: goto L_08ACCE00;
    case 299u: goto L_08ACCE08;
    case 300u: goto L_08ACCE10;
    case 301u: goto L_08ACCE18;
    case 302u: goto L_08ACCE20;
    case 303u: goto L_08ACCE28;
    case 304u: goto L_08ACCE34;
    case 305u: goto L_08ACCE3C;
    case 306u: goto L_08ACCE44;
    case 307u: goto L_08ACCE4C;
    case 308u: goto L_08ACCE58;
    case 309u: goto L_08ACCE60;
    case 310u: goto L_08ACCE6C;
    case 311u: goto L_08ACCE7C;
    case 312u: goto L_08ACCE84;
    case 313u: goto L_08ACCEA0;
    case 314u: goto L_08ACCEA8;
    case 315u: goto L_08ACCEB0;
    case 316u: goto L_08ACCEC4;
    case 317u: goto L_08ACCECC;
    case 318u: goto L_08ACCED4;
    case 319u: goto L_08ACCEDC;
    case 320u: goto L_08ACCEEC;
    case 321u: goto L_08ACCF04;
    case 322u: goto L_08ACCF10;
    case 323u: goto L_08ACCF18;
    case 324u: goto L_08ACCF34;
    case 325u: goto L_08ACCF3C;
    case 326u: goto L_08ACCF50;
    case 327u: goto L_08ACCF60;
    case 328u: goto L_08ACCF6C;
    case 329u: goto L_08ACCF7C;
    case 330u: goto L_08ACCF84;
    case 331u: goto L_08ACCF94;
    case 332u: goto L_08ACCFA0;
    case 333u: goto L_08ACCFA8;
    case 334u: goto L_08ACCFB4;
    case 335u: goto L_08ACCFBC;
    case 336u: goto L_08ACCFC8;
    case 337u: goto L_08ACCFD4;
    case 338u: goto L_08ACCFE8;
    case 339u: goto L_08ACCFF4;
    case 340u: goto L_08ACCFFC;
    case 341u: goto L_08ACD004;
    case 342u: goto L_08ACD00C;
    case 343u: goto L_08ACD014;
    case 344u: goto L_08ACD01C;
    case 345u: goto L_08ACD024;
    case 346u: goto L_08ACD02C;
    case 347u: goto L_08ACD034;
    case 348u: goto L_08ACD03C;
    case 349u: goto L_08ACD048;
    case 350u: goto L_08ACD054;
    case 351u: goto L_08ACD070;
    case 352u: goto L_08ACD080;
    case 353u: goto L_08ACD08C;
    case 354u: goto L_08ACD094;
    case 355u: goto L_08ACD09C;
    case 356u: goto L_08ACD0A8;
    case 357u: goto L_08ACD0B0;
    case 358u: goto L_08ACD0B8;
    case 359u: goto L_08ACD0C4;
    case 360u: goto L_08ACD0E4;
    case 361u: goto L_08ACD100;
    case 362u: goto L_08ACD110;
    case 363u: goto L_08ACD11C;
    case 364u: goto L_08ACD124;
    case 365u: goto L_08ACD130;
    case 366u: goto L_08ACD138;
    case 367u: goto L_08ACD144;
    case 368u: goto L_08ACD150;
    case 369u: goto L_08ACD164;
    case 370u: goto L_08ACD16C;
    case 371u: goto L_08ACD174;
    case 372u: goto L_08ACD180;
    case 373u: goto L_08ACD188;
    case 374u: goto L_08ACD190;
    case 375u: goto L_08ACD198;
    case 376u: goto L_08ACD1A0;
    case 377u: goto L_08ACD1B0;
    case 378u: goto L_08ACD1BC;
    case 379u: goto L_08ACD1C8;
    case 380u: goto L_08ACD1D0;
    case 381u: goto L_08ACD1D8;
    case 382u: goto L_08ACD1E8;
    case 383u: goto L_08ACD200;
    case 384u: goto L_08ACD20C;
    case 385u: goto L_08ACD218;
    case 386u: goto L_08ACD220;
    case 387u: goto L_08ACD22C;
    case 388u: goto L_08ACD234;
    case 389u: goto L_08ACD23C;
    case 390u: goto L_08ACD24C;
    case 391u: goto L_08ACD254;
    case 392u: goto L_08ACD25C;
    case 393u: goto L_08ACD26C;
    case 394u: goto L_08ACD278;
    case 395u: goto L_08ACD280;
    case 396u: goto L_08ACD290;
    case 397u: goto L_08ACD29C;
    case 398u: goto L_08ACD2A4;
    case 399u: goto L_08ACD2B4;
    case 400u: goto L_08ACD2C0;
    case 401u: goto L_08ACD2CC;
    case 402u: goto L_08ACD2D4;
    case 403u: goto L_08ACD2DC;
    case 404u: goto L_08ACD2E0;
    case 405u: goto L_08ACD2EC;
    case 406u: goto L_08ACD2F4;
    case 407u: goto L_08ACD300;
    case 408u: goto L_08ACD308;
    case 409u: goto L_08ACD318;
    case 410u: goto L_08ACD330;
    case 411u: goto L_08ACD338;
    case 412u: goto L_08ACD340;
    case 413u: goto L_08ACD358;
    case 414u: goto L_08ACD360;
    case 415u: goto L_08ACD368;
    case 416u: goto L_08ACD370;
    case 417u: goto L_08ACD388;
    case 418u: goto L_08ACD390;
    case 419u: goto L_08ACD398;
    case 420u: goto L_08ACD3A0;
    case 421u: goto L_08ACD3AC;
    case 422u: goto L_08ACD3B4;
    case 423u: goto L_08ACD3C8;
    case 424u: goto L_08ACD3D0;
    case 425u: goto L_08ACD3D8;
    case 426u: goto L_08ACD3E0;
    case 427u: goto L_08ACD3F0;
    case 428u: goto L_08ACD3FC;
    case 429u: goto L_08ACD404;
    case 430u: goto L_08ACD40C;
    case 431u: goto L_08ACD414;
    case 432u: goto L_08ACD420;
    case 433u: goto L_08ACD42C;
    case 434u: goto L_08ACD43C;
    case 435u: goto L_08ACD44C;
    case 436u: goto L_08ACD454;
    case 437u: goto L_08ACD45C;
    case 438u: goto L_08ACD464;
    case 439u: goto L_08ACD46C;
    case 440u: goto L_08ACD474;
    case 441u: goto L_08ACD47C;
    case 442u: goto L_08ACD4BC;
    case 443u: goto L_08ACD4E0;
    case 444u: goto L_08ACD4F4;
    case 445u: goto L_08ACD504;
    case 446u: goto L_08ACD50C;
    case 447u: goto L_08ACD518;
    case 448u: goto L_08ACD520;
    case 449u: goto L_08ACD528;
    case 450u: goto L_08ACD530;
    case 451u: goto L_08ACD538;
    case 452u: goto L_08ACD548;
    case 453u: goto L_08ACD554;
    case 454u: goto L_08ACD55C;
    case 455u: goto L_08ACD564;
    case 456u: goto L_08ACD56C;
    case 457u: goto L_08ACD574;
    case 458u: goto L_08ACD580;
    case 459u: goto L_08ACD588;
    case 460u: goto L_08ACD590;
    case 461u: goto L_08ACD598;
    case 462u: goto L_08ACD5AC;
    case 463u: goto L_08ACD5B8;
    case 464u: goto L_08ACD5C0;
    case 465u: goto L_08ACD5CC;
    case 466u: goto L_08ACD5D8;
    case 467u: goto L_08ACD5E0;
    case 468u: goto L_08ACD5E8;
    case 469u: goto L_08ACD5F4;
    case 470u: goto L_08ACD5FC;
    case 471u: goto L_08ACD60C;
    case 472u: goto L_08ACD618;
    case 473u: goto L_08ACD620;
    case 474u: goto L_08ACD62C;
    case 475u: goto L_08ACD634;
    case 476u: goto L_08ACD640;
    case 477u: goto L_08ACD658;
    case 478u: goto L_08ACD664;
    case 479u: goto L_08ACD670;
    case 480u: goto L_08ACD678;
    case 481u: goto L_08ACD680;
    case 482u: goto L_08ACD698;
    case 483u: goto L_08ACD6BC;
    case 484u: goto L_08ACD6CC;
    case 485u: goto L_08ACD6DC;
    case 486u: goto L_08ACD6EC;
    case 487u: goto L_08ACD704;
    case 488u: goto L_08ACD71C;
    case 489u: goto L_08ACD728;
    case 490u: goto L_08ACD730;
    case 491u: goto L_08ACD738;
    case 492u: goto L_08ACD740;
    case 493u: goto L_08ACD748;
    case 494u: goto L_08ACD750;
    case 495u: goto L_08ACD758;
    case 496u: goto L_08ACD764;
    case 497u: goto L_08ACD76C;
    case 498u: goto L_08ACD774;
    case 499u: goto L_08ACD77C;
    case 500u: goto L_08ACD784;
    case 501u: goto L_08ACD78C;
    case 502u: goto L_08ACD794;
    case 503u: goto L_08ACD79C;
    case 504u: goto L_08ACD7A8;
    case 505u: goto L_08ACD7B0;
    case 506u: goto L_08ACD7B8;
    case 507u: goto L_08ACD7C8;
    case 508u: goto L_08ACD7E0;
    case 509u: goto L_08ACD7E8;
    case 510u: goto L_08ACD7F4;
    case 511u: goto L_08ACD800;
    case 512u: goto L_08ACD808;
    case 513u: goto L_08ACD810;
    case 514u: goto L_08ACD81C;
    case 515u: goto L_08ACD824;
    case 516u: goto L_08ACD830;
    case 517u: goto L_08ACD844;
    case 518u: goto L_08ACD84C;
    case 519u: goto L_08ACD854;
    case 520u: goto L_08ACD860;
    case 521u: goto L_08ACD874;
    case 522u: goto L_08ACD87C;
    case 523u: goto L_08ACD884;
    case 524u: goto L_08ACD88C;
    case 525u: goto L_08ACD898;
    case 526u: goto L_08ACD8A8;
    case 527u: goto L_08ACD8B0;
    case 528u: goto L_08ACD8B8;
    case 529u: goto L_08ACD8C0;
    case 530u: goto L_08ACD8C8;
    case 531u: goto L_08ACD8D4;
    case 532u: goto L_08ACD8DC;
    case 533u: goto L_08ACD8E4;
    case 534u: goto L_08ACD8EC;
    case 535u: goto L_08ACD8F8;
    case 536u: goto L_08ACD900;
    case 537u: goto L_08ACD908;
    case 538u: goto L_08ACD914;
    case 539u: goto L_08ACD92C;
    case 540u: goto L_08ACD938;
    case 541u: goto L_08ACD944;
    case 542u: goto L_08ACD94C;
    case 543u: goto L_08ACD954;
    case 544u: goto L_08ACD95C;
    case 545u: goto L_08ACD964;
    case 546u: goto L_08ACD974;
    case 547u: goto L_08ACD97C;
    case 548u: goto L_08ACD984;
    case 549u: goto L_08ACD98C;
    case 550u: goto L_08ACD994;
    case 551u: goto L_08ACD99C;
    case 552u: goto L_08ACD9A4;
    case 553u: goto L_08ACD9AC;
    case 554u: goto L_08ACD9B4;
    case 555u: goto L_08ACD9BC;
    case 556u: goto L_08ACD9C4;
    case 557u: goto L_08ACD9D0;
    case 558u: goto L_08ACD9DC;
    case 559u: goto L_08ACD9E4;
    case 560u: goto L_08ACD9F0;
    case 561u: goto L_08ACD9F8;
    case 562u: goto L_08ACDA00;
    case 563u: goto L_08ACDA04;
    case 564u: goto L_08ACDA14;
    case 565u: goto L_08ACDA2C;
    case 566u: goto L_08ACDA48;
    case 567u: goto L_08ACDA50;
    case 568u: goto L_08ACDA60;
    case 569u: goto L_08ACDA6C;
    case 570u: goto L_08ACDA7C;
    case 571u: goto L_08ACDA8C;
    case 572u: goto L_08ACDA90;
    case 573u: goto L_08ACDA98;
    case 574u: goto L_08ACDAA0;
    case 575u: goto L_08ACDAA8;
    case 576u: goto L_08ACDAB0;
    case 577u: goto L_08ACDAB8;
    case 578u: goto L_08ACDAC0;
    case 579u: goto L_08ACDACC;
    case 580u: goto L_08ACDAD8;
    case 581u: goto L_08ACDAF4;
    case 582u: goto L_08ACDB00;
    case 583u: goto L_08ACDB10;
    case 584u: goto L_08ACDB20;
    case 585u: goto L_08ACDB30;
    case 586u: goto L_08ACDB4C;
    case 587u: goto L_08ACDB54;
    case 588u: goto L_08ACDB60;
    case 589u: goto L_08ACDB6C;
    case 590u: goto L_08ACDB74;
    case 591u: goto L_08ACDB78;
    case 592u: goto L_08ACDB80;
    case 593u: goto L_08ACDB8C;
    case 594u: goto L_08ACDB98;
    case 595u: goto L_08ACDBA4;
    case 596u: goto L_08ACDBAC;
    case 597u: goto L_08ACDBB8;
    case 598u: goto L_08ACDBC4;
    case 599u: goto L_08ACDBD0;
    case 600u: goto L_08ACDBDC;
    case 601u: goto L_08ACDBE8;
    case 602u: goto L_08ACDBF0;
    case 603u: goto L_08ACDBFC;
    case 604u: goto L_08ACDC04;
    case 605u: goto L_08ACDC0C;
    case 606u: goto L_08ACDC18;
    case 607u: goto L_08ACDC2C;
    case 608u: goto L_08ACDC38;
    case 609u: goto L_08ACDC50;
    case 610u: goto L_08ACDC5C;
    case 611u: goto L_08ACDC64;
    case 612u: goto L_08ACDC7C;
    case 613u: goto L_08ACDC94;
    case 614u: goto L_08ACDC9C;
    case 615u: goto L_08ACDCA4;
    case 616u: goto L_08ACDCC4;
    case 617u: goto L_08ACDCD0;
    case 618u: goto L_08ACDCDC;
    case 619u: goto L_08ACDCE8;
    case 620u: goto L_08ACDCF8;
    case 621u: goto L_08ACDD14;
    case 622u: goto L_08ACDD20;
    case 623u: goto L_08ACDD2C;
    case 624u: goto L_08ACDD34;
    case 625u: goto L_08ACDD40;
    case 626u: goto L_08ACDD48;
    case 627u: goto L_08ACDD50;
    case 628u: goto L_08ACDD68;
    case 629u: goto L_08ACDD74;
    case 630u: goto L_08ACDD8C;
    case 631u: goto L_08ACDDAC;
    case 632u: goto L_08ACDDC4;
    case 633u: goto L_08ACDDD8;
    case 634u: goto L_08ACDDE8;
    case 635u: goto L_08ACDDF0;
    case 636u: goto L_08ACDDF8;
    case 637u: goto L_08ACDE10;
    case 638u: goto L_08ACDE34;
    case 639u: goto L_08ACDE50;
    case 640u: goto L_08ACDE58;
    case 641u: goto L_08ACDE64;
    case 642u: goto L_08ACDE6C;
    case 643u: goto L_08ACDE78;
    case 644u: goto L_08ACDE84;
    case 645u: goto L_08ACDE90;
    case 646u: goto L_08ACDEAC;
    case 647u: goto L_08ACDEB8;
    case 648u: goto L_08ACDEC4;
    case 649u: goto L_08ACDECC;
    case 650u: goto L_08ACDED8;
    case 651u: goto L_08ACDEE4;
    case 652u: goto L_08ACDEF0;
    case 653u: goto L_08ACDEF8;
    case 654u: goto L_08ACDF04;
    case 655u: goto L_08ACDF10;
    case 656u: goto L_08ACDF1C;
    case 657u: goto L_08ACDF24;
    case 658u: goto L_08ACDF30;
    case 659u: goto L_08ACDF38;
    case 660u: goto L_08ACDF40;
    case 661u: goto L_08ACDF58;
    case 662u: goto L_08ACDF90;
    case 663u: goto L_08ACDFA0;
    case 664u: goto L_08ACDFAC;
    case 665u: goto L_08ACDFB4;
    case 666u: goto L_08ACDFBC;
    case 667u: goto L_08ACDFC4;
    case 668u: goto L_08ACDFD0;
    case 669u: goto L_08ACDFD8;
    case 670u: goto L_08ACDFE0;
    case 671u: goto L_08ACDFF0;
    case 672u: goto L_08ACE008;
    case 673u: goto L_08ACE014;
    case 674u: goto L_08ACE01C;
    case 675u: goto L_08ACE02C;
    case 676u: goto L_08ACE034;
    case 677u: goto L_08ACE03C;
    case 678u: goto L_08ACE044;
    case 679u: goto L_08ACE04C;
    case 680u: goto L_08ACE058;
    case 681u: goto L_08ACE060;
    case 682u: goto L_08ACE068;
    case 683u: goto L_08ACE070;
    case 684u: goto L_08ACE078;
    case 685u: goto L_08ACE084;
    case 686u: goto L_08ACE0A4;
    case 687u: goto L_08ACE0BC;
    case 688u: goto L_08ACE0D0;
    case 689u: goto L_08ACE0E8;
    case 690u: goto L_08ACE0F8;
    case 691u: goto L_08ACE15C;
    case 692u: goto L_08ACE164;
    case 693u: goto L_08ACE16C;
    case 694u: goto L_08ACE184;
    case 695u: goto L_08ACE198;
    case 696u: goto L_08ACE1A8;
    case 697u: goto L_08ACE1B8;
    case 698u: goto L_08ACE1C0;
    case 699u: goto L_08ACE1CC;
    case 700u: goto L_08ACE1DC;
    case 701u: goto L_08ACE1E8;
    case 702u: goto L_08ACE1F4;
    case 703u: goto L_08ACE204;
    case 704u: goto L_08ACE210;
    case 705u: goto L_08ACE21C;
    case 706u: goto L_08ACE22C;
    case 707u: goto L_08ACE238;
    case 708u: goto L_08ACE244;
    case 709u: goto L_08ACE254;
    case 710u: goto L_08ACE260;
    case 711u: goto L_08ACE26C;
    case 712u: goto L_08ACE288;
    case 713u: goto L_08ACE294;
    case 714u: goto L_08ACE2A0;
    case 715u: goto L_08ACE2BC;
    case 716u: goto L_08ACE2C8;
    case 717u: goto L_08ACE334;
    case 718u: goto L_08ACE340;
    case 719u: goto L_08ACE348;
    case 720u: goto L_08ACE350;
    case 721u: goto L_08ACE358;
    case 722u: goto L_08ACE360;
    case 723u: goto L_08ACE368;
    case 724u: goto L_08ACE38C;
    case 725u: goto L_08ACE394;
    case 726u: goto L_08ACE39C;
    case 727u: goto L_08ACE3A4;
    case 728u: goto L_08ACE3C0;
    case 729u: goto L_08ACE3C8;
    case 730u: goto L_08ACE3D4;
    case 731u: goto L_08ACE3DC;
    case 732u: goto L_08ACE3E4;
    case 733u: goto L_08ACE3F0;
    case 734u: goto L_08ACE3F8;
    case 735u: goto L_08ACE3FC;
    case 736u: goto L_08ACE418;
    case 737u: goto L_08ACE454;
    case 738u: goto L_08ACE464;
    case 739u: goto L_08ACE470;
    case 740u: goto L_08ACE478;
    case 741u: goto L_08ACE480;
    case 742u: goto L_08ACE488;
    case 743u: goto L_08ACE498;
    case 744u: goto L_08ACE4A0;
    case 745u: goto L_08ACE4A8;
    case 746u: goto L_08ACE4B0;
    case 747u: goto L_08ACE4C8;
    case 748u: goto L_08ACE4D4;
    case 749u: goto L_08ACE4DC;
    case 750u: goto L_08ACE4F0;
    case 751u: goto L_08ACE500;
    case 752u: goto L_08ACE508;
    case 753u: goto L_08ACE510;
    case 754u: goto L_08ACE518;
    case 755u: goto L_08ACE520;
    case 756u: goto L_08ACE52C;
    case 757u: goto L_08ACE534;
    case 758u: goto L_08ACE548;
    case 759u: goto L_08ACE550;
    case 760u: goto L_08ACE558;
    case 761u: goto L_08ACE560;
    case 762u: goto L_08ACE56C;
    case 763u: goto L_08ACE588;
    case 764u: goto L_08ACE590;
    case 765u: goto L_08ACE598;
    case 766u: goto L_08ACE5A4;
    case 767u: goto L_08ACE5AC;
    case 768u: goto L_08ACE5B0;
    case 769u: goto L_08ACE5B8;
    case 770u: goto L_08ACE5D0;
    case 771u: goto L_08ACE5D8;
    case 772u: goto L_08ACE5EC;
    case 773u: goto L_08ACE60C;
    case 774u: goto L_08ACE614;
    case 775u: goto L_08ACE61C;
    case 776u: goto L_08ACE634;
    case 777u: goto L_08ACE658;
    case 778u: goto L_08ACE66C;
    case 779u: goto L_08ACE68C;
    case 780u: goto L_08ACE694;
    case 781u: goto L_08ACE6BC;
    case 782u: goto L_08ACE6D8;
    case 783u: goto L_08ACE6E0;
    case 784u: goto L_08ACE6E8;
    case 785u: goto L_08ACE6F4;
    case 786u: goto L_08ACE714;
    case 787u: goto L_08ACE720;
    case 788u: goto L_08ACE728;
    case 789u: goto L_08ACE77C;
    case 790u: goto L_08ACE784;
    case 791u: goto L_08ACE79C;
    case 792u: goto L_08ACE7A4;
    case 793u: goto L_08ACE7C0;
    case 794u: goto L_08ACE7CC;
    case 795u: goto L_08ACE7EC;
    case 796u: goto L_08ACE7F4;
    case 797u: goto L_08ACE7F8;
    case 798u: goto L_08ACE808;
    case 799u: goto L_08ACE810;
    case 800u: goto L_08ACE820;
    case 801u: goto L_08ACE830;
    case 802u: goto L_08ACE848;
    case 803u: goto L_08ACE864;
    case 804u: goto L_08ACE868;
    case 805u: goto L_08ACE878;
    case 806u: goto L_08ACE894;
    case 807u: goto L_08ACE898;
    case 808u: goto L_08ACE8A8;
    case 809u: goto L_08ACE8B0;
    case 810u: goto L_08ACE8C0;
    case 811u: goto L_08ACE8C8;
    case 812u: goto L_08ACE8D8;
    case 813u: goto L_08ACE8E8;
    case 814u: goto L_08ACE8F8;
    case 815u: goto L_08ACE914;
    case 816u: goto L_08ACE918;
    case 817u: goto L_08ACE928;
    case 818u: goto L_08ACE944;
    case 819u: goto L_08ACE948;
    case 820u: goto L_08ACE958;
    case 821u: goto L_08ACE960;
    case 822u: goto L_08ACE970;
    case 823u: goto L_08ACE978;
    case 824u: goto L_08ACE988;
    case 825u: goto L_08ACE998;
    case 826u: goto L_08ACE9A8;
    case 827u: goto L_08ACE9C4;
    case 828u: goto L_08ACE9C8;
    case 829u: goto L_08ACE9D8;
    case 830u: goto L_08ACE9F4;
    case 831u: goto L_08ACE9F8;
    case 832u: goto L_08ACEA08;
    case 833u: goto L_08ACEA10;
    case 834u: goto L_08ACEA14;
    case 835u: goto L_08ACEA1C;
    case 836u: goto L_08ACEA4C;
    case 837u: goto L_08ACEA68;
    case 838u: goto L_08ACEA84;
    case 839u: goto L_08ACEA8C;
    case 840u: goto L_08ACEA94;
    case 841u: goto L_08ACEA98;
    case 842u: goto L_08ACEAA4;
    case 843u: goto L_08ACEAB4;
    case 844u: goto L_08ACEAC0;
    case 845u: goto L_08ACEAD4;
    case 846u: goto L_08ACEAD8;
    case 847u: goto L_08ACEB50;
    case 848u: goto L_08ACEB6C;
    case 849u: goto L_08ACEB88;
    case 850u: goto L_08ACEBA4;
    case 851u: goto L_08ACEBAC;
    case 852u: goto L_08ACEBF8;
    case 853u: goto L_08ACEC00;
    case 854u: goto L_08ACEC18;
    case 855u: goto L_08ACEC38;
    case 856u: goto L_08ACEC4C;
    case 857u: goto L_08ACEC5C;
    case 858u: goto L_08ACEC68;
    case 859u: goto L_08ACEC70;
    case 860u: goto L_08ACEC78;
    case 861u: goto L_08ACEC88;
    case 862u: goto L_08ACEC90;
    case 863u: goto L_08ACEC98;
    case 864u: goto L_08ACECA0;
    case 865u: goto L_08ACECAC;
    case 866u: goto L_08ACECB4;
    case 867u: goto L_08ACECB8;
    case 868u: goto L_08ACECC4;
    case 869u: goto L_08ACECCC;
    case 870u: goto L_08ACECD8;
    case 871u: goto L_08ACECE0;
    case 872u: goto L_08ACECE4;
    case 873u: goto L_08ACECF4;
    case 874u: goto L_08ACED08;
    case 875u: goto L_08ACED58;
    case 876u: goto L_08ACED80;
    case 877u: goto L_08ACED90;
    case 878u: goto L_08ACEDA8;
    case 879u: goto L_08ACEDB0;
    case 880u: goto L_08ACEDC8;
    case 881u: goto L_08ACEDF4;
    case 882u: goto L_08ACEE00;
    case 883u: goto L_08ACEE64;
    case 884u: goto L_08ACEE6C;
    case 885u: goto L_08ACEE7C;
    case 886u: goto L_08ACEEE0;
    case 887u: goto L_08ACEEF4;
    case 888u: goto L_08ACEF04;
    case 889u: goto L_08ACEF10;
    case 890u: goto L_08ACEF18;
    case 891u: goto L_08ACEF24;
    case 892u: goto L_08ACEF2C;
    case 893u: goto L_08ACEF30;
    case 894u: goto L_08ACEF48;
    case 895u: goto L_08ACEF50;
    case 896u: goto L_08ACEF5C;
    case 897u: goto L_08ACEF64;
    case 898u: goto L_08ACEF68;
    case 899u: goto L_08ACEF80;
    case 900u: goto L_08ACEF84;
    case 901u: goto L_08ACEF8C;
    case 902u: goto L_08ACEF98;
    case 903u: goto L_08ACEFB0;
    case 904u: goto L_08ACEFE4;
    case 905u: goto L_08ACF000;
    case 906u: goto L_08ACF00C;
    case 907u: goto L_08ACF02C;
    case 908u: goto L_08ACF040;
    case 909u: goto L_08ACF048;
    case 910u: goto L_08ACF05C;
    case 911u: goto L_08ACF078;
    case 912u: goto L_08ACF080;
    case 913u: goto L_08ACF088;
    case 914u: goto L_08ACF098;
    case 915u: goto L_08ACF0A8;
    case 916u: goto L_08ACF0CC;
    case 917u: goto L_08ACF0DC;
    case 918u: goto L_08ACF158;
    case 919u: goto L_08ACF16C;
    case 920u: goto L_08ACF174;
    case 921u: goto L_08ACF1A0;
    case 922u: goto L_08ACF1B0;
    case 923u: goto L_08ACF1D8;
    case 924u: goto L_08ACF1E0;
    case 925u: goto L_08ACF1F0;
    case 926u: goto L_08ACF26C;
    case 927u: goto L_08ACF280;
    case 928u: goto L_08ACF288;
    case 929u: goto L_08ACF298;
    case 930u: goto L_08ACF314;
    case 931u: goto L_08ACF324;
    case 932u: goto L_08ACF330;
    case 933u: goto L_08ACF350;
    case 934u: goto L_08ACF364;
    case 935u: goto L_08ACF368;
    case 936u: goto L_08ACF384;
    case 937u: goto L_08ACF398;
    case 938u: goto L_08ACF3B4;
    case 939u: goto L_08ACF3C4;
    case 940u: goto L_08ACF3D4;
    case 941u: goto L_08ACF3DC;
    case 942u: goto L_08ACF3E4;
    case 943u: goto L_08ACF3FC;
    case 944u: goto L_08ACF424;
    case 945u: goto L_08ACF434;
    case 946u: goto L_08ACF444;
    case 947u: goto L_08ACF44C;
    case 948u: goto L_08ACF454;
    case 949u: goto L_08ACF4A4;
    case 950u: goto L_08ACF4B8;
    case 951u: goto L_08ACF4C8;
    case 952u: goto L_08ACF4D4;
    case 953u: goto L_08ACF4D8;
    case 954u: goto L_08ACF4E8;
    case 955u: goto L_08ACF4FC;
    case 956u: goto L_08ACF50C;
    case 957u: goto L_08ACF510;
    case 958u: goto L_08ACF52C;
    case 959u: goto L_08ACF538;
    case 960u: goto L_08ACF540;
    case 961u: goto L_08ACF550;
    case 962u: goto L_08ACF560;
    case 963u: goto L_08ACF564;
    case 964u: goto L_08ACF574;
    case 965u: goto L_08ACF584;
    case 966u: goto L_08ACF588;
    case 967u: goto L_08ACF590;
    case 968u: goto L_08ACF598;
    case 969u: goto L_08ACF5B8;
    case 970u: goto L_08ACF5C8;
    case 971u: goto L_08ACF5D0;
    case 972u: goto L_08ACF5D8;
    case 973u: goto L_08ACF5E0;
    case 974u: goto L_08ACF5EC;
    case 975u: goto L_08ACF5F8;
    case 976u: goto L_08ACF600;
    case 977u: goto L_08ACF604;
    case 978u: goto L_08ACF634;
    case 979u: goto L_08ACF63C;
    case 980u: goto L_08ACF648;
    case 981u: goto L_08ACF654;
    case 982u: goto L_08ACF674;
    case 983u: goto L_08ACF67C;
    case 984u: goto L_08ACF688;
    case 985u: goto L_08ACF694;
    case 986u: goto L_08ACF6B4;
    case 987u: goto L_08ACF6C0;
    case 988u: goto L_08ACF6C8;
    case 989u: goto L_08ACF6D4;
    case 990u: goto L_08ACF6E0;
    case 991u: goto L_08ACF6EC;
    case 992u: goto L_08ACF6F8;
    case 993u: goto L_08ACF700;
    case 994u: goto L_08ACF704;
    case 995u: goto L_08ACF734;
    case 996u: goto L_08ACF73C;
    case 997u: goto L_08ACF748;
    case 998u: goto L_08ACF754;
    case 999u: goto L_08ACF75C;
    case 1000u: goto L_08ACF760;
    case 1001u: goto L_08ACF790;
    case 1002u: goto L_08ACF7B4;
    case 1003u: goto L_08ACF7BC;
    case 1004u: goto L_08ACF7DC;
    case 1005u: goto L_08ACF7EC;
    case 1006u: goto L_08ACF81C;
    case 1007u: goto L_08ACF82C;
    case 1008u: goto L_08ACF83C;
    case 1009u: goto L_08ACF85C;
    case 1010u: goto L_08ACF884;
    case 1011u: goto L_08ACF88C;
    case 1012u: goto L_08ACF8A8;
    case 1013u: goto L_08ACF8B0;
    case 1014u: goto L_08ACF8B8;
    case 1015u: goto L_08ACF8C4;
    case 1016u: goto L_08ACF8D0;
    case 1017u: goto L_08ACF8D8;
    case 1018u: goto L_08ACF8DC;
    case 1019u: goto L_08ACF8F4;
    case 1020u: goto L_08ACF904;
    case 1021u: goto L_08ACF91C;
    case 1022u: goto L_08ACF934;
    case 1023u: goto L_08ACF93C;
    case 1024u: goto L_08ACF944;
    case 1025u: goto L_08ACF94C;
    case 1026u: goto L_08ACF954;
    case 1027u: goto L_08ACF95C;
    case 1028u: goto L_08ACF964;
    case 1029u: goto L_08ACF96C;
    case 1030u: goto L_08ACF974;
    case 1031u: goto L_08ACF97C;
    case 1032u: goto L_08ACF984;
    case 1033u: goto L_08ACF98C;
    case 1034u: goto L_08ACF994;
    case 1035u: goto L_08ACF99C;
    case 1036u: goto L_08ACF9A4;
    case 1037u: goto L_08ACF9AC;
    case 1038u: goto L_08ACF9B0;
    case 1039u: goto L_08ACF9BC;
    case 1040u: goto L_08ACF9D8;
    case 1041u: goto L_08ACF9E8;
    case 1042u: goto L_08ACF9F4;
    case 1043u: goto L_08ACF9FC;
    case 1044u: goto L_08ACFA04;
    case 1045u: goto L_08ACFA0C;
    case 1046u: goto L_08ACFA14;
    case 1047u: goto L_08ACFA24;
    case 1048u: goto L_08ACFA30;
    case 1049u: goto L_08ACFA38;
    case 1050u: goto L_08ACFA3C;
    case 1051u: goto L_08ACFA44;
    case 1052u: goto L_08ACFA4C;
    case 1053u: goto L_08ACFA60;
    case 1054u: goto L_08ACFA68;
    case 1055u: goto L_08ACFA70;
    case 1056u: goto L_08ACFA9C;
    case 1057u: goto L_08ACFAA8;
    case 1058u: goto L_08ACFAB4;
    case 1059u: goto L_08ACFAC0;
    case 1060u: goto L_08ACFACC;
    case 1061u: goto L_08ACFAD8;
    case 1062u: goto L_08ACFAE4;
    case 1063u: goto L_08ACFAF0;
    case 1064u: goto L_08ACFAFC;
    case 1065u: goto L_08ACFB08;
    case 1066u: goto L_08ACFB14;
    case 1067u: goto L_08ACFB20;
    case 1068u: goto L_08ACFB28;
    case 1069u: goto L_08ACFB48;
    case 1070u: goto L_08ACFB50;
    case 1071u: goto L_08ACFB58;
    case 1072u: goto L_08ACFB8C;
    case 1073u: goto L_08ACFB9C;
    case 1074u: goto L_08ACFBC8;
    case 1075u: goto L_08ACFBD4;
    case 1076u: goto L_08ACFBE0;
    case 1077u: goto L_08ACFBEC;
    case 1078u: goto L_08ACFBF8;
    case 1079u: goto L_08ACFC04;
    case 1080u: goto L_08ACFC10;
    case 1081u: goto L_08ACFC1C;
    case 1082u: goto L_08ACFC28;
    case 1083u: goto L_08ACFC34;
    case 1084u: goto L_08ACFC40;
    case 1085u: goto L_08ACFC4C;
    case 1086u: goto L_08ACFC54;
    case 1087u: goto L_08ACFC74;
    case 1088u: goto L_08ACFC7C;
    case 1089u: goto L_08ACFC84;
    case 1090u: goto L_08ACFCB0;
    case 1091u: goto L_08ACFCB8;
    case 1092u: goto L_08ACFCE4;
    case 1093u: goto L_08ACFCF4;
    case 1094u: goto L_08ACFD0C;
    case 1095u: goto L_08ACFD18;
    case 1096u: goto L_08ACFD34;
    case 1097u: goto L_08ACFD3C;
    case 1098u: goto L_08ACFD44;
    case 1099u: goto L_08ACFD54;
    case 1100u: goto L_08ACFD64;
    case 1101u: goto L_08ACFD74;
    case 1102u: goto L_08ACFD80;
    case 1103u: goto L_08ACFD88;
    case 1104u: goto L_08ACFD8C;
    case 1105u: goto L_08ACFD90;
    case 1106u: goto L_08ACFDA8;
    case 1107u: goto L_08ACFDB0;
    case 1108u: goto L_08ACFDC0;
    case 1109u: goto L_08ACFDD0;
    case 1110u: goto L_08ACFDDC;
    case 1111u: goto L_08ACFDE4;
    case 1112u: goto L_08ACFDE8;
    case 1113u: goto L_08ACFDEC;
    case 1114u: goto L_08ACFE04;
    case 1115u: goto L_08ACFE10;
    case 1116u: goto L_08ACFE18;
    case 1117u: goto L_08ACFE30;
    case 1118u: goto L_08ACFE50;
    case 1119u: goto L_08ACFE60;
    case 1120u: goto L_08ACFE68;
    case 1121u: goto L_08ACFE70;
    case 1122u: goto L_08ACFE80;
    case 1123u: goto L_08ACFE8C;
    case 1124u: goto L_08ACFE94;
    case 1125u: goto L_08ACFE98;
    case 1126u: goto L_08ACFE9C;
    case 1127u: goto L_08ACFEB4;
    case 1128u: goto L_08ACFEBC;
    case 1129u: goto L_08ACFECC;
    case 1130u: goto L_08ACFEDC;
    case 1131u: goto L_08ACFEE8;
    case 1132u: goto L_08ACFEF0;
    case 1133u: goto L_08ACFEF4;
    case 1134u: goto L_08ACFEF8;
    case 1135u: goto L_08ACFF10;
    case 1136u: goto L_08ACFF24;
    case 1137u: goto L_08ACFF34;
    case 1138u: goto L_08ACFF3C;
    case 1139u: goto L_08ACFF50;
    case 1140u: goto L_08ACFF68;
    case 1141u: goto L_08ACFF7C;
    case 1142u: goto L_08ACFF8C;
    case 1143u: goto L_08ACFF94;
    case 1144u: goto L_08ACFFA4;
    case 1145u: goto L_08ACFFB4;
    case 1146u: goto L_08ACFFBC;
    case 1147u: goto L_08ACFFD0;
    case 1148u: goto L_08ACFFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08ACC000:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC010u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08ACC010u) goto L_08ACC010;
    return;
L_08ACC010:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[31] = (0x08ACC01Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 914u, 0x08AC75B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC01Cu) goto L_08ACC01C;
    return;
L_08ACC01C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x08ACC02Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08ACDF58;
L_08ACC02C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC05C;
      }
      goto L_08ACC034;
    }
L_08ACC034:
    ctx.gpr[31] = (0x08ACC03Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC03Cu) goto L_08ACC03C;
    return;
L_08ACC03C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC05C;
      }
      goto L_08ACC044;
    }
L_08ACC044:
    ctx.gpr[31] = (0x08ACC04Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC04Cu) goto L_08ACC04C;
    return;
L_08ACC04C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x08ACC05Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08ACD698;
L_08ACC05C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08ACC078u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACC078u) goto L_08ACC078;
    return;
L_08ACC078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD280;
      }
      goto L_08ACC080;
    }
L_08ACC080:
    ctx.gpr[31] = (0x08ACC088u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC088u) goto L_08ACC088;
    return;
L_08ACC088:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC480;
      }
      goto L_08ACC090;
    }
L_08ACC090:
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC0A0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC0A0u) goto L_08ACC0A0;
    return;
L_08ACC0A0:
    ctx.gpr[31] = (0x08ACC0A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08ACC0A8u) goto L_08ACC0A8;
    return;
L_08ACC0A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC0B8;
      }
      goto L_08ACC0B0;
    }
L_08ACC0B0:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08ACC0B8;
L_08ACC0B8:
    ctx.gpr[31] = (0x08ACC0C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACC0C0u) goto L_08ACC0C0;
    return;
L_08ACC0C0:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACC0D4;
      }
      goto L_08ACC0CC;
    }
L_08ACC0CC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08ACC0D4;
L_08ACC0D4:
    ctx.gpr[31] = (0x08ACC0DCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC0DCu) goto L_08ACC0DC;
    return;
L_08ACC0DC:
    ctx.gpr[31] = (0x08ACC0E4u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC0E4u) goto L_08ACC0E4;
    return;
L_08ACC0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC478;
      }
      goto L_08ACC0F4;
    }
L_08ACC0F4:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACC280;
      }
      goto L_08ACC104;
    }
L_08ACC104:
    ctx.gpr[31] = (0x08ACC10Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC10Cu) goto L_08ACC10C;
    return;
L_08ACC10C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08ACC11Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 751u, 0x0890AED8u>(ctx, &aot_mem) && ctx.pc == 0x08ACC11Cu) goto L_08ACC11C;
    return;
L_08ACC11C:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACC238;
      }
      goto L_08ACC134;
    }
L_08ACC134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC1F8;
      }
      goto L_08ACC140;
    }
L_08ACC140:
    ctx.gpr[31] = (0x08ACC148u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(676)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 977u, 0x08AC7A04u>(ctx, &aot_mem) && ctx.pc == 0x08ACC148u) goto L_08ACC148;
    return;
L_08ACC148:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACC1F8;
      }
      goto L_08ACC154;
    }
L_08ACC154:
    ctx.gpr[31] = (0x08ACC15Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(676)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 977u, 0x08AC7A04u>(ctx, &aot_mem) && ctx.pc == 0x08ACC15Cu) goto L_08ACC15C;
    return;
L_08ACC15C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC1F8;
      }
      goto L_08ACC164;
    }
L_08ACC164:
    ctx.gpr[31] = (0x08ACC16Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(676)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC16Cu) goto L_08ACC16C;
    return;
L_08ACC16C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC1DC;
      }
      goto L_08ACC174;
    }
L_08ACC174:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACC1B4;
      }
      goto L_08ACC18C;
    }
L_08ACC18C:
    ctx.gpr[31] = (0x08ACC194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08ACC194u) goto L_08ACC194;
    return;
L_08ACC194:
    ctx.gpr[4] = (16294u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3156)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACC1C8;
      }
      goto L_08ACC1B4;
    }
L_08ACC1B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC1C0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACC1C0u) goto L_08ACC1C0;
    return;
L_08ACC1C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC444;
      }
      goto L_08ACC1C8;
    }
L_08ACC1C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC1D4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACC1D4u) goto L_08ACC1D4;
    return;
L_08ACC1D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC444;
      }
      goto L_08ACC1DC;
    }
L_08ACC1DC:
    ctx.gpr[31] = (0x08ACC1E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(676)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 977u, 0x08AC7A04u>(ctx, &aot_mem) && ctx.pc == 0x08ACC1E4u) goto L_08ACC1E4;
    return;
L_08ACC1E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC1F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACC1F0u) goto L_08ACC1F0;
    return;
L_08ACC1F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC444;
      }
      goto L_08ACC1F8;
    }
L_08ACC1F8:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACC224;
      }
      goto L_08ACC210;
    }
L_08ACC210:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC21Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACC21Cu) goto L_08ACC21C;
    return;
L_08ACC21C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC444;
      }
      goto L_08ACC224;
    }
L_08ACC224:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC230u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACC230u) goto L_08ACC230;
    return;
L_08ACC230:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC444;
      }
      goto L_08ACC238;
    }
L_08ACC238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC26C;
      }
      goto L_08ACC244;
    }
L_08ACC244:
    ctx.gpr[31] = (0x08ACC24Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(676)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 977u, 0x08AC7A04u>(ctx, &aot_mem) && ctx.pc == 0x08ACC24Cu) goto L_08ACC24C;
    return;
L_08ACC24C:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACC26C;
      }
      goto L_08ACC258;
    }
L_08ACC258:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC264u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACC264u) goto L_08ACC264;
    return;
L_08ACC264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC444;
      }
      goto L_08ACC26C;
    }
L_08ACC26C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC278u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACC278u) goto L_08ACC278;
    return;
L_08ACC278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC444;
      }
      goto L_08ACC280;
    }
L_08ACC280:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC28Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 979u, 0x08AC7A14u>(ctx, &aot_mem) && ctx.pc == 0x08ACC28Cu) goto L_08ACC28C;
    return;
L_08ACC28C:
    ctx.gpr[31] = (0x08ACC294u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC294u) goto L_08ACC294;
    return;
L_08ACC294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACC310;
      }
      goto L_08ACC2A4;
    }
L_08ACC2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACC2BCu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACC2BCu) goto L_08ACC2BC;
    return;
L_08ACC2BC:
    ctx.gpr[31] = (0x08ACC2C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 969u, 0x08AC79A8u>(ctx, &aot_mem) && ctx.pc == 0x08ACC2C4u) goto L_08ACC2C4;
    return;
L_08ACC2C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC310;
      }
      goto L_08ACC2CC;
    }
L_08ACC2CC:
    ctx.gpr[31] = (0x08ACC2D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC2D4u) goto L_08ACC2D4;
    return;
L_08ACC2D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1716)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC2EC;
      }
      goto L_08ACC2E0;
    }
L_08ACC2E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1716)));
    ctx.gpr[31] = (0x08ACC2ECu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1716));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08ACC2ECu) goto L_08ACC2EC;
    return;
L_08ACC2EC:
    ctx.gpr[31] = (0x08ACC2F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC2F4u) goto L_08ACC2F4;
    return;
L_08ACC2F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1716), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACC308;
      }
      goto L_08ACC2FC;
    }
L_08ACC2FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1716)));
    ctx.gpr[31] = (0x08ACC308u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1716));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08ACC308u) goto L_08ACC308;
    return;
L_08ACC308:
    ctx.gpr[31] = (0x08ACC310u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC310u) goto L_08ACC310;
    return;
L_08ACC310:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACC33C;
      }
      goto L_08ACC328;
    }
L_08ACC328:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC334u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACC334u) goto L_08ACC334;
    return;
L_08ACC334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC358;
      }
      goto L_08ACC33C;
    }
L_08ACC33C:
    ctx.gpr[31] = (0x08ACC344u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC344u) goto L_08ACC344;
    return;
L_08ACC344:
    ctx.gpr[31] = (0x08ACC34Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 977u, 0x08AC7A04u>(ctx, &aot_mem) && ctx.pc == 0x08ACC34Cu) goto L_08ACC34C;
    return;
L_08ACC34C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC358u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACC358u) goto L_08ACC358;
    return;
L_08ACC358:
    ctx.gpr[31] = (0x08ACC360u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACC360u) goto L_08ACC360;
    return;
L_08ACC360:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACC444;
      }
      goto L_08ACC36C;
    }
L_08ACC36C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC378u);
    ctx.gpr[5] = (0u | 133u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08ACC378u) goto L_08ACC378;
    return;
L_08ACC378:
    ctx.gpr[31] = (0x08ACC380u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC380u) goto L_08ACC380;
    return;
L_08ACC380:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACC38Cu);
    ctx.gpr[5] = (0u | 125u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08ACC38Cu) goto L_08ACC38C;
    return;
L_08ACC38C:
    ctx.gpr[31] = (0x08ACC394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC394u) goto L_08ACC394;
    return;
L_08ACC394:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(3000));
    ctx.gpr[31] = (0x08ACC3A0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1728), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC3A0u) goto L_08ACC3A0;
    return;
L_08ACC3A0:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(3000));
    ctx.gpr[31] = (0x08ACC3ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC3ACu) goto L_08ACC3AC;
    return;
L_08ACC3AC:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1728), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC3BCu);
    ctx.gpr[5] = (0u | 47u);
    goto L_08ACD4BC;
L_08ACC3BC:
    ctx.gpr[31] = (0x08ACC3C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC3C4u) goto L_08ACC3C4;
    return;
L_08ACC3C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACC3D0u);
    ctx.gpr[5] = (0u | 47u);
    goto L_08ACD4BC;
L_08ACC3D0:
    ctx.gpr[31] = (0x08ACC3D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACC3D8u) goto L_08ACC3D8;
    return;
L_08ACC3D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ACC3E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC3E4u) goto L_08ACC3E4;
    return;
L_08ACC3E4:
    ctx.gpr[31] = (0x08ACC3ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACC3ECu) goto L_08ACC3EC;
    return;
L_08ACC3EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC3FCu);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACC3FCu) goto L_08ACC3FC;
    return;
L_08ACC3FC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08ACC408u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC408u) goto L_08ACC408;
    return;
L_08ACC408:
    ctx.gpr[31] = (0x08ACC410u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACC410u) goto L_08ACC410;
    return;
L_08ACC410:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
    ctx.gpr[31] = (0x08ACC424u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 570u, 0x08A8EFB4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC424u) goto L_08ACC424;
    return;
L_08ACC424:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08ACC434u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 570u, 0x08A8EFB4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC434u) goto L_08ACC434;
    return;
L_08ACC434:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACC440u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC440u) goto L_08ACC440;
    return;
L_08ACC440:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08ACC444;
L_08ACC444:
    ctx.gpr[31] = (0x08ACC44Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACC44Cu) goto L_08ACC44C;
    return;
L_08ACC44C:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACC478;
      }
      goto L_08ACC458;
    }
L_08ACC458:
    ctx.gpr[31] = (0x08ACC460u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 977u, 0x08AC7A04u>(ctx, &aot_mem) && ctx.pc == 0x08ACC460u) goto L_08ACC460;
    return;
L_08ACC460:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC478;
      }
      goto L_08ACC46C;
    }
L_08ACC46C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC478u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACC478u) goto L_08ACC478;
    return;
L_08ACC478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC48C;
      }
      goto L_08ACC480;
    }
L_08ACC480:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC48Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08ACD4BC;
L_08ACC48C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD280;
      }
      goto L_08ACC494;
    }
L_08ACC494:
    ctx.gpr[31] = (0x08ACC49Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC49Cu) goto L_08ACC49C;
    return;
L_08ACC49C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC5C8;
      }
      goto L_08ACC4A4;
    }
L_08ACC4A4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC4B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 370u, 0x08AC5124u>(ctx, &aot_mem) && ctx.pc == 0x08ACC4B8u) goto L_08ACC4B8;
    return;
L_08ACC4B8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACC4C4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08ACC4C4u) goto L_08ACC4C4;
    return;
L_08ACC4C4:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC4D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08ACC4D8u) goto L_08ACC4D8;
    return;
L_08ACC4D8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACC4E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08ACC4E4u) goto L_08ACC4E4;
    return;
L_08ACC4E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC4F0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 914u, 0x08AC75B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC4F0u) goto L_08ACC4F0;
    return;
L_08ACC4F0:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08ACC504u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 686u, 0x0890AA84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC504u) goto L_08ACC504;
    return;
L_08ACC504:
    ctx.gpr[31] = (0x08ACC50Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC50Cu) goto L_08ACC50C;
    return;
L_08ACC50C:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACC558;
      }
      goto L_08ACC524;
    }
L_08ACC524:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08ACC530u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 914u, 0x08AC75B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC530u) goto L_08ACC530;
    return;
L_08ACC530:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08ACC544u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 686u, 0x0890AA84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC544u) goto L_08ACC544;
    return;
L_08ACC544:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC550u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACC550u) goto L_08ACC550;
    return;
L_08ACC550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC5C0;
      }
      goto L_08ACC558;
    }
L_08ACC558:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08ACC564u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 914u, 0x08AC75B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC564u) goto L_08ACC564;
    return;
L_08ACC564:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08ACC578u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 686u, 0x0890AA84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC578u) goto L_08ACC578;
    return;
L_08ACC578:
    ctx.gpr[31] = (0x08ACC580u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC580u) goto L_08ACC580;
    return;
L_08ACC580:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC5C0;
      }
      goto L_08ACC588;
    }
L_08ACC588:
    ctx.gpr[31] = (0x08ACC590u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC590u) goto L_08ACC590;
    return;
L_08ACC590:
    ctx.gpr[31] = (0x08ACC598u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 977u, 0x08AC7A04u>(ctx, &aot_mem) && ctx.pc == 0x08ACC598u) goto L_08ACC598;
    return;
L_08ACC598:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACC5C0;
      }
      goto L_08ACC5A4;
    }
L_08ACC5A4:
    ctx.gpr[31] = (0x08ACC5ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACC5ACu) goto L_08ACC5AC;
    return;
L_08ACC5AC:
    ctx.gpr[31] = (0x08ACC5B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 977u, 0x08AC7A04u>(ctx, &aot_mem) && ctx.pc == 0x08ACC5B4u) goto L_08ACC5B4;
    return;
L_08ACC5B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC5C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACC5C0u) goto L_08ACC5C0;
    return;
L_08ACC5C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC5D4;
      }
      goto L_08ACC5C8;
    }
L_08ACC5C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC5D4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08ACD4BC;
L_08ACC5D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD280;
      }
      goto L_08ACC5DC;
    }
L_08ACC5DC:
    ctx.gpr[31] = (0x08ACC5E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08ACC5E4u) goto L_08ACC5E4;
    return;
L_08ACC5E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCAB8;
      }
      goto L_08ACC5EC;
    }
L_08ACC5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACC604u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACC604u) goto L_08ACC604;
    return;
L_08ACC604:
    ctx.gpr[31] = (0x08ACC60Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 969u, 0x08AC79A8u>(ctx, &aot_mem) && ctx.pc == 0x08ACC60Cu) goto L_08ACC60C;
    return;
L_08ACC60C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCACC;
      }
      goto L_08ACC614;
    }
L_08ACC614:
    ctx.gpr[31] = (0x08ACC61Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC61Cu) goto L_08ACC61C;
    return;
L_08ACC61C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08ACC628u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 970u, 0x08AC79B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC628u) goto L_08ACC628;
    return;
L_08ACC628:
    ctx.gpr[31] = (0x08ACC630u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 958u, 0x08AC7940u>(ctx, &aot_mem) && ctx.pc == 0x08ACC630u) goto L_08ACC630;
    return;
L_08ACC630:
    ctx.gpr[31] = (0x08ACC638u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08ACC638u) goto L_08ACC638;
    return;
L_08ACC638:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACC644u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 945u, 0x08AC77BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC644u) goto L_08ACC644;
    return;
L_08ACC644:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08ACC650u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08ACC650u) goto L_08ACC650;
    return;
L_08ACC650:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1716), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACC664;
      }
      goto L_08ACC658;
    }
L_08ACC658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1716)));
    ctx.gpr[31] = (0x08ACC664u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1716));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08ACC664u) goto L_08ACC664;
    return;
L_08ACC664:
    ctx.gpr[31] = (0x08ACC66Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08ACC66Cu) goto L_08ACC66C;
    return;
L_08ACC66C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC678u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC678u) goto L_08ACC678;
    return;
L_08ACC678:
    ctx.gpr[31] = (0x08ACC680u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC680u) goto L_08ACC680;
    return;
L_08ACC680:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACC6A0;
      }
      goto L_08ACC690;
    }
L_08ACC690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_08ACC6A0;
L_08ACC6A0:
    ctx.gpr[31] = (0x08ACC6A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 944u, 0x08AC77B4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC6A8u) goto L_08ACC6A8;
    return;
L_08ACC6A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC6D0;
      }
      goto L_08ACC6B0;
    }
L_08ACC6B0:
    ctx.gpr[31] = (0x08ACC6B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08ACC6B8u) goto L_08ACC6B8;
    return;
L_08ACC6B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(636)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACC6F4;
      }
      goto L_08ACC6D0;
    }
L_08ACC6D0:
    ctx.gpr[31] = (0x08ACC6D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08ACC6D8u) goto L_08ACC6D8;
    return;
L_08ACC6D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(636)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACC71C;
      }
      goto L_08ACC6F4;
    }
L_08ACC6F4:
    ctx.gpr[31] = (0x08ACC6FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x08ACC6FCu) goto L_08ACC6FC;
    return;
L_08ACC6FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC708u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 979u, 0x08AC7A14u>(ctx, &aot_mem) && ctx.pc == 0x08ACC708u) goto L_08ACC708;
    return;
L_08ACC708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACCA88;
      }
      goto L_08ACC71C;
    }
L_08ACC71C:
    ctx.gpr[31] = (0x08ACC724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC724u) goto L_08ACC724;
    return;
L_08ACC724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC96C;
      }
      goto L_08ACC734;
    }
L_08ACC734:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACC96C;
      }
      goto L_08ACC744;
    }
L_08ACC744:
    ctx.gpr[31] = (0x08ACC74Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08ACC74Cu) goto L_08ACC74C;
    return;
L_08ACC74C:
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ACC774u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 913u, 0x08AC759Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC774u) goto L_08ACC774;
    return;
L_08ACC774:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x08ACC780u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 922u, 0x08AC764Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC780u) goto L_08ACC780;
    return;
L_08ACC780:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACC790u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 898u, 0x08AC7434u>(ctx, &aot_mem) && ctx.pc == 0x08ACC790u) goto L_08ACC790;
    return;
L_08ACC790:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACC79Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08ACC79Cu) goto L_08ACC79C;
    return;
L_08ACC79C:
    ctx.gpr[31] = (0x08ACC7A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACC7A4u) goto L_08ACC7A4;
    return;
L_08ACC7A4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[31] = (0x08ACC7B0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08ACC7B0u) goto L_08ACC7B0;
    return;
L_08ACC7B0:
    ctx.gpr[31] = (0x08ACC7B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 944u, 0x08AC77B4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC7B8u) goto L_08ACC7B8;
    return;
L_08ACC7B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC7D0;
      }
      goto L_08ACC7C0;
    }
L_08ACC7C0:
    ctx.gpr[31] = (0x08ACC7C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 945u, 0x08AC77BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC7C8u) goto L_08ACC7C8;
    return;
L_08ACC7C8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ACC7D8;
      }
      goto L_08ACC7D0;
    }
L_08ACC7D0:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08ACC7D8;
L_08ACC7D8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC7ECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC7ECu) goto L_08ACC7EC;
    return;
L_08ACC7EC:
    ctx.gpr[31] = (0x08ACC7F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC7F4u) goto L_08ACC7F4;
    return;
L_08ACC7F4:
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[0];
    ctx.gpr[31] = (0x08ACC800u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 919u, 0x08AC7620u>(ctx, &aot_mem) && ctx.pc == 0x08ACC800u) goto L_08ACC800;
    return;
L_08ACC800:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC80Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACC80Cu) goto L_08ACC80C;
    return;
L_08ACC80C:
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08ACC84Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC84Cu) goto L_08ACC84C;
    return;
L_08ACC84C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[31] = (0x08ACC85Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08ACC85Cu) goto L_08ACC85C;
    return;
L_08ACC85C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACC964;
      }
      goto L_08ACC864;
    }
L_08ACC864:
    ctx.gpr[31] = (0x08ACC86Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC86Cu) goto L_08ACC86C;
    return;
L_08ACC86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACC904;
      }
      goto L_08ACC87C;
    }
L_08ACC87C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC888u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACC888u) goto L_08ACC888;
    return;
L_08ACC888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACC8A4u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACC8A4u) goto L_08ACC8A4;
    return;
L_08ACC8A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 512u);
    ctx.gpr[31] = (0x08ACC8B8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08ACC8B8u) goto L_08ACC8B8;
    return;
L_08ACC8B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC8C4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 716u, 0x088E76D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC8C4u) goto L_08ACC8C4;
    return;
L_08ACC8C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08ACC8DCu);
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08ACC8DCu) goto L_08ACC8DC;
    return;
L_08ACC8DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACC8ECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACC8ECu) goto L_08ACC8EC;
    return;
L_08ACC8EC:
    ctx.gpr[4] = (0u | 500u);
    ctx.gpr[31] = (0x08ACC8F8u);
    ctx.gpr[5] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 951u, 0x08AC7830u>(ctx, &aot_mem) && ctx.pc == 0x08ACC8F8u) goto L_08ACC8F8;
    return;
L_08ACC8F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC904u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 613u, 0x0890A5BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC904u) goto L_08ACC904;
    return;
L_08ACC904:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACC94C;
      }
      goto L_08ACC91C;
    }
L_08ACC91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC94C;
      }
      goto L_08ACC92C;
    }
L_08ACC92C:
    ctx.gpr[4] = (0u | 2000u);
    ctx.gpr[31] = (0x08ACC938u);
    ctx.gpr[5] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 951u, 0x08AC7830u>(ctx, &aot_mem) && ctx.pc == 0x08ACC938u) goto L_08ACC938;
    return;
L_08ACC938:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC944u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem) && ctx.pc == 0x08ACC944u) goto L_08ACC944;
    return;
L_08ACC944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC964;
      }
      goto L_08ACC94C;
    }
L_08ACC94C:
    ctx.gpr[4] = (0u | 50u);
    ctx.gpr[31] = (0x08ACC958u);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 951u, 0x08AC7830u>(ctx, &aot_mem) && ctx.pc == 0x08ACC958u) goto L_08ACC958;
    return;
L_08ACC958:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC964u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem) && ctx.pc == 0x08ACC964u) goto L_08ACC964;
    return;
L_08ACC964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA88;
      }
      goto L_08ACC96C;
    }
L_08ACC96C:
    ctx.gpr[31] = (0x08ACC974u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC974u) goto L_08ACC974;
    return;
L_08ACC974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACCA88;
      }
      goto L_08ACC984;
    }
L_08ACC984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA88;
      }
      goto L_08ACC994;
    }
L_08ACC994:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACC9E0;
      }
      goto L_08ACC9AC;
    }
L_08ACC9AC:
    ctx.gpr[31] = (0x08ACC9B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08ACC9B4u) goto L_08ACC9B4;
    return;
L_08ACC9B4:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC9CCu);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 751u, 0x0890AED8u>(ctx, &aot_mem) && ctx.pc == 0x08ACC9CCu) goto L_08ACC9CC;
    return;
L_08ACC9CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC9D8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACC9D8u) goto L_08ACC9D8;
    return;
L_08ACC9D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA88;
      }
      goto L_08ACC9E0;
    }
L_08ACC9E0:
    ctx.gpr[31] = (0x08ACC9E8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 895u, 0x08AC740Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC9E8u) goto L_08ACC9E8;
    return;
L_08ACC9E8:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACCA50;
      }
      goto L_08ACC9F8;
    }
L_08ACC9F8:
    ctx.gpr[31] = (0x08ACCA00u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 895u, 0x08AC740Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCA00u) goto L_08ACCA00;
    return;
L_08ACCA00:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACCA50;
      }
      goto L_08ACCA10;
    }
L_08ACCA10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACCA80;
      }
      goto L_08ACCA2C;
    }
L_08ACCA2C:
    ctx.gpr[31] = (0x08ACCA34u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA34u) goto L_08ACCA34;
    return;
L_08ACCA34:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-764)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-768)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08ACCA48u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCA48u) goto L_08ACCA48;
    return;
L_08ACCA48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ACCA80;
      }
      goto L_08ACCA50;
    }
L_08ACCA50:
    ctx.gpr[31] = (0x08ACCA58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA58u) goto L_08ACCA58;
    return;
L_08ACCA58:
    ctx.gpr[6] = (16448u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08ACCA6Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 751u, 0x0890AED8u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA6Cu) goto L_08ACCA6C;
    return;
L_08ACCA6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACCA78u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA78u) goto L_08ACCA78;
    return;
L_08ACCA78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA88;
      }
      goto L_08ACCA80;
    }
L_08ACCA80:
    ctx.gpr[31] = (0x08ACCA88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCA88u) goto L_08ACCA88;
    return;
L_08ACCA88:
    ctx.gpr[31] = (0x08ACCA90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA90u) goto L_08ACCA90;
    return;
L_08ACCA90:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ACCAA8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x08ACCAA8u) goto L_08ACCAA8;
    return;
L_08ACCAA8:
    ctx.gpr[31] = (0x08ACCAB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCAB0u) goto L_08ACCAB0;
    return;
L_08ACCAB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCACC;
      }
      goto L_08ACCAB8;
    }
L_08ACCAB8:
    ctx.gpr[31] = (0x08ACCAC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x08ACCAC0u) goto L_08ACCAC0;
    return;
L_08ACCAC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_08ACCACC;
L_08ACCACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD280;
      }
      goto L_08ACCAD4;
    }
L_08ACCAD4:
    ctx.gpr[31] = (0x08ACCADCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08ACCADCu) goto L_08ACCADC;
    return;
L_08ACCADC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCC1C;
      }
      goto L_08ACCAE4;
    }
L_08ACCAE4:
    ctx.gpr[5] = (16752u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACCAF4u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACCAF4u) goto L_08ACCAF4;
    return;
L_08ACCAF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x08ACCB00u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 914u, 0x08AC75B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB00u) goto L_08ACCB00;
    return;
L_08ACCB00:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (16672u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08ACCB38u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB38u) goto L_08ACCB38;
    return;
L_08ACCB38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1216))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACCC00;
      }
      goto L_08ACCB4C;
    }
L_08ACCB4C:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[31] = (0x08ACCB60u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 965u, 0x08AC7978u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB60u) goto L_08ACCB60;
    return;
L_08ACCB60:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACCBE4;
      }
      goto L_08ACCB6C;
    }
L_08ACCB6C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[31] = (0x08ACCB7Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB7Cu) goto L_08ACCB7C;
    return;
L_08ACCB7C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACCB88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB88u) goto L_08ACCB88;
    return;
L_08ACCB88:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08ACCB98u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB98u) goto L_08ACCB98;
    return;
L_08ACCB98:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACCBA4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08ACCBA4u) goto L_08ACCBA4;
    return;
L_08ACCBA4:
    ctx.gpr[31] = (0x08ACCBACu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACCBACu) goto L_08ACCBAC;
    return;
L_08ACCBAC:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACCBE4;
      }
      goto L_08ACCBBC;
    }
L_08ACCBBC:
    ctx.gpr[31] = (0x08ACCBC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCBC4u) goto L_08ACCBC4;
    return;
L_08ACCBC4:
    ctx.gpr[31] = (0x08ACCBCCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACCBCCu) goto L_08ACCBCC;
    return;
L_08ACCBCC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08ACCBE4;
      }
      goto L_08ACCBD4;
    }
L_08ACCBD4:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACCBE0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACCBE0u) goto L_08ACCBE0;
    return;
L_08ACCBE0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08ACCBE4;
L_08ACCBE4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1216))))));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCB4C;
      }
      goto L_08ACCC00;
    }
L_08ACCC00:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCC14;
      }
      goto L_08ACCC08;
    }
L_08ACCC08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACCC14u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 188u, 0x08910AD4u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC14u) goto L_08ACCC14;
    return;
L_08ACCC14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCC34;
      }
      goto L_08ACCC1C;
    }
L_08ACCC1C:
    ctx.gpr[31] = (0x08ACCC24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC24u) goto L_08ACCC24;
    return;
L_08ACCC24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08ACCC34u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08ACD698;
L_08ACCC34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD280;
      }
      goto L_08ACCC3C;
    }
L_08ACCC3C:
    ctx.gpr[31] = (0x08ACCC44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC44u) goto L_08ACCC44;
    return;
L_08ACCC44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCCCC;
      }
      goto L_08ACCC4C;
    }
L_08ACCC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCC78;
      }
      goto L_08ACCC60;
    }
L_08ACCC60:
    ctx.gpr[31] = (0x08ACCC68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC68u) goto L_08ACCC68;
    return;
L_08ACCC68:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACCC78u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 594u, 0x088EB074u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC78u) goto L_08ACCC78;
    return;
L_08ACCC78:
    ctx.gpr[31] = (0x08ACCC80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 977u, 0x08AC7A04u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC80u) goto L_08ACCC80;
    return;
L_08ACCC80:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACCCD4;
      }
      goto L_08ACCC8C;
    }
L_08ACCC8C:
    ctx.gpr[31] = (0x08ACCC94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC94u) goto L_08ACCC94;
    return;
L_08ACCC94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCCD4;
      }
      goto L_08ACCC9C;
    }
L_08ACCC9C:
    ctx.gpr[31] = (0x08ACCCA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCA4u) goto L_08ACCCA4;
    return;
L_08ACCCA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ACCCBCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCBCu) goto L_08ACCCBC;
    return;
L_08ACCCBC:
    ctx.gpr[31] = (0x08ACCCC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCCC4u) goto L_08ACCCC4;
    return;
L_08ACCCC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCCD4;
      }
      goto L_08ACCCCC;
    }
L_08ACCCCC:
    ctx.gpr[31] = (0x08ACCCD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCD4u) goto L_08ACCCD4;
    return;
L_08ACCCD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD280;
      }
      goto L_08ACCCDC;
    }
L_08ACCCDC:
    ctx.gpr[31] = (0x08ACCCE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCE4u) goto L_08ACCCE4;
    return;
L_08ACCCE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD220;
      }
      goto L_08ACCCEC;
    }
L_08ACCCEC:
    ctx.gpr[31] = (0x08ACCCF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCF4u) goto L_08ACCCF4;
    return;
L_08ACCCF4:
    ctx.gpr[31] = (0x08ACCCFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCCFCu) goto L_08ACCCFC;
    return;
L_08ACCCFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCD8C;
      }
      goto L_08ACCD04;
    }
L_08ACCD04:
    ctx.gpr[31] = (0x08ACCD0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD0Cu) goto L_08ACCD0C;
    return;
L_08ACCD0C:
    ctx.gpr[31] = (0x08ACCD14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD14u) goto L_08ACCD14;
    return;
L_08ACCD14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCD8C;
      }
      goto L_08ACCD1C;
    }
L_08ACCD1C:
    ctx.gpr[31] = (0x08ACCD24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD24u) goto L_08ACCD24;
    return;
L_08ACCD24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACCD8C;
      }
      goto L_08ACCD3C;
    }
L_08ACCD3C:
    ctx.gpr[31] = (0x08ACCD44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD44u) goto L_08ACCD44;
    return;
L_08ACCD44:
    ctx.gpr[31] = (0x08ACCD4Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 977u, 0x08AC7A04u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD4Cu) goto L_08ACCD4C;
    return;
L_08ACCD4C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCD7C;
      }
      goto L_08ACCD58;
    }
L_08ACCD58:
    ctx.gpr[31] = (0x08ACCD60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD60u) goto L_08ACCD60;
    return;
L_08ACCD60:
    ctx.gpr[31] = (0x08ACCD68u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD68u) goto L_08ACCD68;
    return;
L_08ACCD68:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACCD9C;
      }
      goto L_08ACCD74;
    }
L_08ACCD74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCDB4;
      }
      goto L_08ACCD7C;
    }
L_08ACCD7C:
    ctx.gpr[31] = (0x08ACCD84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD84u) goto L_08ACCD84;
    return;
L_08ACCD84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD47C;
      }
      goto L_08ACCD8C;
    }
L_08ACCD8C:
    ctx.gpr[31] = (0x08ACCD94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD94u) goto L_08ACCD94;
    return;
L_08ACCD94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD47C;
      }
      goto L_08ACCD9C;
    }
L_08ACCD9C:
    ctx.gpr[31] = (0x08ACCDA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCDA4u) goto L_08ACCDA4;
    return;
L_08ACCDA4:
    ctx.gpr[31] = (0x08ACCDACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCDACu) goto L_08ACCDAC;
    return;
L_08ACCDAC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACCDDC;
      }
      goto L_08ACCDB4;
    }
L_08ACCDB4:
    ctx.gpr[31] = (0x08ACCDBCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCDBCu) goto L_08ACCDBC;
    return;
L_08ACCDBC:
    ctx.gpr[31] = (0x08ACCDC4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACCDC4u) goto L_08ACCDC4;
    return;
L_08ACCDC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACCE08;
      }
      goto L_08ACCDD4;
    }
L_08ACCDD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCE18;
      }
      goto L_08ACCDDC;
    }
L_08ACCDDC:
    ctx.gpr[31] = (0x08ACCDE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCDE4u) goto L_08ACCDE4;
    return;
L_08ACCDE4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x08ACCDF4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08ACD698;
L_08ACCDF4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACCE00u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE00u) goto L_08ACCE00;
    return;
L_08ACCE00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD47C;
      }
      goto L_08ACCE08;
    }
L_08ACCE08:
    ctx.gpr[31] = (0x08ACCE10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE10u) goto L_08ACCE10;
    return;
L_08ACCE10:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACCECC;
      }
      goto L_08ACCE18;
    }
L_08ACCE18:
    ctx.gpr[31] = (0x08ACCE20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE20u) goto L_08ACCE20;
    return;
L_08ACCE20:
    ctx.gpr[31] = (0x08ACCE28u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE28u) goto L_08ACCE28;
    return;
L_08ACCE28:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACCE4C;
      }
      goto L_08ACCE34;
    }
L_08ACCE34:
    ctx.gpr[31] = (0x08ACCE3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE3Cu) goto L_08ACCE3C;
    return;
L_08ACCE3C:
    ctx.gpr[31] = (0x08ACCE44u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE44u) goto L_08ACCE44;
    return;
L_08ACCE44:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACCECC;
      }
      goto L_08ACCE4C;
    }
L_08ACCE4C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[31] = (0x08ACCE58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE58u) goto L_08ACCE58;
    return;
L_08ACCE58:
    ctx.gpr[31] = (0x08ACCE60u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE60u) goto L_08ACCE60;
    return;
L_08ACCE60:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACCE6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE6Cu) goto L_08ACCE6C;
    return;
L_08ACCE6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACCE7Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE7Cu) goto L_08ACCE7C;
    return;
L_08ACCE7C:
    ctx.gpr[31] = (0x08ACCE84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 917u, 0x08AC75F8u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE84u) goto L_08ACCE84;
    return;
L_08ACCE84:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACCF18;
      }
      goto L_08ACCEA0;
    }
L_08ACCEA0:
    ctx.gpr[31] = (0x08ACCEA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACCEA8u) goto L_08ACCEA8;
    return;
L_08ACCEA8:
    ctx.gpr[31] = (0x08ACCEB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 949u, 0x08AC7810u>(ctx, &aot_mem) && ctx.pc == 0x08ACCEB0u) goto L_08ACCEB0;
    return;
L_08ACCEB0:
    ctx.gpr[4] = (ctx.gpr[2] & 7u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08ACCEC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08ACCEC4u) goto L_08ACCEC4;
    return;
L_08ACCEC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD218;
      }
      goto L_08ACCECC;
    }
L_08ACCECC:
    ctx.gpr[31] = (0x08ACCED4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACCED4u) goto L_08ACCED4;
    return;
L_08ACCED4:
    ctx.gpr[31] = (0x08ACCEDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCEDCu) goto L_08ACCEDC;
    return;
L_08ACCEDC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACCEECu);
    ctx.gpr[6] = (0u | 15000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCEECu) goto L_08ACCEEC;
    return;
L_08ACCEEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACCF04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x08ACCF04u) goto L_08ACCF04;
    return;
L_08ACCF04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACCF10u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACCF10u) goto L_08ACCF10;
    return;
L_08ACCF10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD47C;
      }
      goto L_08ACCF18;
    }
L_08ACCF18:
    ctx.gpr[4] = (16378u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57671u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACCF84;
      }
      goto L_08ACCF34;
    }
L_08ACCF34:
    ctx.gpr[31] = (0x08ACCF3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCF3Cu) goto L_08ACCF3C;
    return;
L_08ACCF3C:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08ACCF50u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 751u, 0x0890AED8u>(ctx, &aot_mem) && ctx.pc == 0x08ACCF50u) goto L_08ACCF50;
    return;
L_08ACCF50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACCF60u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08ACCF60u) goto L_08ACCF60;
    return;
L_08ACCF60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF7C;
      }
      goto L_08ACCF6C;
    }
L_08ACCF6C:
    ctx.gpr[5] = (16294u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.gpr[31] = (0x08ACCF7Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 933u, 0x08AC770Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCF7Cu) goto L_08ACCF7C;
    return;
L_08ACCF7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD218;
      }
      goto L_08ACCF84;
    }
L_08ACCF84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACCF94u);
    ctx.gpr[6] = (0u | 158u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08ACCF94u) goto L_08ACCF94;
    return;
L_08ACCF94:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACCFA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCFA0u) goto L_08ACCFA0;
    return;
L_08ACCFA0:
    ctx.gpr[31] = (0x08ACCFA8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACCFA8u) goto L_08ACCFA8;
    return;
L_08ACCFA8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ACCFB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACCFB4u) goto L_08ACCFB4;
    return;
L_08ACCFB4:
    ctx.gpr[31] = (0x08ACCFBCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACCFBCu) goto L_08ACCFBC;
    return;
L_08ACCFBC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08ACCFC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACCFC8u) goto L_08ACCFC8;
    return;
L_08ACCFC8:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ACCFD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACCFD4u) goto L_08ACCFD4;
    return;
L_08ACCFD4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08ACCFE8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 947u, 0x08AC77F0u>(ctx, &aot_mem) && ctx.pc == 0x08ACCFE8u) goto L_08ACCFE8;
    return;
L_08ACCFE8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACCFF4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 21u, 0x08AC80DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACCFF4u) goto L_08ACCFF4;
    return;
L_08ACCFF4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD094;
      }
      goto L_08ACCFFC;
    }
L_08ACCFFC:
    ctx.gpr[31] = (0x08ACD004u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACD004u) goto L_08ACD004;
    return;
L_08ACD004:
    ctx.gpr[31] = (0x08ACD00Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 627u, 0x08906E38u>(ctx, &aot_mem) && ctx.pc == 0x08ACD00Cu) goto L_08ACD00C;
    return;
L_08ACD00C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD094;
      }
      goto L_08ACD014;
    }
L_08ACD014:
    ctx.gpr[31] = (0x08ACD01Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 970u, 0x08AC79B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACD01Cu) goto L_08ACD01C;
    return;
L_08ACD01C:
    ctx.gpr[31] = (0x08ACD024u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 958u, 0x08AC7940u>(ctx, &aot_mem) && ctx.pc == 0x08ACD024u) goto L_08ACD024;
    return;
L_08ACD024:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD054;
      }
      goto L_08ACD02C;
    }
L_08ACD02C:
    ctx.gpr[31] = (0x08ACD034u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 970u, 0x08AC79B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACD034u) goto L_08ACD034;
    return;
L_08ACD034:
    ctx.gpr[31] = (0x08ACD03Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 958u, 0x08AC7940u>(ctx, &aot_mem) && ctx.pc == 0x08ACD03Cu) goto L_08ACD03C;
    return;
L_08ACD03C:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACD054;
      }
      goto L_08ACD048;
    }
L_08ACD048:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD054u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD054u) goto L_08ACD054;
    return;
L_08ACD054:
    ctx.gpr[8] = (16640u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ACD070u);
    ctx.gpr[7] = (0u | 158u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD070u) goto L_08ACD070;
    return;
L_08ACD070:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACD080u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 931u, 0x08AC76ECu>(ctx, &aot_mem) && ctx.pc == 0x08ACD080u) goto L_08ACD080;
    return;
L_08ACD080:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACD08Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 931u, 0x08AC76ECu>(ctx, &aot_mem) && ctx.pc == 0x08ACD08Cu) goto L_08ACD08C;
    return;
L_08ACD08C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD218;
      }
      goto L_08ACD094;
    }
L_08ACD094:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD218;
      }
      goto L_08ACD09C;
    }
L_08ACD09C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACD0A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 932u, 0x08AC76FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACD0A8u) goto L_08ACD0A8;
    return;
L_08ACD0A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD0E4;
      }
      goto L_08ACD0B0;
    }
L_08ACD0B0:
    ctx.gpr[31] = (0x08ACD0B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 934u, 0x08AC7714u>(ctx, &aot_mem) && ctx.pc == 0x08ACD0B8u) goto L_08ACD0B8;
    return;
L_08ACD0B8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08ACD0C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 935u, 0x08AC771Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD0C4u) goto L_08ACD0C4;
    return;
L_08ACD0C4:
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[0];
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACD218;
      }
      goto L_08ACD0E4;
    }
L_08ACD0E4:
    ctx.gpr[8] = (16640u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x08ACD100u);
    ctx.gpr[7] = (0u | 214u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD100u) goto L_08ACD100;
    return;
L_08ACD100:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACD110u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 931u, 0x08AC76ECu>(ctx, &aot_mem) && ctx.pc == 0x08ACD110u) goto L_08ACD110;
    return;
L_08ACD110:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACD11Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 931u, 0x08AC76ECu>(ctx, &aot_mem) && ctx.pc == 0x08ACD11Cu) goto L_08ACD11C;
    return;
L_08ACD11C:
    ctx.gpr[31] = (0x08ACD124u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACD124u) goto L_08ACD124;
    return;
L_08ACD124:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACD130u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 108u, 0x089387ACu>(ctx, &aot_mem) && ctx.pc == 0x08ACD130u) goto L_08ACD130;
    return;
L_08ACD130:
    ctx.gpr[31] = (0x08ACD138u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACD138u) goto L_08ACD138;
    return;
L_08ACD138:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACD144u);
    ctx.gpr[5] = (0u | 123u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08ACD144u) goto L_08ACD144;
    return;
L_08ACD144:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD150u);
    ctx.gpr[5] = (0u | 121u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08ACD150u) goto L_08ACD150;
    return;
L_08ACD150:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    ctx.gpr[31] = (0x08ACD164u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACD164u) goto L_08ACD164;
    return;
L_08ACD164:
    ctx.gpr[31] = (0x08ACD16Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACD16Cu) goto L_08ACD16C;
    return;
L_08ACD16C:
    ctx.gpr[31] = (0x08ACD174u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACD174u) goto L_08ACD174;
    return;
L_08ACD174:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACD1D0;
      }
      goto L_08ACD180;
    }
L_08ACD180:
    ctx.gpr[31] = (0x08ACD188u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACD188u) goto L_08ACD188;
    return;
L_08ACD188:
    ctx.gpr[31] = (0x08ACD190u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACD190u) goto L_08ACD190;
    return;
L_08ACD190:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACD1D0;
      }
      goto L_08ACD198;
    }
L_08ACD198:
    ctx.gpr[31] = (0x08ACD1A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACD1A0u) goto L_08ACD1A0;
    return;
L_08ACD1A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x08ACD1B0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08ACD698;
L_08ACD1B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD1BCu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACD1BCu) goto L_08ACD1BC;
    return;
L_08ACD1BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD1C8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x08ACD1C8u) goto L_08ACD1C8;
    return;
L_08ACD1C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD218;
      }
      goto L_08ACD1D0;
    }
L_08ACD1D0:
    ctx.gpr[31] = (0x08ACD1D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 7u, 0x08AC8054u>(ctx, &aot_mem) && ctx.pc == 0x08ACD1D8u) goto L_08ACD1D8;
    return;
L_08ACD1D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACD1E8u);
    ctx.gpr[6] = (0u | 15000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD1E8u) goto L_08ACD1E8;
    return;
L_08ACD1E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACD200u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x08ACD200u) goto L_08ACD200;
    return;
L_08ACD200:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD20Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACD20Cu) goto L_08ACD20C;
    return;
L_08ACD20C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD218u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x08ACD218u) goto L_08ACD218;
    return;
L_08ACD218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD234;
      }
      goto L_08ACD220;
    }
L_08ACD220:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD22Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 982u, 0x08AC7A50u>(ctx, &aot_mem) && ctx.pc == 0x08ACD22Cu) goto L_08ACD22C;
    return;
L_08ACD22C:
    ctx.gpr[31] = (0x08ACD234u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACD234u) goto L_08ACD234;
    return;
L_08ACD234:
    ctx.gpr[31] = (0x08ACD23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACD23Cu) goto L_08ACD23C;
    return;
L_08ACD23C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1728)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD278;
      }
      goto L_08ACD24C;
    }
L_08ACD24C:
    ctx.gpr[31] = (0x08ACD254u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08ACD254u) goto L_08ACD254;
    return;
L_08ACD254:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD278;
      }
      goto L_08ACD25C;
    }
L_08ACD25C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1728), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD26Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 982u, 0x08AC7A50u>(ctx, &aot_mem) && ctx.pc == 0x08ACD26Cu) goto L_08ACD26C;
    return;
L_08ACD26C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1930))))));
    ctx.gpr[31] = (0x08ACD278u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08ACD278u) goto L_08ACD278;
    return;
L_08ACD278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD280;
      }
      goto L_08ACD280;
    }
L_08ACD280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD2B4;
      }
      goto L_08ACD290;
    }
L_08ACD290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD47C;
      }
      goto L_08ACD29C;
    }
L_08ACD29C:
    ctx.gpr[31] = (0x08ACD2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACD2A4u) goto L_08ACD2A4;
    return;
L_08ACD2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1756)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD47C;
      }
      goto L_08ACD2B4;
    }
L_08ACD2B4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08ACD2C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 25u, 0x08AC80FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACD2C0u) goto L_08ACD2C0;
    return;
L_08ACD2C0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACD2E0;
      }
      goto L_08ACD2CC;
    }
L_08ACD2CC:
    ctx.gpr[31] = (0x08ACD2D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08ACD2D4u) goto L_08ACD2D4;
    return;
L_08ACD2D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD2E0;
      }
      goto L_08ACD2DC;
    }
L_08ACD2DC:
    ctx.gpr[16] = (0u | 1u);
    goto L_08ACD2E0;
L_08ACD2E0:
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACD3C8;
      }
      goto L_08ACD2EC;
    }
L_08ACD2EC:
    ctx.gpr[31] = (0x08ACD2F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACD2F4u) goto L_08ACD2F4;
    return;
L_08ACD2F4:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACD3C8;
      }
      goto L_08ACD300;
    }
L_08ACD300:
    ctx.gpr[31] = (0x08ACD308u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD308u) goto L_08ACD308;
    return;
L_08ACD308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACD3C8;
      }
      goto L_08ACD318;
    }
L_08ACD318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACD330u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACD330u) goto L_08ACD330;
    return;
L_08ACD330:
    ctx.gpr[31] = (0x08ACD338u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 969u, 0x08AC79A8u>(ctx, &aot_mem) && ctx.pc == 0x08ACD338u) goto L_08ACD338;
    return;
L_08ACD338:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD3C8;
      }
      goto L_08ACD340;
    }
L_08ACD340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACD358u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACD358u) goto L_08ACD358;
    return;
L_08ACD358:
    ctx.gpr[31] = (0x08ACD360u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 969u, 0x08AC79A8u>(ctx, &aot_mem) && ctx.pc == 0x08ACD360u) goto L_08ACD360;
    return;
L_08ACD360:
    ctx.gpr[31] = (0x08ACD368u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 937u, 0x08AC773Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD368u) goto L_08ACD368;
    return;
L_08ACD368:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD3C8;
      }
      goto L_08ACD370;
    }
L_08ACD370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACD388u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACD388u) goto L_08ACD388;
    return;
L_08ACD388:
    ctx.gpr[31] = (0x08ACD390u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 969u, 0x08AC79A8u>(ctx, &aot_mem) && ctx.pc == 0x08ACD390u) goto L_08ACD390;
    return;
L_08ACD390:
    ctx.gpr[31] = (0x08ACD398u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 973u, 0x08AC79DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACD398u) goto L_08ACD398;
    return;
L_08ACD398:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD3C8;
      }
      goto L_08ACD3A0;
    }
L_08ACD3A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD3C8;
      }
      goto L_08ACD3AC;
    }
L_08ACD3AC:
    ctx.gpr[31] = (0x08ACD3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACD3B4u) goto L_08ACD3B4;
    return;
L_08ACD3B4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1756), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD3C8u);
    ctx.gpr[5] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x08ACD3C8u) goto L_08ACD3C8;
    return;
L_08ACD3C8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD47C;
      }
      goto L_08ACD3D0;
    }
L_08ACD3D0:
    ctx.gpr[31] = (0x08ACD3D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08ACD3D8u) goto L_08ACD3D8;
    return;
L_08ACD3D8:
    ctx.gpr[31] = (0x08ACD3E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACD3E0u) goto L_08ACD3E0;
    return;
L_08ACD3E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1756)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD3FC;
      }
      goto L_08ACD3F0;
    }
L_08ACD3F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD40C;
      }
      goto L_08ACD3FC;
    }
L_08ACD3FC:
    ctx.gpr[31] = (0x08ACD404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACD404u) goto L_08ACD404;
    return;
L_08ACD404:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1756), ctx.gpr[4]);
    goto L_08ACD40C;
L_08ACD40C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD454;
      }
      goto L_08ACD414;
    }
L_08ACD414:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08ACD420u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2228), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 949u, 0x08AC7810u>(ctx, &aot_mem) && ctx.pc == 0x08ACD420u) goto L_08ACD420;
    return;
L_08ACD420:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_08ACD43C;
    }
    goto L_08ACD42C;
L_08ACD42C:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACD43C;
      }
      goto L_08ACD43C;
    }
L_08ACD43C:
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08ACD44Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08ACD44Cu) goto L_08ACD44C;
    return;
L_08ACD44C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD46C;
      }
      goto L_08ACD454;
    }
L_08ACD454:
    ctx.gpr[31] = (0x08ACD45Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD45Cu) goto L_08ACD45C;
    return;
L_08ACD45C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD46C;
      }
      goto L_08ACD464;
    }
L_08ACD464:
    ctx.gpr[31] = (0x08ACD46Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08ACD46Cu) goto L_08ACD46C;
    return;
L_08ACD46C:
    ctx.gpr[31] = (0x08ACD474u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem) && ctx.pc == 0x08ACD474u) goto L_08ACD474;
    return;
L_08ACD474:
    ctx.gpr[31] = (0x08ACD47Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x08ACD47Cu) goto L_08ACD47C;
    return;
L_08ACD47C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1280)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1284)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1288)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1292)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1320)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1324)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1332)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD4BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1156)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACD4F4;
      }
      goto L_08ACD4E0;
    }
L_08ACD4E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(616));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08ACD4F4;
L_08ACD4F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_08ACD530;
      }
      goto L_08ACD504;
    }
L_08ACD504:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACD530;
      }
      goto L_08ACD50C;
    }
L_08ACD50C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD528;
      }
      goto L_08ACD518;
    }
L_08ACD518:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD538;
      }
      goto L_08ACD520;
    }
L_08ACD520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD5AC;
      }
      goto L_08ACD528;
    }
L_08ACD528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD680;
      }
      goto L_08ACD530;
    }
L_08ACD530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD680;
      }
      goto L_08ACD538;
    }
L_08ACD538:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 38u);
      if (branch_taken) {
          goto L_08ACD56C;
      }
      goto L_08ACD548;
    }
L_08ACD548:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD574;
      }
      goto L_08ACD554;
    }
L_08ACD554:
    ctx.gpr[31] = (0x08ACD55Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD55Cu) goto L_08ACD55C;
    return;
L_08ACD55C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD580;
      }
      goto L_08ACD564;
    }
L_08ACD564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD590;
      }
      goto L_08ACD56C;
    }
L_08ACD56C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACD554;
      }
      goto L_08ACD574;
    }
L_08ACD574:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2196), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), 0u);
      if (branch_taken) {
          goto L_08ACD680;
      }
      goto L_08ACD580;
    }
L_08ACD580:
    ctx.gpr[31] = (0x08ACD588u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD588u) goto L_08ACD588;
    return;
L_08ACD588:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD598;
      }
      goto L_08ACD590;
    }
L_08ACD590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD574;
      }
      goto L_08ACD598;
    }
L_08ACD598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACD680;
      }
      goto L_08ACD5AC;
    }
L_08ACD5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ACD5C0;
      }
      goto L_08ACD5B8;
    }
L_08ACD5B8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD5E0;
      }
      goto L_08ACD5C0;
    }
L_08ACD5C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD5CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x08ACD5CCu) goto L_08ACD5CC;
    return;
L_08ACD5CC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ACD5E8;
      }
      goto L_08ACD5D8;
    }
L_08ACD5D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD680;
      }
      goto L_08ACD5E0;
    }
L_08ACD5E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD680;
      }
      goto L_08ACD5E8;
    }
L_08ACD5E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD5F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1076u, 0x08AC7EF0u>(ctx, &aot_mem) && ctx.pc == 0x08ACD5F4u) goto L_08ACD5F4;
    return;
L_08ACD5F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-129));
      if (branch_taken) {
          goto L_08ACD60C;
      }
      goto L_08ACD5FC;
    }
L_08ACD5FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] & ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ACD62C;
      }
      goto L_08ACD60C;
    }
L_08ACD60C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ACD620;
      }
      goto L_08ACD618;
    }
L_08ACD618:
    ctx.gpr[31] = (0x08ACD620u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1053u, 0x08AC7DFCu>(ctx, &aot_mem) && ctx.pc == 0x08ACD620u) goto L_08ACD620;
    return;
L_08ACD620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2196), ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[4] & ctx.gpr[18]);
    goto L_08ACD62C;
L_08ACD62C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ACD680;
      }
      goto L_08ACD634;
    }
L_08ACD634:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 55 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD680;
      }
      goto L_08ACD640;
    }
L_08ACD640:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14824)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD658:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2240), 0u);
    ctx.gpr[31] = (0x08ACD664u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD664u) goto L_08ACD664;
    return;
L_08ACD664:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD670u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACD670u) goto L_08ACD670;
    return;
L_08ACD670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD680;
      }
      goto L_08ACD678;
    }
L_08ACD678:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), 0u);
      if (branch_taken) {
          goto L_08ACD680;
      }
      goto L_08ACD680;
    }
L_08ACD680:
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
L_08ACD698:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ACD740;
      }
      goto L_08ACD6BC;
    }
L_08ACD6BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACD738;
      }
      goto L_08ACD6CC;
    }
L_08ACD6CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACD738;
      }
      goto L_08ACD6DC;
    }
L_08ACD6DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACD738;
      }
      goto L_08ACD6EC;
    }
L_08ACD6EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACD704u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACD704u) goto L_08ACD704;
    return;
L_08ACD704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD730;
      }
      goto L_08ACD71C;
    }
L_08ACD71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
        goto L_08ACD748;
    }
    goto L_08ACD728;
L_08ACD728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD750;
      }
      goto L_08ACD730;
    }
L_08ACD730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD738;
    }
L_08ACD738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD740;
    }
L_08ACD740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD748;
    }
L_08ACD748:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD774;
      }
      goto L_08ACD750;
    }
L_08ACD750:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ACD76C;
      }
      goto L_08ACD758;
    }
L_08ACD758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_08ACD77C;
      }
      goto L_08ACD764;
    }
L_08ACD764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD79C;
      }
      goto L_08ACD76C;
    }
L_08ACD76C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD774;
    }
L_08ACD774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD77C;
    }
L_08ACD77C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_08ACD79C;
      }
      goto L_08ACD784;
    }
L_08ACD784:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 21u);
      if (branch_taken) {
          goto L_08ACD79C;
      }
      goto L_08ACD78C;
    }
L_08ACD78C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 22u);
      if (branch_taken) {
          goto L_08ACD79C;
      }
      goto L_08ACD794;
    }
L_08ACD794:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACD7B0;
      }
      goto L_08ACD79C;
    }
L_08ACD79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08ACD7B8;
      }
      goto L_08ACD7A8;
    }
L_08ACD7A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD964;
      }
      goto L_08ACD7B0;
    }
L_08ACD7B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD7B8;
    }
L_08ACD7B8:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(45) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7));
      if (branch_taken) {
          goto L_08ACD914;
      }
      goto L_08ACD7C8;
    }
L_08ACD7C8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(15048)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD7E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD7E8;
    }
L_08ACD7E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACD808;
      }
      goto L_08ACD7F4;
    }
L_08ACD7F4:
    ctx.gpr[4] = (0u | 34u);
    if (ctx.gpr[18] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
        goto L_08ACD810;
    }
    goto L_08ACD800;
L_08ACD800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD914;
      }
      goto L_08ACD808;
    }
L_08ACD808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD810;
    }
L_08ACD810:
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD800;
      }
      goto L_08ACD81C;
    }
L_08ACD81C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD824;
    }
L_08ACD824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACD84C;
      }
      goto L_08ACD830;
    }
L_08ACD830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1748)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD854;
      }
      goto L_08ACD844;
    }
L_08ACD844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD884;
      }
      goto L_08ACD84C;
    }
L_08ACD84C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD854;
    }
L_08ACD854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACD884;
      }
      goto L_08ACD860;
    }
L_08ACD860:
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACD874u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 627u, 0x089AB048u>(ctx, &aot_mem) && ctx.pc == 0x08ACD874u) goto L_08ACD874;
    return;
L_08ACD874:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD884;
      }
      goto L_08ACD87C;
    }
L_08ACD87C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD884;
    }
L_08ACD884:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD914;
      }
      goto L_08ACD88C;
    }
L_08ACD88C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACD8B0;
      }
      goto L_08ACD898;
    }
L_08ACD898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD8B8;
      }
      goto L_08ACD8A8;
    }
L_08ACD8A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD8C0;
      }
      goto L_08ACD8B0;
    }
L_08ACD8B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD8B8;
    }
L_08ACD8B8:
    ctx.gpr[31] = (0x08ACD8C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem) && ctx.pc == 0x08ACD8C0u) goto L_08ACD8C0;
    return;
L_08ACD8C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD914;
      }
      goto L_08ACD8C8;
    }
L_08ACD8C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACD8DC;
      }
      goto L_08ACD8D4;
    }
L_08ACD8D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD914;
      }
      goto L_08ACD8DC;
    }
L_08ACD8DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD8E4;
    }
L_08ACD8E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD914;
      }
      goto L_08ACD8EC;
    }
L_08ACD8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACD900;
      }
      goto L_08ACD8F8;
    }
L_08ACD8F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD914;
      }
      goto L_08ACD900;
    }
L_08ACD900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD908;
    }
L_08ACD908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACD954;
      }
      goto L_08ACD914;
    }
L_08ACD914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACD92Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem) && ctx.pc == 0x08ACD92Cu) goto L_08ACD92C;
    return;
L_08ACD92C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACD938u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x08ACD938u) goto L_08ACD938;
    return;
L_08ACD938:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[31] = (0x08ACD944u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1076u, 0x08AC7EF0u>(ctx, &aot_mem) && ctx.pc == 0x08ACD944u) goto L_08ACD944;
    return;
L_08ACD944:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ACD9AC;
      }
      goto L_08ACD94C;
    }
L_08ACD94C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD9C4;
      }
      goto L_08ACD954;
    }
L_08ACD954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD95C;
    }
L_08ACD95C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD914;
      }
      goto L_08ACD964;
    }
L_08ACD964:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_08ACD98C;
      }
      goto L_08ACD974;
    }
L_08ACD974:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08ACD98C;
      }
      goto L_08ACD97C;
    }
L_08ACD97C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACD914;
      }
      goto L_08ACD984;
    }
L_08ACD984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD914;
      }
      goto L_08ACD98C;
    }
L_08ACD98C:
    ctx.gpr[31] = (0x08ACD994u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08ACD994u) goto L_08ACD994;
    return;
L_08ACD994:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD9A4;
      }
      goto L_08ACD99C;
    }
L_08ACD99C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD914;
      }
      goto L_08ACD9A4;
    }
L_08ACD9A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACD9AC;
    }
L_08ACD9AC:
    ctx.gpr[31] = (0x08ACD9B4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1076u, 0x08AC7EF0u>(ctx, &aot_mem) && ctx.pc == 0x08ACD9B4u) goto L_08ACD9B4;
    return;
L_08ACD9B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD9C4;
      }
      goto L_08ACD9BC;
    }
L_08ACD9BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ACDA04;
      }
      goto L_08ACD9C4;
    }
L_08ACD9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08ACDA00;
      }
      goto L_08ACD9D0;
    }
L_08ACD9D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACD9DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1076u, 0x08AC7EF0u>(ctx, &aot_mem) && ctx.pc == 0x08ACD9DCu) goto L_08ACD9DC;
    return;
L_08ACD9DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD9F8;
      }
      goto L_08ACD9E4;
    }
L_08ACD9E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACD9F0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1068u, 0x08AC7E98u>(ctx, &aot_mem) && ctx.pc == 0x08ACD9F0u) goto L_08ACD9F0;
    return;
L_08ACD9F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA00;
      }
      goto L_08ACD9F8;
    }
L_08ACD9F8:
    ctx.gpr[31] = (0x08ACDA00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1053u, 0x08AC7DFCu>(ctx, &aot_mem) && ctx.pc == 0x08ACDA00u) goto L_08ACDA00;
    return;
L_08ACDA00:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
    goto L_08ACDA04;
L_08ACDA04:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(50) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08ACDF38;
      }
      goto L_08ACDA14;
    }
L_08ACDA14:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(15232)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACDA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08ACDA48u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACDA48u) goto L_08ACDA48;
    return;
L_08ACDA48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACDA50;
    }
L_08ACDA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDA6C;
      }
      goto L_08ACDA60;
    }
L_08ACDA60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACDA6Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACDA6Cu) goto L_08ACDA6C;
    return;
L_08ACDA6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
        goto L_08ACDA90;
    }
    goto L_08ACDA7C;
L_08ACDA7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDAA8;
      }
      goto L_08ACDA8C;
    }
L_08ACDA8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    goto L_08ACDA90;
L_08ACDA90:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACDAA8;
      }
      goto L_08ACDA98;
    }
L_08ACDA98:
    ctx.gpr[31] = (0x08ACDAA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDAA0u) goto L_08ACDAA0;
    return;
L_08ACDAA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDAB0;
      }
      goto L_08ACDAA8;
    }
L_08ACDAA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDAC0;
      }
      goto L_08ACDAB0;
    }
L_08ACDAB0:
    ctx.gpr[31] = (0x08ACDAB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08ACDAB8u) goto L_08ACDAB8;
    return;
L_08ACDAB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF40;
      }
      goto L_08ACDAC0;
    }
L_08ACDAC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACDACCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 188u, 0x08910AD4u>(ctx, &aot_mem) && ctx.pc == 0x08ACDACCu) goto L_08ACDACC;
    return;
L_08ACDACC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[31] = (0x08ACDAD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDAD8u) goto L_08ACDAD8;
    return;
L_08ACDAD8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACDAF4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x08ACDAF4u) goto L_08ACDAF4;
    return;
L_08ACDAF4:
    ctx.gpr[4] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACDB10;
      }
      goto L_08ACDB00;
    }
L_08ACDB00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1756), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACDB78;
      }
      goto L_08ACDB10;
    }
L_08ACDB10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDB74;
      }
      goto L_08ACDB20;
    }
L_08ACDB20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDB74;
      }
      goto L_08ACDB30;
    }
L_08ACDB30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDB60;
      }
      goto L_08ACDB4C;
    }
L_08ACDB4C:
    ctx.gpr[31] = (0x08ACDB54u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08ACDB54u) goto L_08ACDB54;
    return;
L_08ACDB54:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDB74;
      }
      goto L_08ACDB60;
    }
L_08ACDB60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACDB6Cu);
    ctx.gpr[5] = (0u | 14000u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x08ACDB6Cu) goto L_08ACDB6C;
    return;
L_08ACDB6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDB78;
      }
      goto L_08ACDB74;
    }
L_08ACDB74:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1756), 0u);
    goto L_08ACDB78;
L_08ACDB78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA48;
      }
      goto L_08ACDB80;
    }
L_08ACDB80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACDB8Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 840u, 0x0890FC94u>(ctx, &aot_mem) && ctx.pc == 0x08ACDB8Cu) goto L_08ACDB8C;
    return;
L_08ACDB8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDBA4;
      }
      goto L_08ACDB98;
    }
L_08ACDB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x08ACDBA4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2192));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08ACDBA4u) goto L_08ACDBA4;
    return;
L_08ACDBA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA48;
      }
      goto L_08ACDBAC;
    }
L_08ACDBAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACDBB8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 840u, 0x0890FC94u>(ctx, &aot_mem) && ctx.pc == 0x08ACDBB8u) goto L_08ACDBB8;
    return;
L_08ACDBB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDBD0;
      }
      goto L_08ACDBC4;
    }
L_08ACDBC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x08ACDBD0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2192));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08ACDBD0u) goto L_08ACDBD0;
    return;
L_08ACDBD0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACDA48;
      }
      goto L_08ACDBDC;
    }
L_08ACDBDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACDBE8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x08ACDBE8u) goto L_08ACDBE8;
    return;
L_08ACDBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA48;
      }
      goto L_08ACDBF0;
    }
L_08ACDBF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACDBFCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 475u, 0x0890DF20u>(ctx, &aot_mem) && ctx.pc == 0x08ACDBFCu) goto L_08ACDBFC;
    return;
L_08ACDBFC:
    ctx.gpr[31] = (0x08ACDC04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08ACDC04u) goto L_08ACDC04;
    return;
L_08ACDC04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA48;
      }
      goto L_08ACDC0C;
    }
L_08ACDC0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACDC18u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 188u, 0x08910AD4u>(ctx, &aot_mem) && ctx.pc == 0x08ACDC18u) goto L_08ACDC18;
    return;
L_08ACDC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDC94;
      }
      goto L_08ACDC2C;
    }
L_08ACDC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1728)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDC94;
      }
      goto L_08ACDC38;
    }
L_08ACDC38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(565)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDC94;
      }
      goto L_08ACDC50;
    }
L_08ACDC50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[31] = (0x08ACDC5Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDC5Cu) goto L_08ACDC5C;
    return;
L_08ACDC5C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1200));
      if (branch_taken) {
          goto L_08ACDC7C;
      }
      goto L_08ACDC64;
    }
L_08ACDC64:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1728), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACDC94;
      }
      goto L_08ACDC7C;
    }
L_08ACDC7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(565)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDC50;
      }
      goto L_08ACDC94;
    }
L_08ACDC94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA48;
      }
      goto L_08ACDC9C;
    }
L_08ACDC9C:
    ctx.gpr[31] = (0x08ACDCA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x08ACDCA4u) goto L_08ACDCA4;
    return;
L_08ACDCA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDCD0;
      }
      goto L_08ACDCC4;
    }
L_08ACDCC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x08ACDCD0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2192));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08ACDCD0u) goto L_08ACDCD0;
    return;
L_08ACDCD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDCE8;
      }
      goto L_08ACDCDC;
    }
L_08ACDCDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    ctx.gpr[31] = (0x08ACDCE8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1716));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08ACDCE8u) goto L_08ACDCE8;
    return;
L_08ACDCE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1716), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACDCF8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 840u, 0x0890FC94u>(ctx, &aot_mem) && ctx.pc == 0x08ACDCF8u) goto L_08ACDCF8;
    return;
L_08ACDCF8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACDD14u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x08ACDD14u) goto L_08ACDD14;
    return;
L_08ACDD14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDD2C;
      }
      goto L_08ACDD20;
    }
L_08ACDD20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x08ACDD2Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2192));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08ACDD2Cu) goto L_08ACDD2C;
    return;
L_08ACDD2C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1716), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08ACDD40;
      }
      goto L_08ACDD34;
    }
L_08ACDD34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    ctx.gpr[31] = (0x08ACDD40u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1716));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08ACDD40u) goto L_08ACDD40;
    return;
L_08ACDD40:
    ctx.gpr[31] = (0x08ACDD48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDD48u) goto L_08ACDD48;
    return;
L_08ACDD48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDE34;
      }
      goto L_08ACDD50;
    }
L_08ACDD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACDD68u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACDD68u) goto L_08ACDD68;
    return;
L_08ACDD68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDE34;
      }
      goto L_08ACDD74;
    }
L_08ACDD74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACDD8Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACDD8Cu) goto L_08ACDD8C;
    return;
L_08ACDD8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDE34;
      }
      goto L_08ACDDAC;
    }
L_08ACDDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACDDC4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACDDC4u) goto L_08ACDDC4;
    return;
L_08ACDDC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[7] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACDDE8;
      }
      goto L_08ACDDD8;
    }
L_08ACDDD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ACDDF0;
      }
      goto L_08ACDDE8;
    }
L_08ACDDE8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ACDDF0;
L_08ACDDF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDE34;
      }
      goto L_08ACDDF8;
    }
L_08ACDDF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACDE10u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACDE10u) goto L_08ACDE10;
    return;
L_08ACDE10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08ACDE34u);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACDE34u) goto L_08ACDE34;
    return;
L_08ACDE34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACDE50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 378u, 0x08A420BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACDE50u) goto L_08ACDE50;
    return;
L_08ACDE50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDE64;
      }
      goto L_08ACDE58;
    }
L_08ACDE58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACDE64u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 377u, 0x088A1AF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACDE64u) goto L_08ACDE64;
    return;
L_08ACDE64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA48;
      }
      goto L_08ACDE6C;
    }
L_08ACDE6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDE84;
      }
      goto L_08ACDE78;
    }
L_08ACDE78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x08ACDE84u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2192));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08ACDE84u) goto L_08ACDE84;
    return;
L_08ACDE84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACDE90u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 840u, 0x0890FC94u>(ctx, &aot_mem) && ctx.pc == 0x08ACDE90u) goto L_08ACDE90;
    return;
L_08ACDE90:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACDEACu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x08ACDEACu) goto L_08ACDEAC;
    return;
L_08ACDEAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDEC4;
      }
      goto L_08ACDEB8;
    }
L_08ACDEB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x08ACDEC4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2192));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08ACDEC4u) goto L_08ACDEC4;
    return;
L_08ACDEC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA48;
      }
      goto L_08ACDECC;
    }
L_08ACDECC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACDED8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 840u, 0x0890FC94u>(ctx, &aot_mem) && ctx.pc == 0x08ACDED8u) goto L_08ACDED8;
    return;
L_08ACDED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDEF0;
      }
      goto L_08ACDEE4;
    }
L_08ACDEE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x08ACDEF0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2192));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08ACDEF0u) goto L_08ACDEF0;
    return;
L_08ACDEF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA48;
      }
      goto L_08ACDEF8;
    }
L_08ACDEF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACDF04u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 840u, 0x0890FC94u>(ctx, &aot_mem) && ctx.pc == 0x08ACDF04u) goto L_08ACDF04;
    return;
L_08ACDF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDF1C;
      }
      goto L_08ACDF10;
    }
L_08ACDF10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x08ACDF1Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2192));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08ACDF1Cu) goto L_08ACDF1C;
    return;
L_08ACDF1C:
    ctx.gpr[31] = (0x08ACDF24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDF24u) goto L_08ACDF24;
    return;
L_08ACDF24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x08ACDF30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 319u, 0x08909270u>(ctx, &aot_mem) && ctx.pc == 0x08ACDF30u) goto L_08ACDF30;
    return;
L_08ACDF30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA48;
      }
      goto L_08ACDF38;
    }
L_08ACDF38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA48;
      }
      goto L_08ACDF40;
    }
L_08ACDF40:
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
L_08ACDF58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16544u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (0u | 57u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACDFB4;
      }
      goto L_08ACDF90;
    }
L_08ACDF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDFB4;
      }
      goto L_08ACDFA0;
    }
L_08ACDFA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(640)));
    if (ctx.gpr[4] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(640)));
        goto L_08ACDFBC;
    }
    goto L_08ACDFAC;
L_08ACDFAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDFC4;
      }
      goto L_08ACDFB4;
    }
L_08ACDFB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE3FC;
      }
      goto L_08ACDFBC;
    }
L_08ACDFBC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDFD8;
      }
      goto L_08ACDFC4;
    }
L_08ACDFC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ACDFE0;
      }
      goto L_08ACDFD0;
    }
L_08ACDFD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE070;
      }
      goto L_08ACDFD8;
    }
L_08ACDFD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE3FC;
      }
      goto L_08ACDFE0;
    }
L_08ACDFE0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08ACE070;
      }
      goto L_08ACDFF0;
    }
L_08ACDFF0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(15432)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE008:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x08ACE014u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem) && ctx.pc == 0x08ACE014u) goto L_08ACE014;
    return;
L_08ACE014:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE034;
      }
      goto L_08ACE01C;
    }
L_08ACE01C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE03C;
      }
      goto L_08ACE02C;
    }
L_08ACE02C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE044;
      }
      goto L_08ACE034;
    }
L_08ACE034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE3FC;
      }
      goto L_08ACE03C;
    }
L_08ACE03C:
    ctx.gpr[31] = (0x08ACE044u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem) && ctx.pc == 0x08ACE044u) goto L_08ACE044;
    return;
L_08ACE044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE070;
      }
      goto L_08ACE04C;
    }
L_08ACE04C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2096));
    ctx.gpr[31] = (0x08ACE058u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem) && ctx.pc == 0x08ACE058u) goto L_08ACE058;
    return;
L_08ACE058:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE068;
      }
      goto L_08ACE060;
    }
L_08ACE060:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE070;
      }
      goto L_08ACE068;
    }
L_08ACE068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE3FC;
      }
      goto L_08ACE070;
    }
L_08ACE070:
    ctx.gpr[31] = (0x08ACE078u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem) && ctx.pc == 0x08ACE078u) goto L_08ACE078;
    return;
L_08ACE078:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE084u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x08ACE084u) goto L_08ACE084;
    return;
L_08ACE084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(50) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08ACE3C8;
      }
      goto L_08ACE0A4;
    }
L_08ACE0A4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(15616)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE0BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACE0D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x08ACE0D0u) goto L_08ACE0D0;
    return;
L_08ACE0D0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE0E8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x08ACE0E8u) goto L_08ACE0E8;
    return;
L_08ACE0E8:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACE0F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE0F8u) goto L_08ACE0F8;
    return;
L_08ACE0F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2060)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE164;
      }
      goto L_08ACE15C;
    }
L_08ACE15C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE3C8;
      }
      goto L_08ACE164;
    }
L_08ACE164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE3FC;
      }
      goto L_08ACE16C;
    }
L_08ACE16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACE184u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x08ACE184u) goto L_08ACE184;
    return;
L_08ACE184:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08ACE198u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x08ACE198u) goto L_08ACE198;
    return;
L_08ACE198:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACE1A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE1A8u) goto L_08ACE1A8;
    return;
L_08ACE1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE1C0;
      }
      goto L_08ACE1B8;
    }
L_08ACE1B8:
    ctx.gpr[31] = (0x08ACE1C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem) && ctx.pc == 0x08ACE1C0u) goto L_08ACE1C0;
    return;
L_08ACE1C0:
    ctx.gpr[4] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACE1E8;
      }
      goto L_08ACE1CC;
    }
L_08ACE1CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE1DCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE1DCu) goto L_08ACE1DC;
    return;
L_08ACE1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACE1E8;
L_08ACE1E8:
    ctx.gpr[4] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACE210;
      }
      goto L_08ACE1F4;
    }
L_08ACE1F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE204u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE204u) goto L_08ACE204;
    return;
L_08ACE204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACE210;
L_08ACE210:
    ctx.gpr[4] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACE238;
      }
      goto L_08ACE21C;
    }
L_08ACE21C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE22Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE22Cu) goto L_08ACE22C;
    return;
L_08ACE22C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACE238;
L_08ACE238:
    ctx.gpr[4] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACE260;
      }
      goto L_08ACE244;
    }
L_08ACE244:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE254u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE254u) goto L_08ACE254;
    return;
L_08ACE254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACE260;
L_08ACE260:
    ctx.gpr[4] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACE294;
      }
      goto L_08ACE26C;
    }
L_08ACE26C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08ACE288u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE288u) goto L_08ACE288;
    return;
L_08ACE288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACE294;
L_08ACE294:
    ctx.gpr[4] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACE2C8;
      }
      goto L_08ACE2A0;
    }
L_08ACE2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08ACE2BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE2BCu) goto L_08ACE2BC;
    return;
L_08ACE2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACE2C8;
L_08ACE2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2060)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE38C;
      }
      goto L_08ACE334;
    }
L_08ACE334:
    ctx.gpr[4] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 40u);
      if (branch_taken) {
          goto L_08ACE368;
      }
      goto L_08ACE340;
    }
L_08ACE340:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 43u);
      if (branch_taken) {
          goto L_08ACE368;
      }
      goto L_08ACE348;
    }
L_08ACE348:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 44u);
      if (branch_taken) {
          goto L_08ACE368;
      }
      goto L_08ACE350;
    }
L_08ACE350:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 45u);
      if (branch_taken) {
          goto L_08ACE368;
      }
      goto L_08ACE358;
    }
L_08ACE358:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 53u);
      if (branch_taken) {
          goto L_08ACE368;
      }
      goto L_08ACE360;
    }
L_08ACE360:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACE39C;
      }
      goto L_08ACE368;
    }
L_08ACE368:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE394;
      }
      goto L_08ACE38C;
    }
L_08ACE38C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE3C8;
      }
      goto L_08ACE394;
    }
L_08ACE394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE3FC;
      }
      goto L_08ACE39C;
    }
L_08ACE39C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE3FC;
      }
      goto L_08ACE3A4;
    }
L_08ACE3A4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2096));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE3C0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACE3C0u) goto L_08ACE3C0;
    return;
L_08ACE3C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE3C8;
      }
      goto L_08ACE3C8;
    }
L_08ACE3C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[31] = (0x08ACE3D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1076u, 0x08AC7EF0u>(ctx, &aot_mem) && ctx.pc == 0x08ACE3D4u) goto L_08ACE3D4;
    return;
L_08ACE3D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE3E4;
      }
      goto L_08ACE3DC;
    }
L_08ACE3DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ACE3FC;
      }
      goto L_08ACE3E4;
    }
L_08ACE3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ACE3F8;
      }
      goto L_08ACE3F0;
    }
L_08ACE3F0:
    ctx.gpr[31] = (0x08ACE3F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1053u, 0x08AC7DFCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE3F8u) goto L_08ACE3F8;
    return;
L_08ACE3F8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2196), ctx.gpr[16]);
    goto L_08ACE3FC;
L_08ACE3FC:
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
L_08ACE418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (0u | 57u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACE478;
      }
      goto L_08ACE454;
    }
L_08ACE454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACE478;
      }
      goto L_08ACE464;
    }
L_08ACE464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(640)));
    if (ctx.gpr[4] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(640)));
        goto L_08ACE480;
    }
    goto L_08ACE470;
L_08ACE470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE488;
      }
      goto L_08ACE478;
    }
L_08ACE478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE634;
      }
      goto L_08ACE480;
    }
L_08ACE480:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE4A0;
      }
      goto L_08ACE488;
    }
L_08ACE488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[18] = (ctx.gpr[19] < static_cast<std::uint32_t>(46) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE4A8;
      }
      goto L_08ACE498;
    }
L_08ACE498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE558;
      }
      goto L_08ACE4A0;
    }
L_08ACE4A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE634;
      }
      goto L_08ACE4A8;
    }
L_08ACE4A8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE558;
      }
      goto L_08ACE4B0;
    }
L_08ACE4B0:
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[19]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(15816)));
    jump_target = ctx.gpr[1];
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE4C8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x08ACE4D4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem) && ctx.pc == 0x08ACE4D4u) goto L_08ACE4D4;
    return;
L_08ACE4D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE4F0;
      }
      goto L_08ACE4DC;
    }
L_08ACE4DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2060)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE508;
      }
      goto L_08ACE4F0;
    }
L_08ACE4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE510;
      }
      goto L_08ACE500;
    }
L_08ACE500:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE518;
      }
      goto L_08ACE508;
    }
L_08ACE508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE634;
      }
      goto L_08ACE510;
    }
L_08ACE510:
    ctx.gpr[31] = (0x08ACE518u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem) && ctx.pc == 0x08ACE518u) goto L_08ACE518;
    return;
L_08ACE518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE558;
      }
      goto L_08ACE520;
    }
L_08ACE520:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2096));
    ctx.gpr[31] = (0x08ACE52Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem) && ctx.pc == 0x08ACE52Cu) goto L_08ACE52C;
    return;
L_08ACE52C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE548;
      }
      goto L_08ACE534;
    }
L_08ACE534:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2112)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE550;
      }
      goto L_08ACE548;
    }
L_08ACE548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE558;
      }
      goto L_08ACE550;
    }
L_08ACE550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE634;
      }
      goto L_08ACE558;
    }
L_08ACE558:
    ctx.gpr[31] = (0x08ACE560u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem) && ctx.pc == 0x08ACE560u) goto L_08ACE560;
    return;
L_08ACE560:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE56Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x08ACE56Cu) goto L_08ACE56C;
    return;
L_08ACE56C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACE588u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1076u, 0x08AC7EF0u>(ctx, &aot_mem) && ctx.pc == 0x08ACE588u) goto L_08ACE588;
    return;
L_08ACE588:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE598;
      }
      goto L_08ACE590;
    }
L_08ACE590:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ACE5B0;
      }
      goto L_08ACE598;
    }
L_08ACE598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ACE5AC;
      }
      goto L_08ACE5A4;
    }
L_08ACE5A4:
    ctx.gpr[31] = (0x08ACE5ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1053u, 0x08AC7DFCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE5ACu) goto L_08ACE5AC;
    return;
L_08ACE5AC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2196), ctx.gpr[16]);
    goto L_08ACE5B0;
L_08ACE5B0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE634;
      }
      goto L_08ACE5B8;
    }
L_08ACE5B8:
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[19]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16000)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE5D0:
    ctx.gpr[31] = (0x08ACE5D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x08ACE5D8u) goto L_08ACE5D8;
    return;
L_08ACE5D8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08ACE5ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x08ACE5ECu) goto L_08ACE5EC;
    return;
L_08ACE5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE614;
      }
      goto L_08ACE60C;
    }
L_08ACE60C:
    ctx.gpr[31] = (0x08ACE614u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem) && ctx.pc == 0x08ACE614u) goto L_08ACE614;
    return;
L_08ACE614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE634;
      }
      goto L_08ACE61C;
    }
L_08ACE61C:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2096));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE634;
      }
      goto L_08ACE634;
    }
L_08ACE634:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE658:
    ctx.gpr[5] = (2236u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (0u | 19u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6160));
    goto L_08ACE66C;
L_08ACE66C:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08ACE66C;
      }
      goto L_08ACE68C;
    }
L_08ACE68C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE694:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[8] & 255u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08ACE6BC;
L_08ACE6BC:
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[19] << 6u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6160));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < 100 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE6E8;
      }
      goto L_08ACE6D8;
    }
L_08ACE6D8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE6E8;
      }
      goto L_08ACE6E0;
    }
L_08ACE6E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACE6BC;
      }
      goto L_08ACE6E8;
    }
L_08ACE6E8:
    ctx.gpr[6] = (0u | 100u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ACE77C;
      }
      goto L_08ACE6F4;
    }
L_08ACE6F4:
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[19] << 6u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6160));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x08ACE714u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08ACE714u) goto L_08ACE714;
    return;
L_08ACE714:
    ctx.gpr[5] = (ctx.gpr[16] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ACE784;
      }
      goto L_08ACE720;
    }
L_08ACE720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[19] << 6u);
    goto L_08ACE728;
L_08ACE728:
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6160));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE7A4;
      }
      goto L_08ACE77C;
    }
L_08ACE77C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACE7A4;
      }
      goto L_08ACE784;
    }
L_08ACE784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08ACE79C;
    }
    goto L_08ACE79C;
L_08ACE79C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[19] << 6u);
      if (branch_taken) {
          goto L_08ACE728;
      }
      goto L_08ACE7A4;
    }
L_08ACE7A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE7C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEA10;
      }
      goto L_08ACE7CC;
    }
L_08ACE7CC:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10304)));
    ctx.fpr[19] = std::bit_cast<float>(0u);
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10320)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[4]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACE7F4;
      }
      goto L_08ACE7EC;
    }
L_08ACE7EC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[5] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ACE7F8;
      }
      goto L_08ACE7F4;
    }
L_08ACE7F4:
    ctx.fpr[5] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    goto L_08ACE7F8;
L_08ACE7F8:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE810;
      }
      goto L_08ACE808;
    }
L_08ACE808:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ACE810;
      }
      goto L_08ACE810;
    }
L_08ACE810:
    ctx.set_fpu_condition((ctx.fpr[5] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE830;
      }
      goto L_08ACE820;
    }
L_08ACE820:
    ctx.set_fpu_condition((ctx.fpr[4] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACEA10;
      }
      goto L_08ACE830;
    }
L_08ACE830:
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10308)));
    ctx.set_fpu_condition((ctx.fpr[5] < ctx.fpr[12]));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10324)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10312)));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10328)));
      if (branch_taken) {
          goto L_08ACE868;
      }
      goto L_08ACE848;
    }
L_08ACE848:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[5];
    ctx.fpr[6] = ctx.fpr[4] - ctx.fpr[5];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[6];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
        goto L_08ACE864;
    }
    goto L_08ACE864;
L_08ACE864:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACE868;
L_08ACE868:
    ctx.set_fpu_condition((ctx.fpr[4] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE898;
      }
      goto L_08ACE878;
    }
L_08ACE878:
    ctx.fpr[12] = ctx.fpr[4] - ctx.fpr[13];
    ctx.fpr[4] = ctx.fpr[4] - ctx.fpr[5];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[4];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
        goto L_08ACE894;
    }
    goto L_08ACE894;
L_08ACE894:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACE898;
L_08ACE898:
    ctx.set_fpu_condition((ctx.fpr[3] < ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
        goto L_08ACE8B0;
    }
    goto L_08ACE8A8;
L_08ACE8A8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
      if (branch_taken) {
          goto L_08ACE8B0;
      }
      goto L_08ACE8B0;
    }
L_08ACE8B0:
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE8C8;
      }
      goto L_08ACE8C0;
    }
L_08ACE8C0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
      if (branch_taken) {
          goto L_08ACE8C8;
      }
      goto L_08ACE8C8;
    }
L_08ACE8C8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE8E8;
      }
      goto L_08ACE8D8;
    }
L_08ACE8D8:
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE948;
      }
      goto L_08ACE8E8;
    }
L_08ACE8E8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE918;
      }
      goto L_08ACE8F8;
    }
L_08ACE8F8:
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[3] = ctx.fpr[1] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[3];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
        goto L_08ACE914;
    }
    goto L_08ACE914;
L_08ACE914:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08ACE918;
L_08ACE918:
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE948;
      }
      goto L_08ACE928;
    }
L_08ACE928:
    ctx.fpr[13] = ctx.fpr[1] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
        goto L_08ACE944;
    }
    goto L_08ACE944;
L_08ACE944:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACE948;
L_08ACE948:
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
        goto L_08ACE960;
    }
    goto L_08ACE958;
L_08ACE958:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
      if (branch_taken) {
          goto L_08ACE960;
      }
      goto L_08ACE960;
    }
L_08ACE960:
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE978;
      }
      goto L_08ACE970;
    }
L_08ACE970:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
      if (branch_taken) {
          goto L_08ACE978;
      }
      goto L_08ACE978;
    }
L_08ACE978:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE998;
      }
      goto L_08ACE988;
    }
L_08ACE988:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACEA10;
      }
      goto L_08ACE998;
    }
L_08ACE998:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE9C8;
      }
      goto L_08ACE9A8;
    }
L_08ACE9A8:
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[0] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
        goto L_08ACE9C4;
    }
    goto L_08ACE9C4;
L_08ACE9C4:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08ACE9C8;
L_08ACE9C8:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACE9F8;
      }
      goto L_08ACE9D8;
    }
L_08ACE9D8:
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
        goto L_08ACE9F4;
    }
    goto L_08ACE9F4;
L_08ACE9F4:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACE9F8;
L_08ACE9F8:
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACEA10;
      }
      goto L_08ACEA08;
    }
L_08ACEA08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACEA14;
      }
      goto L_08ACEA10;
    }
L_08ACEA10:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACEA14;
L_08ACEA14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACEA1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-688));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-760), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ACF83C;
      }
      goto L_08ACEA4C;
    }
L_08ACEA4C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6160));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEA98;
      }
      goto L_08ACEA68;
    }
L_08ACEA68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACEA98;
      }
      goto L_08ACEA84;
    }
L_08ACEA84:
    ctx.gpr[31] = (0x08ACEA8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 561u, 0x08906858u>(ctx, &aot_mem) && ctx.pc == 0x08ACEA8Cu) goto L_08ACEA8C;
    return;
L_08ACEA8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEA98;
      }
      goto L_08ACEA94;
    }
L_08ACEA94:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    goto L_08ACEA98;
L_08ACEA98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF82C;
      }
      goto L_08ACEAA4;
    }
L_08ACEAA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACEAC0;
      }
      goto L_08ACEAB4;
    }
L_08ACEAB4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACEAC0;
L_08ACEAC0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACEAD8;
      }
      goto L_08ACEAD4;
    }
L_08ACEAD4:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    goto L_08ACEAD8;
L_08ACEAD8:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (50454u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACEBA4;
      }
      goto L_08ACEB50;
    }
L_08ACEB50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACEBA4;
      }
      goto L_08ACEB6C;
    }
L_08ACEB6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (50426u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACEBA4;
      }
      goto L_08ACEB88;
    }
L_08ACEB88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACEBAC;
      }
      goto L_08ACEBA4;
    }
L_08ACEBA4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ACF82C;
      }
      goto L_08ACEBAC;
    }
L_08ACEBAC:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8422), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08ACEBF8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEBF8u) goto L_08ACEBF8;
    return;
L_08ACEBF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF7BC;
      }
      goto L_08ACEC00;
    }
L_08ACEC00:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08ACEC18u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 169u, 0x08A51450u>(ctx, &aot_mem) && ctx.pc == 0x08ACEC18u) goto L_08ACEC18;
    return;
L_08ACEC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08ACEFE4;
    }
    goto L_08ACEC38;
L_08ACEC38:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (0u | 57u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACEDF4;
      }
      goto L_08ACEC4C;
    }
L_08ACEC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACEDF4;
      }
      goto L_08ACEC5C;
    }
L_08ACEC5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACEDF4;
      }
      goto L_08ACEC68;
    }
L_08ACEC68:
    ctx.gpr[31] = (0x08ACEC70u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08ACEC70u) goto L_08ACEC70;
    return;
L_08ACEC70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACED08;
      }
      goto L_08ACEC78;
    }
L_08ACEC78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACED08;
      }
      goto L_08ACEC88;
    }
L_08ACEC88:
    ctx.gpr[31] = (0x08ACEC90u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 327u, 0x08911284u>(ctx, &aot_mem) && ctx.pc == 0x08ACEC90u) goto L_08ACEC90;
    return;
L_08ACEC90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACED08;
      }
      goto L_08ACEC98;
    }
L_08ACEC98:
    ctx.gpr[31] = (0x08ACECA0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 281u, 0x088E2A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACECA0u) goto L_08ACECA0;
    return;
L_08ACECA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08ACECB8;
    }
    goto L_08ACECAC;
L_08ACECAC:
    ctx.gpr[31] = (0x08ACECB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08ACECB4u) goto L_08ACECB4;
    return;
L_08ACECB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08ACECB8;
L_08ACECB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08ACECC4u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 600u, 0x0893E5E0u>(ctx, &aot_mem) && ctx.pc == 0x08ACECC4u) goto L_08ACECC4;
    return;
L_08ACECC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACED08;
      }
      goto L_08ACECCC;
    }
L_08ACECCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08ACECE4;
    }
    goto L_08ACECD8;
L_08ACECD8:
    ctx.gpr[31] = (0x08ACECE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08ACECE0u) goto L_08ACECE0;
    return;
L_08ACECE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08ACECE4;
L_08ACECE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ACECF4u);
    ctx.gpr[7] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08ACECF4u) goto L_08ACECF4;
    return;
L_08ACECF4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACED08;
L_08ACED08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x08ACED58u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem) && ctx.pc == 0x08ACED58u) goto L_08ACED58;
    return;
L_08ACED58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACED80u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x08ACED80u) goto L_08ACED80;
    return;
L_08ACED80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACEDB0;
      }
      goto L_08ACED90;
    }
L_08ACED90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08ACEDA8u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEDA8u) goto L_08ACEDA8;
    return;
L_08ACEDA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEDC8;
      }
      goto L_08ACEDB0;
    }
L_08ACEDB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08ACEDC8u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEDC8u) goto L_08ACEDC8;
    return;
L_08ACEDC8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    goto L_08ACEDF4;
L_08ACEDF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF564;
      }
      goto L_08ACEE00;
    }
L_08ACEE00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15395u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACEE64u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem) && ctx.pc == 0x08ACEE64u) goto L_08ACEE64;
    return;
L_08ACEE64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEEF4;
      }
      goto L_08ACEE6C;
    }
L_08ACEE6C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEEF4;
      }
      goto L_08ACEE7C;
    }
L_08ACEE7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08ACEEE0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x08ACEEE0u) goto L_08ACEEE0;
    return;
L_08ACEEE0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEE7C;
      }
      goto L_08ACEEF4;
    }
L_08ACEEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACEFB0;
      }
      goto L_08ACEF04;
    }
L_08ACEF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08ACEF10u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem) && ctx.pc == 0x08ACEF10u) goto L_08ACEF10;
    return;
L_08ACEF10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEF50;
      }
      goto L_08ACEF18;
    }
L_08ACEF18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08ACEF30;
    }
    goto L_08ACEF24;
L_08ACEF24:
    ctx.gpr[31] = (0x08ACEF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08ACEF2Cu) goto L_08ACEF2C;
    return;
L_08ACEF2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08ACEF30;
L_08ACEF30:
    ctx.gpr[8] = (16640u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ACEF48u);
    ctx.gpr[7] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem) && ctx.pc == 0x08ACEF48u) goto L_08ACEF48;
    return;
L_08ACEF48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ACEF84;
      }
      goto L_08ACEF50;
    }
L_08ACEF50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08ACEF68;
    }
    goto L_08ACEF5C;
L_08ACEF5C:
    ctx.gpr[31] = (0x08ACEF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08ACEF64u) goto L_08ACEF64;
    return;
L_08ACEF64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08ACEF68;
L_08ACEF68:
    ctx.gpr[8] = (16640u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ACEF80u);
    ctx.gpr[7] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem) && ctx.pc == 0x08ACEF80u) goto L_08ACEF80;
    return;
L_08ACEF80:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08ACEF84;
L_08ACEF84:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEFB0;
      }
      goto L_08ACEF8C;
    }
L_08ACEF8C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08ACEF98u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x08ACEF98u) goto L_08ACEF98;
    return;
L_08ACEF98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08ACEFB0;
L_08ACEFB0:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
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
          goto L_08ACF564;
      }
      goto L_08ACEFE4;
    }
L_08ACEFE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF288;
      }
      goto L_08ACF000;
    }
L_08ACF000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF040;
      }
      goto L_08ACF00C;
    }
L_08ACF00C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF040;
      }
      goto L_08ACF02C;
    }
L_08ACF02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACF564;
      }
      goto L_08ACF040;
    }
L_08ACF040:
    ctx.gpr[31] = (0x08ACF048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08ACF048u) goto L_08ACF048;
    return;
L_08ACF048:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-692)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-696)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACF05Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF05Cu) goto L_08ACF05C;
    return;
L_08ACF05C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF080;
      }
      goto L_08ACF078;
    }
L_08ACF078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACF080;
      }
      goto L_08ACF080;
    }
L_08ACF080:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08ACF174;
    }
    goto L_08ACF088;
L_08ACF088:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08ACF174;
    }
    goto L_08ACF098;
L_08ACF098:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08ACF174;
    }
    goto L_08ACF0A8;
L_08ACF0A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(344));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08ACF0CCu);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACF0CCu) goto L_08ACF0CC;
    return;
L_08ACF0CC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF16C;
      }
      goto L_08ACF0DC;
    }
L_08ACF0DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 68u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08ACF158u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x08ACF158u) goto L_08ACF158;
    return;
L_08ACF158:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF0DC;
      }
      goto L_08ACF16C;
    }
L_08ACF16C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF564;
      }
      goto L_08ACF174;
    }
L_08ACF174:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08ACF1A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 71u, 0x08B0452Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF1A0u) goto L_08ACF1A0;
    return;
L_08ACF1A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACF1E0;
      }
      goto L_08ACF1B0;
    }
L_08ACF1B0:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08ACF1D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14864));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 167u, 0x089D1074u>(ctx, &aot_mem) && ctx.pc == 0x08ACF1D8u) goto L_08ACF1D8;
    return;
L_08ACF1D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF564;
      }
      goto L_08ACF1E0;
    }
L_08ACF1E0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF280;
      }
      goto L_08ACF1F0;
    }
L_08ACF1F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08ACF26Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x08ACF26Cu) goto L_08ACF26C;
    return;
L_08ACF26C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF1F0;
      }
      goto L_08ACF280;
    }
L_08ACF280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF564;
      }
      goto L_08ACF288;
    }
L_08ACF288:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF324;
      }
      goto L_08ACF298;
    }
L_08ACF298:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08ACF314u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x08ACF314u) goto L_08ACF314;
    return;
L_08ACF314:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF298;
      }
      goto L_08ACF324;
    }
L_08ACF324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08ACF368;
    }
    goto L_08ACF330;
L_08ACF330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08ACF368;
    }
    goto L_08ACF350;
L_08ACF350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2120)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08ACF510;
    }
    goto L_08ACF364;
L_08ACF364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08ACF368;
L_08ACF368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08ACF510;
    }
    goto L_08ACF384;
L_08ACF384:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (17095u << 16u);
      if (branch_taken) {
          goto L_08ACF4B8;
      }
      goto L_08ACF398;
    }
L_08ACF398:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACF4B8;
      }
      goto L_08ACF3B4;
    }
L_08ACF3B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF3D4;
      }
      goto L_08ACF3C4;
    }
L_08ACF3C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ACF3DC;
      }
      goto L_08ACF3D4;
    }
L_08ACF3D4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ACF3DC;
L_08ACF3DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF424;
      }
      goto L_08ACF3E4;
    }
L_08ACF3E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(456)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACF424;
      }
      goto L_08ACF3FC;
    }
L_08ACF3FC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACF424u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem) && ctx.pc == 0x08ACF424u) goto L_08ACF424;
    return;
L_08ACF424:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF444;
      }
      goto L_08ACF434;
    }
L_08ACF434:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ACF44C;
      }
      goto L_08ACF444;
    }
L_08ACF444:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ACF44C;
L_08ACF44C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF4A4;
      }
      goto L_08ACF454;
    }
L_08ACF454:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49392u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[31] = (0x08ACF4A4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ACF4A4u) goto L_08ACF4A4;
    return;
L_08ACF4A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ACF50C;
      }
      goto L_08ACF4B8;
    }
L_08ACF4B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(473)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
        goto L_08ACF4D8;
    }
    goto L_08ACF4C8;
L_08ACF4C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(478))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF50C;
      }
      goto L_08ACF4D4;
    }
L_08ACF4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    goto L_08ACF4D8;
L_08ACF4D8:
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF50C;
      }
      goto L_08ACF4E8;
    }
L_08ACF4E8:
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08ACF4FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 482u, 0x0882BFC8u>(ctx, &aot_mem) && ctx.pc == 0x08ACF4FCu) goto L_08ACF4FC;
    return;
L_08ACF4FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ACF50C;
L_08ACF50C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08ACF510;
L_08ACF510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF564;
      }
      goto L_08ACF52C;
    }
L_08ACF52C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8432)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACF564;
      }
      goto L_08ACF538;
    }
L_08ACF538:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACF564;
      }
      goto L_08ACF540;
    }
L_08ACF540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACF560;
      }
      goto L_08ACF550;
    }
L_08ACF550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACF564;
      }
      goto L_08ACF560;
    }
L_08ACF560:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    goto L_08ACF564;
L_08ACF564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACF588;
      }
      goto L_08ACF574;
    }
L_08ACF574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACF790;
      }
      goto L_08ACF584;
    }
L_08ACF584:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ACF588;
L_08ACF588:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACF790;
      }
      goto L_08ACF590;
    }
L_08ACF590:
    ctx.gpr[31] = (0x08ACF598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08ACF598u) goto L_08ACF598;
    return;
L_08ACF598:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ACF790;
      }
      goto L_08ACF5B8;
    }
L_08ACF5B8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ACF63C;
      }
      goto L_08ACF5C8;
    }
L_08ACF5C8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08ACF67C;
      }
      goto L_08ACF5D0;
    }
L_08ACF5D0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08ACF6C8;
      }
      goto L_08ACF5D8;
    }
L_08ACF5D8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08ACF73C;
      }
      goto L_08ACF5E0;
    }
L_08ACF5E0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08ACF5ECu);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 70u, 0x0884C700u>(ctx, &aot_mem) && ctx.pc == 0x08ACF5ECu) goto L_08ACF5EC;
    return;
L_08ACF5EC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF604;
      }
      goto L_08ACF5F8;
    }
L_08ACF5F8:
    ctx.gpr[31] = (0x08ACF600u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 63u, 0x0884C68Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF600u) goto L_08ACF600;
    return;
L_08ACF600:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08ACF604;
L_08ACF604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 72u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08ACF634u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 544u, 0x08A06228u>(ctx, &aot_mem) && ctx.pc == 0x08ACF634u) goto L_08ACF634;
    return;
L_08ACF634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF790;
      }
      goto L_08ACF63C;
    }
L_08ACF63C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACF654;
      }
      goto L_08ACF648;
    }
L_08ACF648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9328), ctx.gpr[4]);
    goto L_08ACF654;
L_08ACF654:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACF674u);
    ctx.gpr[6] = (0u | 62u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08ACF674u) goto L_08ACF674;
    return;
L_08ACF674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF790;
      }
      goto L_08ACF67C;
    }
L_08ACF67C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACF694;
      }
      goto L_08ACF688;
    }
L_08ACF688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9328), ctx.gpr[4]);
    goto L_08ACF694;
L_08ACF694:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACF6B4u);
    ctx.gpr[6] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08ACF6B4u) goto L_08ACF6B4;
    return;
L_08ACF6B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x08ACF6C0u);
    ctx.gpr[5] = (0u | 106u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08ACF6C0u) goto L_08ACF6C0;
    return;
L_08ACF6C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF790;
      }
      goto L_08ACF6C8;
    }
L_08ACF6C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACF6E0;
      }
      goto L_08ACF6D4;
    }
L_08ACF6D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9328), ctx.gpr[4]);
    goto L_08ACF6E0;
L_08ACF6E0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08ACF6ECu);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 70u, 0x0884C700u>(ctx, &aot_mem) && ctx.pc == 0x08ACF6ECu) goto L_08ACF6EC;
    return;
L_08ACF6EC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF704;
      }
      goto L_08ACF6F8;
    }
L_08ACF6F8:
    ctx.gpr[31] = (0x08ACF700u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 63u, 0x0884C68Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF700u) goto L_08ACF700;
    return;
L_08ACF700:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08ACF704;
L_08ACF704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 73u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08ACF734u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 544u, 0x08A06228u>(ctx, &aot_mem) && ctx.pc == 0x08ACF734u) goto L_08ACF734;
    return;
L_08ACF734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF790;
      }
      goto L_08ACF73C;
    }
L_08ACF73C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08ACF748u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 70u, 0x0884C700u>(ctx, &aot_mem) && ctx.pc == 0x08ACF748u) goto L_08ACF748;
    return;
L_08ACF748:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF760;
      }
      goto L_08ACF754;
    }
L_08ACF754:
    ctx.gpr[31] = (0x08ACF75Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 63u, 0x0884C68Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF75Cu) goto L_08ACF75C;
    return;
L_08ACF75C:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    goto L_08ACF760;
L_08ACF760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 74u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08ACF790u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 544u, 0x08A06228u>(ctx, &aot_mem) && ctx.pc == 0x08ACF790u) goto L_08ACF790;
    return;
L_08ACF790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACF7B4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 584u, 0x08827CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ACF7B4u) goto L_08ACF7B4;
    return;
L_08ACF7B4:
    ctx.gpr[31] = (0x08ACF7BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 290u, 0x08A4182Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF7BCu) goto L_08ACF7BC;
    return;
L_08ACF7BC:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8422), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACF7EC;
      }
      goto L_08ACF7DC;
    }
L_08ACF7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACF81C;
      }
      goto L_08ACF7EC;
    }
L_08ACF7EC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-760), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(10304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(10320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08ACF81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 302u, 0x089EE05Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF81Cu) goto L_08ACF81C;
    return;
L_08ACF81C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08ACF82C;
L_08ACF82C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEA4C;
      }
      goto L_08ACF83C;
    }
L_08ACF83C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF85C:
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
L_08ACF884:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF88C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF8A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 226u, 0x08968F88u>(ctx, &aot_mem) && ctx.pc == 0x08ACF8A8u) goto L_08ACF8A8;
    return;
L_08ACF8A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF8DC;
      }
      goto L_08ACF8B0;
    }
L_08ACF8B0:
    ctx.gpr[31] = (0x08ACF8B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 287u, 0x0896950Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF8B8u) goto L_08ACF8B8;
    return;
L_08ACF8B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF8DC;
      }
      goto L_08ACF8C4;
    }
L_08ACF8C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF8D8;
      }
      goto L_08ACF8D0;
    }
L_08ACF8D0:
    ctx.gpr[31] = (0x08ACF8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 282u, 0x089694D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF8D8u) goto L_08ACF8D8;
    return;
L_08ACF8D8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_08ACF8DC;
L_08ACF8DC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF8F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF934;
      }
      goto L_08ACF904;
    }
L_08ACF904:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF9AC;
      }
      goto L_08ACF91C;
    }
L_08ACF91C:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16184)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF9B0;
      }
      goto L_08ACF93C;
    }
L_08ACF93C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF9B0;
      }
      goto L_08ACF944;
    }
L_08ACF944:
    ctx.gpr[31] = (0x08ACF94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 138u, 0x08A3CA94u>(ctx, &aot_mem) && ctx.pc == 0x08ACF94Cu) goto L_08ACF94C;
    return;
L_08ACF94C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF9B0;
      }
      goto L_08ACF954;
    }
L_08ACF954:
    ctx.gpr[31] = (0x08ACF95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 608u, 0x08AFEB48u>(ctx, &aot_mem) && ctx.pc == 0x08ACF95Cu) goto L_08ACF95C;
    return;
L_08ACF95C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF9B0;
      }
      goto L_08ACF964;
    }
L_08ACF964:
    ctx.gpr[31] = (0x08ACF96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 241u, 0x089051ACu>(ctx, &aot_mem) && ctx.pc == 0x08ACF96Cu) goto L_08ACF96C;
    return;
L_08ACF96C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF9B0;
      }
      goto L_08ACF974;
    }
L_08ACF974:
    ctx.gpr[31] = (0x08ACF97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 332u, 0x0882B404u>(ctx, &aot_mem) && ctx.pc == 0x08ACF97Cu) goto L_08ACF97C;
    return;
L_08ACF97C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF9B0;
      }
      goto L_08ACF984;
    }
L_08ACF984:
    ctx.gpr[31] = (0x08ACF98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 858u, 0x08AAFE60u>(ctx, &aot_mem) && ctx.pc == 0x08ACF98Cu) goto L_08ACF98C;
    return;
L_08ACF98C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF9B0;
      }
      goto L_08ACF994;
    }
L_08ACF994:
    ctx.gpr[31] = (0x08ACF99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 639u, 0x0887EFDCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF99Cu) goto L_08ACF99C;
    return;
L_08ACF99C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF9B0;
      }
      goto L_08ACF9A4;
    }
L_08ACF9A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACF9B0;
      }
      goto L_08ACF9AC;
    }
L_08ACF9AC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACF9B0;
L_08ACF9B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF9BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACFA4C;
      }
      goto L_08ACF9D8;
    }
L_08ACF9D8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32624));
    ctx.gpr[31] = (0x08ACF9E8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08ACF9E8u) goto L_08ACF9E8;
    return;
L_08ACF9E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACF9F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 92u, 0x08818AA8u>(ctx, &aot_mem) && ctx.pc == 0x08ACF9F4u) goto L_08ACF9F4;
    return;
L_08ACF9F4:
    ctx.gpr[31] = (0x08ACF9FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ACFFD0;
L_08ACF9FC:
    ctx.gpr[31] = (0x08ACFA04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 437u, 0x08A93058u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA04u) goto L_08ACFA04;
    return;
L_08ACFA04:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08ACFA3C;
      }
      goto L_08ACFA0C;
    }
L_08ACFA0C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08ACFA3C;
      }
      goto L_08ACFA14;
    }
L_08ACFA14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08ACFA3C;
      }
      goto L_08ACFA24;
    }
L_08ACFA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08ACFA3C;
    }
    goto L_08ACFA30;
L_08ACFA30:
    ctx.gpr[31] = (0x08ACFA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA38u) goto L_08ACFA38;
    return;
L_08ACFA38:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08ACFA3C;
L_08ACFA3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACFA4C;
      }
      goto L_08ACFA44;
    }
L_08ACFA44:
    ctx.gpr[31] = (0x08ACFA4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA4Cu) goto L_08ACFA4C;
    return;
L_08ACFA4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFA60:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFA68:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFA70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08ACFB20;
      }
      goto L_08ACFA9C;
    }
L_08ACFA9C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFB20;
      }
      goto L_08ACFAA8;
    }
L_08ACFAA8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFB20;
      }
      goto L_08ACFAB4;
    }
L_08ACFAB4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFB20;
      }
      goto L_08ACFAC0;
    }
L_08ACFAC0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(210)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFB20;
      }
      goto L_08ACFACC;
    }
L_08ACFACC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFB20;
      }
      goto L_08ACFAD8;
    }
L_08ACFAD8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(214)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFB20;
      }
      goto L_08ACFAE4;
    }
L_08ACFAE4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFB20;
      }
      goto L_08ACFAF0;
    }
L_08ACFAF0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFB20;
      }
      goto L_08ACFAFC;
    }
L_08ACFAFC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFB20;
      }
      goto L_08ACFB08;
    }
L_08ACFB08:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(222)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFB20;
      }
      goto L_08ACFB14;
    }
L_08ACFB14:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACFB28;
      }
      goto L_08ACFB20;
    }
L_08ACFB20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACFB28;
      }
      goto L_08ACFB28;
    }
L_08ACFB28:
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 15u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACFB50;
      }
      goto L_08ACFB48;
    }
L_08ACFB48:
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08ACFB50;
L_08ACFB50:
    ctx.gpr[31] = (0x08ACFB58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 79u, 0x08AD06F4u>(ctx, &aot_mem) && ctx.pc == 0x08ACFB58u) goto L_08ACFB58;
    return;
L_08ACFB58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[2] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 14u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACFB8Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACFB8Cu) goto L_08ACFB8C;
    return;
L_08ACFB8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFB9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08ACFC4C;
      }
      goto L_08ACFBC8;
    }
L_08ACFBC8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFC4C;
      }
      goto L_08ACFBD4;
    }
L_08ACFBD4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFC4C;
      }
      goto L_08ACFBE0;
    }
L_08ACFBE0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFC4C;
      }
      goto L_08ACFBEC;
    }
L_08ACFBEC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(210)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFC4C;
      }
      goto L_08ACFBF8;
    }
L_08ACFBF8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFC4C;
      }
      goto L_08ACFC04;
    }
L_08ACFC04:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(214)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFC4C;
      }
      goto L_08ACFC10;
    }
L_08ACFC10:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFC4C;
      }
      goto L_08ACFC1C;
    }
L_08ACFC1C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFC4C;
      }
      goto L_08ACFC28;
    }
L_08ACFC28:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFC4C;
      }
      goto L_08ACFC34;
    }
L_08ACFC34:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(222)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACFC4C;
      }
      goto L_08ACFC40;
    }
L_08ACFC40:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACFC54;
      }
      goto L_08ACFC4C;
    }
L_08ACFC4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACFC54;
      }
      goto L_08ACFC54;
    }
L_08ACFC54:
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 15u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACFC7C;
      }
      goto L_08ACFC74;
    }
L_08ACFC74:
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08ACFC7C;
L_08ACFC7C:
    ctx.gpr[31] = (0x08ACFC84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 79u, 0x08AD06F4u>(ctx, &aot_mem) && ctx.pc == 0x08ACFC84u) goto L_08ACFC84;
    return;
L_08ACFC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[2] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 14u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFCB0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFCB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACFCF4;
      }
      goto L_08ACFCE4;
    }
L_08ACFCE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08ACFCF4;
L_08ACFCF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACFD0Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACFD0Cu) goto L_08ACFD0C;
    return;
L_08ACFD0C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACFD3C;
      }
      goto L_08ACFD18;
    }
L_08ACFD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACFD44;
      }
      goto L_08ACFD34;
    }
L_08ACFD34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACFD54;
      }
      goto L_08ACFD3C;
    }
L_08ACFD3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACFE18;
      }
      goto L_08ACFD44;
    }
L_08ACFD44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-680)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-680), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08ACFD54;
L_08ACFD54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACFDB0;
      }
      goto L_08ACFD64;
    }
L_08ACFD64:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08ACFD8C;
      }
      goto L_08ACFD74;
    }
L_08ACFD74:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
        goto L_08ACFD90;
    }
    goto L_08ACFD80;
L_08ACFD80:
    ctx.gpr[31] = (0x08ACFD88u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFD88u) goto L_08ACFD88;
    return;
L_08ACFD88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08ACFD8C;
L_08ACFD8C:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08ACFD90;
L_08ACFD90:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACFDA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08ACFDA8u) goto L_08ACFDA8;
    return;
L_08ACFDA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACFE04;
      }
      goto L_08ACFDB0;
    }
L_08ACFDB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACFE04;
      }
      goto L_08ACFDC0;
    }
L_08ACFDC0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08ACFDE8;
      }
      goto L_08ACFDD0;
    }
L_08ACFDD0:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
        goto L_08ACFDEC;
    }
    goto L_08ACFDDC;
L_08ACFDDC:
    ctx.gpr[31] = (0x08ACFDE4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFDE4u) goto L_08ACFDE4;
    return;
L_08ACFDE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08ACFDE8;
L_08ACFDE8:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08ACFDEC;
L_08ACFDEC:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACFE04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08ACFE04u) goto L_08ACFE04;
    return;
L_08ACFE04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[31] = (0x08ACFE10u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08ACF884;
L_08ACFE10:
    ctx.gpr[31] = (0x08ACFE18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 458u, 0x088DF74Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFE18u) goto L_08ACFE18;
    return;
L_08ACFE18:
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
L_08ACFE30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACFE68;
      }
      goto L_08ACFE50;
    }
L_08ACFE50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACFE70;
      }
      goto L_08ACFE60;
    }
L_08ACFE60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACFEBC;
      }
      goto L_08ACFE68;
    }
L_08ACFE68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACFF3C;
      }
      goto L_08ACFE70;
    }
L_08ACFE70:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08ACFE98;
      }
      goto L_08ACFE80;
    }
L_08ACFE80:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
        goto L_08ACFE9C;
    }
    goto L_08ACFE8C;
L_08ACFE8C:
    ctx.gpr[31] = (0x08ACFE94u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFE94u) goto L_08ACFE94;
    return;
L_08ACFE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08ACFE98;
L_08ACFE98:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_08ACFE9C;
L_08ACFE9C:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACFEB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x08ACFEB4u) goto L_08ACFEB4;
    return;
L_08ACFEB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACFF10;
      }
      goto L_08ACFEBC;
    }
L_08ACFEBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACFF10;
      }
      goto L_08ACFECC;
    }
L_08ACFECC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08ACFEF4;
      }
      goto L_08ACFEDC;
    }
L_08ACFEDC:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
        goto L_08ACFEF8;
    }
    goto L_08ACFEE8;
L_08ACFEE8:
    ctx.gpr[31] = (0x08ACFEF0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFEF0u) goto L_08ACFEF0;
    return;
L_08ACFEF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08ACFEF4;
L_08ACFEF4:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_08ACFEF8;
L_08ACFEF8:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACFF10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x08ACFF10u) goto L_08ACFF10;
    return;
L_08ACFF10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACFF34;
      }
      goto L_08ACFF24;
    }
L_08ACFF24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08ACFF34;
L_08ACFF34:
    ctx.gpr[31] = (0x08ACFF3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 458u, 0x088DF74Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFF3Cu) goto L_08ACFF3C;
    return;
L_08ACFF3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFF50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACFF94;
      }
      goto L_08ACFF68;
    }
L_08ACFF68:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACFF8C;
      }
      goto L_08ACFF7C;
    }
L_08ACFF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08ACFF8C;
L_08ACFF8C:
    ctx.gpr[31] = (0x08ACFF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 460u, 0x088DF770u>(ctx, &aot_mem) && ctx.pc == 0x08ACFF94u) goto L_08ACFF94;
    return;
L_08ACFF94:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACFFBC;
      }
      goto L_08ACFFA4;
    }
L_08ACFFA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACFFBC;
      }
      goto L_08ACFFB4;
    }
L_08ACFFB4:
    ctx.gpr[31] = (0x08ACFFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFFBCu) goto L_08ACFFBC;
    return;
L_08ACFFBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFFD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 3u, 0x08AD000Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFFF4;
    }
L_08ACFFF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 3u, 0x08AD000Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 2u, 0x08AD0004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0178(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0178_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_178(Runtime &runtime) {
    runtime.register_generated_unit(178u, 0x08ACC000u, 16384u, &recomp_unit_0178, &recomp_unit_0178_entry);
    runtime.register_function(0x08ACC000u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC010u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC01Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC02Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC034u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC03Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC044u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC04Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC05Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC078u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC080u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC088u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC090u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC104u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC10Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC11Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC134u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC140u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC148u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC154u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC15Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC164u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC16Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC174u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC18Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC194u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC210u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC21Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC224u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC230u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC238u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC244u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC24Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC258u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC264u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC26Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC278u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC280u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC28Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC294u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC308u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC310u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC328u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC334u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC33Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC344u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC34Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC358u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC360u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC36Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC378u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC380u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC38Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC394u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC408u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC410u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC424u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC434u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC440u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC444u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC44Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC458u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC460u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC46Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC478u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC480u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC48Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC494u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC49Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC504u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC50Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC524u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC530u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC544u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC550u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC558u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC564u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC578u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC580u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC588u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC590u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC598u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC604u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC60Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC614u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC61Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC628u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC630u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC638u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC644u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC650u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC658u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC664u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC66Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC678u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC680u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC690u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC708u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC71Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC724u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC734u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC744u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC74Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC774u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC780u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC790u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC79Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC800u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC80Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC84Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC85Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC864u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC86Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC87Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC888u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC904u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC91Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC92Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC938u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC944u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC94Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC958u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC964u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC96Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC974u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC984u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC994u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCACCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCADCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCECCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCED4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD004u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD00Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD014u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD01Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD024u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD02Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD034u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD03Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD048u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD054u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD070u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD080u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD08Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD094u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD09Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD100u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD110u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD11Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD124u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD130u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD138u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD144u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD150u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD164u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD16Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD174u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD180u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD188u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD190u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD198u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD200u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD20Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD218u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD220u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD22Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD234u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD23Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD24Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD254u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD25Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD26Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD278u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD280u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD290u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD29Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD300u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD308u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD318u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD330u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD338u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD340u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD358u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD360u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD368u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD370u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD388u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD390u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD398u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD404u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD40Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD414u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD420u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD42Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD43Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD44Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD454u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD45Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD464u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD46Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD474u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD47Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD504u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD50Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD518u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD520u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD528u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD530u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD538u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD548u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD554u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD55Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD564u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD56Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD574u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD580u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD588u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD590u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD598u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD60Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD618u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD620u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD62Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD634u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD640u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD658u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD664u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD670u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD678u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD680u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD698u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD704u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD71Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD728u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD730u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD738u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD740u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD748u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD750u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD758u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD764u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD76Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD774u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD77Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD784u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD78Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD794u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD79Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD800u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD808u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD810u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD81Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD824u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD830u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD844u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD84Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD854u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD860u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD874u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD87Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD884u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD88Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD898u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD900u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD908u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD914u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD92Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD938u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD944u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD94Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD954u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD95Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD964u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD974u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD97Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD984u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD98Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD994u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD99Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDAA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDAA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDAB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDAB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDAC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDACCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDAD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDAF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDECCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDED8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE008u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE014u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE01Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE02Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE034u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE03Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE044u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE04Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE058u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE060u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE068u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE070u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE078u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE084u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE15Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE164u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE16Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE184u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE198u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE204u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE210u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE21Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE22Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE238u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE244u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE254u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE260u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE26Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE288u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE294u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE334u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE340u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE348u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE350u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE358u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE360u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE368u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE38Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE394u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE39Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE418u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE454u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE464u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE470u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE478u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE480u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE488u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE498u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE500u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE508u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE510u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE518u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE520u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE52Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE534u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE548u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE550u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE558u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE560u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE56Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE588u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE590u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE598u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE60Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE614u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE61Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE634u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE658u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE66Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE68Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE694u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE714u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE720u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE728u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE77Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE784u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE79Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE808u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE810u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE820u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE830u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE848u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE864u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE868u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE878u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE894u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE898u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE914u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE918u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE928u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE944u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE948u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE958u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE960u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE970u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE978u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE988u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE998u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEFB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEFE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF000u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF00Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF02Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF040u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF048u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF05Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF078u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF080u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF088u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF098u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF158u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF16Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF174u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF26Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF280u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF288u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF298u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF314u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF324u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF330u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF350u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF364u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF368u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF384u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF398u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF424u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF434u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF444u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF44Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF454u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF50Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF510u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF52Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF538u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF540u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF550u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF560u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF564u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF574u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF584u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF588u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF590u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF598u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF600u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF604u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF634u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF63Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF648u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF654u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF674u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF67Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF688u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF694u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF700u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF704u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF734u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF73Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF748u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF754u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF75Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF760u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF790u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF81Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF82Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF83Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF85Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF884u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF88Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF904u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF91Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF934u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF93Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF944u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF94Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF954u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF95Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF964u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF96Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF974u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF97Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF984u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF98Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF994u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF99Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFACCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFECCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFF4u, &recomp_unit_0178, "recomp_unit_0178");
}
} // namespace psprecomp
