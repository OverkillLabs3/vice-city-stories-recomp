#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0177[4090] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0,
    0, 10, 0, 0, 11, 0, 12, 0, 13, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25,
    0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32,
    0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 42, 0, 0,
    0, 43, 0, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 53, 0, 54, 0, 0,
    55, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 0, 68, 0,
    69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0,
    82, 0, 83, 0, 84, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 92, 0, 93, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0,
    105, 0, 106, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0,
    0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 130, 0, 131,
    0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 0, 142, 0,
    143, 0, 144, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 154,
    0, 155, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 166,
    0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 178,
    0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 190,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0,
    200, 0, 201, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 211, 0,
    212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 220,
    0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0, 0, 233, 0, 234, 0, 235,
    0, 236, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 242, 0, 243, 0, 0, 244, 0, 245, 0, 0, 0, 0,
    246, 0, 247, 0, 248, 0, 0, 0, 0, 249, 0, 250, 0, 251, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0,
    0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274, 0, 0, 275, 0, 276, 0, 0,
    277, 0, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0,
    0, 286, 0, 287, 0, 0, 0, 0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 295, 0,
    296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 301, 0, 302, 0, 303, 0, 0, 304, 0,
    305, 0, 0, 306, 0, 307, 0, 308, 0, 0, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 317,
    0, 0, 0, 318, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 323, 0, 324, 0, 325, 0,
    326, 0, 0, 0, 327, 0, 328, 0, 0, 0, 329, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0, 0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0,
    0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 341, 0, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 0, 348, 0, 349,
    0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 0, 354, 0, 355, 0, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361,
    0, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 368, 0, 369, 0, 0, 370, 0, 371, 0, 0, 372, 0, 373, 0, 0,
    0, 374, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 378, 0, 379, 0, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 384,
    0, 0, 0, 0, 0, 385, 0, 386, 0, 387, 0, 0, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 395, 0, 0, 396, 0,
    0, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 0, 402, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 0, 406, 0, 407, 0, 408, 0, 409,
    0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 0, 0, 416, 0, 417, 0, 0, 0, 418, 0,
    419, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 422, 0, 0, 423, 0, 424, 0, 425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 428, 0, 0, 0,
    0, 429, 0, 430, 0, 0, 431, 0, 432, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 436, 0, 437, 0, 0, 438, 0, 439, 0, 440, 0, 0,
    0, 441, 0, 0, 0, 442, 443, 0, 444, 0, 0, 0, 445, 0, 446, 0, 0, 447, 0, 448, 0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 0, 452,
    0, 453, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 459, 0, 0, 460, 0, 0, 0, 0, 461, 462, 0,
    463, 0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 469, 0, 470, 0, 471, 0, 0, 0, 472, 0, 0, 473, 0, 474, 0, 475, 0, 476, 0, 477,
    0, 0, 0, 478, 0, 479, 0, 0, 0, 480, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0,
    487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 502,
    0, 0, 503, 0, 504, 0, 505, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0,
    0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 0, 522, 0, 523, 0, 524, 0, 0, 525, 0, 526, 0, 527, 0, 528, 0, 0,
    529, 0, 530, 0, 0, 0, 531, 0, 532, 0, 0, 0, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 0, 539, 0, 540, 0, 541, 0,
    0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547, 0, 0, 0, 548, 0, 549, 0, 0, 550, 0, 551, 0, 552, 0, 0, 0, 553, 0, 554, 0,
    0, 0, 555, 0, 556, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 559, 0, 560, 0, 561, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0,
    565, 0, 0, 566, 0, 0, 0, 567, 0, 0, 568, 0, 569, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 574, 0,
    575, 0, 576, 0, 577, 0, 578, 0, 579, 0, 580, 0, 581, 0, 0, 582, 0, 583, 0, 0, 584, 0, 0, 0, 585, 0, 586, 0, 587, 0, 588, 0,
    0, 589, 0, 590, 0, 0, 591, 0, 592, 0, 593, 0, 594, 0, 595, 0, 596, 0, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603,
    0, 604, 0, 0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 0, 0, 613, 0, 614, 0, 615, 0, 0, 0, 616,
    0, 0, 0, 0, 0, 617, 0, 618, 0, 619, 0, 620, 0, 621, 0, 0, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 0, 0, 627, 0, 628,
    0, 629, 0, 0, 0, 630, 0, 631, 0, 0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642, 0,
    643, 0, 644, 0, 0, 645, 0, 646, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 0, 656, 0, 657, 0, 658,
    0, 0, 659, 0, 0, 660, 0, 661, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 664, 665, 0, 666, 0, 667, 668, 0, 669, 0, 670,
    0, 0, 0, 671, 0, 672, 0, 0, 0, 673, 0, 674, 0, 0, 0, 675, 0, 676, 0, 677, 0, 0, 678, 0, 679, 0, 0, 680, 0, 681, 0, 682,
    0, 0, 0, 683, 0, 684, 0, 685, 0, 686, 0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 0, 692, 0, 693, 0, 0, 694, 695, 0, 696, 0,
    697, 0, 0, 0, 698, 0, 699, 0, 700, 0, 701, 0, 702, 0, 703, 0, 0, 0, 704, 0, 705, 0, 0, 0, 706, 0, 707, 0, 0, 0, 708, 0,
    709, 0, 710, 0, 0, 711, 0, 712, 0, 0, 713, 0, 714, 0, 715, 0, 0, 0, 716, 0, 717, 0, 0, 0, 718, 0, 719, 0, 0, 720, 0, 721,
    0, 722, 0, 723, 0, 724, 0, 0, 725, 0, 726, 0, 727, 0, 728, 0, 0, 729, 0, 730, 0, 731, 0, 732, 0, 0, 733, 0, 734, 735, 0, 736,
    0, 0, 0, 0, 737, 0, 738, 0, 739, 0, 0, 740, 0, 741, 0, 742, 0, 743, 0, 0, 0, 744, 0, 745, 0, 0, 0, 746, 0, 747, 0, 748,
    0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 753, 0, 754, 0, 755, 0, 0, 756, 0, 757, 0,
    0, 0, 758, 0, 759, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 763, 0, 0, 764, 0, 765, 0, 766, 0, 767, 0,
    768, 0, 0, 0, 0, 0, 769, 0, 770, 0, 771, 0, 0, 772, 0, 0, 0, 773, 0, 774, 0, 0, 0, 0, 0, 775, 0, 776, 0, 0, 0, 777,
    0, 778, 0, 0, 0, 779, 0, 780, 0, 0, 0, 0, 0, 781, 0, 782, 0, 0, 783, 0, 0, 784, 0, 0, 785, 0, 786, 0, 787, 0, 0, 0,
    0, 788, 0, 0, 789, 0, 790, 0, 791, 0, 792, 0, 793, 0, 794, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0, 797, 0, 798, 0, 799, 0, 800,
    0, 0, 0, 0, 0, 801, 0, 802, 0, 803, 0, 0, 804, 0, 805, 0, 806, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 808, 0, 0, 0, 809,
    0, 810, 0, 811, 0, 812, 0, 813, 0, 814, 0, 0, 0, 815, 0, 816, 0, 0, 0, 817, 0, 818, 0, 0, 0, 819, 0, 0, 820, 0, 0, 821,
    0, 822, 0, 823, 0, 824, 0, 825, 0, 826, 0, 827, 0, 828, 0, 0, 829, 0, 830, 0, 0, 0, 831, 0, 832, 0, 833, 0, 0, 0, 0, 834,
    0, 0, 835, 0, 0, 0, 836, 0, 837, 0, 838, 0, 839, 0, 0, 0, 840, 0, 0, 0, 841, 0, 0, 842, 0, 0, 0, 843, 0, 0, 844, 0,
    845, 0, 846, 0, 847, 0, 0, 848, 0, 849, 0, 850, 0, 851, 0, 0, 0, 0, 0, 852, 0, 853, 0, 0, 854, 0, 0, 855, 0, 856, 0, 0,
    0, 857, 0, 858, 0, 859, 0, 0, 0, 0, 0, 860, 0, 861, 0, 862, 0, 0, 0, 863, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 865, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 867, 0, 0, 868, 0, 0, 0, 869, 0, 0, 870, 0, 871, 0, 0, 0,
    872, 0, 873, 0, 874, 0, 875, 0, 0, 876, 877, 0, 0, 0, 0, 0, 0, 878, 0, 0, 879, 0, 880, 0, 881, 0, 882, 0, 0, 883, 0, 884,
    0, 0, 0, 885, 0, 886, 0, 887, 0, 0, 888, 0, 889, 0, 890, 0, 0, 0, 891, 0, 0, 0, 892, 0, 893, 0, 0, 0, 0, 894, 0, 895,
    0, 0, 0, 896, 0, 897, 0, 0, 0, 898, 0, 0, 0, 899, 0, 0, 900, 0, 0, 0, 901, 0, 0, 902, 0, 903, 0, 0, 904, 0, 905, 0,
    0, 0, 0, 0, 906, 0, 0, 907, 0, 0, 0, 908, 0, 0, 0, 0, 0, 0, 0, 909, 0, 0, 910, 0, 911, 0, 0, 912, 0, 0, 913, 0,
    0, 0, 0, 914, 0, 915, 0, 916, 0, 0, 0, 0, 917, 0, 918, 0, 919, 0, 0, 920, 0, 921, 0, 0, 922, 0, 923, 0, 0, 0, 0, 0,
    924, 0, 0, 925, 0, 0, 0, 926, 0, 927, 0, 0, 928, 0, 0, 929, 0, 0, 930, 0, 931, 0, 932, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 933, 0, 934, 0, 935, 0, 936, 0, 937, 0, 938, 0, 939, 0, 0, 0, 0, 940, 0, 941, 0, 942, 0, 0, 0, 0, 943, 0, 944, 0, 945,
    0, 946, 0, 947, 0, 948, 0, 949, 0, 950, 0, 951, 0, 0, 0, 952, 0, 953, 0, 954, 0, 955, 0, 956, 0, 0, 0, 957, 0, 0, 0, 958,
    0, 959, 0, 0, 960, 0, 961, 0, 0, 0, 0, 962, 0, 963, 0, 964, 0, 0, 0, 0, 965, 0, 966, 0, 967, 0, 0, 0, 968, 0, 969, 0,
    0, 0, 970, 0, 0, 0, 0, 0, 971, 0, 972, 0, 0, 0, 0, 0, 973, 0, 974, 0, 0, 975, 0, 0, 976, 0, 977, 0, 0, 978, 0, 979,
    0, 980, 0, 0, 0, 0, 981, 0, 982, 0, 0, 0, 0, 0, 983, 0, 984, 0, 0, 985, 0, 0, 986, 0, 987, 0, 0, 988, 0, 989, 0, 0,
    990, 0, 0, 0, 991, 0, 0, 0, 0, 0, 0, 992, 0, 993, 0, 0, 994, 0, 0, 0, 0, 995, 0, 996, 0, 0, 0, 0, 0, 0, 997, 0,
    0, 0, 0, 998, 0, 999, 0, 0, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 1001, 0, 1002, 0, 0, 1003, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1004, 0, 1005, 0, 1006, 0, 0, 0, 1007, 0, 1008, 0, 0, 0, 1009, 0, 1010, 0, 1011, 0, 0, 1012, 0, 0, 0, 1013, 0, 1014, 0, 0, 0, 0,
    0, 1015, 0, 1016, 0, 1017, 0, 0, 0, 0, 0, 1018, 0, 1019, 0, 1020, 0, 0, 1021, 0, 1022, 0, 0, 0, 0, 0, 1023, 0, 1024, 0, 1025, 0,
    0, 1026, 0, 1027, 0, 0, 1028, 0, 1029, 0, 1030, 0, 0, 1031, 0, 1032, 0, 0, 0, 1033, 0, 0, 0, 0, 0, 0, 1034, 0, 1035, 0, 0, 1036,
    0, 0, 1037, 0, 0, 0, 0, 0, 0, 1038, 0, 0, 1039, 0, 0, 0, 0, 0, 1040, 0, 1041, 0, 1042, 0, 0, 1043, 0, 0, 0, 1044, 0, 1045,
    0, 1046, 0, 0, 1047, 0, 0, 0, 1048, 0, 1049, 0, 0, 0, 1050, 0, 1051, 0, 0, 1052, 0, 1053, 0, 1054, 0, 0, 0, 1055, 0, 1056, 0, 0,
    0, 1057, 0, 0, 1058, 0, 0, 1059, 0, 0, 0, 1060, 0, 1061, 0, 0, 0, 1062, 0, 1063, 0, 1064, 0, 1065, 0, 1066, 0, 0, 0, 1067, 0, 1068,
    0, 0, 0, 0, 1069, 0, 0, 0, 1070, 0, 0, 1071, 0, 0, 0, 1072, 0, 0, 1073, 0, 0, 1074, 0, 0, 0, 0, 1075, 0, 1076, 0, 0, 0,
    1077, 0, 1078, 0, 0, 0, 1079, 0, 0, 0, 0, 1080, 0, 0, 0, 0, 1081, 0, 0, 1082, 0, 0, 1083, 0, 1084, 0, 1085, 0, 0, 0, 1086, 0,
    0, 0, 1087, 0, 0, 1088, 0, 1089, 0, 1090, 0, 0, 0, 1091, 0, 0, 1092, 0, 0, 1093, 0, 0, 0, 1094, 0, 1095, 0, 0, 1096, 0, 0, 0,
    1097, 0, 1098, 0, 0, 0, 0, 1099, 0, 1100, 0, 1101, 0, 0, 1102, 0, 0, 0, 1103, 0, 1104, 0, 0, 0, 1105, 0, 1106, 0, 0, 0, 0, 0,
    1107, 0, 0, 1108, 0, 1109, 0, 1110, 0, 0, 1111, 0, 1112, 0, 1113, 0, 1114, 0, 1115, 0, 1116, 0, 1117, 0, 1118, 0, 0, 1119, 0, 1120, 0, 0,
    1121, 0, 1122, 0, 0, 1123, 0, 0, 0, 1124, 0, 0, 1125, 0, 1126, 0, 1127, 0, 0, 1128, 0, 1129, 0, 1130, 0, 1131, 0, 0, 0, 0, 0, 1132,
    0, 1133, 0, 1134, 0, 1135, 0, 0, 0, 0, 0, 0, 1136, 0, 1137, 0, 1138, 0, 1139, 0, 1140, 0, 1141, 0, 1142, 0, 1143, 0, 1144, 0, 0, 1145,
    0, 1146, 0, 1147, 0, 0, 1148, 0, 1149, 0, 0, 1150, 0, 1151, 0, 0, 0, 1152, 0, 1153, 0, 1154, 0, 1155, 0, 1156, 0, 1157, 0, 1158, 0, 1159,
    0, 1160, 0, 1161, 0, 0, 1162, 0, 1163, 0, 0, 1164, 0, 1165, 0, 0, 1166, 0, 1167, 0, 0, 1168, 0, 1169, 0, 0, 1170, 0, 1171, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1172, 0, 1173, 0, 1174,
    0, 0, 1175, 0, 1176, 0, 1177, 0, 0, 1178, 0, 1179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1180, 0, 1181, 0, 0, 1182, 0, 1183,
    0, 0, 1184, 0, 1185, 0, 1186, 0, 0, 0, 0, 0, 1187, 0, 0, 0, 1188, 0, 1189, 0, 1190, 0, 1191, 0, 1192, 0, 0, 0, 1193, 0, 0, 1194,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1195, 0, 0, 0, 0, 1196, 0, 0, 0, 0, 0, 0, 1197, 0, 0, 1198, 0, 0, 0,
    1199, 0, 0, 1200, 0, 1201, 0, 0, 0, 1202, 0, 1203, 0, 1204, 0, 1205, 0, 1206, 0, 1207, 0, 0, 0, 0, 0, 0, 1208, 0, 1209, 0, 0, 1210,
    0, 0, 1211, 1212, 0, 0, 0, 0, 0, 0, 1213, 0, 0, 1214, 0, 1215, 0, 1216, 0, 1217, 0, 0, 1218, 0, 1219, 0, 0, 0, 1220, 0, 0, 0,
    1221, 0, 1222, 0, 1223, 0, 0, 1224, 0, 0, 1225, 0, 0, 0, 1226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1227, 0, 0, 1228, 0, 0, 0,
    0, 0, 0, 0, 0, 1229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1230, 0, 0, 1231, 0, 0, 0, 0, 1232, 0, 0, 1233, 0, 0,
    0, 1234, 0, 1235, 0, 1236, 0, 0, 1237, 0, 0, 1238, 0, 0, 1239, 1240, 0, 1241, 0, 0, 1242, 0, 0, 1243, 0, 0, 0, 1244, 1245, 0, 1246, 0,
    0, 0, 0, 0, 0, 0, 0, 1247, 0, 0, 0, 0, 0, 0, 0, 1248, 0, 0, 0, 1249, 0, 0, 1250, 0, 0, 0, 0, 0, 0, 1251, 0, 0,
    1252, 0, 0, 1253, 0, 1254, 0, 0, 1255, 0, 1256, 0, 1257, 0, 1258, 0, 0, 1259, 0, 1260, 0, 0, 0, 1261, 0, 0, 1262, 0, 1263, 0, 1264, 0,
    1265, 0, 1266, 0, 1267, 0, 0, 1268, 0, 1269, 0, 0, 0, 1270, 0, 0, 0, 1271, 0, 1272, 0, 0, 1273, 0, 1274, 0, 0, 1275, 0, 1276, 0, 0,
    1277, 0, 1278, 0, 1279, 0, 1280, 0, 0, 0, 1281, 0, 1282, 0, 1283, 0, 1284, 0, 1285, 0, 1286, 0, 1287, 0, 0, 0, 0, 1288, 0, 0, 0, 0,
    0, 0, 1289, 0, 1290, 0, 1291, 0, 1292, 0, 0, 0, 0, 0, 0, 1293, 0, 1294, 0, 0, 0, 0, 1295, 0, 1296, 0, 0, 0, 0, 1297, 1298, 0,
    0, 1299, 0, 0, 1300, 0, 0, 0, 0, 0, 0, 1301, 0, 1302, 0, 0, 0, 0, 0, 0, 1303, 0, 1304, 0, 0, 0, 0, 0, 0, 1305, 0, 1306,
    0, 0, 1307, 0, 1308, 0, 1309, 0, 1310, 0, 1311, 0, 1312, 0, 0, 1313, 0, 1314, 0, 0, 0, 0, 1315, 0, 1316, 0, 1317, 0, 1318, 0, 0, 1319,
    0, 1320, 0, 0, 1321, 0, 1322, 0, 0, 0, 0, 0, 0, 0, 0, 1323, 0, 1324, 0, 0, 1325, 0, 1326, 0, 1327, 0, 0, 0, 1328, 0, 1329, 0,
    1330, 0, 1331, 0, 1332, 0, 1333, 0, 0, 0, 1334, 0, 1335, 0, 1336, 0, 0, 0, 1337, 0, 0, 1338, 0, 1339, 0, 0, 1340, 0, 1341, 0, 0, 0,
    1342, 0, 1343, 0, 1344, 0, 1345, 0, 0, 0, 0, 0, 0, 1346, 0, 0, 1347, 0, 1348, 0, 1349, 0, 0, 0, 1350, 0, 1351, 0, 0, 1352, 0, 0,
    1353, 0, 0, 1354, 0, 1355, 0, 0, 1356, 0, 1357, 0, 0, 1358, 1359, 0, 1360, 0, 0, 1361, 0, 1362, 0, 1363, 0, 1364, 0, 1365, 0, 1366, 0, 0,
    0, 1367, 0, 1368, 0, 1369, 0, 1370, 0, 1371, 0, 1372, 0, 1373, 0, 1374, 0, 0, 1375, 0, 1376, 0, 0, 0, 1377, 0, 1378, 0, 1379, 0, 1380, 0,
    1381, 0, 0, 0, 1382, 0, 1383, 0, 1384, 0, 1385, 0, 1386, 0, 1387, 0, 1388, 0, 1389, 0, 1390, 0, 1391, 0, 0, 1392,
};
void recomp_unit_0177_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AC8000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0177[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AC8000;
    case 2u: goto L_08AC8010;
    case 3u: goto L_08AC8020;
    case 4u: goto L_08AC8028;
    case 5u: goto L_08AC8034;
    case 6u: goto L_08AC8044;
    case 7u: goto L_08AC8054;
    case 8u: goto L_08AC805C;
    case 9u: goto L_08AC8078;
    case 10u: goto L_08AC8084;
    case 11u: goto L_08AC8090;
    case 12u: goto L_08AC8098;
    case 13u: goto L_08AC80A0;
    case 14u: goto L_08AC80A4;
    case 15u: goto L_08AC80AC;
    case 16u: goto L_08AC80B4;
    case 17u: goto L_08AC80BC;
    case 18u: goto L_08AC80C4;
    case 19u: goto L_08AC80CC;
    case 20u: goto L_08AC80D4;
    case 21u: goto L_08AC80DC;
    case 22u: goto L_08AC80E4;
    case 23u: goto L_08AC80EC;
    case 24u: goto L_08AC80F4;
    case 25u: goto L_08AC80FC;
    case 26u: goto L_08AC8104;
    case 27u: goto L_08AC810C;
    case 28u: goto L_08AC8114;
    case 29u: goto L_08AC811C;
    case 30u: goto L_08AC816C;
    case 31u: goto L_08AC8174;
    case 32u: goto L_08AC817C;
    case 33u: goto L_08AC818C;
    case 34u: goto L_08AC8194;
    case 35u: goto L_08AC81A4;
    case 36u: goto L_08AC81AC;
    case 37u: goto L_08AC81B8;
    case 38u: goto L_08AC81C8;
    case 39u: goto L_08AC81D4;
    case 40u: goto L_08AC81DC;
    case 41u: goto L_08AC81E4;
    case 42u: goto L_08AC81F4;
    case 43u: goto L_08AC8204;
    case 44u: goto L_08AC8214;
    case 45u: goto L_08AC821C;
    case 46u: goto L_08AC8224;
    case 47u: goto L_08AC822C;
    case 48u: goto L_08AC8234;
    case 49u: goto L_08AC8240;
    case 50u: goto L_08AC8250;
    case 51u: goto L_08AC8258;
    case 52u: goto L_08AC8260;
    case 53u: goto L_08AC826C;
    case 54u: goto L_08AC8274;
    case 55u: goto L_08AC8280;
    case 56u: goto L_08AC8288;
    case 57u: goto L_08AC8294;
    case 58u: goto L_08AC829C;
    case 59u: goto L_08AC82A4;
    case 60u: goto L_08AC82B0;
    case 61u: goto L_08AC82B8;
    case 62u: goto L_08AC82C0;
    case 63u: goto L_08AC82C8;
    case 64u: goto L_08AC82D0;
    case 65u: goto L_08AC82D8;
    case 66u: goto L_08AC82E0;
    case 67u: goto L_08AC82E8;
    case 68u: goto L_08AC82F8;
    case 69u: goto L_08AC8300;
    case 70u: goto L_08AC8308;
    case 71u: goto L_08AC8310;
    case 72u: goto L_08AC8318;
    case 73u: goto L_08AC8320;
    case 74u: goto L_08AC8328;
    case 75u: goto L_08AC8334;
    case 76u: goto L_08AC833C;
    case 77u: goto L_08AC8344;
    case 78u: goto L_08AC834C;
    case 79u: goto L_08AC8358;
    case 80u: goto L_08AC836C;
    case 81u: goto L_08AC8378;
    case 82u: goto L_08AC8380;
    case 83u: goto L_08AC8388;
    case 84u: goto L_08AC8390;
    case 85u: goto L_08AC839C;
    case 86u: goto L_08AC83A4;
    case 87u: goto L_08AC83B0;
    case 88u: goto L_08AC83C4;
    case 89u: goto L_08AC83D0;
    case 90u: goto L_08AC83D8;
    case 91u: goto L_08AC83EC;
    case 92u: goto L_08AC8404;
    case 93u: goto L_08AC840C;
    case 94u: goto L_08AC8414;
    case 95u: goto L_08AC841C;
    case 96u: goto L_08AC842C;
    case 97u: goto L_08AC8434;
    case 98u: goto L_08AC8440;
    case 99u: goto L_08AC8448;
    case 100u: goto L_08AC8454;
    case 101u: goto L_08AC845C;
    case 102u: goto L_08AC8464;
    case 103u: goto L_08AC846C;
    case 104u: goto L_08AC8474;
    case 105u: goto L_08AC8480;
    case 106u: goto L_08AC8488;
    case 107u: goto L_08AC8490;
    case 108u: goto L_08AC8498;
    case 109u: goto L_08AC84A8;
    case 110u: goto L_08AC84CC;
    case 111u: goto L_08AC84D8;
    case 112u: goto L_08AC850C;
    case 113u: goto L_08AC8520;
    case 114u: goto L_08AC8534;
    case 115u: goto L_08AC8540;
    case 116u: goto L_08AC8550;
    case 117u: goto L_08AC8558;
    case 118u: goto L_08AC8560;
    case 119u: goto L_08AC8568;
    case 120u: goto L_08AC8584;
    case 121u: goto L_08AC858C;
    case 122u: goto L_08AC8594;
    case 123u: goto L_08AC859C;
    case 124u: goto L_08AC85AC;
    case 125u: goto L_08AC85B8;
    case 126u: goto L_08AC85C8;
    case 127u: goto L_08AC85D4;
    case 128u: goto L_08AC85DC;
    case 129u: goto L_08AC85EC;
    case 130u: goto L_08AC85F4;
    case 131u: goto L_08AC85FC;
    case 132u: goto L_08AC8618;
    case 133u: goto L_08AC8620;
    case 134u: goto L_08AC8630;
    case 135u: goto L_08AC8638;
    case 136u: goto L_08AC8640;
    case 137u: goto L_08AC8648;
    case 138u: goto L_08AC8650;
    case 139u: goto L_08AC8658;
    case 140u: goto L_08AC8660;
    case 141u: goto L_08AC8668;
    case 142u: goto L_08AC8678;
    case 143u: goto L_08AC8680;
    case 144u: goto L_08AC8688;
    case 145u: goto L_08AC8690;
    case 146u: goto L_08AC869C;
    case 147u: goto L_08AC86A8;
    case 148u: goto L_08AC86C4;
    case 149u: goto L_08AC86CC;
    case 150u: goto L_08AC86D8;
    case 151u: goto L_08AC86E0;
    case 152u: goto L_08AC86E8;
    case 153u: goto L_08AC86F0;
    case 154u: goto L_08AC86FC;
    case 155u: goto L_08AC8704;
    case 156u: goto L_08AC8710;
    case 157u: goto L_08AC8718;
    case 158u: goto L_08AC8720;
    case 159u: goto L_08AC8730;
    case 160u: goto L_08AC873C;
    case 161u: goto L_08AC8744;
    case 162u: goto L_08AC874C;
    case 163u: goto L_08AC8758;
    case 164u: goto L_08AC8764;
    case 165u: goto L_08AC876C;
    case 166u: goto L_08AC877C;
    case 167u: goto L_08AC8784;
    case 168u: goto L_08AC8794;
    case 169u: goto L_08AC879C;
    case 170u: goto L_08AC87A8;
    case 171u: goto L_08AC87B4;
    case 172u: goto L_08AC87BC;
    case 173u: goto L_08AC87C4;
    case 174u: goto L_08AC87CC;
    case 175u: goto L_08AC87D8;
    case 176u: goto L_08AC87E4;
    case 177u: goto L_08AC87F4;
    case 178u: goto L_08AC87FC;
    case 179u: goto L_08AC8804;
    case 180u: goto L_08AC880C;
    case 181u: goto L_08AC8818;
    case 182u: goto L_08AC8820;
    case 183u: goto L_08AC8828;
    case 184u: goto L_08AC8838;
    case 185u: goto L_08AC8844;
    case 186u: goto L_08AC8850;
    case 187u: goto L_08AC8860;
    case 188u: goto L_08AC886C;
    case 189u: goto L_08AC8874;
    case 190u: goto L_08AC887C;
    case 191u: goto L_08AC8888;
    case 192u: goto L_08AC88A8;
    case 193u: goto L_08AC88B0;
    case 194u: goto L_08AC88C4;
    case 195u: goto L_08AC88CC;
    case 196u: goto L_08AC88D4;
    case 197u: goto L_08AC88DC;
    case 198u: goto L_08AC88E8;
    case 199u: goto L_08AC88F4;
    case 200u: goto L_08AC8900;
    case 201u: goto L_08AC8908;
    case 202u: goto L_08AC8914;
    case 203u: goto L_08AC891C;
    case 204u: goto L_08AC8924;
    case 205u: goto L_08AC892C;
    case 206u: goto L_08AC8934;
    case 207u: goto L_08AC893C;
    case 208u: goto L_08AC8944;
    case 209u: goto L_08AC8964;
    case 210u: goto L_08AC896C;
    case 211u: goto L_08AC8978;
    case 212u: goto L_08AC8980;
    case 213u: goto L_08AC898C;
    case 214u: goto L_08AC8998;
    case 215u: goto L_08AC89A4;
    case 216u: goto L_08AC89AC;
    case 217u: goto L_08AC89B4;
    case 218u: goto L_08AC89E0;
    case 219u: goto L_08AC89E8;
    case 220u: goto L_08AC89FC;
    case 221u: goto L_08AC8A04;
    case 222u: goto L_08AC8A0C;
    case 223u: goto L_08AC8A14;
    case 224u: goto L_08AC8A1C;
    case 225u: goto L_08AC8A24;
    case 226u: goto L_08AC8A2C;
    case 227u: goto L_08AC8A34;
    case 228u: goto L_08AC8A3C;
    case 229u: goto L_08AC8A44;
    case 230u: goto L_08AC8A4C;
    case 231u: goto L_08AC8A54;
    case 232u: goto L_08AC8A5C;
    case 233u: goto L_08AC8A6C;
    case 234u: goto L_08AC8A74;
    case 235u: goto L_08AC8A7C;
    case 236u: goto L_08AC8A84;
    case 237u: goto L_08AC8A8C;
    case 238u: goto L_08AC8A9C;
    case 239u: goto L_08AC8AA4;
    case 240u: goto L_08AC8AB8;
    case 241u: goto L_08AC8AC0;
    case 242u: goto L_08AC8AD0;
    case 243u: goto L_08AC8AD8;
    case 244u: goto L_08AC8AE4;
    case 245u: goto L_08AC8AEC;
    case 246u: goto L_08AC8B00;
    case 247u: goto L_08AC8B08;
    case 248u: goto L_08AC8B10;
    case 249u: goto L_08AC8B24;
    case 250u: goto L_08AC8B2C;
    case 251u: goto L_08AC8B34;
    case 252u: goto L_08AC8B3C;
    case 253u: goto L_08AC8B48;
    case 254u: goto L_08AC8B64;
    case 255u: goto L_08AC8BA8;
    case 256u: goto L_08AC8BBC;
    case 257u: goto L_08AC8BD4;
    case 258u: goto L_08AC8BE8;
    case 259u: goto L_08AC8C18;
    case 260u: goto L_08AC8C2C;
    case 261u: goto L_08AC8C44;
    case 262u: goto L_08AC8C58;
    case 263u: goto L_08AC8C80;
    case 264u: goto L_08AC8C90;
    case 265u: goto L_08AC8CA8;
    case 266u: goto L_08AC8CBC;
    case 267u: goto L_08AC8CE4;
    case 268u: goto L_08AC8CF4;
    case 269u: goto L_08AC8D08;
    case 270u: goto L_08AC8D28;
    case 271u: goto L_08AC8D38;
    case 272u: goto L_08AC8D50;
    case 273u: goto L_08AC8D58;
    case 274u: goto L_08AC8D60;
    case 275u: goto L_08AC8D6C;
    case 276u: goto L_08AC8D74;
    case 277u: goto L_08AC8D80;
    case 278u: goto L_08AC8D8C;
    case 279u: goto L_08AC8D98;
    case 280u: goto L_08AC8DA8;
    case 281u: goto L_08AC8DB0;
    case 282u: goto L_08AC8DB8;
    case 283u: goto L_08AC8DD4;
    case 284u: goto L_08AC8DE0;
    case 285u: goto L_08AC8DF0;
    case 286u: goto L_08AC8E04;
    case 287u: goto L_08AC8E0C;
    case 288u: goto L_08AC8E24;
    case 289u: goto L_08AC8E2C;
    case 290u: goto L_08AC8E34;
    case 291u: goto L_08AC8E44;
    case 292u: goto L_08AC8E54;
    case 293u: goto L_08AC8E5C;
    case 294u: goto L_08AC8E64;
    case 295u: goto L_08AC8E78;
    case 296u: goto L_08AC8E80;
    case 297u: goto L_08AC8E94;
    case 298u: goto L_08AC8EA4;
    case 299u: goto L_08AC8EC4;
    case 300u: goto L_08AC8ED4;
    case 301u: goto L_08AC8EDC;
    case 302u: goto L_08AC8EE4;
    case 303u: goto L_08AC8EEC;
    case 304u: goto L_08AC8EF8;
    case 305u: goto L_08AC8F00;
    case 306u: goto L_08AC8F0C;
    case 307u: goto L_08AC8F14;
    case 308u: goto L_08AC8F1C;
    case 309u: goto L_08AC8F2C;
    case 310u: goto L_08AC8F34;
    case 311u: goto L_08AC8F3C;
    case 312u: goto L_08AC8F44;
    case 313u: goto L_08AC8F4C;
    case 314u: goto L_08AC8F54;
    case 315u: goto L_08AC8F64;
    case 316u: goto L_08AC8F74;
    case 317u: goto L_08AC8F7C;
    case 318u: goto L_08AC8F8C;
    case 319u: goto L_08AC8F94;
    case 320u: goto L_08AC8FA0;
    case 321u: goto L_08AC8FC8;
    case 322u: goto L_08AC8FE0;
    case 323u: goto L_08AC8FE8;
    case 324u: goto L_08AC8FF0;
    case 325u: goto L_08AC8FF8;
    case 326u: goto L_08AC9000;
    case 327u: goto L_08AC9010;
    case 328u: goto L_08AC9018;
    case 329u: goto L_08AC9028;
    case 330u: goto L_08AC9030;
    case 331u: goto L_08AC9040;
    case 332u: goto L_08AC9048;
    case 333u: goto L_08AC9058;
    case 334u: goto L_08AC9060;
    case 335u: goto L_08AC9068;
    case 336u: goto L_08AC9070;
    case 337u: goto L_08AC9078;
    case 338u: goto L_08AC9088;
    case 339u: goto L_08AC9090;
    case 340u: goto L_08AC90A0;
    case 341u: goto L_08AC90A8;
    case 342u: goto L_08AC90B8;
    case 343u: goto L_08AC90C0;
    case 344u: goto L_08AC90D0;
    case 345u: goto L_08AC90D8;
    case 346u: goto L_08AC90E0;
    case 347u: goto L_08AC90E8;
    case 348u: goto L_08AC90F4;
    case 349u: goto L_08AC90FC;
    case 350u: goto L_08AC9108;
    case 351u: goto L_08AC9118;
    case 352u: goto L_08AC9128;
    case 353u: goto L_08AC9130;
    case 354u: goto L_08AC9140;
    case 355u: goto L_08AC9148;
    case 356u: goto L_08AC9154;
    case 357u: goto L_08AC915C;
    case 358u: goto L_08AC9164;
    case 359u: goto L_08AC916C;
    case 360u: goto L_08AC9174;
    case 361u: goto L_08AC917C;
    case 362u: goto L_08AC9188;
    case 363u: goto L_08AC9190;
    case 364u: goto L_08AC9198;
    case 365u: goto L_08AC91A0;
    case 366u: goto L_08AC91A8;
    case 367u: goto L_08AC91B8;
    case 368u: goto L_08AC91C4;
    case 369u: goto L_08AC91CC;
    case 370u: goto L_08AC91D8;
    case 371u: goto L_08AC91E0;
    case 372u: goto L_08AC91EC;
    case 373u: goto L_08AC91F4;
    case 374u: goto L_08AC9204;
    case 375u: goto L_08AC920C;
    case 376u: goto L_08AC9218;
    case 377u: goto L_08AC9230;
    case 378u: goto L_08AC9238;
    case 379u: goto L_08AC9240;
    case 380u: goto L_08AC924C;
    case 381u: goto L_08AC925C;
    case 382u: goto L_08AC9268;
    case 383u: goto L_08AC9274;
    case 384u: goto L_08AC927C;
    case 385u: goto L_08AC9294;
    case 386u: goto L_08AC929C;
    case 387u: goto L_08AC92A4;
    case 388u: goto L_08AC92B4;
    case 389u: goto L_08AC92BC;
    case 390u: goto L_08AC92C4;
    case 391u: goto L_08AC92CC;
    case 392u: goto L_08AC92D4;
    case 393u: goto L_08AC92DC;
    case 394u: goto L_08AC92E4;
    case 395u: goto L_08AC92EC;
    case 396u: goto L_08AC92F8;
    case 397u: goto L_08AC9308;
    case 398u: goto L_08AC9310;
    case 399u: goto L_08AC9318;
    case 400u: goto L_08AC9320;
    case 401u: goto L_08AC9328;
    case 402u: goto L_08AC9334;
    case 403u: goto L_08AC933C;
    case 404u: goto L_08AC934C;
    case 405u: goto L_08AC9354;
    case 406u: goto L_08AC9364;
    case 407u: goto L_08AC936C;
    case 408u: goto L_08AC9374;
    case 409u: goto L_08AC937C;
    case 410u: goto L_08AC9388;
    case 411u: goto L_08AC9398;
    case 412u: goto L_08AC93A8;
    case 413u: goto L_08AC93BC;
    case 414u: goto L_08AC93C8;
    case 415u: goto L_08AC93D0;
    case 416u: goto L_08AC93E0;
    case 417u: goto L_08AC93E8;
    case 418u: goto L_08AC93F8;
    case 419u: goto L_08AC9400;
    case 420u: goto L_08AC9410;
    case 421u: goto L_08AC9424;
    case 422u: goto L_08AC942C;
    case 423u: goto L_08AC9438;
    case 424u: goto L_08AC9440;
    case 425u: goto L_08AC9448;
    case 426u: goto L_08AC9458;
    case 427u: goto L_08AC9468;
    case 428u: goto L_08AC9470;
    case 429u: goto L_08AC9484;
    case 430u: goto L_08AC948C;
    case 431u: goto L_08AC9498;
    case 432u: goto L_08AC94A0;
    case 433u: goto L_08AC94A8;
    case 434u: goto L_08AC94B8;
    case 435u: goto L_08AC94C8;
    case 436u: goto L_08AC94D0;
    case 437u: goto L_08AC94D8;
    case 438u: goto L_08AC94E4;
    case 439u: goto L_08AC94EC;
    case 440u: goto L_08AC94F4;
    case 441u: goto L_08AC9504;
    case 442u: goto L_08AC9514;
    case 443u: goto L_08AC9518;
    case 444u: goto L_08AC9520;
    case 445u: goto L_08AC9530;
    case 446u: goto L_08AC9538;
    case 447u: goto L_08AC9544;
    case 448u: goto L_08AC954C;
    case 449u: goto L_08AC9554;
    case 450u: goto L_08AC9564;
    case 451u: goto L_08AC9574;
    case 452u: goto L_08AC957C;
    case 453u: goto L_08AC9584;
    case 454u: goto L_08AC9594;
    case 455u: goto L_08AC95A0;
    case 456u: goto L_08AC95B4;
    case 457u: goto L_08AC95C0;
    case 458u: goto L_08AC95CC;
    case 459u: goto L_08AC95D4;
    case 460u: goto L_08AC95E0;
    case 461u: goto L_08AC95F4;
    case 462u: goto L_08AC95F8;
    case 463u: goto L_08AC9600;
    case 464u: goto L_08AC9608;
    case 465u: goto L_08AC9610;
    case 466u: goto L_08AC9618;
    case 467u: goto L_08AC9620;
    case 468u: goto L_08AC9628;
    case 469u: goto L_08AC9630;
    case 470u: goto L_08AC9638;
    case 471u: goto L_08AC9640;
    case 472u: goto L_08AC9650;
    case 473u: goto L_08AC965C;
    case 474u: goto L_08AC9664;
    case 475u: goto L_08AC966C;
    case 476u: goto L_08AC9674;
    case 477u: goto L_08AC967C;
    case 478u: goto L_08AC968C;
    case 479u: goto L_08AC9694;
    case 480u: goto L_08AC96A4;
    case 481u: goto L_08AC96AC;
    case 482u: goto L_08AC96BC;
    case 483u: goto L_08AC96CC;
    case 484u: goto L_08AC96D4;
    case 485u: goto L_08AC96EC;
    case 486u: goto L_08AC96F4;
    case 487u: goto L_08AC9700;
    case 488u: goto L_08AC9708;
    case 489u: goto L_08AC9710;
    case 490u: goto L_08AC9718;
    case 491u: goto L_08AC9720;
    case 492u: goto L_08AC9728;
    case 493u: goto L_08AC9730;
    case 494u: goto L_08AC9738;
    case 495u: goto L_08AC9740;
    case 496u: goto L_08AC9748;
    case 497u: goto L_08AC9750;
    case 498u: goto L_08AC9758;
    case 499u: goto L_08AC9760;
    case 500u: goto L_08AC976C;
    case 501u: goto L_08AC9774;
    case 502u: goto L_08AC977C;
    case 503u: goto L_08AC9788;
    case 504u: goto L_08AC9790;
    case 505u: goto L_08AC9798;
    case 506u: goto L_08AC97A8;
    case 507u: goto L_08AC97B0;
    case 508u: goto L_08AC97C8;
    case 509u: goto L_08AC97D0;
    case 510u: goto L_08AC97D8;
    case 511u: goto L_08AC97E0;
    case 512u: goto L_08AC97E8;
    case 513u: goto L_08AC97F0;
    case 514u: goto L_08AC97F8;
    case 515u: goto L_08AC9804;
    case 516u: goto L_08AC980C;
    case 517u: goto L_08AC9814;
    case 518u: goto L_08AC981C;
    case 519u: goto L_08AC9824;
    case 520u: goto L_08AC982C;
    case 521u: goto L_08AC9834;
    case 522u: goto L_08AC9840;
    case 523u: goto L_08AC9848;
    case 524u: goto L_08AC9850;
    case 525u: goto L_08AC985C;
    case 526u: goto L_08AC9864;
    case 527u: goto L_08AC986C;
    case 528u: goto L_08AC9874;
    case 529u: goto L_08AC9880;
    case 530u: goto L_08AC9888;
    case 531u: goto L_08AC9898;
    case 532u: goto L_08AC98A0;
    case 533u: goto L_08AC98B4;
    case 534u: goto L_08AC98BC;
    case 535u: goto L_08AC98C4;
    case 536u: goto L_08AC98CC;
    case 537u: goto L_08AC98D4;
    case 538u: goto L_08AC98DC;
    case 539u: goto L_08AC98E8;
    case 540u: goto L_08AC98F0;
    case 541u: goto L_08AC98F8;
    case 542u: goto L_08AC9904;
    case 543u: goto L_08AC990C;
    case 544u: goto L_08AC9914;
    case 545u: goto L_08AC991C;
    case 546u: goto L_08AC9924;
    case 547u: goto L_08AC992C;
    case 548u: goto L_08AC993C;
    case 549u: goto L_08AC9944;
    case 550u: goto L_08AC9950;
    case 551u: goto L_08AC9958;
    case 552u: goto L_08AC9960;
    case 553u: goto L_08AC9970;
    case 554u: goto L_08AC9978;
    case 555u: goto L_08AC9988;
    case 556u: goto L_08AC9990;
    case 557u: goto L_08AC999C;
    case 558u: goto L_08AC99B0;
    case 559u: goto L_08AC99BC;
    case 560u: goto L_08AC99C4;
    case 561u: goto L_08AC99CC;
    case 562u: goto L_08AC99D4;
    case 563u: goto L_08AC99EC;
    case 564u: goto L_08AC99F8;
    case 565u: goto L_08AC9A00;
    case 566u: goto L_08AC9A0C;
    case 567u: goto L_08AC9A1C;
    case 568u: goto L_08AC9A28;
    case 569u: goto L_08AC9A30;
    case 570u: goto L_08AC9A38;
    case 571u: goto L_08AC9A40;
    case 572u: goto L_08AC9A68;
    case 573u: goto L_08AC9A70;
    case 574u: goto L_08AC9A78;
    case 575u: goto L_08AC9A80;
    case 576u: goto L_08AC9A88;
    case 577u: goto L_08AC9A90;
    case 578u: goto L_08AC9A98;
    case 579u: goto L_08AC9AA0;
    case 580u: goto L_08AC9AA8;
    case 581u: goto L_08AC9AB0;
    case 582u: goto L_08AC9ABC;
    case 583u: goto L_08AC9AC4;
    case 584u: goto L_08AC9AD0;
    case 585u: goto L_08AC9AE0;
    case 586u: goto L_08AC9AE8;
    case 587u: goto L_08AC9AF0;
    case 588u: goto L_08AC9AF8;
    case 589u: goto L_08AC9B04;
    case 590u: goto L_08AC9B0C;
    case 591u: goto L_08AC9B18;
    case 592u: goto L_08AC9B20;
    case 593u: goto L_08AC9B28;
    case 594u: goto L_08AC9B30;
    case 595u: goto L_08AC9B38;
    case 596u: goto L_08AC9B40;
    case 597u: goto L_08AC9B4C;
    case 598u: goto L_08AC9B54;
    case 599u: goto L_08AC9B5C;
    case 600u: goto L_08AC9B64;
    case 601u: goto L_08AC9B6C;
    case 602u: goto L_08AC9B74;
    case 603u: goto L_08AC9B7C;
    case 604u: goto L_08AC9B84;
    case 605u: goto L_08AC9B90;
    case 606u: goto L_08AC9B98;
    case 607u: goto L_08AC9BA0;
    case 608u: goto L_08AC9BA8;
    case 609u: goto L_08AC9BB0;
    case 610u: goto L_08AC9BBC;
    case 611u: goto L_08AC9BC4;
    case 612u: goto L_08AC9BCC;
    case 613u: goto L_08AC9BDC;
    case 614u: goto L_08AC9BE4;
    case 615u: goto L_08AC9BEC;
    case 616u: goto L_08AC9BFC;
    case 617u: goto L_08AC9C14;
    case 618u: goto L_08AC9C1C;
    case 619u: goto L_08AC9C24;
    case 620u: goto L_08AC9C2C;
    case 621u: goto L_08AC9C34;
    case 622u: goto L_08AC9C44;
    case 623u: goto L_08AC9C4C;
    case 624u: goto L_08AC9C54;
    case 625u: goto L_08AC9C5C;
    case 626u: goto L_08AC9C64;
    case 627u: goto L_08AC9C74;
    case 628u: goto L_08AC9C7C;
    case 629u: goto L_08AC9C84;
    case 630u: goto L_08AC9C94;
    case 631u: goto L_08AC9C9C;
    case 632u: goto L_08AC9CA8;
    case 633u: goto L_08AC9CB0;
    case 634u: goto L_08AC9CB8;
    case 635u: goto L_08AC9CC0;
    case 636u: goto L_08AC9CC8;
    case 637u: goto L_08AC9CD0;
    case 638u: goto L_08AC9CD8;
    case 639u: goto L_08AC9CE0;
    case 640u: goto L_08AC9CE8;
    case 641u: goto L_08AC9CF0;
    case 642u: goto L_08AC9CF8;
    case 643u: goto L_08AC9D00;
    case 644u: goto L_08AC9D08;
    case 645u: goto L_08AC9D14;
    case 646u: goto L_08AC9D1C;
    case 647u: goto L_08AC9D20;
    case 648u: goto L_08AC9D28;
    case 649u: goto L_08AC9D30;
    case 650u: goto L_08AC9D38;
    case 651u: goto L_08AC9D40;
    case 652u: goto L_08AC9D48;
    case 653u: goto L_08AC9D50;
    case 654u: goto L_08AC9D58;
    case 655u: goto L_08AC9D60;
    case 656u: goto L_08AC9D6C;
    case 657u: goto L_08AC9D74;
    case 658u: goto L_08AC9D7C;
    case 659u: goto L_08AC9D88;
    case 660u: goto L_08AC9D94;
    case 661u: goto L_08AC9D9C;
    case 662u: goto L_08AC9DA8;
    case 663u: goto L_08AC9DB8;
    case 664u: goto L_08AC9DD4;
    case 665u: goto L_08AC9DD8;
    case 666u: goto L_08AC9DE0;
    case 667u: goto L_08AC9DE8;
    case 668u: goto L_08AC9DEC;
    case 669u: goto L_08AC9DF4;
    case 670u: goto L_08AC9DFC;
    case 671u: goto L_08AC9E0C;
    case 672u: goto L_08AC9E14;
    case 673u: goto L_08AC9E24;
    case 674u: goto L_08AC9E2C;
    case 675u: goto L_08AC9E3C;
    case 676u: goto L_08AC9E44;
    case 677u: goto L_08AC9E4C;
    case 678u: goto L_08AC9E58;
    case 679u: goto L_08AC9E60;
    case 680u: goto L_08AC9E6C;
    case 681u: goto L_08AC9E74;
    case 682u: goto L_08AC9E7C;
    case 683u: goto L_08AC9E8C;
    case 684u: goto L_08AC9E94;
    case 685u: goto L_08AC9E9C;
    case 686u: goto L_08AC9EA4;
    case 687u: goto L_08AC9EAC;
    case 688u: goto L_08AC9EB4;
    case 689u: goto L_08AC9EBC;
    case 690u: goto L_08AC9EC4;
    case 691u: goto L_08AC9ECC;
    case 692u: goto L_08AC9ED8;
    case 693u: goto L_08AC9EE0;
    case 694u: goto L_08AC9EEC;
    case 695u: goto L_08AC9EF0;
    case 696u: goto L_08AC9EF8;
    case 697u: goto L_08AC9F00;
    case 698u: goto L_08AC9F10;
    case 699u: goto L_08AC9F18;
    case 700u: goto L_08AC9F20;
    case 701u: goto L_08AC9F28;
    case 702u: goto L_08AC9F30;
    case 703u: goto L_08AC9F38;
    case 704u: goto L_08AC9F48;
    case 705u: goto L_08AC9F50;
    case 706u: goto L_08AC9F60;
    case 707u: goto L_08AC9F68;
    case 708u: goto L_08AC9F78;
    case 709u: goto L_08AC9F80;
    case 710u: goto L_08AC9F88;
    case 711u: goto L_08AC9F94;
    case 712u: goto L_08AC9F9C;
    case 713u: goto L_08AC9FA8;
    case 714u: goto L_08AC9FB0;
    case 715u: goto L_08AC9FB8;
    case 716u: goto L_08AC9FC8;
    case 717u: goto L_08AC9FD0;
    case 718u: goto L_08AC9FE0;
    case 719u: goto L_08AC9FE8;
    case 720u: goto L_08AC9FF4;
    case 721u: goto L_08AC9FFC;
    case 722u: goto L_08ACA004;
    case 723u: goto L_08ACA00C;
    case 724u: goto L_08ACA014;
    case 725u: goto L_08ACA020;
    case 726u: goto L_08ACA028;
    case 727u: goto L_08ACA030;
    case 728u: goto L_08ACA038;
    case 729u: goto L_08ACA044;
    case 730u: goto L_08ACA04C;
    case 731u: goto L_08ACA054;
    case 732u: goto L_08ACA05C;
    case 733u: goto L_08ACA068;
    case 734u: goto L_08ACA070;
    case 735u: goto L_08ACA074;
    case 736u: goto L_08ACA07C;
    case 737u: goto L_08ACA090;
    case 738u: goto L_08ACA098;
    case 739u: goto L_08ACA0A0;
    case 740u: goto L_08ACA0AC;
    case 741u: goto L_08ACA0B4;
    case 742u: goto L_08ACA0BC;
    case 743u: goto L_08ACA0C4;
    case 744u: goto L_08ACA0D4;
    case 745u: goto L_08ACA0DC;
    case 746u: goto L_08ACA0EC;
    case 747u: goto L_08ACA0F4;
    case 748u: goto L_08ACA0FC;
    case 749u: goto L_08ACA10C;
    case 750u: goto L_08ACA128;
    case 751u: goto L_08ACA140;
    case 752u: goto L_08ACA14C;
    case 753u: goto L_08ACA154;
    case 754u: goto L_08ACA15C;
    case 755u: goto L_08ACA164;
    case 756u: goto L_08ACA170;
    case 757u: goto L_08ACA178;
    case 758u: goto L_08ACA188;
    case 759u: goto L_08ACA190;
    case 760u: goto L_08ACA198;
    case 761u: goto L_08ACA1A8;
    case 762u: goto L_08ACA1C0;
    case 763u: goto L_08ACA1D4;
    case 764u: goto L_08ACA1E0;
    case 765u: goto L_08ACA1E8;
    case 766u: goto L_08ACA1F0;
    case 767u: goto L_08ACA1F8;
    case 768u: goto L_08ACA200;
    case 769u: goto L_08ACA218;
    case 770u: goto L_08ACA220;
    case 771u: goto L_08ACA228;
    case 772u: goto L_08ACA234;
    case 773u: goto L_08ACA244;
    case 774u: goto L_08ACA24C;
    case 775u: goto L_08ACA264;
    case 776u: goto L_08ACA26C;
    case 777u: goto L_08ACA27C;
    case 778u: goto L_08ACA284;
    case 779u: goto L_08ACA294;
    case 780u: goto L_08ACA29C;
    case 781u: goto L_08ACA2B4;
    case 782u: goto L_08ACA2BC;
    case 783u: goto L_08ACA2C8;
    case 784u: goto L_08ACA2D4;
    case 785u: goto L_08ACA2E0;
    case 786u: goto L_08ACA2E8;
    case 787u: goto L_08ACA2F0;
    case 788u: goto L_08ACA304;
    case 789u: goto L_08ACA310;
    case 790u: goto L_08ACA318;
    case 791u: goto L_08ACA320;
    case 792u: goto L_08ACA328;
    case 793u: goto L_08ACA330;
    case 794u: goto L_08ACA338;
    case 795u: goto L_08ACA348;
    case 796u: goto L_08ACA358;
    case 797u: goto L_08ACA364;
    case 798u: goto L_08ACA36C;
    case 799u: goto L_08ACA374;
    case 800u: goto L_08ACA37C;
    case 801u: goto L_08ACA394;
    case 802u: goto L_08ACA39C;
    case 803u: goto L_08ACA3A4;
    case 804u: goto L_08ACA3B0;
    case 805u: goto L_08ACA3B8;
    case 806u: goto L_08ACA3C0;
    case 807u: goto L_08ACA3E0;
    case 808u: goto L_08ACA3EC;
    case 809u: goto L_08ACA3FC;
    case 810u: goto L_08ACA404;
    case 811u: goto L_08ACA40C;
    case 812u: goto L_08ACA414;
    case 813u: goto L_08ACA41C;
    case 814u: goto L_08ACA424;
    case 815u: goto L_08ACA434;
    case 816u: goto L_08ACA43C;
    case 817u: goto L_08ACA44C;
    case 818u: goto L_08ACA454;
    case 819u: goto L_08ACA464;
    case 820u: goto L_08ACA470;
    case 821u: goto L_08ACA47C;
    case 822u: goto L_08ACA484;
    case 823u: goto L_08ACA48C;
    case 824u: goto L_08ACA494;
    case 825u: goto L_08ACA49C;
    case 826u: goto L_08ACA4A4;
    case 827u: goto L_08ACA4AC;
    case 828u: goto L_08ACA4B4;
    case 829u: goto L_08ACA4C0;
    case 830u: goto L_08ACA4C8;
    case 831u: goto L_08ACA4D8;
    case 832u: goto L_08ACA4E0;
    case 833u: goto L_08ACA4E8;
    case 834u: goto L_08ACA4FC;
    case 835u: goto L_08ACA508;
    case 836u: goto L_08ACA518;
    case 837u: goto L_08ACA520;
    case 838u: goto L_08ACA528;
    case 839u: goto L_08ACA530;
    case 840u: goto L_08ACA540;
    case 841u: goto L_08ACA550;
    case 842u: goto L_08ACA55C;
    case 843u: goto L_08ACA56C;
    case 844u: goto L_08ACA578;
    case 845u: goto L_08ACA580;
    case 846u: goto L_08ACA588;
    case 847u: goto L_08ACA590;
    case 848u: goto L_08ACA59C;
    case 849u: goto L_08ACA5A4;
    case 850u: goto L_08ACA5AC;
    case 851u: goto L_08ACA5B4;
    case 852u: goto L_08ACA5CC;
    case 853u: goto L_08ACA5D4;
    case 854u: goto L_08ACA5E0;
    case 855u: goto L_08ACA5EC;
    case 856u: goto L_08ACA5F4;
    case 857u: goto L_08ACA604;
    case 858u: goto L_08ACA60C;
    case 859u: goto L_08ACA614;
    case 860u: goto L_08ACA62C;
    case 861u: goto L_08ACA634;
    case 862u: goto L_08ACA63C;
    case 863u: goto L_08ACA64C;
    case 864u: goto L_08ACA658;
    case 865u: goto L_08ACA690;
    case 866u: goto L_08ACA6A4;
    case 867u: goto L_08ACA6C0;
    case 868u: goto L_08ACA6CC;
    case 869u: goto L_08ACA6DC;
    case 870u: goto L_08ACA6E8;
    case 871u: goto L_08ACA6F0;
    case 872u: goto L_08ACA700;
    case 873u: goto L_08ACA708;
    case 874u: goto L_08ACA710;
    case 875u: goto L_08ACA718;
    case 876u: goto L_08ACA724;
    case 877u: goto L_08ACA728;
    case 878u: goto L_08ACA744;
    case 879u: goto L_08ACA750;
    case 880u: goto L_08ACA758;
    case 881u: goto L_08ACA760;
    case 882u: goto L_08ACA768;
    case 883u: goto L_08ACA774;
    case 884u: goto L_08ACA77C;
    case 885u: goto L_08ACA78C;
    case 886u: goto L_08ACA794;
    case 887u: goto L_08ACA79C;
    case 888u: goto L_08ACA7A8;
    case 889u: goto L_08ACA7B0;
    case 890u: goto L_08ACA7B8;
    case 891u: goto L_08ACA7C8;
    case 892u: goto L_08ACA7D8;
    case 893u: goto L_08ACA7E0;
    case 894u: goto L_08ACA7F4;
    case 895u: goto L_08ACA7FC;
    case 896u: goto L_08ACA80C;
    case 897u: goto L_08ACA814;
    case 898u: goto L_08ACA824;
    case 899u: goto L_08ACA834;
    case 900u: goto L_08ACA840;
    case 901u: goto L_08ACA850;
    case 902u: goto L_08ACA85C;
    case 903u: goto L_08ACA864;
    case 904u: goto L_08ACA870;
    case 905u: goto L_08ACA878;
    case 906u: goto L_08ACA890;
    case 907u: goto L_08ACA89C;
    case 908u: goto L_08ACA8AC;
    case 909u: goto L_08ACA8CC;
    case 910u: goto L_08ACA8D8;
    case 911u: goto L_08ACA8E0;
    case 912u: goto L_08ACA8EC;
    case 913u: goto L_08ACA8F8;
    case 914u: goto L_08ACA90C;
    case 915u: goto L_08ACA914;
    case 916u: goto L_08ACA91C;
    case 917u: goto L_08ACA930;
    case 918u: goto L_08ACA938;
    case 919u: goto L_08ACA940;
    case 920u: goto L_08ACA94C;
    case 921u: goto L_08ACA954;
    case 922u: goto L_08ACA960;
    case 923u: goto L_08ACA968;
    case 924u: goto L_08ACA980;
    case 925u: goto L_08ACA98C;
    case 926u: goto L_08ACA99C;
    case 927u: goto L_08ACA9A4;
    case 928u: goto L_08ACA9B0;
    case 929u: goto L_08ACA9BC;
    case 930u: goto L_08ACA9C8;
    case 931u: goto L_08ACA9D0;
    case 932u: goto L_08ACA9D8;
    case 933u: goto L_08ACAA04;
    case 934u: goto L_08ACAA0C;
    case 935u: goto L_08ACAA14;
    case 936u: goto L_08ACAA1C;
    case 937u: goto L_08ACAA24;
    case 938u: goto L_08ACAA2C;
    case 939u: goto L_08ACAA34;
    case 940u: goto L_08ACAA48;
    case 941u: goto L_08ACAA50;
    case 942u: goto L_08ACAA58;
    case 943u: goto L_08ACAA6C;
    case 944u: goto L_08ACAA74;
    case 945u: goto L_08ACAA7C;
    case 946u: goto L_08ACAA84;
    case 947u: goto L_08ACAA8C;
    case 948u: goto L_08ACAA94;
    case 949u: goto L_08ACAA9C;
    case 950u: goto L_08ACAAA4;
    case 951u: goto L_08ACAAAC;
    case 952u: goto L_08ACAABC;
    case 953u: goto L_08ACAAC4;
    case 954u: goto L_08ACAACC;
    case 955u: goto L_08ACAAD4;
    case 956u: goto L_08ACAADC;
    case 957u: goto L_08ACAAEC;
    case 958u: goto L_08ACAAFC;
    case 959u: goto L_08ACAB04;
    case 960u: goto L_08ACAB10;
    case 961u: goto L_08ACAB18;
    case 962u: goto L_08ACAB2C;
    case 963u: goto L_08ACAB34;
    case 964u: goto L_08ACAB3C;
    case 965u: goto L_08ACAB50;
    case 966u: goto L_08ACAB58;
    case 967u: goto L_08ACAB60;
    case 968u: goto L_08ACAB70;
    case 969u: goto L_08ACAB78;
    case 970u: goto L_08ACAB88;
    case 971u: goto L_08ACABA0;
    case 972u: goto L_08ACABA8;
    case 973u: goto L_08ACABC0;
    case 974u: goto L_08ACABC8;
    case 975u: goto L_08ACABD4;
    case 976u: goto L_08ACABE0;
    case 977u: goto L_08ACABE8;
    case 978u: goto L_08ACABF4;
    case 979u: goto L_08ACABFC;
    case 980u: goto L_08ACAC04;
    case 981u: goto L_08ACAC18;
    case 982u: goto L_08ACAC20;
    case 983u: goto L_08ACAC38;
    case 984u: goto L_08ACAC40;
    case 985u: goto L_08ACAC4C;
    case 986u: goto L_08ACAC58;
    case 987u: goto L_08ACAC60;
    case 988u: goto L_08ACAC6C;
    case 989u: goto L_08ACAC74;
    case 990u: goto L_08ACAC80;
    case 991u: goto L_08ACAC90;
    case 992u: goto L_08ACACAC;
    case 993u: goto L_08ACACB4;
    case 994u: goto L_08ACACC0;
    case 995u: goto L_08ACACD4;
    case 996u: goto L_08ACACDC;
    case 997u: goto L_08ACACF8;
    case 998u: goto L_08ACAD0C;
    case 999u: goto L_08ACAD14;
    case 1000u: goto L_08ACAD30;
    case 1001u: goto L_08ACAD44;
    case 1002u: goto L_08ACAD4C;
    case 1003u: goto L_08ACAD58;
    case 1004u: goto L_08ACAD80;
    case 1005u: goto L_08ACAD88;
    case 1006u: goto L_08ACAD90;
    case 1007u: goto L_08ACADA0;
    case 1008u: goto L_08ACADA8;
    case 1009u: goto L_08ACADB8;
    case 1010u: goto L_08ACADC0;
    case 1011u: goto L_08ACADC8;
    case 1012u: goto L_08ACADD4;
    case 1013u: goto L_08ACADE4;
    case 1014u: goto L_08ACADEC;
    case 1015u: goto L_08ACAE04;
    case 1016u: goto L_08ACAE0C;
    case 1017u: goto L_08ACAE14;
    case 1018u: goto L_08ACAE2C;
    case 1019u: goto L_08ACAE34;
    case 1020u: goto L_08ACAE3C;
    case 1021u: goto L_08ACAE48;
    case 1022u: goto L_08ACAE50;
    case 1023u: goto L_08ACAE68;
    case 1024u: goto L_08ACAE70;
    case 1025u: goto L_08ACAE78;
    case 1026u: goto L_08ACAE84;
    case 1027u: goto L_08ACAE8C;
    case 1028u: goto L_08ACAE98;
    case 1029u: goto L_08ACAEA0;
    case 1030u: goto L_08ACAEA8;
    case 1031u: goto L_08ACAEB4;
    case 1032u: goto L_08ACAEBC;
    case 1033u: goto L_08ACAECC;
    case 1034u: goto L_08ACAEE8;
    case 1035u: goto L_08ACAEF0;
    case 1036u: goto L_08ACAEFC;
    case 1037u: goto L_08ACAF08;
    case 1038u: goto L_08ACAF24;
    case 1039u: goto L_08ACAF30;
    case 1040u: goto L_08ACAF48;
    case 1041u: goto L_08ACAF50;
    case 1042u: goto L_08ACAF58;
    case 1043u: goto L_08ACAF64;
    case 1044u: goto L_08ACAF74;
    case 1045u: goto L_08ACAF7C;
    case 1046u: goto L_08ACAF84;
    case 1047u: goto L_08ACAF90;
    case 1048u: goto L_08ACAFA0;
    case 1049u: goto L_08ACAFA8;
    case 1050u: goto L_08ACAFB8;
    case 1051u: goto L_08ACAFC0;
    case 1052u: goto L_08ACAFCC;
    case 1053u: goto L_08ACAFD4;
    case 1054u: goto L_08ACAFDC;
    case 1055u: goto L_08ACAFEC;
    case 1056u: goto L_08ACAFF4;
    case 1057u: goto L_08ACB004;
    case 1058u: goto L_08ACB010;
    case 1059u: goto L_08ACB01C;
    case 1060u: goto L_08ACB02C;
    case 1061u: goto L_08ACB034;
    case 1062u: goto L_08ACB044;
    case 1063u: goto L_08ACB04C;
    case 1064u: goto L_08ACB054;
    case 1065u: goto L_08ACB05C;
    case 1066u: goto L_08ACB064;
    case 1067u: goto L_08ACB074;
    case 1068u: goto L_08ACB07C;
    case 1069u: goto L_08ACB090;
    case 1070u: goto L_08ACB0A0;
    case 1071u: goto L_08ACB0AC;
    case 1072u: goto L_08ACB0BC;
    case 1073u: goto L_08ACB0C8;
    case 1074u: goto L_08ACB0D4;
    case 1075u: goto L_08ACB0E8;
    case 1076u: goto L_08ACB0F0;
    case 1077u: goto L_08ACB100;
    case 1078u: goto L_08ACB108;
    case 1079u: goto L_08ACB118;
    case 1080u: goto L_08ACB12C;
    case 1081u: goto L_08ACB140;
    case 1082u: goto L_08ACB14C;
    case 1083u: goto L_08ACB158;
    case 1084u: goto L_08ACB160;
    case 1085u: goto L_08ACB168;
    case 1086u: goto L_08ACB178;
    case 1087u: goto L_08ACB188;
    case 1088u: goto L_08ACB194;
    case 1089u: goto L_08ACB19C;
    case 1090u: goto L_08ACB1A4;
    case 1091u: goto L_08ACB1B4;
    case 1092u: goto L_08ACB1C0;
    case 1093u: goto L_08ACB1CC;
    case 1094u: goto L_08ACB1DC;
    case 1095u: goto L_08ACB1E4;
    case 1096u: goto L_08ACB1F0;
    case 1097u: goto L_08ACB200;
    case 1098u: goto L_08ACB208;
    case 1099u: goto L_08ACB21C;
    case 1100u: goto L_08ACB224;
    case 1101u: goto L_08ACB22C;
    case 1102u: goto L_08ACB238;
    case 1103u: goto L_08ACB248;
    case 1104u: goto L_08ACB250;
    case 1105u: goto L_08ACB260;
    case 1106u: goto L_08ACB268;
    case 1107u: goto L_08ACB280;
    case 1108u: goto L_08ACB28C;
    case 1109u: goto L_08ACB294;
    case 1110u: goto L_08ACB29C;
    case 1111u: goto L_08ACB2A8;
    case 1112u: goto L_08ACB2B0;
    case 1113u: goto L_08ACB2B8;
    case 1114u: goto L_08ACB2C0;
    case 1115u: goto L_08ACB2C8;
    case 1116u: goto L_08ACB2D0;
    case 1117u: goto L_08ACB2D8;
    case 1118u: goto L_08ACB2E0;
    case 1119u: goto L_08ACB2EC;
    case 1120u: goto L_08ACB2F4;
    case 1121u: goto L_08ACB300;
    case 1122u: goto L_08ACB308;
    case 1123u: goto L_08ACB314;
    case 1124u: goto L_08ACB324;
    case 1125u: goto L_08ACB330;
    case 1126u: goto L_08ACB338;
    case 1127u: goto L_08ACB340;
    case 1128u: goto L_08ACB34C;
    case 1129u: goto L_08ACB354;
    case 1130u: goto L_08ACB35C;
    case 1131u: goto L_08ACB364;
    case 1132u: goto L_08ACB37C;
    case 1133u: goto L_08ACB384;
    case 1134u: goto L_08ACB38C;
    case 1135u: goto L_08ACB394;
    case 1136u: goto L_08ACB3B0;
    case 1137u: goto L_08ACB3B8;
    case 1138u: goto L_08ACB3C0;
    case 1139u: goto L_08ACB3C8;
    case 1140u: goto L_08ACB3D0;
    case 1141u: goto L_08ACB3D8;
    case 1142u: goto L_08ACB3E0;
    case 1143u: goto L_08ACB3E8;
    case 1144u: goto L_08ACB3F0;
    case 1145u: goto L_08ACB3FC;
    case 1146u: goto L_08ACB404;
    case 1147u: goto L_08ACB40C;
    case 1148u: goto L_08ACB418;
    case 1149u: goto L_08ACB420;
    case 1150u: goto L_08ACB42C;
    case 1151u: goto L_08ACB434;
    case 1152u: goto L_08ACB444;
    case 1153u: goto L_08ACB44C;
    case 1154u: goto L_08ACB454;
    case 1155u: goto L_08ACB45C;
    case 1156u: goto L_08ACB464;
    case 1157u: goto L_08ACB46C;
    case 1158u: goto L_08ACB474;
    case 1159u: goto L_08ACB47C;
    case 1160u: goto L_08ACB484;
    case 1161u: goto L_08ACB48C;
    case 1162u: goto L_08ACB498;
    case 1163u: goto L_08ACB4A0;
    case 1164u: goto L_08ACB4AC;
    case 1165u: goto L_08ACB4B4;
    case 1166u: goto L_08ACB4C0;
    case 1167u: goto L_08ACB4C8;
    case 1168u: goto L_08ACB4D4;
    case 1169u: goto L_08ACB4DC;
    case 1170u: goto L_08ACB4E8;
    case 1171u: goto L_08ACB4F0;
    case 1172u: goto L_08ACB56C;
    case 1173u: goto L_08ACB574;
    case 1174u: goto L_08ACB57C;
    case 1175u: goto L_08ACB588;
    case 1176u: goto L_08ACB590;
    case 1177u: goto L_08ACB598;
    case 1178u: goto L_08ACB5A4;
    case 1179u: goto L_08ACB5AC;
    case 1180u: goto L_08ACB5E0;
    case 1181u: goto L_08ACB5E8;
    case 1182u: goto L_08ACB5F4;
    case 1183u: goto L_08ACB5FC;
    case 1184u: goto L_08ACB608;
    case 1185u: goto L_08ACB610;
    case 1186u: goto L_08ACB618;
    case 1187u: goto L_08ACB630;
    case 1188u: goto L_08ACB640;
    case 1189u: goto L_08ACB648;
    case 1190u: goto L_08ACB650;
    case 1191u: goto L_08ACB658;
    case 1192u: goto L_08ACB660;
    case 1193u: goto L_08ACB670;
    case 1194u: goto L_08ACB67C;
    case 1195u: goto L_08ACB6B4;
    case 1196u: goto L_08ACB6C8;
    case 1197u: goto L_08ACB6E4;
    case 1198u: goto L_08ACB6F0;
    case 1199u: goto L_08ACB700;
    case 1200u: goto L_08ACB70C;
    case 1201u: goto L_08ACB714;
    case 1202u: goto L_08ACB724;
    case 1203u: goto L_08ACB72C;
    case 1204u: goto L_08ACB734;
    case 1205u: goto L_08ACB73C;
    case 1206u: goto L_08ACB744;
    case 1207u: goto L_08ACB74C;
    case 1208u: goto L_08ACB768;
    case 1209u: goto L_08ACB770;
    case 1210u: goto L_08ACB77C;
    case 1211u: goto L_08ACB788;
    case 1212u: goto L_08ACB78C;
    case 1213u: goto L_08ACB7A8;
    case 1214u: goto L_08ACB7B4;
    case 1215u: goto L_08ACB7BC;
    case 1216u: goto L_08ACB7C4;
    case 1217u: goto L_08ACB7CC;
    case 1218u: goto L_08ACB7D8;
    case 1219u: goto L_08ACB7E0;
    case 1220u: goto L_08ACB7F0;
    case 1221u: goto L_08ACB800;
    case 1222u: goto L_08ACB808;
    case 1223u: goto L_08ACB810;
    case 1224u: goto L_08ACB81C;
    case 1225u: goto L_08ACB828;
    case 1226u: goto L_08ACB838;
    case 1227u: goto L_08ACB864;
    case 1228u: goto L_08ACB870;
    case 1229u: goto L_08ACB894;
    case 1230u: goto L_08ACB8C8;
    case 1231u: goto L_08ACB8D4;
    case 1232u: goto L_08ACB8E8;
    case 1233u: goto L_08ACB8F4;
    case 1234u: goto L_08ACB904;
    case 1235u: goto L_08ACB90C;
    case 1236u: goto L_08ACB914;
    case 1237u: goto L_08ACB920;
    case 1238u: goto L_08ACB92C;
    case 1239u: goto L_08ACB938;
    case 1240u: goto L_08ACB93C;
    case 1241u: goto L_08ACB944;
    case 1242u: goto L_08ACB950;
    case 1243u: goto L_08ACB95C;
    case 1244u: goto L_08ACB96C;
    case 1245u: goto L_08ACB970;
    case 1246u: goto L_08ACB978;
    case 1247u: goto L_08ACB99C;
    case 1248u: goto L_08ACB9BC;
    case 1249u: goto L_08ACB9CC;
    case 1250u: goto L_08ACB9D8;
    case 1251u: goto L_08ACB9F4;
    case 1252u: goto L_08ACBA00;
    case 1253u: goto L_08ACBA0C;
    case 1254u: goto L_08ACBA14;
    case 1255u: goto L_08ACBA20;
    case 1256u: goto L_08ACBA28;
    case 1257u: goto L_08ACBA30;
    case 1258u: goto L_08ACBA38;
    case 1259u: goto L_08ACBA44;
    case 1260u: goto L_08ACBA4C;
    case 1261u: goto L_08ACBA5C;
    case 1262u: goto L_08ACBA68;
    case 1263u: goto L_08ACBA70;
    case 1264u: goto L_08ACBA78;
    case 1265u: goto L_08ACBA80;
    case 1266u: goto L_08ACBA88;
    case 1267u: goto L_08ACBA90;
    case 1268u: goto L_08ACBA9C;
    case 1269u: goto L_08ACBAA4;
    case 1270u: goto L_08ACBAB4;
    case 1271u: goto L_08ACBAC4;
    case 1272u: goto L_08ACBACC;
    case 1273u: goto L_08ACBAD8;
    case 1274u: goto L_08ACBAE0;
    case 1275u: goto L_08ACBAEC;
    case 1276u: goto L_08ACBAF4;
    case 1277u: goto L_08ACBB00;
    case 1278u: goto L_08ACBB08;
    case 1279u: goto L_08ACBB10;
    case 1280u: goto L_08ACBB18;
    case 1281u: goto L_08ACBB28;
    case 1282u: goto L_08ACBB30;
    case 1283u: goto L_08ACBB38;
    case 1284u: goto L_08ACBB40;
    case 1285u: goto L_08ACBB48;
    case 1286u: goto L_08ACBB50;
    case 1287u: goto L_08ACBB58;
    case 1288u: goto L_08ACBB6C;
    case 1289u: goto L_08ACBB88;
    case 1290u: goto L_08ACBB90;
    case 1291u: goto L_08ACBB98;
    case 1292u: goto L_08ACBBA0;
    case 1293u: goto L_08ACBBBC;
    case 1294u: goto L_08ACBBC4;
    case 1295u: goto L_08ACBBD8;
    case 1296u: goto L_08ACBBE0;
    case 1297u: goto L_08ACBBF4;
    case 1298u: goto L_08ACBBF8;
    case 1299u: goto L_08ACBC04;
    case 1300u: goto L_08ACBC10;
    case 1301u: goto L_08ACBC2C;
    case 1302u: goto L_08ACBC34;
    case 1303u: goto L_08ACBC50;
    case 1304u: goto L_08ACBC58;
    case 1305u: goto L_08ACBC74;
    case 1306u: goto L_08ACBC7C;
    case 1307u: goto L_08ACBC88;
    case 1308u: goto L_08ACBC90;
    case 1309u: goto L_08ACBC98;
    case 1310u: goto L_08ACBCA0;
    case 1311u: goto L_08ACBCA8;
    case 1312u: goto L_08ACBCB0;
    case 1313u: goto L_08ACBCBC;
    case 1314u: goto L_08ACBCC4;
    case 1315u: goto L_08ACBCD8;
    case 1316u: goto L_08ACBCE0;
    case 1317u: goto L_08ACBCE8;
    case 1318u: goto L_08ACBCF0;
    case 1319u: goto L_08ACBCFC;
    case 1320u: goto L_08ACBD04;
    case 1321u: goto L_08ACBD10;
    case 1322u: goto L_08ACBD18;
    case 1323u: goto L_08ACBD3C;
    case 1324u: goto L_08ACBD44;
    case 1325u: goto L_08ACBD50;
    case 1326u: goto L_08ACBD58;
    case 1327u: goto L_08ACBD60;
    case 1328u: goto L_08ACBD70;
    case 1329u: goto L_08ACBD78;
    case 1330u: goto L_08ACBD80;
    case 1331u: goto L_08ACBD88;
    case 1332u: goto L_08ACBD90;
    case 1333u: goto L_08ACBD98;
    case 1334u: goto L_08ACBDA8;
    case 1335u: goto L_08ACBDB0;
    case 1336u: goto L_08ACBDB8;
    case 1337u: goto L_08ACBDC8;
    case 1338u: goto L_08ACBDD4;
    case 1339u: goto L_08ACBDDC;
    case 1340u: goto L_08ACBDE8;
    case 1341u: goto L_08ACBDF0;
    case 1342u: goto L_08ACBE00;
    case 1343u: goto L_08ACBE08;
    case 1344u: goto L_08ACBE10;
    case 1345u: goto L_08ACBE18;
    case 1346u: goto L_08ACBE34;
    case 1347u: goto L_08ACBE40;
    case 1348u: goto L_08ACBE48;
    case 1349u: goto L_08ACBE50;
    case 1350u: goto L_08ACBE60;
    case 1351u: goto L_08ACBE68;
    case 1352u: goto L_08ACBE74;
    case 1353u: goto L_08ACBE80;
    case 1354u: goto L_08ACBE8C;
    case 1355u: goto L_08ACBE94;
    case 1356u: goto L_08ACBEA0;
    case 1357u: goto L_08ACBEA8;
    case 1358u: goto L_08ACBEB4;
    case 1359u: goto L_08ACBEB8;
    case 1360u: goto L_08ACBEC0;
    case 1361u: goto L_08ACBECC;
    case 1362u: goto L_08ACBED4;
    case 1363u: goto L_08ACBEDC;
    case 1364u: goto L_08ACBEE4;
    case 1365u: goto L_08ACBEEC;
    case 1366u: goto L_08ACBEF4;
    case 1367u: goto L_08ACBF04;
    case 1368u: goto L_08ACBF0C;
    case 1369u: goto L_08ACBF14;
    case 1370u: goto L_08ACBF1C;
    case 1371u: goto L_08ACBF24;
    case 1372u: goto L_08ACBF2C;
    case 1373u: goto L_08ACBF34;
    case 1374u: goto L_08ACBF3C;
    case 1375u: goto L_08ACBF48;
    case 1376u: goto L_08ACBF50;
    case 1377u: goto L_08ACBF60;
    case 1378u: goto L_08ACBF68;
    case 1379u: goto L_08ACBF70;
    case 1380u: goto L_08ACBF78;
    case 1381u: goto L_08ACBF80;
    case 1382u: goto L_08ACBF90;
    case 1383u: goto L_08ACBF98;
    case 1384u: goto L_08ACBFA0;
    case 1385u: goto L_08ACBFA8;
    case 1386u: goto L_08ACBFB0;
    case 1387u: goto L_08ACBFB8;
    case 1388u: goto L_08ACBFC0;
    case 1389u: goto L_08ACBFC8;
    case 1390u: goto L_08ACBFD0;
    case 1391u: goto L_08ACBFD8;
    case 1392u: goto L_08ACBFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AC8000:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2196), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8034;
      }
      goto L_08AC8010;
    }
L_08AC8010:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC8020u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08AC8020u) goto L_08AC8020;
    return;
L_08AC8020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8034;
      }
      goto L_08AC8028;
    }
L_08AC8028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2196), ctx.gpr[4]);
    goto L_08AC8034;
L_08AC8034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_08AC8044;
L_08AC8044:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8054:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2192)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC805C:
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8098;
      }
      goto L_08AC8078;
    }
L_08AC8078:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1140))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AC8090;
      }
      goto L_08AC8084;
    }
L_08AC8084:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1146))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC80A0;
      }
      goto L_08AC8090;
    }
L_08AC8090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC80A4;
      }
      goto L_08AC8098;
    }
L_08AC8098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC80A4;
      }
      goto L_08AC80A0;
    }
L_08AC80A0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AC80A4;
L_08AC80A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC80AC:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2060)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC80B4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2236)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC80BC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2240)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC80C4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2240), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC80CC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2120)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC80D4:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2256)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC80DC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC80E4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC80EC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2274)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC80F4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC80FC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2276)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8104:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC810C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8114:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC811C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1344));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1300), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1280), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1296), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1304), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1308), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1312), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1316), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1320), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1324), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1328), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC81A4;
      }
      goto L_08AC816C;
    }
L_08AC816C:
    ctx.gpr[31] = (0x08AC8174u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8174u) goto L_08AC8174;
    return;
L_08AC8174:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC818C;
      }
      goto L_08AC817C;
    }
L_08AC817C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC81A4;
      }
      goto L_08AC818C;
    }
L_08AC818C:
    ctx.gpr[31] = (0x08AC8194u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08AC8194u) goto L_08AC8194;
    return;
L_08AC8194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    goto L_08AC81A4;
L_08AC81A4:
    ctx.gpr[31] = (0x08AC81ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 466u, 0x088829F8u>(ctx, &aot_mem) && ctx.pc == 0x08AC81ACu) goto L_08AC81AC;
    return;
L_08AC81AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC81D4;
      }
      goto L_08AC81B8;
    }
L_08AC81B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC822C;
      }
      goto L_08AC81C8;
    }
L_08AC81C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC822C;
      }
      goto L_08AC81D4;
    }
L_08AC81D4:
    ctx.gpr[31] = (0x08AC81DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08AC81DCu) goto L_08AC81DC;
    return;
L_08AC81DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8214;
      }
      goto L_08AC81E4;
    }
L_08AC81E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8214;
      }
      goto L_08AC81F4;
    }
L_08AC81F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 51u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8214;
      }
      goto L_08AC8204;
    }
L_08AC8204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC822C;
      }
      goto L_08AC8214;
    }
L_08AC8214:
    ctx.gpr[31] = (0x08AC821Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC821Cu) goto L_08AC821C;
    return;
L_08AC821C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8234;
      }
      goto L_08AC8224;
    }
L_08AC8224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC829C;
      }
      goto L_08AC822C;
    }
L_08AC822C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 441u, 0x08ACD47Cu>(ctx, &aot_mem); return;
      }
      goto L_08AC8234;
    }
L_08AC8234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8258;
      }
      goto L_08AC8240;
    }
L_08AC8240:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08AC8250u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08AC8250u) goto L_08AC8250;
    return;
L_08AC8250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC82B0;
      }
      goto L_08AC8258;
    }
L_08AC8258:
    ctx.gpr[31] = (0x08AC8260u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08AC8260u) goto L_08AC8260;
    return;
L_08AC8260:
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8280;
      }
      goto L_08AC826C;
    }
L_08AC826C:
    ctx.gpr[31] = (0x08AC8274u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08AC8274u) goto L_08AC8274;
    return;
L_08AC8274:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8288;
      }
      goto L_08AC8280;
    }
L_08AC8280:
    ctx.gpr[31] = (0x08AC8288u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8288u) goto L_08AC8288;
    return;
L_08AC8288:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8294u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x08AC8294u) goto L_08AC8294;
    return;
L_08AC8294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 441u, 0x08ACD47Cu>(ctx, &aot_mem); return;
      }
      goto L_08AC829C;
    }
L_08AC829C:
    ctx.gpr[31] = (0x08AC82A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC82A4u) goto L_08AC82A4;
    return;
L_08AC82A4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08AC82B0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08AC82B0u) goto L_08AC82B0;
    return;
L_08AC82B0:
    ctx.gpr[31] = (0x08AC82B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08AC82B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8380;
      }
      goto L_08AC82C0;
    }
L_08AC82C0:
    ctx.gpr[31] = (0x08AC82C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08AC82C8:
    ctx.gpr[31] = (0x08AC82D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC82D0u) goto L_08AC82D0;
    return;
L_08AC82D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC833C;
      }
      goto L_08AC82D8;
    }
L_08AC82D8:
    ctx.gpr[31] = (0x08AC82E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08AC82E0:
    ctx.gpr[31] = (0x08AC82E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC82E8u) goto L_08AC82E8;
    return;
L_08AC82E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC833C;
      }
      goto L_08AC82F8;
    }
L_08AC82F8:
    ctx.gpr[31] = (0x08AC8300u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08AC8300:
    ctx.gpr[31] = (0x08AC8308u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC8308u) goto L_08AC8308;
    return;
L_08AC8308:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC833C;
      }
      goto L_08AC8310;
    }
L_08AC8310:
    ctx.gpr[31] = (0x08AC8318u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08AC8318:
    ctx.gpr[31] = (0x08AC8320u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC8320u) goto L_08AC8320;
    return;
L_08AC8320:
    ctx.gpr[31] = (0x08AC8328u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC8328u) goto L_08AC8328;
    return;
L_08AC8328:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AC8334u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08AC8334u) goto L_08AC8334;
    return;
L_08AC8334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8358;
      }
      goto L_08AC833C;
    }
L_08AC833C:
    ctx.gpr[31] = (0x08AC8344u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08AC8344:
    ctx.gpr[31] = (0x08AC834Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC834Cu) goto L_08AC834C;
    return;
L_08AC834C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AC8358u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08AC8358u) goto L_08AC8358;
    return;
L_08AC8358:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08AC836Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08AC836Cu) goto L_08AC836C;
    return;
L_08AC836C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08AC8378u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08AC8378u) goto L_08AC8378;
    return;
L_08AC8378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC83D0;
      }
      goto L_08AC8380;
    }
L_08AC8380:
    ctx.gpr[31] = (0x08AC8388u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC8388u) goto L_08AC8388;
    return;
L_08AC8388:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC83D0;
      }
      goto L_08AC8390;
    }
L_08AC8390:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AC839Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC839Cu) goto L_08AC839C;
    return;
L_08AC839C:
    ctx.gpr[31] = (0x08AC83A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC83A4u) goto L_08AC83A4;
    return;
L_08AC83A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC83B0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08AC83B0u) goto L_08AC83B0;
    return;
L_08AC83B0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC83C4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08AC83C4u) goto L_08AC83C4;
    return;
L_08AC83C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08AC83D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08AC83D0u) goto L_08AC83D0;
    return;
L_08AC83D0:
    ctx.gpr[31] = (0x08AC83D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08AC83D8u) goto L_08AC83D8;
    return;
L_08AC83D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(54) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC83EC;
    }
L_08AC83EC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14608)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8404:
    ctx.gpr[31] = (0x08AC840Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 971u, 0x08AC79CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC840Cu) goto L_08AC840C;
    return;
L_08AC840C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8448;
      }
      goto L_08AC8414;
    }
L_08AC8414:
    ctx.gpr[31] = (0x08AC841Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC841Cu) goto L_08AC841C;
    return;
L_08AC841C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC845C;
      }
      goto L_08AC842C;
    }
L_08AC842C:
    ctx.gpr[31] = (0x08AC8434u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 971u, 0x08AC79CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC8434u) goto L_08AC8434;
    return;
L_08AC8434:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8440u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 716u, 0x088E76D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8440u) goto L_08AC8440;
    return;
L_08AC8440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC845C;
      }
      goto L_08AC8448;
    }
L_08AC8448:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8454u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 979u, 0x08AC7A14u>(ctx, &aot_mem) && ctx.pc == 0x08AC8454u) goto L_08AC8454;
    return;
L_08AC8454:
    ctx.gpr[31] = (0x08AC845Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08AC845Cu) goto L_08AC845C;
    return;
L_08AC845C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC8464;
    }
L_08AC8464:
    ctx.gpr[31] = (0x08AC846Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC846Cu) goto L_08AC846C;
    return;
L_08AC846C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8490;
      }
      goto L_08AC8474;
    }
L_08AC8474:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8480u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 979u, 0x08AC7A14u>(ctx, &aot_mem) && ctx.pc == 0x08AC8480u) goto L_08AC8480;
    return;
L_08AC8480:
    ctx.gpr[31] = (0x08AC8488u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08AC8488u) goto L_08AC8488;
    return;
L_08AC8488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8660;
      }
      goto L_08AC8490;
    }
L_08AC8490:
    ctx.gpr[31] = (0x08AC8498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC8498u) goto L_08AC8498;
    return;
L_08AC8498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1752)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8660;
      }
      goto L_08AC84A8;
    }
L_08AC84A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-13364))))));
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC84CCu);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC84CCu) goto L_08AC84CC;
    return;
L_08AC84CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08AC84D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 914u, 0x08AC75B0u>(ctx, &aot_mem) && ctx.pc == 0x08AC84D8u) goto L_08AC84D8;
    return;
L_08AC84D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08AC850Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem) && ctx.pc == 0x08AC850Cu) goto L_08AC850C;
    return;
L_08AC850C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(176))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8618;
      }
      goto L_08AC8520;
    }
L_08AC8520:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (0x08AC8534u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08AC8534u) goto L_08AC8534;
    return;
L_08AC8534:
    ctx.gpr[4] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8558;
      }
      goto L_08AC8540;
    }
L_08AC8540:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8558;
      }
      goto L_08AC8550;
    }
L_08AC8550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC85FC;
      }
      goto L_08AC8558;
    }
L_08AC8558:
    ctx.gpr[31] = (0x08AC8560u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 956u, 0x08AC7930u>(ctx, &aot_mem) && ctx.pc == 0x08AC8560u) goto L_08AC8560;
    return;
L_08AC8560:
    ctx.gpr[31] = (0x08AC8568u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8568u) goto L_08AC8568;
    return;
L_08AC8568:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AC8594;
      }
      goto L_08AC8584;
    }
L_08AC8584:
    ctx.gpr[31] = (0x08AC858Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 296u, 0x08B01088u>(ctx, &aot_mem) && ctx.pc == 0x08AC858Cu) goto L_08AC858C;
    return;
L_08AC858C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC859C;
      }
      goto L_08AC8594;
    }
L_08AC8594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC85FC;
      }
      goto L_08AC859C;
    }
L_08AC859C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x08AC85ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC85ACu) goto L_08AC85AC;
    return;
L_08AC85AC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC85B8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC85B8u) goto L_08AC85B8;
    return;
L_08AC85B8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AC85C8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08AC85C8u) goto L_08AC85C8;
    return;
L_08AC85C8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AC85D4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08AC85D4u) goto L_08AC85D4;
    return;
L_08AC85D4:
    ctx.gpr[31] = (0x08AC85DCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC85DCu) goto L_08AC85DC;
    return;
L_08AC85DC:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AC85FC;
      }
      goto L_08AC85EC;
    }
L_08AC85EC:
    ctx.gpr[31] = (0x08AC85F4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC85F4u) goto L_08AC85F4;
    return;
L_08AC85F4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08AC85FC;
L_08AC85FC:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(176))))));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8520;
      }
      goto L_08AC8618;
    }
L_08AC8618:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8638;
      }
      goto L_08AC8620;
    }
L_08AC8620:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08AC8630u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08AC8630u) goto L_08AC8630;
    return;
L_08AC8630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8650;
      }
      goto L_08AC8638;
    }
L_08AC8638:
    ctx.gpr[31] = (0x08AC8640u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08AC8640u) goto L_08AC8640;
    return;
L_08AC8640:
    ctx.gpr[31] = (0x08AC8648u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8648u) goto L_08AC8648;
    return;
L_08AC8648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC8650;
    }
L_08AC8650:
    ctx.gpr[31] = (0x08AC8658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC8658u) goto L_08AC8658;
    return;
L_08AC8658:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1752), ctx.gpr[4]);
    goto L_08AC8660;
L_08AC8660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC8668;
    }
L_08AC8668:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8678u);
    ctx.gpr[6] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08AC8678u) goto L_08AC8678;
    return;
L_08AC8678:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC86D8;
      }
      goto L_08AC8680;
    }
L_08AC8680:
    ctx.gpr[31] = (0x08AC8688u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80BC;
L_08AC8688:
    ctx.gpr[31] = (0x08AC8690u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC8690u) goto L_08AC8690;
    return;
L_08AC8690:
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC86D8;
      }
      goto L_08AC869C;
    }
L_08AC869C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC86A8u);
    ctx.gpr[5] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08AC86A8u) goto L_08AC86A8;
    return;
L_08AC86A8:
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC86C4u);
    ctx.gpr[7] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08AC86C4u) goto L_08AC86C4;
    return;
L_08AC86C4:
    ctx.gpr[31] = (0x08AC86CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC86CCu) goto L_08AC86CC;
    return;
L_08AC86CC:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(2000));
    ctx.gpr[31] = (0x08AC86D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80C4;
L_08AC86D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC86E0;
    }
L_08AC86E0:
    ctx.gpr[31] = (0x08AC86E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC86E8u) goto L_08AC86E8;
    return;
L_08AC86E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8704;
      }
      goto L_08AC86F0;
    }
L_08AC86F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC86FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 982u, 0x08AC7A50u>(ctx, &aot_mem) && ctx.pc == 0x08AC86FCu) goto L_08AC86FC;
    return;
L_08AC86FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC8704;
    }
L_08AC8704:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8710u);
    ctx.gpr[5] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08AC8710u) goto L_08AC8710;
    return;
L_08AC8710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC8718;
    }
L_08AC8718:
    ctx.gpr[31] = (0x08AC8720u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8720u) goto L_08AC8720;
    return;
L_08AC8720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8744;
      }
      goto L_08AC8730;
    }
L_08AC8730:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC873Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 982u, 0x08AC7A50u>(ctx, &aot_mem) && ctx.pc == 0x08AC873Cu) goto L_08AC873C;
    return;
L_08AC873C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC8744;
    }
L_08AC8744:
    ctx.gpr[31] = (0x08AC874Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC874Cu) goto L_08AC874C;
    return;
L_08AC874C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC879C;
      }
      goto L_08AC8758;
    }
L_08AC8758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC87B4;
      }
      goto L_08AC8764;
    }
L_08AC8764:
    ctx.gpr[31] = (0x08AC876Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC876Cu) goto L_08AC876C;
    return;
L_08AC876C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1756)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC87B4;
      }
      goto L_08AC877C;
    }
L_08AC877C:
    ctx.gpr[31] = (0x08AC8784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08AC8784u) goto L_08AC8784;
    return;
L_08AC8784:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC8794u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 802u, 0x08A03194u>(ctx, &aot_mem) && ctx.pc == 0x08AC8794u) goto L_08AC8794;
    return;
L_08AC8794:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1756), 0u);
      if (branch_taken) {
          goto L_08AC87B4;
      }
      goto L_08AC879C;
    }
L_08AC879C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC87A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 982u, 0x08AC7A50u>(ctx, &aot_mem) && ctx.pc == 0x08AC87A8u) goto L_08AC87A8;
    return;
L_08AC87A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC87B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08AC87B4u) goto L_08AC87B4;
    return;
L_08AC87B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC87BC;
    }
L_08AC87BC:
    ctx.gpr[31] = (0x08AC87C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08AC87C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC87FC;
      }
      goto L_08AC87CC;
    }
L_08AC87CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC87D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 982u, 0x08AC7A50u>(ctx, &aot_mem) && ctx.pc == 0x08AC87D8u) goto L_08AC87D8;
    return;
L_08AC87D8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC87E4u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 951u, 0x08AC7830u>(ctx, &aot_mem) && ctx.pc == 0x08AC87E4u) goto L_08AC87E4;
    return;
L_08AC87E4:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08AC87F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08AC87F4u) goto L_08AC87F4;
    return;
L_08AC87F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC886C;
      }
      goto L_08AC87FC;
    }
L_08AC87FC:
    ctx.gpr[31] = (0x08AC8804u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08AC8804:
    ctx.gpr[31] = (0x08AC880Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 978u, 0x08AC7A0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC880Cu) goto L_08AC880C;
    return;
L_08AC880C:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC886C;
      }
      goto L_08AC8818;
    }
L_08AC8818:
    ctx.gpr[31] = (0x08AC8820u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08AC8820:
    ctx.gpr[31] = (0x08AC8828u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8828u) goto L_08AC8828;
    return;
L_08AC8828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC886C;
      }
      goto L_08AC8838;
    }
L_08AC8838:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8844u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 982u, 0x08AC7A50u>(ctx, &aot_mem) && ctx.pc == 0x08AC8844u) goto L_08AC8844;
    return;
L_08AC8844:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC8850u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 951u, 0x08AC7830u>(ctx, &aot_mem) && ctx.pc == 0x08AC8850u) goto L_08AC8850;
    return;
L_08AC8850:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08AC8860u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08AC8860u) goto L_08AC8860;
    return;
L_08AC8860:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC886Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 840u, 0x0890FC94u>(ctx, &aot_mem) && ctx.pc == 0x08AC886Cu) goto L_08AC886C;
    return;
L_08AC886C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC8874;
    }
L_08AC8874:
    ctx.gpr[31] = (0x08AC887Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC887Cu) goto L_08AC887C;
    return;
L_08AC887C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC88C4;
      }
      goto L_08AC8888;
    }
L_08AC8888:
    ctx.gpr[4] = (15948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AC88C4;
      }
      goto L_08AC88A8;
    }
L_08AC88A8:
    ctx.gpr[31] = (0x08AC88B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08AC88B0u) goto L_08AC88B0;
    return;
L_08AC88B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC88C4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem) && ctx.pc == 0x08AC88C4u) goto L_08AC88C4;
    return;
L_08AC88C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC88CC;
    }
L_08AC88CC:
    ctx.gpr[31] = (0x08AC88D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC88D4u) goto L_08AC88D4;
    return;
L_08AC88D4:
    ctx.gpr[31] = (0x08AC88DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08AC88DCu) goto L_08AC88DC;
    return;
L_08AC88DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[31] = (0x08AC88E8u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08AC8104;
L_08AC88E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC88F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 991u, 0x08A03C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC88F4u) goto L_08AC88F4;
    return;
L_08AC88F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC896C;
      }
      goto L_08AC8900;
    }
L_08AC8900:
    ctx.gpr[31] = (0x08AC8908u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80B4;
L_08AC8908:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC896C;
      }
      goto L_08AC8914;
    }
L_08AC8914:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC896C;
      }
      goto L_08AC891C;
    }
L_08AC891C:
    ctx.gpr[31] = (0x08AC8924u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC8924u) goto L_08AC8924;
    return;
L_08AC8924:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC896C;
      }
      goto L_08AC892C;
    }
L_08AC892C:
    ctx.gpr[31] = (0x08AC8934u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC8934u) goto L_08AC8934;
    return;
L_08AC8934:
    ctx.gpr[31] = (0x08AC893Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC893Cu) goto L_08AC893C;
    return;
L_08AC893C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC896C;
      }
      goto L_08AC8944;
    }
L_08AC8944:
    ctx.gpr[4] = (0u | 5000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AC8964u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x08AC8964u) goto L_08AC8964;
    return;
L_08AC8964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8B2C;
      }
      goto L_08AC896C;
    }
L_08AC896C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8B2C;
      }
      goto L_08AC8978;
    }
L_08AC8978:
    ctx.gpr[31] = (0x08AC8980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08AC8980u) goto L_08AC8980;
    return;
L_08AC8980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[31] = (0x08AC898Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08AC8104;
L_08AC898C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC8998u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 991u, 0x08A03C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8998u) goto L_08AC8998;
    return;
L_08AC8998:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8B2C;
      }
      goto L_08AC89A4;
    }
L_08AC89A4:
    ctx.gpr[31] = (0x08AC89ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 957u, 0x08AC7938u>(ctx, &aot_mem) && ctx.pc == 0x08AC89ACu) goto L_08AC89AC;
    return;
L_08AC89AC:
    ctx.gpr[31] = (0x08AC89B4u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 930u, 0x08AC76E4u>(ctx, &aot_mem) && ctx.pc == 0x08AC89B4u) goto L_08AC89B4;
    return;
L_08AC89B4:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AC8A04;
      }
      goto L_08AC89E0;
    }
L_08AC89E0:
    ctx.gpr[31] = (0x08AC89E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08AC89E8u) goto L_08AC89E8;
    return;
L_08AC89E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC89FCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem) && ctx.pc == 0x08AC89FCu) goto L_08AC89FC;
    return;
L_08AC89FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8B2C;
      }
      goto L_08AC8A04;
    }
L_08AC8A04:
    ctx.gpr[31] = (0x08AC8A0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC8A0Cu) goto L_08AC8A0C;
    return;
L_08AC8A0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8A9C;
      }
      goto L_08AC8A14;
    }
L_08AC8A14:
    ctx.gpr[31] = (0x08AC8A1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC8A1Cu) goto L_08AC8A1C;
    return;
L_08AC8A1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8A3C;
      }
      goto L_08AC8A24;
    }
L_08AC8A24:
    ctx.gpr[31] = (0x08AC8A2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC8A2Cu) goto L_08AC8A2C;
    return;
L_08AC8A2C:
    ctx.gpr[31] = (0x08AC8A34u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8A34u) goto L_08AC8A34;
    return;
L_08AC8A34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8A9C;
      }
      goto L_08AC8A3C;
    }
L_08AC8A3C:
    ctx.gpr[31] = (0x08AC8A44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC8A44u) goto L_08AC8A44;
    return;
L_08AC8A44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8A6C;
      }
      goto L_08AC8A4C;
    }
L_08AC8A4C:
    ctx.gpr[31] = (0x08AC8A54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC8A54u) goto L_08AC8A54;
    return;
L_08AC8A54:
    ctx.gpr[31] = (0x08AC8A5Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8A5Cu) goto L_08AC8A5C;
    return;
L_08AC8A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8A9C;
      }
      goto L_08AC8A6C;
    }
L_08AC8A6C:
    ctx.gpr[31] = (0x08AC8A74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC8A74u) goto L_08AC8A74;
    return;
L_08AC8A74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8AC0;
      }
      goto L_08AC8A7C;
    }
L_08AC8A7C:
    ctx.gpr[31] = (0x08AC8A84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC8A84u) goto L_08AC8A84;
    return;
L_08AC8A84:
    ctx.gpr[31] = (0x08AC8A8Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8A8Cu) goto L_08AC8A8C;
    return;
L_08AC8A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8AC0;
      }
      goto L_08AC8A9C;
    }
L_08AC8A9C:
    ctx.gpr[31] = (0x08AC8AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08AC8AA4u) goto L_08AC8AA4;
    return;
L_08AC8AA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8AB8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8AB8u) goto L_08AC8AB8;
    return;
L_08AC8AB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8B2C;
      }
      goto L_08AC8AC0;
    }
L_08AC8AC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8B08;
      }
      goto L_08AC8AD0;
    }
L_08AC8AD0:
    ctx.gpr[31] = (0x08AC8AD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 941u, 0x08AC7794u>(ctx, &aot_mem) && ctx.pc == 0x08AC8AD8u) goto L_08AC8AD8;
    return;
L_08AC8AD8:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8B2C;
      }
      goto L_08AC8AE4;
    }
L_08AC8AE4:
    ctx.gpr[31] = (0x08AC8AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08AC8AECu) goto L_08AC8AEC;
    return;
L_08AC8AEC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8B00u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8B00u) goto L_08AC8B00;
    return;
L_08AC8B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 441u, 0x08ACD47Cu>(ctx, &aot_mem); return;
      }
      goto L_08AC8B08;
    }
L_08AC8B08:
    ctx.gpr[31] = (0x08AC8B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08AC8B10u) goto L_08AC8B10;
    return;
L_08AC8B10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8B24u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8B24u) goto L_08AC8B24;
    return;
L_08AC8B24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 441u, 0x08ACD47Cu>(ctx, &aot_mem); return;
      }
      goto L_08AC8B2C;
    }
L_08AC8B2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC8B34;
    }
L_08AC8B34:
    ctx.gpr[31] = (0x08AC8B3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8B3Cu) goto L_08AC8B3C;
    return;
L_08AC8B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8F0C;
      }
      goto L_08AC8B48;
    }
L_08AC8B48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), 0u);
    ctx.gpr[16] = (0u | 49u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(232));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[31] = (0x08AC8B64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC8B64u) goto L_08AC8B64;
    return;
L_08AC8B64:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[6] = (16880u << 16u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AC8BA8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 902u, 0x08AC74A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8BA8u) goto L_08AC8BA8;
    return;
L_08AC8BA8:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(236));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC8BBCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 905u, 0x08AC74D0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8BBCu) goto L_08AC8BBC;
    return;
L_08AC8BBC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[2]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.gpr[31] = (0x08AC8BD4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 905u, 0x08AC74D0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8BD4u) goto L_08AC8BD4;
    return;
L_08AC8BD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1264), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[16]);
    ctx.gpr[31] = (0x08AC8BE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC8BE8u) goto L_08AC8BE8;
    return;
L_08AC8BE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[6] = (16840u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AC8C18u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 902u, 0x08AC74A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8C18u) goto L_08AC8C18;
    return;
L_08AC8C18:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AC8C2Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 905u, 0x08AC74D0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8C2Cu) goto L_08AC8C2C;
    return;
L_08AC8C2C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(228));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), 0u);
    ctx.gpr[31] = (0x08AC8C44u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 905u, 0x08AC74D0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8C44u) goto L_08AC8C44;
    return;
L_08AC8C44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1268), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[16]);
    ctx.gpr[31] = (0x08AC8C58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC8C58u) goto L_08AC8C58;
    return;
L_08AC8C58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AC8C80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 902u, 0x08AC74A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8C80u) goto L_08AC8C80;
    return;
L_08AC8C80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AC8C90u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 905u, 0x08AC74D0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8C90u) goto L_08AC8C90;
    return;
L_08AC8C90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AC8CA8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 902u, 0x08AC74A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8CA8u) goto L_08AC8CA8;
    return;
L_08AC8CA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), 0u);
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[16]);
    ctx.gpr[31] = (0x08AC8CBCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC8CBCu) goto L_08AC8CBC;
    return;
L_08AC8CBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AC8CE4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 902u, 0x08AC74A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8CE4u) goto L_08AC8CE4;
    return;
L_08AC8CE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AC8CF4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 905u, 0x08AC74D0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8CF4u) goto L_08AC8CF4;
    return;
L_08AC8CF4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AC8D08u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 902u, 0x08AC74A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8D08u) goto L_08AC8D08;
    return;
L_08AC8D08:
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1268)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1264)));
      if (branch_taken) {
          goto L_08AC8E54;
      }
      goto L_08AC8D28;
    }
L_08AC8D28:
    ctx.gpr[19] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8E44;
      }
      goto L_08AC8D38;
    }
L_08AC8D38:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 1271u);
    ctx.gpr[31] = (0x08AC8D50u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(14304));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 946u, 0x08AC77C4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8D50u) goto L_08AC8D50;
    return;
L_08AC8D50:
    ctx.gpr[31] = (0x08AC8D58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 943u, 0x08AC77ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC8D58u) goto L_08AC8D58;
    return;
L_08AC8D58:
    ctx.gpr[31] = (0x08AC8D60u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 942u, 0x08AC77A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8D60u) goto L_08AC8D60;
    return;
L_08AC8D60:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8E34;
      }
      goto L_08AC8D6C;
    }
L_08AC8D6C:
    ctx.gpr[31] = (0x08AC8D74u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AC810C;
L_08AC8D74:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC8D80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AC8114;
L_08AC8D80:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC8D8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 939u, 0x08AC7764u>(ctx, &aot_mem) && ctx.pc == 0x08AC8D8Cu) goto L_08AC8D8C;
    return;
L_08AC8D8C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8E2C;
      }
      goto L_08AC8D98;
    }
L_08AC8D98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8E2C;
      }
      goto L_08AC8DA8;
    }
L_08AC8DA8:
    ctx.gpr[31] = (0x08AC8DB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 956u, 0x08AC7930u>(ctx, &aot_mem) && ctx.pc == 0x08AC8DB0u) goto L_08AC8DB0;
    return;
L_08AC8DB0:
    ctx.gpr[31] = (0x08AC8DB8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 917u, 0x08AC75F8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8DB8u) goto L_08AC8DB8;
    return;
L_08AC8DB8:
    ctx.gpr[4] = (14289u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AC8E2C;
      }
      goto L_08AC8DD4;
    }
L_08AC8DD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1272), ctx.gpr[18]);
    ctx.gpr[31] = (0x08AC8DE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC8DE0u) goto L_08AC8DE0;
    return;
L_08AC8DE0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC8DF0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1276), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC8DF0u) goto L_08AC8DF0;
    return;
L_08AC8DF0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC8E04u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08AC8E04u) goto L_08AC8E04;
    return;
L_08AC8E04:
    ctx.gpr[31] = (0x08AC8E0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 917u, 0x08AC75F8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8E0Cu) goto L_08AC8E0C;
    return;
L_08AC8E0C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1272)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1276)));
      if (branch_taken) {
          goto L_08AC8E2C;
      }
      goto L_08AC8E24;
    }
L_08AC8E24:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    goto L_08AC8E2C;
L_08AC8E2C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8D6C;
      }
      goto L_08AC8E34;
    }
L_08AC8E34:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8D38;
      }
      goto L_08AC8E44;
    }
L_08AC8E44:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8D28;
      }
      goto L_08AC8E54;
    }
L_08AC8E54:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8F0C;
      }
      goto L_08AC8E5C;
    }
L_08AC8E5C:
    ctx.gpr[31] = (0x08AC8E64u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 559u, 0x08B021B0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8E64u) goto L_08AC8E64;
    return;
L_08AC8E64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(565)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8F00;
      }
      goto L_08AC8E78;
    }
L_08AC8E78:
    ctx.gpr[31] = (0x08AC8E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08AC8E80u) goto L_08AC8E80;
    return;
L_08AC8E80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8E94u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8E94u) goto L_08AC8E94;
    return;
L_08AC8E94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08AC8EA4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08AC8EA4u) goto L_08AC8EA4;
    return;
L_08AC8EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 64u);
    ctx.gpr[31] = (0x08AC8EC4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AC8EC4u) goto L_08AC8EC4;
    return;
L_08AC8EC4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AC8ED4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 169u, 0x08B00A50u>(ctx, &aot_mem) && ctx.pc == 0x08AC8ED4u) goto L_08AC8ED4;
    return;
L_08AC8ED4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AC8EEC;
      }
      goto L_08AC8EDC;
    }
L_08AC8EDC:
    ctx.gpr[31] = (0x08AC8EE4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 187u, 0x08B00B68u>(ctx, &aot_mem) && ctx.pc == 0x08AC8EE4u) goto L_08AC8EE4;
    return;
L_08AC8EE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8EF8;
      }
      goto L_08AC8EEC;
    }
L_08AC8EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    goto L_08AC8EF8;
L_08AC8EF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8F0C;
      }
      goto L_08AC8F00;
    }
L_08AC8F00:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8F0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08AC8F0Cu) goto L_08AC8F0C;
    return;
L_08AC8F0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC8F14;
    }
L_08AC8F14:
    ctx.gpr[31] = (0x08AC8F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC8F1Cu) goto L_08AC8F1C;
    return;
L_08AC8F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1728)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8FE0;
      }
      goto L_08AC8F2C;
    }
L_08AC8F2C:
    ctx.gpr[31] = (0x08AC8F34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC8F34u) goto L_08AC8F34;
    return;
L_08AC8F34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8F74;
      }
      goto L_08AC8F3C;
    }
L_08AC8F3C:
    ctx.gpr[31] = (0x08AC8F44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC8F44u) goto L_08AC8F44;
    return;
L_08AC8F44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8F74;
      }
      goto L_08AC8F4C;
    }
L_08AC8F4C:
    ctx.gpr[31] = (0x08AC8F54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC8F54u) goto L_08AC8F54;
    return;
L_08AC8F54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08AC8F64u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08AC8F64u) goto L_08AC8F64;
    return;
L_08AC8F64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC8FE0;
      }
      goto L_08AC8F74;
    }
L_08AC8F74:
    ctx.gpr[31] = (0x08AC8F7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8F7Cu) goto L_08AC8F7C;
    return;
L_08AC8F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8FE0;
      }
      goto L_08AC8F8C;
    }
L_08AC8F8C:
    ctx.gpr[31] = (0x08AC8F94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC8F94u) goto L_08AC8F94;
    return;
L_08AC8F94:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.gpr[31] = (0x08AC8FA0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 928u, 0x08AC76C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8FA0u) goto L_08AC8FA0;
    return;
L_08AC8FA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8FC8u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8FC8u) goto L_08AC8FC8;
    return;
L_08AC8FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC8FE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x08AC8FE0u) goto L_08AC8FE0;
    return;
L_08AC8FE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC8FE8;
    }
L_08AC8FE8:
    ctx.gpr[31] = (0x08AC8FF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC8FF0u) goto L_08AC8FF0;
    return;
L_08AC8FF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9058;
      }
      goto L_08AC8FF8;
    }
L_08AC8FF8:
    ctx.gpr[31] = (0x08AC9000u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9000u) goto L_08AC9000;
    return;
L_08AC9000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9058;
      }
      goto L_08AC9010;
    }
L_08AC9010:
    ctx.gpr[31] = (0x08AC9018u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9018u) goto L_08AC9018;
    return;
L_08AC9018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9058;
      }
      goto L_08AC9028;
    }
L_08AC9028:
    ctx.gpr[31] = (0x08AC9030u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9030u) goto L_08AC9030;
    return;
L_08AC9030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9058;
      }
      goto L_08AC9040;
    }
L_08AC9040:
    ctx.gpr[31] = (0x08AC9048u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9048u) goto L_08AC9048;
    return;
L_08AC9048:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC9058u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 103u, 0x0890C604u>(ctx, &aot_mem) && ctx.pc == 0x08AC9058u) goto L_08AC9058;
    return;
L_08AC9058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC9060;
    }
L_08AC9060:
    ctx.gpr[31] = (0x08AC9068u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9068u) goto L_08AC9068;
    return;
L_08AC9068:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC915C;
      }
      goto L_08AC9070;
    }
L_08AC9070:
    ctx.gpr[31] = (0x08AC9078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC9078u) goto L_08AC9078;
    return;
L_08AC9078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1756)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC90D8;
      }
      goto L_08AC9088;
    }
L_08AC9088:
    ctx.gpr[31] = (0x08AC9090u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9090u) goto L_08AC9090;
    return;
L_08AC9090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9188;
      }
      goto L_08AC90A0;
    }
L_08AC90A0:
    ctx.gpr[31] = (0x08AC90A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC90A8u) goto L_08AC90A8;
    return;
L_08AC90A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9188;
      }
      goto L_08AC90B8;
    }
L_08AC90B8:
    ctx.gpr[31] = (0x08AC90C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC90C0u) goto L_08AC90C0;
    return;
L_08AC90C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC90D0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 103u, 0x0890C604u>(ctx, &aot_mem) && ctx.pc == 0x08AC90D0u) goto L_08AC90D0;
    return;
L_08AC90D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9188;
      }
      goto L_08AC90D8;
    }
L_08AC90D8:
    ctx.gpr[31] = (0x08AC90E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC90E0u) goto L_08AC90E0;
    return;
L_08AC90E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9188;
      }
      goto L_08AC90E8;
    }
L_08AC90E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC90F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08AC90F4u) goto L_08AC90F4;
    return;
L_08AC90F4:
    ctx.gpr[31] = (0x08AC90FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 949u, 0x08AC7810u>(ctx, &aot_mem) && ctx.pc == 0x08AC90FCu) goto L_08AC90FC;
    return;
L_08AC90FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_08AC9118;
    }
    goto L_08AC9108;
L_08AC9108:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC9118;
      }
      goto L_08AC9118;
    }
L_08AC9118:
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08AC9128u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08AC9128u) goto L_08AC9128;
    return;
L_08AC9128:
    ctx.gpr[31] = (0x08AC9130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC9130u) goto L_08AC9130;
    return;
L_08AC9130:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1756), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC9140u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9140u) goto L_08AC9140;
    return;
L_08AC9140:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9188;
      }
      goto L_08AC9148;
    }
L_08AC9148:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9154u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08AC9154u) goto L_08AC9154;
    return;
L_08AC9154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9188;
      }
      goto L_08AC915C;
    }
L_08AC915C:
    ctx.gpr[31] = (0x08AC9164u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08AC9164u) goto L_08AC9164;
    return;
L_08AC9164:
    ctx.gpr[31] = (0x08AC916Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC916Cu) goto L_08AC916C;
    return;
L_08AC916C:
    ctx.gpr[31] = (0x08AC9174u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9174u) goto L_08AC9174;
    return;
L_08AC9174:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9188;
      }
      goto L_08AC917C;
    }
L_08AC917C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9188u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08AC9188u) goto L_08AC9188;
    return;
L_08AC9188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC9190;
    }
L_08AC9190:
    ctx.gpr[31] = (0x08AC9198u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08AC9198:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC91CC;
      }
      goto L_08AC91A0;
    }
L_08AC91A0:
    ctx.gpr[31] = (0x08AC91A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC91A8u) goto L_08AC91A8;
    return;
L_08AC91A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1756)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC91D8;
      }
      goto L_08AC91B8;
    }
L_08AC91B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC91C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 979u, 0x08AC7A14u>(ctx, &aot_mem) && ctx.pc == 0x08AC91C4u) goto L_08AC91C4;
    return;
L_08AC91C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC91D8;
      }
      goto L_08AC91CC;
    }
L_08AC91CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC91D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 979u, 0x08AC7A14u>(ctx, &aot_mem) && ctx.pc == 0x08AC91D8u) goto L_08AC91D8;
    return;
L_08AC91D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC91E0;
    }
L_08AC91E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC91ECu);
    ctx.gpr[5] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08AC91ECu) goto L_08AC91EC;
    return;
L_08AC91EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC91F4;
    }
L_08AC91F4:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9204u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 69u, 0x08A08974u>(ctx, &aot_mem) && ctx.pc == 0x08AC9204u) goto L_08AC9204;
    return;
L_08AC9204:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9238;
      }
      goto L_08AC920C;
    }
L_08AC920C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x08AC9218u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 914u, 0x08AC75B0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9218u) goto L_08AC9218;
    return;
L_08AC9218:
    ctx.gpr[6] = (16204u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08AC9230u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 686u, 0x0890AA84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9230u) goto L_08AC9230;
    return;
L_08AC9230:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9294;
      }
      goto L_08AC9238;
    }
L_08AC9238:
    ctx.gpr[31] = (0x08AC9240u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 56u, 0x08A08884u>(ctx, &aot_mem) && ctx.pc == 0x08AC9240u) goto L_08AC9240;
    return;
L_08AC9240:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC927C;
      }
      goto L_08AC924C;
    }
L_08AC924C:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[31] = (0x08AC925Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 56u, 0x08A08884u>(ctx, &aot_mem) && ctx.pc == 0x08AC925Cu) goto L_08AC925C;
    return;
L_08AC925C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC9268u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 174u, 0x08AB4D44u>(ctx, &aot_mem) && ctx.pc == 0x08AC9268u) goto L_08AC9268;
    return;
L_08AC9268:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC9274u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08AC9274u) goto L_08AC9274;
    return;
L_08AC9274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9294;
      }
      goto L_08AC927C;
    }
L_08AC927C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AC9294u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 979u, 0x08AC7A14u>(ctx, &aot_mem) && ctx.pc == 0x08AC9294u) goto L_08AC9294;
    return;
L_08AC9294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC929C;
    }
L_08AC929C:
    ctx.gpr[31] = (0x08AC92A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC92A4u) goto L_08AC92A4;
    return;
L_08AC92A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC92BC;
      }
      goto L_08AC92B4;
    }
L_08AC92B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC92BC;
    }
L_08AC92BC:
    ctx.gpr[31] = (0x08AC92C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC92C4u) goto L_08AC92C4;
    return;
L_08AC92C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC95F8;
      }
      goto L_08AC92CC;
    }
L_08AC92CC:
    ctx.gpr[31] = (0x08AC92D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC92D4u) goto L_08AC92D4;
    return;
L_08AC92D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC933C;
      }
      goto L_08AC92DC;
    }
L_08AC92DC:
    ctx.gpr[31] = (0x08AC92E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC92E4u) goto L_08AC92E4;
    return;
L_08AC92E4:
    ctx.gpr[31] = (0x08AC92ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 559u, 0x08B021B0u>(ctx, &aot_mem) && ctx.pc == 0x08AC92ECu) goto L_08AC92EC;
    return;
L_08AC92EC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC92F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC92F8u) goto L_08AC92F8;
    return;
L_08AC92F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(565)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC933C;
      }
      goto L_08AC9308;
    }
L_08AC9308:
    ctx.gpr[31] = (0x08AC9310u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08AC9310u) goto L_08AC9310;
    return;
L_08AC9310:
    ctx.gpr[31] = (0x08AC9318u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9318u) goto L_08AC9318;
    return;
L_08AC9318:
    ctx.gpr[31] = (0x08AC9320u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9320u) goto L_08AC9320;
    return;
L_08AC9320:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9334;
      }
      goto L_08AC9328;
    }
L_08AC9328:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9334u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08AC9334u) goto L_08AC9334;
    return;
L_08AC9334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC933C;
    }
L_08AC933C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(640)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC93BC;
      }
      goto L_08AC934C;
    }
L_08AC934C:
    ctx.gpr[31] = (0x08AC9354u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9354u) goto L_08AC9354;
    return;
L_08AC9354:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1653))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC93BC;
      }
      goto L_08AC9364;
    }
L_08AC9364:
    ctx.gpr[31] = (0x08AC936Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08AC936Cu) goto L_08AC936C;
    return;
L_08AC936C:
    ctx.gpr[31] = (0x08AC9374u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08AC9374u) goto L_08AC9374;
    return;
L_08AC9374:
    ctx.gpr[31] = (0x08AC937Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 949u, 0x08AC7810u>(ctx, &aot_mem) && ctx.pc == 0x08AC937Cu) goto L_08AC937C;
    return;
L_08AC937C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_08AC9398;
    }
    goto L_08AC9388;
L_08AC9388:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC9398;
      }
      goto L_08AC9398;
    }
L_08AC9398:
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08AC93A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08AC93A8u) goto L_08AC93A8;
    return;
L_08AC93A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC93BC;
    }
L_08AC93BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC95F8;
      }
      goto L_08AC93C8;
    }
L_08AC93C8:
    ctx.gpr[31] = (0x08AC93D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC93D0u) goto L_08AC93D0;
    return;
L_08AC93D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1756)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC95F8;
      }
      goto L_08AC93E0;
    }
L_08AC93E0:
    ctx.gpr[31] = (0x08AC93E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC93E8u) goto L_08AC93E8;
    return;
L_08AC93E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC95F4;
      }
      goto L_08AC93F8;
    }
L_08AC93F8:
    ctx.gpr[31] = (0x08AC9400u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9400u) goto L_08AC9400;
    return;
L_08AC9400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC95F4;
      }
      goto L_08AC9410;
    }
L_08AC9410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC9470;
      }
      goto L_08AC9424;
    }
L_08AC9424:
    ctx.gpr[31] = (0x08AC942Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC942Cu) goto L_08AC942C;
    return;
L_08AC942C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC9438u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9438u) goto L_08AC9438;
    return;
L_08AC9438:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9470;
      }
      goto L_08AC9440;
    }
L_08AC9440:
    ctx.gpr[31] = (0x08AC9448u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9448u) goto L_08AC9448;
    return;
L_08AC9448:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9470;
      }
      goto L_08AC9458;
    }
L_08AC9458:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9468u);
    ctx.gpr[5] = (0u | 8u);
    goto L_08AC80F4;
L_08AC9468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9514;
      }
      goto L_08AC9470;
    }
L_08AC9470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9514;
      }
      goto L_08AC9484;
    }
L_08AC9484:
    ctx.gpr[31] = (0x08AC948Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC948Cu) goto L_08AC948C;
    return;
L_08AC948C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC9498u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9498u) goto L_08AC9498;
    return;
L_08AC9498:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC94D0;
      }
      goto L_08AC94A0;
    }
L_08AC94A0:
    ctx.gpr[31] = (0x08AC94A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC94A8u) goto L_08AC94A8;
    return;
L_08AC94A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC94D0;
      }
      goto L_08AC94B8;
    }
L_08AC94B8:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC94C8u);
    ctx.gpr[5] = (0u | 11u);
    goto L_08AC80F4;
L_08AC94C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9514;
      }
      goto L_08AC94D0;
    }
L_08AC94D0:
    ctx.gpr[31] = (0x08AC94D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC94D8u) goto L_08AC94D8;
    return;
L_08AC94D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC94E4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC94E4u) goto L_08AC94E4;
    return;
L_08AC94E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9514;
      }
      goto L_08AC94EC;
    }
L_08AC94EC:
    ctx.gpr[31] = (0x08AC94F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC94F4u) goto L_08AC94F4;
    return;
L_08AC94F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9514;
      }
      goto L_08AC9504;
    }
L_08AC9504:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9514u);
    ctx.gpr[5] = (0u | 9u);
    goto L_08AC80F4;
L_08AC9514:
    ctx.gpr[18] = (0u | 2u);
    goto L_08AC9518;
L_08AC9518:
    ctx.gpr[31] = (0x08AC9520u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9520u) goto L_08AC9520;
    return;
L_08AC9520:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(565)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC957C;
      }
      goto L_08AC9530;
    }
L_08AC9530:
    ctx.gpr[31] = (0x08AC9538u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9538u) goto L_08AC9538;
    return;
L_08AC9538:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC9544u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9544u) goto L_08AC9544;
    return;
L_08AC9544:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9574;
      }
      goto L_08AC954C;
    }
L_08AC954C:
    ctx.gpr[31] = (0x08AC9554u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9554u) goto L_08AC9554;
    return;
L_08AC9554:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9574;
      }
      goto L_08AC9564;
    }
L_08AC9564:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9574u);
    ctx.gpr[5] = (0u | 8u);
    goto L_08AC80F4;
L_08AC9574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC9518;
      }
      goto L_08AC957C;
    }
L_08AC957C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC95F4;
      }
      goto L_08AC9584;
    }
L_08AC9584:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x08AC9594u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9594u) goto L_08AC9594;
    return;
L_08AC9594:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC95A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80EC;
L_08AC95A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC95B4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x08AC95B4u) goto L_08AC95B4;
    return;
L_08AC95B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC95C0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08AC95C0u) goto L_08AC95C0;
    return;
L_08AC95C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC95CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 923u, 0x08AC7654u>(ctx, &aot_mem) && ctx.pc == 0x08AC95CCu) goto L_08AC95CC;
    return;
L_08AC95CC:
    ctx.gpr[31] = (0x08AC95D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC95D4u) goto L_08AC95D4;
    return;
L_08AC95D4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC95E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80EC;
L_08AC95E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC95F4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem) && ctx.pc == 0x08AC95F4u) goto L_08AC95F4;
    return;
L_08AC95F4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1756), 0u);
    goto L_08AC95F8;
L_08AC95F8:
    ctx.gpr[31] = (0x08AC9600u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9600u) goto L_08AC9600;
    return;
L_08AC9600:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9B98;
      }
      goto L_08AC9608;
    }
L_08AC9608:
    ctx.gpr[31] = (0x08AC9610u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC9610u) goto L_08AC9610;
    return;
L_08AC9610:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9B98;
      }
      goto L_08AC9618;
    }
L_08AC9618:
    ctx.gpr[31] = (0x08AC9620u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9620u) goto L_08AC9620;
    return;
L_08AC9620:
    ctx.gpr[31] = (0x08AC9628u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 938u, 0x08AC7750u>(ctx, &aot_mem) && ctx.pc == 0x08AC9628u) goto L_08AC9628;
    return;
L_08AC9628:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9638;
      }
      goto L_08AC9630;
    }
L_08AC9630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC9638;
    }
L_08AC9638:
    ctx.gpr[31] = (0x08AC9640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC9640u) goto L_08AC9640;
    return;
L_08AC9640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1728)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9664;
      }
      goto L_08AC9650;
    }
L_08AC9650:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC965Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08AC965Cu) goto L_08AC965C;
    return;
L_08AC965C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC9664;
    }
L_08AC9664:
    ctx.gpr[31] = (0x08AC966Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08AC966Cu) goto L_08AC966C;
    return;
L_08AC966C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9C14;
      }
      goto L_08AC9674;
    }
L_08AC9674:
    ctx.gpr[31] = (0x08AC967Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC967Cu) goto L_08AC967C;
    return;
L_08AC967C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9C14;
      }
      goto L_08AC968C;
    }
L_08AC968C:
    ctx.gpr[31] = (0x08AC9694u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9694u) goto L_08AC9694;
    return;
L_08AC9694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9C14;
      }
      goto L_08AC96A4;
    }
L_08AC96A4:
    ctx.gpr[31] = (0x08AC96ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC96ACu) goto L_08AC96AC;
    return;
L_08AC96AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9C14;
      }
      goto L_08AC96BC;
    }
L_08AC96BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(640)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC97C8;
      }
      goto L_08AC96CC;
    }
L_08AC96CC:
    ctx.gpr[31] = (0x08AC96D4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC96D4u) goto L_08AC96D4;
    return;
L_08AC96D4:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AC9708;
      }
      goto L_08AC96EC;
    }
L_08AC96EC:
    ctx.gpr[31] = (0x08AC96F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08AC96F4u) goto L_08AC96F4;
    return;
L_08AC96F4:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC9720;
      }
      goto L_08AC9700;
    }
L_08AC9700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC98B4;
      }
      goto L_08AC9708;
    }
L_08AC9708:
    ctx.gpr[31] = (0x08AC9710u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08AC9710u) goto L_08AC9710;
    return;
L_08AC9710:
    ctx.gpr[31] = (0x08AC9718u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9718u) goto L_08AC9718;
    return;
L_08AC9718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 441u, 0x08ACD47Cu>(ctx, &aot_mem); return;
      }
      goto L_08AC9720;
    }
L_08AC9720:
    ctx.gpr[31] = (0x08AC9728u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9728u) goto L_08AC9728;
    return;
L_08AC9728:
    ctx.gpr[31] = (0x08AC9730u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC9730u) goto L_08AC9730;
    return;
L_08AC9730:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC98B4;
      }
      goto L_08AC9738;
    }
L_08AC9738:
    ctx.gpr[31] = (0x08AC9740u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9740u) goto L_08AC9740;
    return;
L_08AC9740:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC98B4;
      }
      goto L_08AC9748;
    }
L_08AC9748:
    ctx.gpr[31] = (0x08AC9750u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9750u) goto L_08AC9750;
    return;
L_08AC9750:
    ctx.gpr[31] = (0x08AC9758u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC9758u) goto L_08AC9758;
    return;
L_08AC9758:
    ctx.gpr[31] = (0x08AC9760u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08AC9760u) goto L_08AC9760;
    return;
L_08AC9760:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC98B4;
      }
      goto L_08AC976C;
    }
L_08AC976C:
    ctx.gpr[31] = (0x08AC9774u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9774u) goto L_08AC9774;
    return;
L_08AC9774:
    ctx.gpr[31] = (0x08AC977Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC977Cu) goto L_08AC977C;
    return;
L_08AC977C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC9788u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08AC9788:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC98B4;
      }
      goto L_08AC9790;
    }
L_08AC9790:
    ctx.gpr[31] = (0x08AC9798u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9798u) goto L_08AC9798;
    return;
L_08AC9798:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08AC97A8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08AC97A8u) goto L_08AC97A8;
    return;
L_08AC97A8:
    ctx.gpr[31] = (0x08AC97B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC97B0u) goto L_08AC97B0;
    return;
L_08AC97B0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(615));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AC98B4;
      }
      goto L_08AC97C8;
    }
L_08AC97C8:
    ctx.gpr[31] = (0x08AC97D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC97D0u) goto L_08AC97D0;
    return;
L_08AC97D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC98B4;
      }
      goto L_08AC97D8;
    }
L_08AC97D8:
    ctx.gpr[31] = (0x08AC97E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC97E0u) goto L_08AC97E0;
    return;
L_08AC97E0:
    ctx.gpr[31] = (0x08AC97E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC97E8u) goto L_08AC97E8;
    return;
L_08AC97E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC98B4;
      }
      goto L_08AC97F0;
    }
L_08AC97F0:
    ctx.gpr[31] = (0x08AC97F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08AC97F8u) goto L_08AC97F8;
    return;
L_08AC97F8:
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC98B4;
      }
      goto L_08AC9804;
    }
L_08AC9804:
    ctx.gpr[31] = (0x08AC980Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC980Cu) goto L_08AC980C;
    return;
L_08AC980C:
    ctx.gpr[31] = (0x08AC9814u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC9814u) goto L_08AC9814;
    return;
L_08AC9814:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC98B4;
      }
      goto L_08AC981C;
    }
L_08AC981C:
    ctx.gpr[31] = (0x08AC9824u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9824u) goto L_08AC9824;
    return;
L_08AC9824:
    ctx.gpr[31] = (0x08AC982Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC982Cu) goto L_08AC982C;
    return;
L_08AC982C:
    ctx.gpr[31] = (0x08AC9834u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 978u, 0x08AC7A0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9834u) goto L_08AC9834;
    return;
L_08AC9834:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC9840u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 978u, 0x08AC7A0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9840u) goto L_08AC9840;
    return;
L_08AC9840:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC98B4;
      }
      goto L_08AC9848;
    }
L_08AC9848:
    ctx.gpr[31] = (0x08AC9850u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80FC;
L_08AC9850:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC9880;
      }
      goto L_08AC985C;
    }
L_08AC985C:
    ctx.gpr[31] = (0x08AC9864u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9864u) goto L_08AC9864;
    return;
L_08AC9864:
    ctx.gpr[31] = (0x08AC986Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC986Cu) goto L_08AC986C;
    return;
L_08AC986C:
    ctx.gpr[31] = (0x08AC9874u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AC80FC;
L_08AC9874:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC98B4;
      }
      goto L_08AC9880;
    }
L_08AC9880:
    ctx.gpr[31] = (0x08AC9888u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9888u) goto L_08AC9888;
    return;
L_08AC9888:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08AC9898u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08AC9898u) goto L_08AC9898;
    return;
L_08AC9898:
    ctx.gpr[31] = (0x08AC98A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC98A0u) goto L_08AC98A0;
    return;
L_08AC98A0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(615));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AC98B4;
L_08AC98B4:
    ctx.gpr[31] = (0x08AC98BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC98BCu) goto L_08AC98BC;
    return;
L_08AC98BC:
    ctx.gpr[31] = (0x08AC98C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem) && ctx.pc == 0x08AC98C4u) goto L_08AC98C4;
    return;
L_08AC98C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC98E8;
      }
      goto L_08AC98CC;
    }
L_08AC98CC:
    ctx.gpr[31] = (0x08AC98D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC98D4u) goto L_08AC98D4;
    return;
L_08AC98D4:
    ctx.gpr[31] = (0x08AC98DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 965u, 0x08AC7978u>(ctx, &aot_mem) && ctx.pc == 0x08AC98DCu) goto L_08AC98DC;
    return;
L_08AC98DC:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC990C;
      }
      goto L_08AC98E8;
    }
L_08AC98E8:
    ctx.gpr[31] = (0x08AC98F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC98F0u) goto L_08AC98F0;
    return;
L_08AC98F0:
    ctx.gpr[31] = (0x08AC98F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 965u, 0x08AC7978u>(ctx, &aot_mem) && ctx.pc == 0x08AC98F8u) goto L_08AC98F8;
    return;
L_08AC98F8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC9924;
      }
      goto L_08AC9904;
    }
L_08AC9904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9958;
      }
      goto L_08AC990C;
    }
L_08AC990C:
    ctx.gpr[31] = (0x08AC9914u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08AC9914u) goto L_08AC9914;
    return;
L_08AC9914:
    ctx.gpr[31] = (0x08AC991Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC991Cu) goto L_08AC991C;
    return;
L_08AC991C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 441u, 0x08ACD47Cu>(ctx, &aot_mem); return;
      }
      goto L_08AC9924;
    }
L_08AC9924:
    ctx.gpr[31] = (0x08AC992Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC992Cu) goto L_08AC992C;
    return;
L_08AC992C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9958;
      }
      goto L_08AC993C;
    }
L_08AC993C:
    ctx.gpr[31] = (0x08AC9944u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9944u) goto L_08AC9944;
    return;
L_08AC9944:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9950u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 277u, 0x089A9810u>(ctx, &aot_mem) && ctx.pc == 0x08AC9950u) goto L_08AC9950;
    return;
L_08AC9950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9988;
      }
      goto L_08AC9958;
    }
L_08AC9958:
    ctx.gpr[31] = (0x08AC9960u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9960u) goto L_08AC9960;
    return;
L_08AC9960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9988;
      }
      goto L_08AC9970;
    }
L_08AC9970:
    ctx.gpr[31] = (0x08AC9978u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9978u) goto L_08AC9978;
    return;
L_08AC9978:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC9988u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 103u, 0x0890C604u>(ctx, &aot_mem) && ctx.pc == 0x08AC9988u) goto L_08AC9988;
    return;
L_08AC9988:
    ctx.gpr[31] = (0x08AC9990u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 977u, 0x08AC7A04u>(ctx, &aot_mem) && ctx.pc == 0x08AC9990u) goto L_08AC9990;
    return;
L_08AC9990:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC99BC;
      }
      goto L_08AC999C;
    }
L_08AC999C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC99BC;
      }
      goto L_08AC99B0;
    }
L_08AC99B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC99BCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08AC99BCu) goto L_08AC99BC;
    return;
L_08AC99BC:
    ctx.gpr[31] = (0x08AC99C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC99C4u) goto L_08AC99C4;
    return;
L_08AC99C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9B54;
      }
      goto L_08AC99CC;
    }
L_08AC99CC:
    ctx.gpr[31] = (0x08AC99D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC99D4u) goto L_08AC99D4;
    return;
L_08AC99D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(636)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AC9B54;
      }
      goto L_08AC99EC;
    }
L_08AC99EC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[31] = (0x08AC99F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC99F8u) goto L_08AC99F8;
    return;
L_08AC99F8:
    ctx.gpr[31] = (0x08AC9A00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A00u) goto L_08AC9A00;
    return;
L_08AC9A00:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC9A0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A0Cu) goto L_08AC9A0C;
    return;
L_08AC9A0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC9A1Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A1Cu) goto L_08AC9A1C;
    return;
L_08AC9A1C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08AC9A28u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A28u) goto L_08AC9A28;
    return;
L_08AC9A28:
    ctx.gpr[31] = (0x08AC9A30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A30u) goto L_08AC9A30;
    return;
L_08AC9A30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9B4C;
      }
      goto L_08AC9A38;
    }
L_08AC9A38:
    ctx.gpr[31] = (0x08AC9A40u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A40u) goto L_08AC9A40;
    return;
L_08AC9A40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-13364))))));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AC9B4C;
      }
      goto L_08AC9A68;
    }
L_08AC9A68:
    ctx.gpr[31] = (0x08AC9A70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A70u) goto L_08AC9A70;
    return;
L_08AC9A70:
    ctx.gpr[31] = (0x08AC9A78u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A78u) goto L_08AC9A78;
    return;
L_08AC9A78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9ABC;
      }
      goto L_08AC9A80;
    }
L_08AC9A80:
    ctx.gpr[31] = (0x08AC9A88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A88u) goto L_08AC9A88;
    return;
L_08AC9A88:
    ctx.gpr[31] = (0x08AC9A90u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A90u) goto L_08AC9A90;
    return;
L_08AC9A90:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9ABC;
      }
      goto L_08AC9A98;
    }
L_08AC9A98:
    ctx.gpr[31] = (0x08AC9AA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem) && ctx.pc == 0x08AC9AA0u) goto L_08AC9AA0;
    return;
L_08AC9AA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9ABC;
      }
      goto L_08AC9AA8;
    }
L_08AC9AA8:
    ctx.gpr[31] = (0x08AC9AB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9AB0u) goto L_08AC9AB0;
    return;
L_08AC9AB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9ABCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 112u, 0x08A0CAD4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9ABCu) goto L_08AC9ABC;
    return;
L_08AC9ABC:
    ctx.gpr[31] = (0x08AC9AC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80FC;
L_08AC9AC4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC9B20;
      }
      goto L_08AC9AD0;
    }
L_08AC9AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(640)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9B20;
      }
      goto L_08AC9AE0;
    }
L_08AC9AE0:
    ctx.gpr[31] = (0x08AC9AE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9AE8u) goto L_08AC9AE8;
    return;
L_08AC9AE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9B04;
      }
      goto L_08AC9AF0;
    }
L_08AC9AF0:
    ctx.gpr[31] = (0x08AC9AF8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AC9AF8u) goto L_08AC9AF8;
    return;
L_08AC9AF8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9B20;
      }
      goto L_08AC9B04;
    }
L_08AC9B04:
    ctx.gpr[31] = (0x08AC9B0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9B0Cu) goto L_08AC9B0C;
    return;
L_08AC9B0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9B18u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B18u) goto L_08AC9B18;
    return;
L_08AC9B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9B4C;
      }
      goto L_08AC9B20;
    }
L_08AC9B20:
    ctx.gpr[31] = (0x08AC9B28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B28u) goto L_08AC9B28;
    return;
L_08AC9B28:
    ctx.gpr[31] = (0x08AC9B30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B30u) goto L_08AC9B30;
    return;
L_08AC9B30:
    ctx.gpr[31] = (0x08AC9B38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B38u) goto L_08AC9B38;
    return;
L_08AC9B38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9B4C;
      }
      goto L_08AC9B40;
    }
L_08AC9B40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9B4Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B4Cu) goto L_08AC9B4C;
    return;
L_08AC9B4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9C14;
      }
      goto L_08AC9B54;
    }
L_08AC9B54:
    ctx.gpr[31] = (0x08AC9B5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B5Cu) goto L_08AC9B5C;
    return;
L_08AC9B5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9C14;
      }
      goto L_08AC9B64;
    }
L_08AC9B64:
    ctx.gpr[31] = (0x08AC9B6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B6Cu) goto L_08AC9B6C;
    return;
L_08AC9B6C:
    ctx.gpr[31] = (0x08AC9B74u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B74u) goto L_08AC9B74;
    return;
L_08AC9B74:
    ctx.gpr[31] = (0x08AC9B7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B7Cu) goto L_08AC9B7C;
    return;
L_08AC9B7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9C14;
      }
      goto L_08AC9B84;
    }
L_08AC9B84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9B90u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B90u) goto L_08AC9B90;
    return;
L_08AC9B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9C14;
      }
      goto L_08AC9B98;
    }
L_08AC9B98:
    ctx.gpr[31] = (0x08AC9BA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC9BA0u) goto L_08AC9BA0;
    return;
L_08AC9BA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9BE4;
      }
      goto L_08AC9BA8;
    }
L_08AC9BA8:
    ctx.gpr[31] = (0x08AC9BB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9BB0u) goto L_08AC9BB0;
    return;
L_08AC9BB0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC9BBCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9BBCu) goto L_08AC9BBC;
    return;
L_08AC9BBC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC9BE4;
      }
      goto L_08AC9BC4;
    }
L_08AC9BC4:
    ctx.gpr[31] = (0x08AC9BCCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9BCCu) goto L_08AC9BCC;
    return;
L_08AC9BCC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC9BDCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 80u, 0x089AC664u>(ctx, &aot_mem) && ctx.pc == 0x08AC9BDCu) goto L_08AC9BDC;
    return;
L_08AC9BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9C14;
      }
      goto L_08AC9BE4;
    }
L_08AC9BE4:
    ctx.gpr[31] = (0x08AC9BECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9BECu) goto L_08AC9BEC;
    return;
L_08AC9BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9C14;
      }
      goto L_08AC9BFC;
    }
L_08AC9BFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AC9C14u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 979u, 0x08AC7A14u>(ctx, &aot_mem) && ctx.pc == 0x08AC9C14u) goto L_08AC9C14;
    return;
L_08AC9C14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC9C1C;
    }
L_08AC9C1C:
    ctx.gpr[31] = (0x08AC9C24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC9C24u) goto L_08AC9C24;
    return;
L_08AC9C24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9C7C;
      }
      goto L_08AC9C2C;
    }
L_08AC9C2C:
    ctx.gpr[31] = (0x08AC9C34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9C34u) goto L_08AC9C34;
    return;
L_08AC9C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9C74;
      }
      goto L_08AC9C44;
    }
L_08AC9C44:
    ctx.gpr[31] = (0x08AC9C4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9C4Cu) goto L_08AC9C4C;
    return;
L_08AC9C4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9C74;
      }
      goto L_08AC9C54;
    }
L_08AC9C54:
    ctx.gpr[31] = (0x08AC9C5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08AC9C5Cu) goto L_08AC9C5C;
    return;
L_08AC9C5C:
    ctx.gpr[31] = (0x08AC9C64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1021u, 0x08AC7C58u>(ctx, &aot_mem) && ctx.pc == 0x08AC9C64u) goto L_08AC9C64;
    return;
L_08AC9C64:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC9C74u);
    ctx.gpr[6] = (0u | 6000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9C74u) goto L_08AC9C74;
    return;
L_08AC9C74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC9C7C;
    }
L_08AC9C7C:
    ctx.gpr[31] = (0x08AC9C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC9C84u) goto L_08AC9C84;
    return;
L_08AC9C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1728)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9EA4;
      }
      goto L_08AC9C94;
    }
L_08AC9C94:
    ctx.gpr[31] = (0x08AC9C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AC9C9Cu) goto L_08AC9C9C;
    return;
L_08AC9C9C:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC9D38;
      }
      goto L_08AC9CA8;
    }
L_08AC9CA8:
    ctx.gpr[31] = (0x08AC9CB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC9CB0u) goto L_08AC9CB0;
    return;
L_08AC9CB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9D30;
      }
      goto L_08AC9CB8;
    }
L_08AC9CB8:
    ctx.gpr[31] = (0x08AC9CC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9CC0u) goto L_08AC9CC0;
    return;
L_08AC9CC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9D30;
      }
      goto L_08AC9CC8;
    }
L_08AC9CC8:
    ctx.gpr[31] = (0x08AC9CD0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AC9CD0u) goto L_08AC9CD0;
    return;
L_08AC9CD0:
    ctx.gpr[31] = (0x08AC9CD8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x08AC9CD8u) goto L_08AC9CD8;
    return;
L_08AC9CD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9CE8;
      }
      goto L_08AC9CE0;
    }
L_08AC9CE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC9D20;
      }
      goto L_08AC9CE8;
    }
L_08AC9CE8:
    ctx.gpr[31] = (0x08AC9CF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9CF0u) goto L_08AC9CF0;
    return;
L_08AC9CF0:
    ctx.gpr[31] = (0x08AC9CF8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC9CF8u) goto L_08AC9CF8;
    return;
L_08AC9CF8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AC9D20;
      }
      goto L_08AC9D00;
    }
L_08AC9D00:
    ctx.gpr[31] = (0x08AC9D08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9D08u) goto L_08AC9D08;
    return;
L_08AC9D08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC9D14u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 169u, 0x08B00A50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9D14u) goto L_08AC9D14;
    return;
L_08AC9D14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9D20;
      }
      goto L_08AC9D1C;
    }
L_08AC9D1C:
    ctx.gpr[16] = (0u | 1u);
    goto L_08AC9D20;
L_08AC9D20:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9D28;
    }
L_08AC9D28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9D30;
    }
L_08AC9D30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9D38;
    }
L_08AC9D38:
    ctx.gpr[31] = (0x08AC9D40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC9D40u) goto L_08AC9D40;
    return;
L_08AC9D40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DE8;
      }
      goto L_08AC9D48;
    }
L_08AC9D48:
    ctx.gpr[31] = (0x08AC9D50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9D50u) goto L_08AC9D50;
    return;
L_08AC9D50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DE8;
      }
      goto L_08AC9D58;
    }
L_08AC9D58:
    ctx.gpr[31] = (0x08AC9D60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 978u, 0x08AC7A0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9D60u) goto L_08AC9D60;
    return;
L_08AC9D60:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC9DE0;
      }
      goto L_08AC9D6C;
    }
L_08AC9D6C:
    ctx.gpr[31] = (0x08AC9D74u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9D74u) goto L_08AC9D74;
    return;
L_08AC9D74:
    ctx.gpr[31] = (0x08AC9D7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 965u, 0x08AC7978u>(ctx, &aot_mem) && ctx.pc == 0x08AC9D7Cu) goto L_08AC9D7C;
    return;
L_08AC9D7C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC9DE0;
      }
      goto L_08AC9D88;
    }
L_08AC9D88:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[31] = (0x08AC9D94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9D94u) goto L_08AC9D94;
    return;
L_08AC9D94:
    ctx.gpr[31] = (0x08AC9D9Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 956u, 0x08AC7930u>(ctx, &aot_mem) && ctx.pc == 0x08AC9D9Cu) goto L_08AC9D9C;
    return;
L_08AC9D9C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AC9DA8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 914u, 0x08AC75B0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9DA8u) goto L_08AC9DA8;
    return;
L_08AC9DA8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AC9DB8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 917u, 0x08AC75F8u>(ctx, &aot_mem) && ctx.pc == 0x08AC9DB8u) goto L_08AC9DB8;
    return;
L_08AC9DB8:
    ctx.gpr[4] = (14289u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AC9DD8;
      }
      goto L_08AC9DD4;
    }
L_08AC9DD4:
    ctx.gpr[16] = (0u | 1u);
    goto L_08AC9DD8;
L_08AC9DD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9DE0;
    }
L_08AC9DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9DE8;
    }
L_08AC9DE8:
    ctx.gpr[18] = (0u | 1u);
    goto L_08AC9DEC;
L_08AC9DEC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9E94;
      }
      goto L_08AC9DF4;
    }
L_08AC9DF4:
    ctx.gpr[31] = (0x08AC9DFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9DFCu) goto L_08AC9DFC;
    return;
L_08AC9DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9EA4;
      }
      goto L_08AC9E0C;
    }
L_08AC9E0C:
    ctx.gpr[31] = (0x08AC9E14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9E14u) goto L_08AC9E14;
    return;
L_08AC9E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9EA4;
      }
      goto L_08AC9E24;
    }
L_08AC9E24:
    ctx.gpr[31] = (0x08AC9E2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9E2Cu) goto L_08AC9E2C;
    return;
L_08AC9E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC9EA4;
      }
      goto L_08AC9E3C;
    }
L_08AC9E3C:
    ctx.gpr[31] = (0x08AC9E44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9E44u) goto L_08AC9E44;
    return;
L_08AC9E44:
    ctx.gpr[31] = (0x08AC9E4Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 965u, 0x08AC7978u>(ctx, &aot_mem) && ctx.pc == 0x08AC9E4Cu) goto L_08AC9E4C;
    return;
L_08AC9E4C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC9E74;
      }
      goto L_08AC9E58;
    }
L_08AC9E58:
    ctx.gpr[31] = (0x08AC9E60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9E60u) goto L_08AC9E60;
    return;
L_08AC9E60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9E6Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 408u, 0x089AD800u>(ctx, &aot_mem) && ctx.pc == 0x08AC9E6Cu) goto L_08AC9E6C;
    return;
L_08AC9E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9EA4;
      }
      goto L_08AC9E74;
    }
L_08AC9E74:
    ctx.gpr[31] = (0x08AC9E7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9E7Cu) goto L_08AC9E7C;
    return;
L_08AC9E7C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC9E8Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 80u, 0x089AC664u>(ctx, &aot_mem) && ctx.pc == 0x08AC9E8Cu) goto L_08AC9E8C;
    return;
L_08AC9E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9EA4;
      }
      goto L_08AC9E94;
    }
L_08AC9E94:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9EA4;
      }
      goto L_08AC9E9C;
    }
L_08AC9E9C:
    ctx.gpr[31] = (0x08AC9EA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08AC9EA4u) goto L_08AC9EA4;
    return;
L_08AC9EA4:
    ctx.gpr[31] = (0x08AC9EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem) && ctx.pc == 0x08AC9EACu) goto L_08AC9EAC;
    return;
L_08AC9EAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9EF0;
      }
      goto L_08AC9EB4;
    }
L_08AC9EB4:
    ctx.gpr[31] = (0x08AC9EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08AC9EBCu) goto L_08AC9EBC;
    return;
L_08AC9EBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9EF0;
      }
      goto L_08AC9EC4;
    }
L_08AC9EC4:
    ctx.gpr[31] = (0x08AC9ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08AC9ECCu) goto L_08AC9ECC;
    return;
L_08AC9ECC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC9ED8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 169u, 0x08B00A50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9ED8u) goto L_08AC9ED8;
    return;
L_08AC9ED8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9EF0;
      }
      goto L_08AC9EE0;
    }
L_08AC9EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9EF0;
      }
      goto L_08AC9EEC;
    }
L_08AC9EEC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1728), 0u);
    goto L_08AC9EF0;
L_08AC9EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08AC9EF8;
    }
L_08AC9EF8:
    ctx.gpr[31] = (0x08AC9F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC9F00u) goto L_08AC9F00;
    return;
L_08AC9F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1728)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA090;
      }
      goto L_08AC9F10;
    }
L_08AC9F10:
    ctx.gpr[31] = (0x08AC9F18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC9F18u) goto L_08AC9F18;
    return;
L_08AC9F18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA090;
      }
      goto L_08AC9F20;
    }
L_08AC9F20:
    ctx.gpr[31] = (0x08AC9F28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9F28u) goto L_08AC9F28;
    return;
L_08AC9F28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA090;
      }
      goto L_08AC9F30;
    }
L_08AC9F30:
    ctx.gpr[31] = (0x08AC9F38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9F38u) goto L_08AC9F38;
    return;
L_08AC9F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACA090;
      }
      goto L_08AC9F48;
    }
L_08AC9F48:
    ctx.gpr[31] = (0x08AC9F50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9F50u) goto L_08AC9F50;
    return;
L_08AC9F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACA090;
      }
      goto L_08AC9F60;
    }
L_08AC9F60:
    ctx.gpr[31] = (0x08AC9F68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9F68u) goto L_08AC9F68;
    return;
L_08AC9F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACA090;
      }
      goto L_08AC9F78;
    }
L_08AC9F78:
    ctx.gpr[31] = (0x08AC9F80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9F80u) goto L_08AC9F80;
    return;
L_08AC9F80:
    ctx.gpr[31] = (0x08AC9F88u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 965u, 0x08AC7978u>(ctx, &aot_mem) && ctx.pc == 0x08AC9F88u) goto L_08AC9F88;
    return;
L_08AC9F88:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC9FB0;
      }
      goto L_08AC9F94;
    }
L_08AC9F94:
    ctx.gpr[31] = (0x08AC9F9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9F9Cu) goto L_08AC9F9C;
    return;
L_08AC9F9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9FA8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 408u, 0x089AD800u>(ctx, &aot_mem) && ctx.pc == 0x08AC9FA8u) goto L_08AC9FA8;
    return;
L_08AC9FA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA090;
      }
      goto L_08AC9FB0;
    }
L_08AC9FB0:
    ctx.gpr[31] = (0x08AC9FB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9FB8u) goto L_08AC9FB8;
    return;
L_08AC9FB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9FE8;
      }
      goto L_08AC9FC8;
    }
L_08AC9FC8:
    ctx.gpr[31] = (0x08AC9FD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9FD0u) goto L_08AC9FD0;
    return;
L_08AC9FD0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC9FE0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 80u, 0x089AC664u>(ctx, &aot_mem) && ctx.pc == 0x08AC9FE0u) goto L_08AC9FE0;
    return;
L_08AC9FE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA090;
      }
      goto L_08AC9FE8;
    }
L_08AC9FE8:
    ctx.gpr[16] = (0u | 10u);
    ctx.gpr[31] = (0x08AC9FF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08AC9FF4u) goto L_08AC9FF4;
    return;
L_08AC9FF4:
    ctx.gpr[31] = (0x08AC9FFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08AC9FFCu) goto L_08AC9FFC;
    return;
L_08AC9FFC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACA00C;
      }
      goto L_08ACA004;
    }
L_08ACA004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 10u);
      if (branch_taken) {
          goto L_08ACA074;
      }
      goto L_08ACA00C;
    }
L_08ACA00C:
    ctx.gpr[31] = (0x08ACA014u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA014u) goto L_08ACA014;
    return;
L_08ACA014:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACA020u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA020u) goto L_08ACA020;
    return;
L_08ACA020:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACA030;
      }
      goto L_08ACA028;
    }
L_08ACA028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 8u);
      if (branch_taken) {
          goto L_08ACA074;
      }
      goto L_08ACA030;
    }
L_08ACA030:
    ctx.gpr[31] = (0x08ACA038u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA038u) goto L_08ACA038;
    return;
L_08ACA038:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACA044u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA044u) goto L_08ACA044;
    return;
L_08ACA044:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACA054;
      }
      goto L_08ACA04C;
    }
L_08ACA04C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 11u);
      if (branch_taken) {
          goto L_08ACA074;
      }
      goto L_08ACA054;
    }
L_08ACA054:
    ctx.gpr[31] = (0x08ACA05Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA05Cu) goto L_08ACA05C;
    return;
L_08ACA05C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACA068u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA068u) goto L_08ACA068;
    return;
L_08ACA068:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACA074;
      }
      goto L_08ACA070;
    }
L_08ACA070:
    ctx.gpr[16] = (0u | 9u);
    goto L_08ACA074;
L_08ACA074:
    ctx.gpr[31] = (0x08ACA07Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA07Cu) goto L_08ACA07C;
    return;
L_08ACA07C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACA090u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 567u, 0x089AE4F4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA090u) goto L_08ACA090;
    return;
L_08ACA090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACA098;
    }
L_08ACA098:
    ctx.gpr[31] = (0x08ACA0A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08ACA0A0u) goto L_08ACA0A0;
    return;
L_08ACA0A0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACA0F4;
      }
      goto L_08ACA0AC;
    }
L_08ACA0AC:
    ctx.gpr[31] = (0x08ACA0B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA0B4u) goto L_08ACA0B4;
    return;
L_08ACA0B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA0F4;
      }
      goto L_08ACA0BC;
    }
L_08ACA0BC:
    ctx.gpr[31] = (0x08ACA0C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA0C4u) goto L_08ACA0C4;
    return;
L_08ACA0C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACA0EC;
      }
      goto L_08ACA0D4;
    }
L_08ACA0D4:
    ctx.gpr[31] = (0x08ACA0DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA0DCu) goto L_08ACA0DC;
    return;
L_08ACA0DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08ACA0ECu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08ACA0ECu) goto L_08ACA0EC;
    return;
L_08ACA0EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACA0F4;
    }
L_08ACA0F4:
    ctx.gpr[31] = (0x08ACA0FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA0FCu) goto L_08ACA0FC;
    return;
L_08ACA0FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACA1E0;
      }
      goto L_08ACA10C;
    }
L_08ACA10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACA128u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACA128u) goto L_08ACA128;
    return;
L_08ACA128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ACA140u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACA140u) goto L_08ACA140;
    return;
L_08ACA140:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACA14Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 967u, 0x08AC7988u>(ctx, &aot_mem) && ctx.pc == 0x08ACA14Cu) goto L_08ACA14C;
    return;
L_08ACA14C:
    ctx.gpr[31] = (0x08ACA154u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 968u, 0x08AC7998u>(ctx, &aot_mem) && ctx.pc == 0x08ACA154u) goto L_08ACA154;
    return;
L_08ACA154:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA1E0;
      }
      goto L_08ACA15C;
    }
L_08ACA15C:
    ctx.gpr[31] = (0x08ACA164u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACA164u) goto L_08ACA164;
    return;
L_08ACA164:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACA190;
      }
      goto L_08ACA170;
    }
L_08ACA170:
    ctx.gpr[31] = (0x08ACA178u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACA178:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACA188u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA188u) goto L_08ACA188;
    return;
L_08ACA188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA1A8;
      }
      goto L_08ACA190;
    }
L_08ACA190:
    ctx.gpr[31] = (0x08ACA198u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACA198:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACA1A8u);
    ctx.gpr[6] = (0u | 6000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA1A8u) goto L_08ACA1A8;
    return;
L_08ACA1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACA1C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x08ACA1C0u) goto L_08ACA1C0;
    return;
L_08ACA1C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7588)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACA1E0;
      }
      goto L_08ACA1D4;
    }
L_08ACA1D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    goto L_08ACA1E0;
L_08ACA1E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACA1E8;
    }
L_08ACA1E8:
    ctx.gpr[31] = (0x08ACA1F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACA1F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA328;
      }
      goto L_08ACA1F8;
    }
L_08ACA1F8:
    ctx.gpr[31] = (0x08ACA200u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACA200:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ACA218u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x08ACA218u) goto L_08ACA218;
    return;
L_08ACA218:
    ctx.gpr[31] = (0x08ACA220u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACA220:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1716), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACA234;
      }
      goto L_08ACA228;
    }
L_08ACA228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1716)));
    ctx.gpr[31] = (0x08ACA234u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1716));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08ACA234u) goto L_08ACA234;
    return;
L_08ACA234:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACA244u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1736), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA244u) goto L_08ACA244;
    return;
L_08ACA244:
    ctx.gpr[31] = (0x08ACA24Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACA24Cu) goto L_08ACA24C;
    return;
L_08ACA24C:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA318;
      }
      goto L_08ACA264;
    }
L_08ACA264:
    ctx.gpr[31] = (0x08ACA26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACA26Cu) goto L_08ACA26C;
    return;
L_08ACA26C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA330;
      }
      goto L_08ACA27C;
    }
L_08ACA27C:
    ctx.gpr[31] = (0x08ACA284u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA284u) goto L_08ACA284;
    return;
L_08ACA284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACA2B4;
      }
      goto L_08ACA294;
    }
L_08ACA294:
    ctx.gpr[31] = (0x08ACA29Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACA29Cu) goto L_08ACA29C;
    return;
L_08ACA29C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA2E8;
      }
      goto L_08ACA2B4;
    }
L_08ACA2B4:
    ctx.gpr[31] = (0x08ACA2BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACA2BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACA2C8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 716u, 0x088E76D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA2C8u) goto L_08ACA2C8;
    return;
L_08ACA2C8:
    ctx.gpr[4] = (0u | 500u);
    ctx.gpr[31] = (0x08ACA2D4u);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 951u, 0x08AC7830u>(ctx, &aot_mem) && ctx.pc == 0x08ACA2D4u) goto L_08ACA2D4;
    return;
L_08ACA2D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACA2E0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 613u, 0x0890A5BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACA2E0u) goto L_08ACA2E0;
    return;
L_08ACA2E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA304;
      }
      goto L_08ACA2E8;
    }
L_08ACA2E8:
    ctx.gpr[31] = (0x08ACA2F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACA2F0:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08ACA304u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 751u, 0x0890AED8u>(ctx, &aot_mem) && ctx.pc == 0x08ACA304u) goto L_08ACA304;
    return;
L_08ACA304:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACA310u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem) && ctx.pc == 0x08ACA310u) goto L_08ACA310;
    return;
L_08ACA310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA330;
      }
      goto L_08ACA318;
    }
L_08ACA318:
    ctx.gpr[31] = (0x08ACA320u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08ACA320u) goto L_08ACA320;
    return;
L_08ACA320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA330;
      }
      goto L_08ACA328;
    }
L_08ACA328:
    ctx.gpr[31] = (0x08ACA330u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08ACA330u) goto L_08ACA330;
    return;
L_08ACA330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACA338;
    }
L_08ACA338:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(2096));
    ctx.gpr[31] = (0x08ACA348u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACA348u) goto L_08ACA348;
    return;
L_08ACA348:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACA358u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08ACA358u) goto L_08ACA358;
    return;
L_08ACA358:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08ACA364u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08ACA364u) goto L_08ACA364;
    return;
L_08ACA364:
    ctx.gpr[31] = (0x08ACA36Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACA36C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA3B8;
      }
      goto L_08ACA374;
    }
L_08ACA374:
    ctx.gpr[31] = (0x08ACA37Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACA37C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ACA394u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x08ACA394u) goto L_08ACA394;
    return;
L_08ACA394:
    ctx.gpr[31] = (0x08ACA39Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACA39C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1716), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACA3B0;
      }
      goto L_08ACA3A4;
    }
L_08ACA3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1716)));
    ctx.gpr[31] = (0x08ACA3B0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1716));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08ACA3B0u) goto L_08ACA3B0;
    return;
L_08ACA3B0:
    ctx.gpr[31] = (0x08ACA3B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA3B8u) goto L_08ACA3B8;
    return;
L_08ACA3B8:
    ctx.gpr[31] = (0x08ACA3C0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACA3C0u) goto L_08ACA3C0;
    return;
L_08ACA3C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2112)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA404;
      }
      goto L_08ACA3E0;
    }
L_08ACA3E0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08ACA3ECu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2096));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 914u, 0x08AC75B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACA3ECu) goto L_08ACA3EC;
    return;
L_08ACA3EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2112)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACA3FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 686u, 0x0890AA84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA3FCu) goto L_08ACA3FC;
    return;
L_08ACA3FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA528;
      }
      goto L_08ACA404;
    }
L_08ACA404:
    ctx.gpr[31] = (0x08ACA40Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACA40C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA434;
      }
      goto L_08ACA414;
    }
L_08ACA414:
    ctx.gpr[31] = (0x08ACA41Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACA41C:
    ctx.gpr[31] = (0x08ACA424u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA424u) goto L_08ACA424;
    return;
L_08ACA424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACA4E0;
      }
      goto L_08ACA434;
    }
L_08ACA434:
    ctx.gpr[31] = (0x08ACA43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACA43Cu) goto L_08ACA43C;
    return;
L_08ACA43C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA528;
      }
      goto L_08ACA44C;
    }
L_08ACA44C:
    ctx.gpr[31] = (0x08ACA454u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 31u, 0x0891826Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA454u) goto L_08ACA454;
    return;
L_08ACA454:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08ACA464u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 951u, 0x08AC7830u>(ctx, &aot_mem) && ctx.pc == 0x08ACA464u) goto L_08ACA464;
    return;
L_08ACA464:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(500));
    ctx.gpr[31] = (0x08ACA470u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACA470u) goto L_08ACA470;
    return;
L_08ACA470:
    ctx.gpr[4] = (16u << 16u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (128u << 16u);
      if (branch_taken) {
          goto L_08ACA4A4;
      }
      goto L_08ACA47C;
    }
L_08ACA47C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACA494;
      }
      goto L_08ACA484;
    }
L_08ACA484:
    ctx.gpr[31] = (0x08ACA48Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA48Cu) goto L_08ACA48C;
    return;
L_08ACA48C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA4A4;
      }
      goto L_08ACA494;
    }
L_08ACA494:
    ctx.gpr[31] = (0x08ACA49Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA49Cu) goto L_08ACA49C;
    return;
L_08ACA49C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA4D8;
      }
      goto L_08ACA4A4;
    }
L_08ACA4A4:
    ctx.gpr[31] = (0x08ACA4ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA4ACu) goto L_08ACA4AC;
    return;
L_08ACA4AC:
    ctx.gpr[31] = (0x08ACA4B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 939u, 0x08AC7764u>(ctx, &aot_mem) && ctx.pc == 0x08ACA4B4u) goto L_08ACA4B4;
    return;
L_08ACA4B4:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACA4D8;
      }
      goto L_08ACA4C0;
    }
L_08ACA4C0:
    ctx.gpr[31] = (0x08ACA4C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA4C8u) goto L_08ACA4C8;
    return;
L_08ACA4C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08ACA4D8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08ACA4D8u) goto L_08ACA4D8;
    return;
L_08ACA4D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA528;
      }
      goto L_08ACA4E0;
    }
L_08ACA4E0:
    ctx.gpr[31] = (0x08ACA4E8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACA4E8u) goto L_08ACA4E8;
    return;
L_08ACA4E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2112)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA520;
      }
      goto L_08ACA4FC;
    }
L_08ACA4FC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[31] = (0x08ACA508u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2096));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 914u, 0x08AC75B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACA508u) goto L_08ACA508;
    return;
L_08ACA508:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2112)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACA518u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 686u, 0x0890AA84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA518u) goto L_08ACA518;
    return;
L_08ACA518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA528;
      }
      goto L_08ACA520;
    }
L_08ACA520:
    ctx.gpr[31] = (0x08ACA528u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA528u) goto L_08ACA528;
    return;
L_08ACA528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACA530;
    }
L_08ACA530:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x08ACA540u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACA540u) goto L_08ACA540;
    return;
L_08ACA540:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACA550u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08ACA550u) goto L_08ACA550;
    return;
L_08ACA550:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08ACA55Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08ACA55Cu) goto L_08ACA55C;
    return;
L_08ACA55C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACA56Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08ACA56Cu) goto L_08ACA56C;
    return;
L_08ACA56C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACA60C;
      }
      goto L_08ACA578;
    }
L_08ACA578:
    ctx.gpr[31] = (0x08ACA580u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA580u) goto L_08ACA580;
    return;
L_08ACA580:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA60C;
      }
      goto L_08ACA588;
    }
L_08ACA588:
    ctx.gpr[31] = (0x08ACA590u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA590u) goto L_08ACA590;
    return;
L_08ACA590:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x08ACA59Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 450u, 0x08B0DD44u>(ctx, &aot_mem) && ctx.pc == 0x08ACA59Cu) goto L_08ACA59C;
    return;
L_08ACA59C:
    ctx.gpr[31] = (0x08ACA5A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA5A4u) goto L_08ACA5A4;
    return;
L_08ACA5A4:
    ctx.gpr[31] = (0x08ACA5ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 488u, 0x08B4214Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA5ACu) goto L_08ACA5AC;
    return;
L_08ACA5AC:
    ctx.gpr[31] = (0x08ACA5B4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 917u, 0x08AC75F8u>(ctx, &aot_mem) && ctx.pc == 0x08ACA5B4u) goto L_08ACA5B4;
    return;
L_08ACA5B4:
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA604;
      }
      goto L_08ACA5CC;
    }
L_08ACA5CC:
    ctx.gpr[31] = (0x08ACA5D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA5D4u) goto L_08ACA5D4;
    return;
L_08ACA5D4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08ACA5E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 963u, 0x08AC7968u>(ctx, &aot_mem) && ctx.pc == 0x08ACA5E0u) goto L_08ACA5E0;
    return;
L_08ACA5E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACA5ECu);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1068u, 0x08AC7E98u>(ctx, &aot_mem) && ctx.pc == 0x08ACA5ECu) goto L_08ACA5EC;
    return;
L_08ACA5EC:
    ctx.gpr[31] = (0x08ACA5F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA5F4u) goto L_08ACA5F4;
    return;
L_08ACA5F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08ACA604u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08ACA604u) goto L_08ACA604;
    return;
L_08ACA604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACA60C;
    }
L_08ACA60C:
    ctx.gpr[31] = (0x08ACA614u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACA614u) goto L_08ACA614;
    return;
L_08ACA614:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA7B0;
      }
      goto L_08ACA62C;
    }
L_08ACA62C:
    ctx.gpr[31] = (0x08ACA634u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA634u) goto L_08ACA634;
    return;
L_08ACA634:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA794;
      }
      goto L_08ACA63C;
    }
L_08ACA63C:
    ctx.gpr[5] = (17761u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACA64Cu);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACA64Cu) goto L_08ACA64C;
    return;
L_08ACA64C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[31] = (0x08ACA658u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 914u, 0x08AC75B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACA658u) goto L_08ACA658;
    return;
L_08ACA658:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (16840u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08ACA690u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem) && ctx.pc == 0x08ACA690u) goto L_08ACA690;
    return;
L_08ACA690:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(496))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA744;
      }
      goto L_08ACA6A4;
    }
L_08ACA6A4:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x08ACA6C0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACA6C0u) goto L_08ACA6C0;
    return;
L_08ACA6C0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACA6CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACA6CCu) goto L_08ACA6CC;
    return;
L_08ACA6CC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08ACA6DCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08ACA6DCu) goto L_08ACA6DC;
    return;
L_08ACA6DC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACA6E8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08ACA6E8u) goto L_08ACA6E8;
    return;
L_08ACA6E8:
    ctx.gpr[31] = (0x08ACA6F0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 917u, 0x08AC75F8u>(ctx, &aot_mem) && ctx.pc == 0x08ACA6F0u) goto L_08ACA6F0;
    return;
L_08ACA6F0:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA728;
      }
      goto L_08ACA700;
    }
L_08ACA700:
    ctx.gpr[31] = (0x08ACA708u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACA708:
    ctx.gpr[31] = (0x08ACA710u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA710u) goto L_08ACA710;
    return;
L_08ACA710:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08ACA728;
      }
      goto L_08ACA718;
    }
L_08ACA718:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACA724u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 917u, 0x08AC75F8u>(ctx, &aot_mem) && ctx.pc == 0x08ACA724u) goto L_08ACA724;
    return;
L_08ACA724:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08ACA728;
L_08ACA728:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(496))))));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA6A4;
      }
      goto L_08ACA744;
    }
L_08ACA744:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACA750u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08ACA750u) goto L_08ACA750;
    return;
L_08ACA750:
    ctx.gpr[31] = (0x08ACA758u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA758u) goto L_08ACA758;
    return;
L_08ACA758:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA78C;
      }
      goto L_08ACA760;
    }
L_08ACA760:
    ctx.gpr[31] = (0x08ACA768u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA768u) goto L_08ACA768;
    return;
L_08ACA768:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08ACA774u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 963u, 0x08AC7968u>(ctx, &aot_mem) && ctx.pc == 0x08ACA774u) goto L_08ACA774;
    return;
L_08ACA774:
    ctx.gpr[31] = (0x08ACA77Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA77Cu) goto L_08ACA77C;
    return;
L_08ACA77C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08ACA78Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08ACA78Cu) goto L_08ACA78C;
    return;
L_08ACA78C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA7A8;
      }
      goto L_08ACA794;
    }
L_08ACA794:
    ctx.gpr[31] = (0x08ACA79Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA79Cu) goto L_08ACA79C;
    return;
L_08ACA79C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08ACA7A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 963u, 0x08AC7968u>(ctx, &aot_mem) && ctx.pc == 0x08ACA7A8u) goto L_08ACA7A8;
    return;
L_08ACA7A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACA7B0;
    }
L_08ACA7B0:
    ctx.gpr[31] = (0x08ACA7B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACA7B8u) goto L_08ACA7B8;
    return;
L_08ACA7B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1756)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA7FC;
      }
      goto L_08ACA7C8;
    }
L_08ACA7C8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1756), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA7F4;
      }
      goto L_08ACA7D8;
    }
L_08ACA7D8:
    ctx.gpr[31] = (0x08ACA7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08ACA7E0u) goto L_08ACA7E0;
    return;
L_08ACA7E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACA7F4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem) && ctx.pc == 0x08ACA7F4u) goto L_08ACA7F4;
    return;
L_08ACA7F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 441u, 0x08ACD47Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACA7FC;
    }
L_08ACA7FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA814;
      }
      goto L_08ACA80C;
    }
L_08ACA80C:
    ctx.gpr[31] = (0x08ACA814u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem) && ctx.pc == 0x08ACA814u) goto L_08ACA814;
    return;
L_08ACA814:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x08ACA824u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACA824u) goto L_08ACA824;
    return;
L_08ACA824:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACA834u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08ACA834u) goto L_08ACA834;
    return;
L_08ACA834:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08ACA840u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08ACA840u) goto L_08ACA840;
    return;
L_08ACA840:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACA850u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACA850u) goto L_08ACA850;
    return;
L_08ACA850:
    ctx.gpr[4] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACA938;
      }
      goto L_08ACA85C;
    }
L_08ACA85C:
    ctx.gpr[31] = (0x08ACA864u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 977u, 0x08AC7A04u>(ctx, &aot_mem) && ctx.pc == 0x08ACA864u) goto L_08ACA864;
    return;
L_08ACA864:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACA8AC;
      }
      goto L_08ACA870;
    }
L_08ACA870:
    ctx.gpr[31] = (0x08ACA878u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 917u, 0x08AC75F8u>(ctx, &aot_mem) && ctx.pc == 0x08ACA878u) goto L_08ACA878;
    return;
L_08ACA878:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA8AC;
      }
      goto L_08ACA890;
    }
L_08ACA890:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACA89Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA89Cu) goto L_08ACA89C;
    return;
L_08ACA89C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08ACA8AC;
L_08ACA8AC:
    ctx.gpr[4] = (15948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA8D8;
      }
      goto L_08ACA8CC;
    }
L_08ACA8CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA914;
      }
      goto L_08ACA8D8;
    }
L_08ACA8D8:
    ctx.gpr[31] = (0x08ACA8E0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 917u, 0x08AC75F8u>(ctx, &aot_mem) && ctx.pc == 0x08ACA8E0u) goto L_08ACA8E0;
    return;
L_08ACA8E0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08ACA8ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80AC;
L_08ACA8EC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08ACA8F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80AC;
L_08ACA8F8:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACAB60;
      }
      goto L_08ACA90C;
    }
L_08ACA90C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAFD4;
      }
      goto L_08ACA914;
    }
L_08ACA914:
    ctx.gpr[31] = (0x08ACA91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08ACA91Cu) goto L_08ACA91C;
    return;
L_08ACA91C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACA930u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem) && ctx.pc == 0x08ACA930u) goto L_08ACA930;
    return;
L_08ACA930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 441u, 0x08ACD47Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACA938;
    }
L_08ACA938:
    ctx.gpr[31] = (0x08ACA940u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACA940u) goto L_08ACA940;
    return;
L_08ACA940:
    ctx.gpr[4] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACA8D8;
      }
      goto L_08ACA94C;
    }
L_08ACA94C:
    ctx.gpr[31] = (0x08ACA954u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 977u, 0x08AC7A04u>(ctx, &aot_mem) && ctx.pc == 0x08ACA954u) goto L_08ACA954;
    return;
L_08ACA954:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACA99C;
      }
      goto L_08ACA960;
    }
L_08ACA960:
    ctx.gpr[31] = (0x08ACA968u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 917u, 0x08AC75F8u>(ctx, &aot_mem) && ctx.pc == 0x08ACA968u) goto L_08ACA968;
    return;
L_08ACA968:
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA99C;
      }
      goto L_08ACA980;
    }
L_08ACA980:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACA98Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACA98Cu) goto L_08ACA98C;
    return;
L_08ACA98C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08ACA99C;
L_08ACA99C:
    ctx.gpr[31] = (0x08ACA9A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08ACA9A4u) goto L_08ACA9A4;
    return;
L_08ACA9A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[31] = (0x08ACA9B0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08AC8104;
L_08ACA9B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACA9BCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 991u, 0x08A03C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA9BCu) goto L_08ACA9BC;
    return;
L_08ACA9BC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAB58;
      }
      goto L_08ACA9C8;
    }
L_08ACA9C8:
    ctx.gpr[31] = (0x08ACA9D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 957u, 0x08AC7938u>(ctx, &aot_mem) && ctx.pc == 0x08ACA9D0u) goto L_08ACA9D0;
    return;
L_08ACA9D0:
    ctx.gpr[31] = (0x08ACA9D8u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 930u, 0x08AC76E4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA9D8u) goto L_08ACA9D8;
    return;
L_08ACA9D8:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACAA50;
      }
      goto L_08ACAA04;
    }
L_08ACAA04:
    ctx.gpr[31] = (0x08ACAA0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA0Cu) goto L_08ACAA0C;
    return;
L_08ACAA0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAA2C;
      }
      goto L_08ACAA14;
    }
L_08ACAA14:
    ctx.gpr[31] = (0x08ACAA1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA1Cu) goto L_08ACAA1C;
    return;
L_08ACAA1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAA74;
      }
      goto L_08ACAA24;
    }
L_08ACAA24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAA8C;
      }
      goto L_08ACAA2C;
    }
L_08ACAA2C:
    ctx.gpr[31] = (0x08ACAA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA34u) goto L_08ACAA34;
    return;
L_08ACAA34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAA48u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA48u) goto L_08ACAA48;
    return;
L_08ACAA48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 441u, 0x08ACD47Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACAA50;
    }
L_08ACAA50:
    ctx.gpr[31] = (0x08ACAA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA58u) goto L_08ACAA58;
    return;
L_08ACAA58:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAA6Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA6Cu) goto L_08ACAA6C;
    return;
L_08ACAA6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 441u, 0x08ACD47Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACAA74;
    }
L_08ACAA74:
    ctx.gpr[31] = (0x08ACAA7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA7Cu) goto L_08ACAA7C;
    return;
L_08ACAA7C:
    ctx.gpr[31] = (0x08ACAA84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAA84u) goto L_08ACAA84;
    return;
L_08ACAA84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAA2C;
      }
      goto L_08ACAA8C;
    }
L_08ACAA8C:
    ctx.gpr[31] = (0x08ACAA94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA94u) goto L_08ACAA94;
    return;
L_08ACAA94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAABC;
      }
      goto L_08ACAA9C;
    }
L_08ACAA9C:
    ctx.gpr[31] = (0x08ACAAA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08ACAAA4u) goto L_08ACAAA4;
    return;
L_08ACAAA4:
    ctx.gpr[31] = (0x08ACAAACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACAAACu) goto L_08ACAAAC;
    return;
L_08ACAAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACAA2C;
      }
      goto L_08ACAABC;
    }
L_08ACAABC:
    ctx.gpr[31] = (0x08ACAAC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08ACAAC4u) goto L_08ACAAC4;
    return;
L_08ACAAC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAAEC;
      }
      goto L_08ACAACC;
    }
L_08ACAACC:
    ctx.gpr[31] = (0x08ACAAD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08ACAAD4u) goto L_08ACAAD4;
    return;
L_08ACAAD4:
    ctx.gpr[31] = (0x08ACAADCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACAADCu) goto L_08ACAADC;
    return;
L_08ACAADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACAA2C;
      }
      goto L_08ACAAEC;
    }
L_08ACAAEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAB34;
      }
      goto L_08ACAAFC;
    }
L_08ACAAFC:
    ctx.gpr[31] = (0x08ACAB04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 941u, 0x08AC7794u>(ctx, &aot_mem) && ctx.pc == 0x08ACAB04u) goto L_08ACAB04;
    return;
L_08ACAB04:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACAB58;
      }
      goto L_08ACAB10;
    }
L_08ACAB10:
    ctx.gpr[31] = (0x08ACAB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08ACAB18u) goto L_08ACAB18;
    return;
L_08ACAB18:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAB2Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem) && ctx.pc == 0x08ACAB2Cu) goto L_08ACAB2C;
    return;
L_08ACAB2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 441u, 0x08ACD47Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACAB34;
    }
L_08ACAB34:
    ctx.gpr[31] = (0x08ACAB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08ACAB3Cu) goto L_08ACAB3C;
    return;
L_08ACAB3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAB50u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem) && ctx.pc == 0x08ACAB50u) goto L_08ACAB50;
    return;
L_08ACAB50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 441u, 0x08ACD47Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACAB58;
    }
L_08ACAB58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA8D8;
      }
      goto L_08ACAB60;
    }
L_08ACAB60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACACAC;
      }
      goto L_08ACAB70;
    }
L_08ACAB70:
    ctx.gpr[31] = (0x08ACAB78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80D4;
L_08ACAB78:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.fpr[20] = ctx.fpr[0] - ctx.fpr[20];
    ctx.gpr[31] = (0x08ACAB88u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 908u, 0x08AC74F4u>(ctx, &aot_mem) && ctx.pc == 0x08ACAB88u) goto L_08ACAB88;
    return;
L_08ACAB88:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACAC04;
      }
      goto L_08ACABA0;
    }
L_08ACABA0:
    ctx.gpr[31] = (0x08ACABA8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 909u, 0x08AC7518u>(ctx, &aot_mem) && ctx.pc == 0x08ACABA8u) goto L_08ACABA8;
    return;
L_08ACABA8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACABE0;
      }
      goto L_08ACABC0;
    }
L_08ACABC0:
    ctx.gpr[31] = (0x08ACABC8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 910u, 0x08AC753Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACABC8u) goto L_08ACABC8;
    return;
L_08ACABC8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08ACABD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80D4;
L_08ACABD4:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACABFC;
      }
      goto L_08ACABE0;
    }
L_08ACABE0:
    ctx.gpr[31] = (0x08ACABE8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 911u, 0x08AC7564u>(ctx, &aot_mem) && ctx.pc == 0x08ACABE8u) goto L_08ACABE8;
    return;
L_08ACABE8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08ACABF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80D4;
L_08ACABF4:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACABFC;
L_08ACABFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAC74;
      }
      goto L_08ACAC04;
    }
L_08ACAC04:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACAC74;
      }
      goto L_08ACAC18;
    }
L_08ACAC18:
    ctx.gpr[31] = (0x08ACAC20u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 909u, 0x08AC7518u>(ctx, &aot_mem) && ctx.pc == 0x08ACAC20u) goto L_08ACAC20;
    return;
L_08ACAC20:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACAC58;
      }
      goto L_08ACAC38;
    }
L_08ACAC38:
    ctx.gpr[31] = (0x08ACAC40u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 910u, 0x08AC753Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAC40u) goto L_08ACAC40;
    return;
L_08ACAC40:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08ACAC4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80D4;
L_08ACAC4C:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACAC74;
      }
      goto L_08ACAC58;
    }
L_08ACAC58:
    ctx.gpr[31] = (0x08ACAC60u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 911u, 0x08AC7564u>(ctx, &aot_mem) && ctx.pc == 0x08ACAC60u) goto L_08ACAC60;
    return;
L_08ACAC60:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08ACAC6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80D4;
L_08ACAC6C:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACAC74;
L_08ACAC74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[31] = (0x08ACAC80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80DC;
L_08ACAC80:
    ctx.gpr[5] = (16480u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAC90u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AC80E4;
L_08ACAC90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    goto L_08ACACAC;
L_08ACACAC:
    ctx.gpr[31] = (0x08ACACB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80D4;
L_08ACACB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[31] = (0x08ACACC0u);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 912u, 0x08AC7590u>(ctx, &aot_mem) && ctx.pc == 0x08ACACC0u) goto L_08ACACC0;
    return;
L_08ACACC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACAD44;
      }
      goto L_08ACACD4;
    }
L_08ACACD4:
    ctx.gpr[31] = (0x08ACACDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80D4;
L_08ACACDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACACF8u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 912u, 0x08AC7590u>(ctx, &aot_mem) && ctx.pc == 0x08ACACF8u) goto L_08ACACF8;
    return;
L_08ACACF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACAD44;
      }
      goto L_08ACAD0C;
    }
L_08ACAD0C:
    ctx.gpr[31] = (0x08ACAD14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80D4;
L_08ACAD14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACAD30u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 912u, 0x08AC7590u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD30u) goto L_08ACAD30;
    return;
L_08ACAD30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACAFC0;
      }
      goto L_08ACAD44;
    }
L_08ACAD44:
    ctx.gpr[31] = (0x08ACAD4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80D4;
L_08ACAD4C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAD58u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC80DC;
L_08ACAD58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 128u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAD80u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 979u, 0x08AC7A14u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD80u) goto L_08ACAD80;
    return;
L_08ACAD80:
    ctx.gpr[31] = (0x08ACAD88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 362u, 0x0890D7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD88u) goto L_08ACAD88;
    return;
L_08ACAD88:
    ctx.gpr[31] = (0x08ACAD90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD90u) goto L_08ACAD90;
    return;
L_08ACAD90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACADA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 774u, 0x08A03040u>(ctx, &aot_mem) && ctx.pc == 0x08ACADA0u) goto L_08ACADA0;
    return;
L_08ACADA0:
    ctx.gpr[31] = (0x08ACADA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x08ACADA8u) goto L_08ACADA8;
    return;
L_08ACADA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACADB8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 830u, 0x08A032E8u>(ctx, &aot_mem) && ctx.pc == 0x08ACADB8u) goto L_08ACADB8;
    return;
L_08ACADB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAFA8;
      }
      goto L_08ACADC0;
    }
L_08ACADC0:
    ctx.gpr[31] = (0x08ACADC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACADC8u) goto L_08ACADC8;
    return;
L_08ACADC8:
    ctx.gpr[4] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACAE34;
      }
      goto L_08ACADD4;
    }
L_08ACADD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAE0C;
      }
      goto L_08ACADE4;
    }
L_08ACADE4:
    ctx.gpr[31] = (0x08ACADECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACADECu) goto L_08ACADEC;
    return;
L_08ACADEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ACAE04u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE04u) goto L_08ACAE04;
    return;
L_08ACAE04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB044;
      }
      goto L_08ACAE0C;
    }
L_08ACAE0C:
    ctx.gpr[31] = (0x08ACAE14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE14u) goto L_08ACAE14;
    return;
L_08ACAE14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ACAE2Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE2Cu) goto L_08ACAE2C;
    return;
L_08ACAE2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB044;
      }
      goto L_08ACAE34;
    }
L_08ACAE34:
    ctx.gpr[31] = (0x08ACAE3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE3Cu) goto L_08ACAE3C;
    return;
L_08ACAE3C:
    ctx.gpr[4] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACAE70;
      }
      goto L_08ACAE48;
    }
L_08ACAE48:
    ctx.gpr[31] = (0x08ACAE50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE50u) goto L_08ACAE50;
    return;
L_08ACAE50:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08ACAE68u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE68u) goto L_08ACAE68;
    return;
L_08ACAE68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB044;
      }
      goto L_08ACAE70;
    }
L_08ACAE70:
    ctx.gpr[31] = (0x08ACAE78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE78u) goto L_08ACAE78;
    return;
L_08ACAE78:
    ctx.gpr[4] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACAEA0;
      }
      goto L_08ACAE84;
    }
L_08ACAE84:
    ctx.gpr[31] = (0x08ACAE8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE8Cu) goto L_08ACAE8C;
    return;
L_08ACAE8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAE98u);
    ctx.gpr[5] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACAE98u) goto L_08ACAE98;
    return;
L_08ACAE98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB044;
      }
      goto L_08ACAEA0;
    }
L_08ACAEA0:
    ctx.gpr[31] = (0x08ACAEA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACAEA8u) goto L_08ACAEA8;
    return;
L_08ACAEA8:
    ctx.gpr[4] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACAF50;
      }
      goto L_08ACAEB4;
    }
L_08ACAEB4:
    ctx.gpr[31] = (0x08ACAEBCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACAEBCu) goto L_08ACAEBC;
    return;
L_08ACAEBC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAECCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACAECCu) goto L_08ACAECC;
    return;
L_08ACAECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08ACAEE8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACAEE8u) goto L_08ACAEE8;
    return;
L_08ACAEE8:
    ctx.gpr[31] = (0x08ACAEF0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACAEF0u) goto L_08ACAEF0;
    return;
L_08ACAEF0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACAF08;
      }
      goto L_08ACAEFC;
    }
L_08ACAEFC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACAF08;
L_08ACAF08:
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08ACAF30;
      }
      goto L_08ACAF24;
    }
L_08ACAF24:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACAF48;
      }
      goto L_08ACAF30;
    }
L_08ACAF30:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08ACAF48;
L_08ACAF48:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1756), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACB044;
      }
      goto L_08ACAF50;
    }
L_08ACAF50:
    ctx.gpr[31] = (0x08ACAF58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACAF58u) goto L_08ACAF58;
    return;
L_08ACAF58:
    ctx.gpr[4] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACAF7C;
      }
      goto L_08ACAF64;
    }
L_08ACAF64:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAF74u);
    ctx.gpr[5] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACAF74u) goto L_08ACAF74;
    return;
L_08ACAF74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB044;
      }
      goto L_08ACAF7C;
    }
L_08ACAF7C:
    ctx.gpr[31] = (0x08ACAF84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACAF84u) goto L_08ACAF84;
    return;
L_08ACAF84:
    ctx.gpr[4] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACB044;
      }
      goto L_08ACAF90;
    }
L_08ACAF90:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAFA0u);
    ctx.gpr[5] = (0u | 54u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACAFA0u) goto L_08ACAFA0;
    return;
L_08ACAFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB044;
      }
      goto L_08ACAFA8;
    }
L_08ACAFA8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAFB8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACAFB8u) goto L_08ACAFB8;
    return;
L_08ACAFB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1756), 0u);
      if (branch_taken) {
          goto L_08ACB044;
      }
      goto L_08ACAFC0;
    }
L_08ACAFC0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAFCCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACAFCCu) goto L_08ACAFCC;
    return;
L_08ACAFCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB044;
      }
      goto L_08ACAFD4;
    }
L_08ACAFD4:
    ctx.gpr[31] = (0x08ACAFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACAFDCu) goto L_08ACAFDC;
    return;
L_08ACAFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB004;
      }
      goto L_08ACAFEC;
    }
L_08ACAFEC:
    ctx.gpr[31] = (0x08ACAFF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACAFF4u) goto L_08ACAFF4;
    return;
L_08ACAFF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACB044;
      }
      goto L_08ACB004;
    }
L_08ACB004:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x08ACB010u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 920u, 0x08AC763Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB010u) goto L_08ACB010;
    return;
L_08ACB010:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACB01Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x08ACB01Cu) goto L_08ACB01C;
    return;
L_08ACB01C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACB02Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x08ACB02Cu) goto L_08ACB02C;
    return;
L_08ACB02C:
    ctx.gpr[31] = (0x08ACB034u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80AC;
L_08ACB034:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08ACB044u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 686u, 0x0890AA84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB044u) goto L_08ACB044;
    return;
L_08ACB044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 441u, 0x08ACD47Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACB04C;
    }
L_08ACB04C:
    ctx.gpr[31] = (0x08ACB054u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB054u) goto L_08ACB054;
    return;
L_08ACB054:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB07C;
      }
      goto L_08ACB05C;
    }
L_08ACB05C:
    ctx.gpr[31] = (0x08ACB064u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB064u) goto L_08ACB064;
    return;
L_08ACB064:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08ACB074u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08ACB074u) goto L_08ACB074;
    return;
L_08ACB074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACB07C;
    }
L_08ACB07C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x08ACB090u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACB090u) goto L_08ACB090;
    return;
L_08ACB090:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACB0A0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08ACB0A0u) goto L_08ACB0A0;
    return;
L_08ACB0A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACB0ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08ACB0ACu) goto L_08ACB0AC;
    return;
L_08ACB0AC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACB0BCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 917u, 0x08AC75F8u>(ctx, &aot_mem) && ctx.pc == 0x08ACB0BCu) goto L_08ACB0BC;
    return;
L_08ACB0BC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08ACB0C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80AC;
L_08ACB0C8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08ACB0D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80AC;
L_08ACB0D4:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACB268;
      }
      goto L_08ACB0E8;
    }
L_08ACB0E8:
    ctx.gpr[31] = (0x08ACB0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 929u, 0x08AC76DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACB0F0u) goto L_08ACB0F0;
    return;
L_08ACB0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB118;
      }
      goto L_08ACB100;
    }
L_08ACB100:
    ctx.gpr[31] = (0x08ACB108u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACB108u) goto L_08ACB108;
    return;
L_08ACB108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACB28C;
      }
      goto L_08ACB118;
    }
L_08ACB118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB238;
      }
      goto L_08ACB12C;
    }
L_08ACB12C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACB140u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 913u, 0x08AC759Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB140u) goto L_08ACB140;
    return;
L_08ACB140:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x08ACB14Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 920u, 0x08AC763Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB14Cu) goto L_08ACB14C;
    return;
L_08ACB14C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACB158u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x08ACB158u) goto L_08ACB158;
    return;
L_08ACB158:
    ctx.gpr[31] = (0x08ACB160u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem) && ctx.pc == 0x08ACB160u) goto L_08ACB160;
    return;
L_08ACB160:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB21C;
      }
      goto L_08ACB168;
    }
L_08ACB168:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACB178u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x08ACB178u) goto L_08ACB178;
    return;
L_08ACB178:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACB188u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 358u, 0x089B5A20u>(ctx, &aot_mem) && ctx.pc == 0x08ACB188u) goto L_08ACB188;
    return;
L_08ACB188:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACB194u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem) && ctx.pc == 0x08ACB194u) goto L_08ACB194;
    return;
L_08ACB194:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB21C;
      }
      goto L_08ACB19C;
    }
L_08ACB19C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB1C0;
      }
      goto L_08ACB1A4;
    }
L_08ACB1A4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACB1B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 94u, 0x089105E8u>(ctx, &aot_mem) && ctx.pc == 0x08ACB1B4u) goto L_08ACB1B4;
    return;
L_08ACB1B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x08ACB1C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08ACB1C0u) goto L_08ACB1C0;
    return;
L_08ACB1C0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[31] = (0x08ACB1CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACB1CCu) goto L_08ACB1CC;
    return;
L_08ACB1CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x08ACB1DCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08ACB1DCu) goto L_08ACB1DC;
    return;
L_08ACB1DC:
    ctx.gpr[31] = (0x08ACB1E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 916u, 0x08AC75DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACB1E4u) goto L_08ACB1E4;
    return;
L_08ACB1E4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08ACB1F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80AC;
L_08ACB1F0:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACB21C;
      }
      goto L_08ACB200;
    }
L_08ACB200:
    ctx.gpr[31] = (0x08ACB208u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x08ACB208u) goto L_08ACB208;
    return;
L_08ACB208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08ACB21C;
L_08ACB21C:
    ctx.gpr[31] = (0x08ACB224u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem) && ctx.pc == 0x08ACB224u) goto L_08ACB224;
    return;
L_08ACB224:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB238;
      }
      goto L_08ACB22C;
    }
L_08ACB22C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08ACB238u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 148u, 0x08910890u>(ctx, &aot_mem) && ctx.pc == 0x08ACB238u) goto L_08ACB238;
    return;
L_08ACB238:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACB248u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x08ACB248u) goto L_08ACB248;
    return;
L_08ACB248:
    ctx.gpr[31] = (0x08ACB250u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80AC;
L_08ACB250:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08ACB260u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 686u, 0x0890AA84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB260u) goto L_08ACB260;
    return;
L_08ACB260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB28C;
      }
      goto L_08ACB268;
    }
L_08ACB268:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
    ctx.gpr[31] = (0x08ACB280u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 979u, 0x08AC7A14u>(ctx, &aot_mem) && ctx.pc == 0x08ACB280u) goto L_08ACB280;
    return;
L_08ACB280:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACB28Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB28Cu) goto L_08ACB28C;
    return;
L_08ACB28C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACB294;
    }
L_08ACB294:
    ctx.gpr[31] = (0x08ACB29Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08ACB29Cu) goto L_08ACB29C;
    return;
L_08ACB29C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACB07C;
      }
      goto L_08ACB2A8;
    }
L_08ACB2A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB04C;
      }
      goto L_08ACB2B0;
    }
L_08ACB2B0:
    ctx.gpr[31] = (0x08ACB2B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACB2B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBAC4;
      }
      goto L_08ACB2C0;
    }
L_08ACB2C0:
    ctx.gpr[31] = (0x08ACB2C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACB2C8:
    ctx.gpr[31] = (0x08ACB2D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB2D0u) goto L_08ACB2D0;
    return;
L_08ACB2D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB338;
      }
      goto L_08ACB2D8;
    }
L_08ACB2D8:
    ctx.gpr[31] = (0x08ACB2E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80FC;
L_08ACB2E0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACB338;
      }
      goto L_08ACB2EC;
    }
L_08ACB2EC:
    ctx.gpr[31] = (0x08ACB2F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 978u, 0x08AC7A0Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB2F4u) goto L_08ACB2F4;
    return;
L_08ACB2F4:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACB338;
      }
      goto L_08ACB300;
    }
L_08ACB300:
    ctx.gpr[31] = (0x08ACB308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08ACB308u) goto L_08ACB308;
    return;
L_08ACB308:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2312)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ACB338;
      }
      goto L_08ACB314;
    }
L_08ACB314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB338;
      }
      goto L_08ACB324;
    }
L_08ACB324:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACB330u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACB330u) goto L_08ACB330;
    return;
L_08ACB330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACB338;
    }
L_08ACB338:
    ctx.gpr[31] = (0x08ACB340u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08ACB340u) goto L_08ACB340;
    return;
L_08ACB340:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACB610;
      }
      goto L_08ACB34C;
    }
L_08ACB34C:
    ctx.gpr[31] = (0x08ACB354u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB354u) goto L_08ACB354;
    return;
L_08ACB354:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB610;
      }
      goto L_08ACB35C;
    }
L_08ACB35C:
    ctx.gpr[31] = (0x08ACB364u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACB364u) goto L_08ACB364;
    return;
L_08ACB364:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACB44C;
      }
      goto L_08ACB37C;
    }
L_08ACB37C:
    ctx.gpr[31] = (0x08ACB384u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB384u) goto L_08ACB384;
    return;
L_08ACB384:
    ctx.gpr[31] = (0x08ACB38Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 956u, 0x08AC7930u>(ctx, &aot_mem) && ctx.pc == 0x08ACB38Cu) goto L_08ACB38C;
    return;
L_08ACB38C:
    ctx.gpr[31] = (0x08ACB394u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 917u, 0x08AC75F8u>(ctx, &aot_mem) && ctx.pc == 0x08ACB394u) goto L_08ACB394;
    return;
L_08ACB394:
    ctx.gpr[4] = (14801u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACB44C;
      }
      goto L_08ACB3B0;
    }
L_08ACB3B0:
    ctx.gpr[31] = (0x08ACB3B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACB3B8:
    ctx.gpr[31] = (0x08ACB3C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08ACB3C0u) goto L_08ACB3C0;
    return;
L_08ACB3C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB404;
      }
      goto L_08ACB3C8;
    }
L_08ACB3C8:
    ctx.gpr[31] = (0x08ACB3D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACB3D0:
    ctx.gpr[31] = (0x08ACB3D8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08ACB3D8u) goto L_08ACB3D8;
    return;
L_08ACB3D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB608;
      }
      goto L_08ACB3E0;
    }
L_08ACB3E0:
    ctx.gpr[31] = (0x08ACB3E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACB3E8:
    ctx.gpr[31] = (0x08ACB3F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB3F0u) goto L_08ACB3F0;
    return;
L_08ACB3F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACB3FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 339u, 0x08B012BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACB3FCu) goto L_08ACB3FC;
    return;
L_08ACB3FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB608;
      }
      goto L_08ACB404;
    }
L_08ACB404:
    ctx.gpr[31] = (0x08ACB40Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB40Cu) goto L_08ACB40C;
    return;
L_08ACB40C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08ACB418u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 963u, 0x08AC7968u>(ctx, &aot_mem) && ctx.pc == 0x08ACB418u) goto L_08ACB418;
    return;
L_08ACB418:
    ctx.gpr[31] = (0x08ACB420u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB420u) goto L_08ACB420;
    return;
L_08ACB420:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08ACB42Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 962u, 0x08AC7960u>(ctx, &aot_mem) && ctx.pc == 0x08ACB42Cu) goto L_08ACB42C;
    return;
L_08ACB42C:
    ctx.gpr[31] = (0x08ACB434u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB434u) goto L_08ACB434;
    return;
L_08ACB434:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08ACB444u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08ACB444u) goto L_08ACB444;
    return;
L_08ACB444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB608;
      }
      goto L_08ACB44C;
    }
L_08ACB44C:
    ctx.gpr[31] = (0x08ACB454u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB454u) goto L_08ACB454;
    return;
L_08ACB454:
    ctx.gpr[31] = (0x08ACB45Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 964u, 0x08AC7970u>(ctx, &aot_mem) && ctx.pc == 0x08ACB45Cu) goto L_08ACB45C;
    return;
L_08ACB45C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACB47C;
      }
      goto L_08ACB464;
    }
L_08ACB464:
    ctx.gpr[31] = (0x08ACB46Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB46Cu) goto L_08ACB46C;
    return;
L_08ACB46C:
    ctx.gpr[31] = (0x08ACB474u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 961u, 0x08AC7958u>(ctx, &aot_mem) && ctx.pc == 0x08ACB474u) goto L_08ACB474;
    return;
L_08ACB474:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB498;
      }
      goto L_08ACB47C;
    }
L_08ACB47C:
    ctx.gpr[31] = (0x08ACB484u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB484u) goto L_08ACB484;
    return;
L_08ACB484:
    ctx.gpr[31] = (0x08ACB48Cu);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 961u, 0x08AC7958u>(ctx, &aot_mem) && ctx.pc == 0x08ACB48Cu) goto L_08ACB48C;
    return;
L_08ACB48C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACB608;
      }
      goto L_08ACB498;
    }
L_08ACB498:
    ctx.gpr[31] = (0x08ACB4A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB4A0u) goto L_08ACB4A0;
    return;
L_08ACB4A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(563)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB608;
      }
      goto L_08ACB4AC;
    }
L_08ACB4AC:
    ctx.gpr[31] = (0x08ACB4B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB4B4u) goto L_08ACB4B4;
    return;
L_08ACB4B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACB4C0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 940u, 0x08AC7774u>(ctx, &aot_mem) && ctx.pc == 0x08ACB4C0u) goto L_08ACB4C0;
    return;
L_08ACB4C0:
    ctx.gpr[31] = (0x08ACB4C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 978u, 0x08AC7A0Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB4C8u) goto L_08ACB4C8;
    return;
L_08ACB4C8:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACB590;
      }
      goto L_08ACB4D4;
    }
L_08ACB4D4:
    ctx.gpr[31] = (0x08ACB4DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB4DCu) goto L_08ACB4DC;
    return;
L_08ACB4DC:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08ACB4E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB4E8u) goto L_08ACB4E8;
    return;
L_08ACB4E8:
    ctx.gpr[31] = (0x08ACB4F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 959u, 0x08AC7948u>(ctx, &aot_mem) && ctx.pc == 0x08ACB4F0u) goto L_08ACB4F0;
    return;
L_08ACB4F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2320)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[31] = (0x08ACB56Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 963u, 0x08AC7968u>(ctx, &aot_mem) && ctx.pc == 0x08ACB56Cu) goto L_08ACB56C;
    return;
L_08ACB56C:
    ctx.gpr[31] = (0x08ACB574u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB574u) goto L_08ACB574;
    return;
L_08ACB574:
    ctx.gpr[31] = (0x08ACB57Cu);
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 555u, 0x08B0E454u>(ctx, &aot_mem) && ctx.pc == 0x08ACB57Cu) goto L_08ACB57C;
    return;
L_08ACB57C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACB588u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 962u, 0x08AC7960u>(ctx, &aot_mem) && ctx.pc == 0x08ACB588u) goto L_08ACB588;
    return;
L_08ACB588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB5F4;
      }
      goto L_08ACB590;
    }
L_08ACB590:
    ctx.gpr[31] = (0x08ACB598u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB598u) goto L_08ACB598;
    return;
L_08ACB598:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08ACB5A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB5A4u) goto L_08ACB5A4;
    return;
L_08ACB5A4:
    ctx.gpr[31] = (0x08ACB5ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 959u, 0x08AC7948u>(ctx, &aot_mem) && ctx.pc == 0x08ACB5ACu) goto L_08ACB5AC;
    return;
L_08ACB5AC:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[31] = (0x08ACB5E0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 963u, 0x08AC7968u>(ctx, &aot_mem) && ctx.pc == 0x08ACB5E0u) goto L_08ACB5E0;
    return;
L_08ACB5E0:
    ctx.gpr[31] = (0x08ACB5E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB5E8u) goto L_08ACB5E8;
    return;
L_08ACB5E8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08ACB5F4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 962u, 0x08AC7960u>(ctx, &aot_mem) && ctx.pc == 0x08ACB5F4u) goto L_08ACB5F4;
    return;
L_08ACB5F4:
    ctx.gpr[31] = (0x08ACB5FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB5FCu) goto L_08ACB5FC;
    return;
L_08ACB5FC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08ACB608u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 960u, 0x08AC7950u>(ctx, &aot_mem) && ctx.pc == 0x08ACB608u) goto L_08ACB608;
    return;
L_08ACB608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACB610;
    }
L_08ACB610:
    ctx.gpr[31] = (0x08ACB618u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACB618u) goto L_08ACB618;
    return;
L_08ACB618:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACBAD8;
      }
      goto L_08ACB630;
    }
L_08ACB630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBAD8;
      }
      goto L_08ACB640;
    }
L_08ACB640:
    ctx.gpr[31] = (0x08ACB648u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC80CC;
L_08ACB648:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBAD8;
      }
      goto L_08ACB650;
    }
L_08ACB650:
    ctx.gpr[31] = (0x08ACB658u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB658u) goto L_08ACB658;
    return;
L_08ACB658:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBA88;
      }
      goto L_08ACB660;
    }
L_08ACB660:
    ctx.gpr[5] = (16752u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACB670u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACB670u) goto L_08ACB670;
    return;
L_08ACB670:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x08ACB67Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 914u, 0x08AC75B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACB67Cu) goto L_08ACB67C;
    return;
L_08ACB67C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (16968u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08ACB6B4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem) && ctx.pc == 0x08ACB6B4u) goto L_08ACB6B4;
    return;
L_08ACB6B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(720))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACB7A8;
      }
      goto L_08ACB6C8;
    }
L_08ACB6C8:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(672)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.gpr[31] = (0x08ACB6E4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACB6E4u) goto L_08ACB6E4;
    return;
L_08ACB6E4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACB6F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACB6F0u) goto L_08ACB6F0;
    return;
L_08ACB6F0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08ACB700u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 900u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x08ACB700u) goto L_08ACB700;
    return;
L_08ACB700:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACB70Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 918u, 0x08AC7610u>(ctx, &aot_mem) && ctx.pc == 0x08ACB70Cu) goto L_08ACB70C;
    return;
L_08ACB70C:
    ctx.gpr[31] = (0x08ACB714u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACB714u) goto L_08ACB714;
    return;
L_08ACB714:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACB78C;
      }
      goto L_08ACB724;
    }
L_08ACB724:
    ctx.gpr[31] = (0x08ACB72Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACB72C:
    ctx.gpr[31] = (0x08ACB734u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB734u) goto L_08ACB734;
    return;
L_08ACB734:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACB78C;
      }
      goto L_08ACB73C;
    }
L_08ACB73C:
    ctx.gpr[31] = (0x08ACB744u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 296u, 0x08B01088u>(ctx, &aot_mem) && ctx.pc == 0x08ACB744u) goto L_08ACB744;
    return;
L_08ACB744:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB78C;
      }
      goto L_08ACB74C;
    }
L_08ACB74C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(636)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACB78C;
      }
      goto L_08ACB768;
    }
L_08ACB768:
    ctx.gpr[31] = (0x08ACB770u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 941u, 0x08AC7794u>(ctx, &aot_mem) && ctx.pc == 0x08ACB770u) goto L_08ACB770;
    return;
L_08ACB770:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACB78C;
      }
      goto L_08ACB77C;
    }
L_08ACB77C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACB788u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 915u, 0x08AC75C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACB788u) goto L_08ACB788;
    return;
L_08ACB788:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08ACB78C;
L_08ACB78C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(720))))));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB6C8;
      }
      goto L_08ACB7A8;
    }
L_08ACB7A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACB7B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08ACB7B4u) goto L_08ACB7B4;
    return;
L_08ACB7B4:
    ctx.gpr[31] = (0x08ACB7BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB7BCu) goto L_08ACB7BC;
    return;
L_08ACB7BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB800;
      }
      goto L_08ACB7C4;
    }
L_08ACB7C4:
    ctx.gpr[31] = (0x08ACB7CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB7CCu) goto L_08ACB7CC;
    return;
L_08ACB7CC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08ACB7D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 963u, 0x08AC7968u>(ctx, &aot_mem) && ctx.pc == 0x08ACB7D8u) goto L_08ACB7D8;
    return;
L_08ACB7D8:
    ctx.gpr[31] = (0x08ACB7E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACB7E0u) goto L_08ACB7E0;
    return;
L_08ACB7E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08ACB7F0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08ACB7F0u) goto L_08ACB7F0;
    return;
L_08ACB7F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACBA80;
      }
      goto L_08ACB800;
    }
L_08ACB800:
    ctx.gpr[31] = (0x08ACB808u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem) && ctx.pc == 0x08ACB808u) goto L_08ACB808;
    return;
L_08ACB808:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBA68;
      }
      goto L_08ACB810;
    }
L_08ACB810:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x08ACB81Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACB81Cu) goto L_08ACB81C;
    return;
L_08ACB81C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACB828u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 914u, 0x08AC75B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACB828u) goto L_08ACB828;
    return;
L_08ACB828:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.gpr[31] = (0x08ACB838u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 914u, 0x08AC75B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACB838u) goto L_08ACB838;
    return;
L_08ACB838:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (16800u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08ACB864u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem) && ctx.pc == 0x08ACB864u) goto L_08ACB864;
    return;
L_08ACB864:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08ACBA68;
      }
      goto L_08ACB870;
    }
L_08ACB870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.gpr[31] = (0x08ACB894u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 954u, 0x08AC78A8u>(ctx, &aot_mem) && ctx.pc == 0x08ACB894u) goto L_08ACB894;
    return;
L_08ACB894:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[2] = (16672u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(772));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08ACB8C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 365u, 0x0889A004u>(ctx, &aot_mem) && ctx.pc == 0x08ACB8C8u) goto L_08ACB8C8;
    return;
L_08ACB8C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(772))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBA68;
      }
      goto L_08ACB8D4;
    }
L_08ACB8D4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x08ACB8E8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 526u, 0x08A8EB48u>(ctx, &aot_mem) && ctx.pc == 0x08ACB8E8u) goto L_08ACB8E8;
    return;
L_08ACB8E8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    ctx.gpr[31] = (0x08ACB8F4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 520u, 0x08B4237Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB8F4u) goto L_08ACB8F4;
    return;
L_08ACB8F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACB970;
      }
      goto L_08ACB904;
    }
L_08ACB904:
    ctx.gpr[31] = (0x08ACB90Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 217u, 0x08AECC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB90Cu) goto L_08ACB90C;
    return;
L_08ACB90C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB944;
      }
      goto L_08ACB914;
    }
L_08ACB914:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08ACB920u);
    ctx.gpr[4] = (0u | 1584u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08ACB920u) goto L_08ACB920;
    return;
L_08ACB920:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08ACB93C;
      }
      goto L_08ACB92C;
    }
L_08ACB92C:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACB938u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 581u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACB938u) goto L_08ACB938;
    return;
L_08ACB938:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08ACB93C;
L_08ACB93C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB970;
      }
      goto L_08ACB944;
    }
L_08ACB944:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08ACB950u);
    ctx.gpr[4] = (0u | 1920u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08ACB950u) goto L_08ACB950;
    return;
L_08ACB950:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08ACB970;
      }
      goto L_08ACB95C;
    }
L_08ACB95C:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ACB96Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB96Cu) goto L_08ACB96C;
    return;
L_08ACB96C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08ACB970;
L_08ACB970:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBA68;
      }
      goto L_08ACB978;
    }
L_08ACB978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.gpr[31] = (0x08ACB99Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 955u, 0x08AC78ECu>(ctx, &aot_mem) && ctx.pc == 0x08ACB99Cu) goto L_08ACB99C;
    return;
L_08ACB99C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08ACB9BCu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 913u, 0x08AC759Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB9BCu) goto L_08ACB9BC;
    return;
L_08ACB9BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACB9CCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 899u, 0x08AC745Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB9CCu) goto L_08ACB9CC;
    return;
L_08ACB9CC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACB9D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 923u, 0x08AC7654u>(ctx, &aot_mem) && ctx.pc == 0x08ACB9D8u) goto L_08ACB9D8;
    return;
L_08ACB9D8:
    ctx.gpr[5] = (16479u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 26355u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACB9F4u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 925u, 0x08AC7678u>(ctx, &aot_mem) && ctx.pc == 0x08ACB9F4u) goto L_08ACB9F4;
    return;
L_08ACB9F4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACBA00u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 940u, 0x08AC7774u>(ctx, &aot_mem) && ctx.pc == 0x08ACBA00u) goto L_08ACBA00;
    return;
L_08ACBA00:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACBA0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 966u, 0x08AC7980u>(ctx, &aot_mem) && ctx.pc == 0x08ACBA0Cu) goto L_08ACBA0C;
    return;
L_08ACBA0C:
    ctx.gpr[31] = (0x08ACBA14u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBA14u) goto L_08ACBA14;
    return;
L_08ACBA14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACBA20u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08ACBA20u) goto L_08ACBA20;
    return;
L_08ACBA20:
    ctx.gpr[31] = (0x08ACBA28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBA28u) goto L_08ACBA28;
    return;
L_08ACBA28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBA68;
      }
      goto L_08ACBA30;
    }
L_08ACBA30:
    ctx.gpr[31] = (0x08ACBA38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBA38u) goto L_08ACBA38;
    return;
L_08ACBA38:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08ACBA44u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 963u, 0x08AC7968u>(ctx, &aot_mem) && ctx.pc == 0x08ACBA44u) goto L_08ACBA44;
    return;
L_08ACBA44:
    ctx.gpr[31] = (0x08ACBA4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBA4Cu) goto L_08ACBA4C;
    return;
L_08ACBA4C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08ACBA5Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08ACBA5Cu) goto L_08ACBA5C;
    return;
L_08ACBA5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08ACBA68;
L_08ACBA68:
    ctx.gpr[31] = (0x08ACBA70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBA70u) goto L_08ACBA70;
    return;
L_08ACBA70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBA80;
      }
      goto L_08ACBA78;
    }
L_08ACBA78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACBA80;
    }
L_08ACBA80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBAD8;
      }
      goto L_08ACBA88;
    }
L_08ACBA88:
    ctx.gpr[31] = (0x08ACBA90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBA90u) goto L_08ACBA90;
    return;
L_08ACBA90:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08ACBA9Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 963u, 0x08AC7968u>(ctx, &aot_mem) && ctx.pc == 0x08ACBA9Cu) goto L_08ACBA9C;
    return;
L_08ACBA9C:
    ctx.gpr[31] = (0x08ACBAA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBAA4u) goto L_08ACBAA4;
    return;
L_08ACBAA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08ACBAB4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08ACBAB4u) goto L_08ACBAB4;
    return;
L_08ACBAB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACBAC4;
    }
L_08ACBAC4:
    ctx.gpr[31] = (0x08ACBACCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x08ACBACCu) goto L_08ACBACC;
    return;
L_08ACBACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_08ACBAD8;
L_08ACBAD8:
    ctx.gpr[31] = (0x08ACBAE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7A48u>(ctx, &aot_mem) && ctx.pc == 0x08ACBAE0u) goto L_08ACBAE0;
    return;
L_08ACBAE0:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACBB30;
      }
      goto L_08ACBAEC;
    }
L_08ACBAEC:
    ctx.gpr[31] = (0x08ACBAF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08ACBAF4u) goto L_08ACBAF4;
    return;
L_08ACBAF4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACBB30;
      }
      goto L_08ACBB00;
    }
L_08ACBB00:
    ctx.gpr[31] = (0x08ACBB08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBB08u) goto L_08ACBB08;
    return;
L_08ACBB08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBB30;
      }
      goto L_08ACBB10;
    }
L_08ACBB10:
    ctx.gpr[31] = (0x08ACBB18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBB18u) goto L_08ACBB18;
    return;
L_08ACBB18:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08ACBB28u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08ACBB28u) goto L_08ACBB28;
    return;
L_08ACBB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACBB30;
    }
L_08ACBB30:
    ctx.gpr[31] = (0x08ACBB38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBB38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBB58;
      }
      goto L_08ACBB40;
    }
L_08ACBB40:
    ctx.gpr[31] = (0x08ACBB48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBB48:
    ctx.gpr[31] = (0x08ACBB50u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 973u, 0x08AC79DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACBB50u) goto L_08ACBB50;
    return;
L_08ACBB50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBB90;
      }
      goto L_08ACBB58;
    }
L_08ACBB58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    ctx.gpr[31] = (0x08ACBB6Cu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x08ACBB6Cu) goto L_08ACBB6C;
    return;
L_08ACBB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08ACBB88u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACBB88u) goto L_08ACBB88;
    return;
L_08ACBB88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACBB90;
    }
L_08ACBB90:
    ctx.gpr[31] = (0x08ACBB98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBB98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBC58;
      }
      goto L_08ACBBA0;
    }
L_08ACBBA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACBBBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem) && ctx.pc == 0x08ACBBBCu) goto L_08ACBBBC;
    return;
L_08ACBBBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBBE0;
      }
      goto L_08ACBBC4;
    }
L_08ACBBC4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08ACBBD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 120u, 0x088A0920u>(ctx, &aot_mem) && ctx.pc == 0x08ACBBD8u) goto L_08ACBBD8;
    return;
L_08ACBBD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ACBBF8;
      }
      goto L_08ACBBE0;
    }
L_08ACBBE0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08ACBBF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 693u, 0x0889F400u>(ctx, &aot_mem) && ctx.pc == 0x08ACBBF4u) goto L_08ACBBF4;
    return;
L_08ACBBF4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08ACBBF8;
L_08ACBBF8:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACBC34;
      }
      goto L_08ACBC04;
    }
L_08ACBC04:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACBC58;
      }
      goto L_08ACBC10;
    }
L_08ACBC10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08ACBC2Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACBC2Cu) goto L_08ACBC2C;
    return;
L_08ACBC2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACBC34;
    }
L_08ACBC34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08ACBC50u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACBC50u) goto L_08ACBC50;
    return;
L_08ACBC50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 441u, 0x08ACD47Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACBC58;
    }
L_08ACBC58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08ACBC74u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACBC74u) goto L_08ACBC74;
    return;
L_08ACBC74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACBC7C;
    }
L_08ACBC7C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACBC88u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 501u, 0x08906484u>(ctx, &aot_mem) && ctx.pc == 0x08ACBC88u) goto L_08ACBC88;
    return;
L_08ACBC88:
    ctx.gpr[31] = (0x08ACBC90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08ACBC90u) goto L_08ACBC90;
    return;
L_08ACBC90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD78;
      }
      goto L_08ACBC98;
    }
L_08ACBC98:
    ctx.gpr[31] = (0x08ACBCA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBCA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD58;
      }
      goto L_08ACBCA8;
    }
L_08ACBCA8:
    ctx.gpr[31] = (0x08ACBCB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBCB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[31] = (0x08ACBCBCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBCBCu) goto L_08ACBCBC;
    return;
L_08ACBCBC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACBD58;
      }
      goto L_08ACBCC4;
    }
L_08ACBCC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    ctx.gpr[31] = (0x08ACBCD8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACBCD8u) goto L_08ACBCD8;
    return;
L_08ACBCD8:
    ctx.gpr[31] = (0x08ACBCE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBCE0u) goto L_08ACBCE0;
    return;
L_08ACBCE0:
    ctx.gpr[31] = (0x08ACBCE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 365u, 0x08B41608u>(ctx, &aot_mem) && ctx.pc == 0x08ACBCE8u) goto L_08ACBCE8;
    return;
L_08ACBCE8:
    ctx.gpr[31] = (0x08ACBCF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBCF0u) goto L_08ACBCF0;
    return;
L_08ACBCF0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08ACBCFCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 960u, 0x08AC7950u>(ctx, &aot_mem) && ctx.pc == 0x08ACBCFCu) goto L_08ACBCFC;
    return;
L_08ACBCFC:
    ctx.gpr[31] = (0x08ACBD04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD04u) goto L_08ACBD04;
    return;
L_08ACBD04:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08ACBD10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD10u) goto L_08ACBD10;
    return;
L_08ACBD10:
    ctx.gpr[31] = (0x08ACBD18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 959u, 0x08AC7948u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD18u) goto L_08ACBD18;
    return;
L_08ACBD18:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[31] = (0x08ACBD3Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 963u, 0x08AC7968u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD3Cu) goto L_08ACBD3C;
    return;
L_08ACBD3C:
    ctx.gpr[31] = (0x08ACBD44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD44u) goto L_08ACBD44;
    return;
L_08ACBD44:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACBD50u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 940u, 0x08AC7774u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD50u) goto L_08ACBD50;
    return;
L_08ACBD50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 10u, 0x08ACC078u>(ctx, &aot_mem); return;
      }
      goto L_08ACBD58;
    }
L_08ACBD58:
    ctx.gpr[31] = (0x08ACBD60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD60u) goto L_08ACBD60;
    return;
L_08ACBD60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08ACBD70u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD70u) goto L_08ACBD70;
    return;
L_08ACBD70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACBD78;
    }
L_08ACBD78:
    ctx.gpr[31] = (0x08ACBD80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBD80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBE10;
      }
      goto L_08ACBD88;
    }
L_08ACBD88:
    ctx.gpr[31] = (0x08ACBD90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBD90:
    ctx.gpr[31] = (0x08ACBD98u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD98u) goto L_08ACBD98;
    return;
L_08ACBD98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACBE10;
      }
      goto L_08ACBDA8;
    }
L_08ACBDA8:
    ctx.gpr[31] = (0x08ACBDB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBDB0:
    ctx.gpr[31] = (0x08ACBDB8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACBDB8u) goto L_08ACBDB8;
    return;
L_08ACBDB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACBE10;
      }
      goto L_08ACBDC8;
    }
L_08ACBDC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBE68;
      }
      goto L_08ACBDD4;
    }
L_08ACBDD4:
    ctx.gpr[31] = (0x08ACBDDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBDDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBE68;
      }
      goto L_08ACBDE8;
    }
L_08ACBDE8:
    ctx.gpr[31] = (0x08ACBDF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBDF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACBE68;
      }
      goto L_08ACBE00;
    }
L_08ACBE00:
    ctx.gpr[31] = (0x08ACBE08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08ACBE08u) goto L_08ACBE08;
    return;
L_08ACBE08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBE68;
      }
      goto L_08ACBE10;
    }
L_08ACBE10:
    ctx.gpr[31] = (0x08ACBE18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x08ACBE18u) goto L_08ACBE18;
    return;
L_08ACBE18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08ACBE34u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACBE34u) goto L_08ACBE34;
    return;
L_08ACBE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBE60;
      }
      goto L_08ACBE40;
    }
L_08ACBE40:
    ctx.gpr[31] = (0x08ACBE48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1300)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 936u, 0x08AC7728u>(ctx, &aot_mem) && ctx.pc == 0x08ACBE48u) goto L_08ACBE48;
    return;
L_08ACBE48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBE60;
      }
      goto L_08ACBE50;
    }
L_08ACBE50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACBE60u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08ACBE60u) goto L_08ACBE60;
    return;
L_08ACBE60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 395u, 0x08ACD280u>(ctx, &aot_mem); return;
      }
      goto L_08ACBE68;
    }
L_08ACBE68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACBEB8;
      }
      goto L_08ACBE74;
    }
L_08ACBE74:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[31] = (0x08ACBE80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 939u, 0x08AC7764u>(ctx, &aot_mem) && ctx.pc == 0x08ACBE80u) goto L_08ACBE80;
    return;
L_08ACBE80:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACBEB8;
      }
      goto L_08ACBE8C;
    }
L_08ACBE8C:
    ctx.gpr[31] = (0x08ACBE94u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 965u, 0x08AC7978u>(ctx, &aot_mem) && ctx.pc == 0x08ACBE94u) goto L_08ACBE94;
    return;
L_08ACBE94:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACBEB4;
      }
      goto L_08ACBEA0;
    }
L_08ACBEA0:
    ctx.gpr[31] = (0x08ACBEA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 965u, 0x08AC7978u>(ctx, &aot_mem) && ctx.pc == 0x08ACBEA8u) goto L_08ACBEA8;
    return;
L_08ACBEA8:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACBEB8;
      }
      goto L_08ACBEB4;
    }
L_08ACBEB4:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08ACBEB8;
L_08ACBEB8:
    ctx.gpr[31] = (0x08ACBEC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 978u, 0x08AC7A0Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBEC0u) goto L_08ACBEC0;
    return;
L_08ACBEC0:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACBFC8;
      }
      goto L_08ACBECC;
    }
L_08ACBECC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBFA8;
      }
      goto L_08ACBED4;
    }
L_08ACBED4:
    ctx.gpr[31] = (0x08ACBEDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBEDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBF68;
      }
      goto L_08ACBEE4;
    }
L_08ACBEE4:
    ctx.gpr[31] = (0x08ACBEECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBEEC:
    ctx.gpr[31] = (0x08ACBEF4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 972u, 0x08AC79D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACBEF4u) goto L_08ACBEF4;
    return;
L_08ACBEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACBF68;
      }
      goto L_08ACBF04;
    }
L_08ACBF04:
    ctx.gpr[31] = (0x08ACBF0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBF0C:
    ctx.gpr[31] = (0x08ACBF14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1020u, 0x08AC7C50u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF14u) goto L_08ACBF14;
    return;
L_08ACBF14:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ACBF68;
      }
      goto L_08ACBF1C;
    }
L_08ACBF1C:
    ctx.gpr[31] = (0x08ACBF24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBF24:
    ctx.gpr[31] = (0x08ACBF2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBF2Cu) goto L_08ACBF2C;
    return;
L_08ACBF2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBF50;
      }
      goto L_08ACBF34;
    }
L_08ACBF34:
    ctx.gpr[31] = (0x08ACBF3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBF3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACBF48u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 108u, 0x08A346B4u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF48u) goto L_08ACBF48;
    return;
L_08ACBF48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 9u, 0x08ACC05Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACBF50;
    }
L_08ACBF50:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08ACBF60u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF60u) goto L_08ACBF60;
    return;
L_08ACBF60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 9u, 0x08ACC05Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACBF68;
    }
L_08ACBF68:
    ctx.gpr[31] = (0x08ACBF70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBF70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBF98;
      }
      goto L_08ACBF78;
    }
L_08ACBF78:
    ctx.gpr[31] = (0x08ACBF80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC8054;
L_08ACBF80:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08ACBF90u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF90u) goto L_08ACBF90;
    return;
L_08ACBF90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 9u, 0x08ACC05Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACBF98;
    }
L_08ACBF98:
    ctx.gpr[31] = (0x08ACBFA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACBFA0u) goto L_08ACBFA0;
    return;
L_08ACBFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 9u, 0x08ACC05Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACBFA8;
    }
L_08ACBFA8:
    ctx.gpr[31] = (0x08ACBFB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 980u, 0x08AC7A38u>(ctx, &aot_mem) && ctx.pc == 0x08ACBFB0u) goto L_08ACBFB0;
    return;
L_08ACBFB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 9u, 0x08ACC05Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACBFB8;
    }
L_08ACBFB8:
    ctx.gpr[31] = (0x08ACBFC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 468u, 0x08909C28u>(ctx, &aot_mem) && ctx.pc == 0x08ACBFC0u) goto L_08ACBFC0;
    return;
L_08ACBFC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 9u, 0x08ACC05Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACBFC8;
    }
L_08ACBFC8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 5u, 0x08ACC034u>(ctx, &aot_mem); return;
      }
      goto L_08ACBFD0;
    }
L_08ACBFD0:
    ctx.gpr[31] = (0x08ACBFD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 924u, 0x08AC7670u>(ctx, &aot_mem) && ctx.pc == 0x08ACBFD8u) goto L_08ACBFD8;
    return;
L_08ACBFD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBFE4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 921u, 0x08AC7644u>(ctx, &aot_mem) && ctx.pc == 0x08ACBFE4u) goto L_08ACBFE4;
    return;
L_08ACBFE4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACC000u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 901u, 0x08AC748Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0177(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0177_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_177(Runtime &runtime) {
    runtime.register_generated_unit(177u, 0x08AC8000u, 16384u, &recomp_unit_0177, &recomp_unit_0177_entry);
    runtime.register_function(0x08AC8000u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8010u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8020u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8028u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8034u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8044u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8054u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC805Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8078u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8084u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8090u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8098u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8104u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC810Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8114u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC811Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC816Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8174u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC817Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC818Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8194u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8204u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8214u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC821Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8224u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC822Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8234u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8240u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8250u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8258u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8260u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC826Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8274u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8280u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8288u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8294u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC829Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8300u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8308u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8310u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8318u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8320u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8328u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8334u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC833Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8344u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC834Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8358u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC836Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8378u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8380u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8388u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8390u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC839Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8404u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC840Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8414u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC841Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC842Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8434u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8440u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8448u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8454u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC845Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8464u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC846Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8474u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8480u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8488u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8490u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8498u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC850Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8520u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8534u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8540u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8550u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8558u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8560u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8568u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8584u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC858Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8594u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC859Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8618u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8620u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8630u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8638u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8640u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8648u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8650u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8658u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8660u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8668u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8678u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8680u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8688u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8690u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC869Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8704u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8710u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8718u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8720u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8730u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC873Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8744u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC874Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8758u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8764u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC876Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC877Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8784u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8794u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC879Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8804u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC880Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8818u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8820u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8828u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8838u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8844u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8850u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8860u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC886Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8874u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC887Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8888u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8900u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8908u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8914u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC891Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8924u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC892Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8934u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC893Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8944u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8964u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC896Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8978u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8980u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC898Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8998u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A5Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8BA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8BBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8BD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8BE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8CA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8CBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8CE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8CF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E5Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8ED4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9000u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9010u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9018u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9028u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9030u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9040u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9048u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9058u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9060u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9068u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9070u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9078u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9088u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9090u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9108u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9118u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9128u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9130u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9140u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9148u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9154u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC915Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9164u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC916Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9174u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC917Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9188u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9190u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9198u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9204u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC920Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9218u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9230u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9238u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9240u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC924Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC925Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9268u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9274u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC927Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9294u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC929Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9308u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9310u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9318u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9320u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9328u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9334u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC933Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC934Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9354u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9364u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC936Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9374u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC937Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9388u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9398u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9400u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9410u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9424u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC942Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9438u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9440u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9448u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9458u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9468u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9470u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9484u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC948Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9498u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9504u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9514u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9518u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9520u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9530u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9538u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9544u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC954Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9554u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9564u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9574u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC957Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9584u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9594u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9600u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9608u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9610u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9618u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9620u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9628u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9630u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9638u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9640u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9650u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC965Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9664u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC966Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9674u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC967Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC968Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9694u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9700u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9708u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9710u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9718u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9720u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9728u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9730u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9738u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9740u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9748u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9750u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9758u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9760u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC976Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9774u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC977Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9788u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9790u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9798u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9804u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC980Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9814u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC981Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9824u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC982Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9834u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9840u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9848u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9850u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC985Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9864u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC986Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9874u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9880u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9888u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9898u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9904u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC990Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9914u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC991Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9924u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC992Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC993Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9944u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9950u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9958u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9960u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9970u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9978u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9988u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9990u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC999Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9AA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9AA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9AB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9ABCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9AC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9AD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9AE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9AE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9AF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9AF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B5Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BCCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C5Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9ECCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9ED8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA004u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA00Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA014u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA020u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA028u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA030u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA038u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA044u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA04Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA054u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA05Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA068u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA070u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA074u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA07Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA090u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA098u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA10Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA128u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA140u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA14Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA154u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA15Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA164u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA170u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA178u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA188u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA190u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA198u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA200u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA218u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA220u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA228u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA234u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA244u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA24Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA264u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA26Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA27Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA284u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA294u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA29Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA304u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA310u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA318u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA320u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA328u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA330u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA338u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA348u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA358u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA364u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA36Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA374u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA37Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA394u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA39Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA404u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA40Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA414u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA41Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA424u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA434u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA43Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA44Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA454u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA464u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA470u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA47Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA484u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA48Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA494u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA49Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA508u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA518u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA520u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA528u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA530u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA540u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA550u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA55Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA56Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA578u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA580u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA588u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA590u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA59Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA604u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA60Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA614u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA62Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA634u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA63Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA64Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA658u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA690u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA700u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA708u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA710u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA718u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA724u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA728u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA744u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA750u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA758u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA760u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA768u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA774u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA77Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA78Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA794u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA79Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA80Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA814u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA824u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA834u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA840u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA850u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA85Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA864u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA870u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA878u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA890u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA89Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA90Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA914u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA91Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA930u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA938u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA940u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA94Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA954u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA960u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA968u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA980u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA98Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA99Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAABCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAACCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAADCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAECCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFCCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB004u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB010u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB01Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB02Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB034u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB044u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB04Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB054u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB05Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB064u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB074u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB07Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB090u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB100u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB108u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB118u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB12Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB140u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB14Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB158u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB160u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB168u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB178u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB188u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB194u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB19Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB200u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB208u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB21Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB224u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB22Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB238u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB248u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB250u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB260u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB268u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB280u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB28Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB294u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB29Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB300u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB308u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB314u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB324u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB330u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB338u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB340u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB34Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB354u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB35Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB364u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB37Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB384u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB38Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB394u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB404u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB40Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB418u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB420u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB42Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB434u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB444u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB44Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB454u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB45Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB464u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB46Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB474u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB47Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB484u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB48Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB498u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB56Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB574u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB57Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB588u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB590u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB598u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB608u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB610u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB618u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB630u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB640u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB648u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB650u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB658u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB660u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB670u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB67Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB700u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB70Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB714u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB724u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB72Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB734u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB73Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB744u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB74Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB768u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB770u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB77Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB788u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB78Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB800u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB808u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB810u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB81Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB828u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB838u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB864u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB870u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB894u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB904u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB90Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB914u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB920u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB92Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB938u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB93Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB944u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB950u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB95Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB96Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB970u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB978u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB99Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA5Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBACCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBECCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBED4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFE4u, &recomp_unit_0177, "recomp_unit_0177");
}
} // namespace psprecomp
