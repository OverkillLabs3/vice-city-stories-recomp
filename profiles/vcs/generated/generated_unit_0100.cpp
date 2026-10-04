#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0100[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 8, 0, 0, 0, 0,
    0, 9, 0, 10, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    48, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0,
    0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 63,
    0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 70, 0, 0,
    0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    93, 0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0,
    104, 0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 111, 0, 112, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 119, 0, 0, 120, 0, 121,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133,
    0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 144, 145, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 0, 151,
    0, 152, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0,
    0, 158, 0, 0, 159, 0, 160, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0,
    169, 0, 170, 0, 0, 171, 0, 172, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 179, 0, 180, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 187, 0, 188, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 0, 199, 0, 200, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202,
    0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 222, 223, 224, 0, 0, 225, 0, 0, 226, 0, 227, 0,
    228, 0, 229, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 233, 234, 235, 0, 0, 236, 0, 0, 237, 0, 238, 0, 239, 0, 240, 0, 0,
    0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 244, 245, 246, 0, 0, 247, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 0,
    253, 0, 0, 254, 0, 255, 256, 257, 0, 0, 258, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0,
    266, 267, 268, 0, 0, 269, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 277, 278, 279, 0, 0,
    280, 0, 0, 281, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 288, 289, 290, 0, 0, 291, 0, 0, 292, 0,
    293, 0, 294, 0, 295, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 299, 300, 301, 0, 0, 302, 0, 0, 303, 0, 304, 0, 305, 0, 306,
    0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 310, 311, 312, 0, 0, 313, 0, 0, 314, 0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 318,
    0, 0, 319, 0, 0, 320, 0, 321, 322, 323, 0, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0, 328, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0,
    331, 0, 332, 333, 334, 0, 0, 335, 0, 0, 336, 0, 337, 0, 338, 0, 339, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 343, 344, 345,
    0, 0, 346, 0, 0, 347, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 354, 355, 356, 0, 0, 357, 0, 0,
    358, 0, 359, 360, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 367, 0, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0,
    374, 0, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0,
    0, 382, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 389,
    0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0,
    398, 0, 0, 399, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 404, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 407, 0, 408, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 414, 0, 415, 0, 416, 0,
    0, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 419, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 424, 0,
    425, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 429, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432,
    0, 433, 0, 0, 434, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 439, 0, 440, 0, 441, 0,
    442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 449, 0, 0, 450, 0, 0, 0,
    0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 453, 0, 454, 0, 455, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459,
    0, 0, 460, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 465, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 468, 0, 469, 0, 0, 470, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 475, 0, 476, 0, 477, 0, 0,
    0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 485, 0, 486,
    0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 0, 490, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0,
    0, 495, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 500, 0, 501, 0, 502, 0, 503, 0, 0, 504,
    0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 507, 0, 508, 0, 509, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0,
    512, 0, 513, 0, 0, 0, 0, 0, 514, 0, 515, 0, 516, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0,
    0, 521, 0, 522, 0, 523, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 528, 0, 529, 0, 530, 0,
    531, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 535, 0, 536, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0,
    539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 543, 0, 544, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0,
    547, 0, 548, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 555,
    0, 556, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 560, 0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 563,
    0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 567, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 570, 0,
    0, 571, 0, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0, 577, 578,
    0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 583, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0,
    0, 587, 0, 588, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 0, 0,
    0, 0, 595, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 0, 0,
    603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0,
    611, 0, 612, 0, 0, 613, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0, 0, 0, 0,
    0, 619, 0, 620, 0, 0, 621, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 627,
    0, 0, 0, 0, 0, 628, 0, 629, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0,
    0, 0, 635, 0, 636, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 641, 0, 642, 0, 0, 643, 0, 644, 0, 0,
    0, 0, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 651, 0, 652, 0,
    0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 0, 658, 0, 659, 0, 660,
    0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 666, 0, 667, 0, 0, 0, 668, 0,
    0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 671, 0, 672, 0, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 0, 0, 677, 0,
    0, 678, 0, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 681, 0, 682, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 685,
    0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 689, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 694,
    0, 695, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 698, 0, 0, 699, 0, 700, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0,
    703, 0, 704, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 709, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 711,
    0, 712, 0, 713, 0, 714, 0, 715, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 720, 0, 0, 0, 721, 0, 722,
    0, 0, 0, 723, 0, 724, 0, 0, 0, 725, 0, 726, 0, 0, 0, 727, 0, 728, 0, 0, 0, 729, 0, 730, 0, 0, 0, 731, 0, 732, 0, 0,
    0, 733, 0, 734, 0, 0, 0, 735, 0, 736, 0, 0, 737, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 742, 0,
    0, 0, 743, 0, 744, 0, 0, 0, 745, 0, 746, 0, 0, 0, 747, 0, 748, 0, 0, 0, 749, 0, 750, 0, 0, 0, 751, 0, 752, 0, 0, 0,
    753, 0, 754, 0, 0, 0, 755, 0, 756, 0, 0, 0, 757, 0, 758, 759, 0, 760, 0, 0, 761, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 763,
    0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 766, 0, 0, 767, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 771,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 773, 0, 0, 774, 0, 0, 775, 0, 776, 0, 0, 777, 0, 0, 0, 778, 0, 779, 0, 0, 0,
    0, 0, 0, 0, 0, 780, 0, 781, 0, 0, 0, 782, 0, 0, 0, 0, 0, 783, 0, 784, 0, 785, 0, 0, 786, 0, 0, 0, 0, 0, 787, 0,
    788, 0, 0, 0, 789, 0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 794, 795, 0, 0, 0, 0, 0, 0, 0, 796, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 799, 0, 800, 0, 0, 0, 801,
    0, 0, 0, 0, 802, 0, 803, 0, 0, 0, 0, 804, 0, 805, 0, 806, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 808, 0, 809, 0, 810, 0,
    811, 0, 812, 0, 0, 0, 0, 813, 0, 0, 814, 0, 0, 815, 0, 816, 817, 818, 0, 0, 819, 0, 820, 0, 0, 0, 0, 0, 821, 0, 822, 0,
    0, 0, 823, 0, 0, 0, 824, 0, 0, 825, 0, 0, 826, 0, 827, 828, 829, 0, 0, 830, 0, 831, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0,
    833, 0, 834, 0, 0, 0, 0, 835, 0, 0, 836, 0, 0, 837, 0, 838, 839, 840, 0, 0, 841, 0, 842, 0, 0, 0, 0, 0, 843, 0, 844, 0,
    0, 0, 0, 845, 0, 0, 0, 846, 0, 0, 847, 0, 0, 848, 0, 849, 850, 851, 0, 0, 852, 0, 853, 0, 0, 854, 0, 0, 0, 0, 0, 0,
    0, 855, 0, 856, 0, 0, 0, 0, 857, 0, 0, 858, 0, 0, 859, 0, 860, 861, 862, 0, 0, 863, 0, 864, 0, 0, 0, 0, 0, 865, 0, 866,
    0, 0, 0, 0, 867, 0, 0, 0, 868, 0, 0, 0, 0, 0, 0, 869, 0, 0, 870, 0, 0, 871, 0, 0, 872, 0, 0, 873, 0, 0, 874, 0,
    875, 876, 877, 0, 0, 878, 0, 879, 0, 0, 0, 0, 0, 0, 0, 880, 0, 881, 0, 0, 882, 0, 0, 883, 0, 0, 884, 0, 885, 886, 887, 0,
    0, 888, 0, 889, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 891, 0, 0, 892, 0, 0, 0, 893, 0, 0, 0, 894, 0, 895, 0, 896,
    0, 897, 0, 898, 0, 0, 0, 0, 0, 899, 0, 900, 0, 0, 0, 0, 901, 0, 0, 0, 0, 902, 0, 903, 0, 0, 0, 0, 0, 904, 0, 905,
    0, 0, 0, 0, 906, 0, 0, 0, 0, 907, 0, 908, 0, 0, 0, 0, 0, 909, 0, 910, 0, 0, 0, 911, 0, 0, 912, 0, 0, 913, 0, 0,
    914, 0, 0, 0, 0, 915, 0, 916, 0, 0, 0, 0, 917, 918, 0, 919, 0, 0, 920, 0, 921, 0, 0, 0, 0, 922, 0, 0, 0, 0, 923, 0,
    0, 924, 0, 0, 0, 925, 0, 0, 926, 0, 0, 927, 0, 0, 928, 0, 0, 929, 0, 930, 931, 0, 932, 0, 933, 0, 0, 934, 0, 935, 0, 0,
    936, 0, 937, 0, 0, 938, 0, 0, 939, 0, 0, 940, 0, 941, 942, 0, 943, 0, 944, 0, 0, 945, 0, 946, 0, 0, 947, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 948, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 949,
    0, 950, 0, 0, 0, 0, 951, 0, 0, 0, 0, 952, 0, 0, 0, 0, 0, 0, 953, 0, 0, 0, 0, 954, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 955, 0, 0, 0, 0, 0, 956, 0, 957, 958, 0, 0, 0, 0, 0, 0, 0, 0, 0, 959, 0, 0, 0, 960, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 961, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 962, 0, 963, 0, 0, 0, 0, 964, 0, 0, 0, 0, 965, 0, 0, 0, 0, 0,
    0, 966, 0, 0, 0, 0, 967, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 968, 0, 0, 0, 0, 0, 969, 0, 970, 971, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 972, 0, 0, 0, 973, 0, 0, 0, 974, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 975, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 976, 0, 977, 0, 0, 0, 0, 978, 0, 0, 0, 0, 979, 0, 0, 0, 0, 0, 0, 980, 0, 0, 0, 0, 981, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 982, 0, 0, 0, 0, 0, 983, 0, 984, 985, 0, 0, 0, 0, 0, 0, 0, 0, 0, 986, 0, 0, 0, 987,
    0, 0, 0, 988, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 989, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    990, 0, 0, 0, 991, 0, 0, 0, 0, 992, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 993, 0, 994, 0, 0, 0, 0, 995, 0, 0, 0, 0, 996, 0, 0, 0, 0, 0, 0, 0, 0, 997, 0, 0, 0, 0, 998, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 999, 0, 0, 0, 0, 0, 1000, 0, 1001, 1002, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1003, 0, 0, 0, 0, 1004, 0, 0, 0, 1005, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1006,
    0, 0, 0, 1007, 0, 0, 0, 1008, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1009, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1010, 0, 1011, 0, 0, 0, 0, 1012, 0, 0, 0, 0, 1013,
};
void recomp_unit_0100_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08994000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0100[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08994000;
    case 2u: goto L_08994020;
    case 3u: goto L_08994028;
    case 4u: goto L_08994038;
    case 5u: goto L_08994048;
    case 6u: goto L_08994058;
    case 7u: goto L_08994064;
    case 8u: goto L_0899406C;
    case 9u: goto L_08994084;
    case 10u: goto L_0899408C;
    case 11u: goto L_08994098;
    case 12u: goto L_089940A4;
    case 13u: goto L_089940AC;
    case 14u: goto L_089940BC;
    case 15u: goto L_089940C4;
    case 16u: goto L_089940E0;
    case 17u: goto L_089940E8;
    case 18u: goto L_0899411C;
    case 19u: goto L_08994124;
    case 20u: goto L_08994138;
    case 21u: goto L_08994140;
    case 22u: goto L_0899414C;
    case 23u: goto L_08994154;
    case 24u: goto L_08994180;
    case 25u: goto L_08994188;
    case 26u: goto L_08994190;
    case 27u: goto L_08994198;
    case 28u: goto L_089941C4;
    case 29u: goto L_089941CC;
    case 30u: goto L_089941D8;
    case 31u: goto L_089941E0;
    case 32u: goto L_089941EC;
    case 33u: goto L_089941F4;
    case 34u: goto L_08994218;
    case 35u: goto L_08994220;
    case 36u: goto L_08994244;
    case 37u: goto L_0899424C;
    case 38u: goto L_08994258;
    case 39u: goto L_08994260;
    case 40u: goto L_08994284;
    case 41u: goto L_0899428C;
    case 42u: goto L_08994294;
    case 43u: goto L_089942A0;
    case 44u: goto L_089942A8;
    case 45u: goto L_089942CC;
    case 46u: goto L_089942D4;
    case 47u: goto L_089942F8;
    case 48u: goto L_08994300;
    case 49u: goto L_0899430C;
    case 50u: goto L_08994318;
    case 51u: goto L_08994320;
    case 52u: goto L_08994344;
    case 53u: goto L_0899434C;
    case 54u: goto L_08994370;
    case 55u: goto L_08994378;
    case 56u: goto L_08994384;
    case 57u: goto L_08994390;
    case 58u: goto L_08994398;
    case 59u: goto L_089943BC;
    case 60u: goto L_089943C4;
    case 61u: goto L_089943E8;
    case 62u: goto L_089943F0;
    case 63u: goto L_089943FC;
    case 64u: goto L_08994408;
    case 65u: goto L_08994410;
    case 66u: goto L_08994434;
    case 67u: goto L_0899443C;
    case 68u: goto L_08994460;
    case 69u: goto L_08994468;
    case 70u: goto L_08994474;
    case 71u: goto L_08994484;
    case 72u: goto L_0899448C;
    case 73u: goto L_089944B0;
    case 74u: goto L_089944B8;
    case 75u: goto L_089944D8;
    case 76u: goto L_089944E4;
    case 77u: goto L_08994500;
    case 78u: goto L_08994508;
    case 79u: goto L_08994510;
    case 80u: goto L_08994538;
    case 81u: goto L_08994540;
    case 82u: goto L_08994554;
    case 83u: goto L_08994560;
    case 84u: goto L_08994568;
    case 85u: goto L_08994570;
    case 86u: goto L_08994590;
    case 87u: goto L_089945A8;
    case 88u: goto L_089945B8;
    case 89u: goto L_089945C0;
    case 90u: goto L_089945C8;
    case 91u: goto L_089945D8;
    case 92u: goto L_089945F0;
    case 93u: goto L_08994600;
    case 94u: goto L_08994608;
    case 95u: goto L_08994618;
    case 96u: goto L_08994620;
    case 97u: goto L_08994630;
    case 98u: goto L_08994638;
    case 99u: goto L_08994648;
    case 100u: goto L_08994650;
    case 101u: goto L_08994660;
    case 102u: goto L_08994668;
    case 103u: goto L_08994678;
    case 104u: goto L_08994680;
    case 105u: goto L_08994690;
    case 106u: goto L_08994698;
    case 107u: goto L_089946A8;
    case 108u: goto L_089946B0;
    case 109u: goto L_089946C0;
    case 110u: goto L_089946C8;
    case 111u: goto L_089946CC;
    case 112u: goto L_089946D4;
    case 113u: goto L_089946E0;
    case 114u: goto L_089946E8;
    case 115u: goto L_08994720;
    case 116u: goto L_08994728;
    case 117u: goto L_08994754;
    case 118u: goto L_0899475C;
    case 119u: goto L_08994768;
    case 120u: goto L_08994774;
    case 121u: goto L_0899477C;
    case 122u: goto L_089947A0;
    case 123u: goto L_089947A8;
    case 124u: goto L_089947CC;
    case 125u: goto L_089947D4;
    case 126u: goto L_089947E0;
    case 127u: goto L_089947EC;
    case 128u: goto L_089947F4;
    case 129u: goto L_08994818;
    case 130u: goto L_08994820;
    case 131u: goto L_0899482C;
    case 132u: goto L_0899485C;
    case 133u: goto L_0899487C;
    case 134u: goto L_08994884;
    case 135u: goto L_08994890;
    case 136u: goto L_089948A0;
    case 137u: goto L_089948B0;
    case 138u: goto L_089948BC;
    case 139u: goto L_089948C4;
    case 140u: goto L_089948CC;
    case 141u: goto L_089948D4;
    case 142u: goto L_089948DC;
    case 143u: goto L_089948E8;
    case 144u: goto L_089948F0;
    case 145u: goto L_089948F4;
    case 146u: goto L_08994924;
    case 147u: goto L_0899492C;
    case 148u: goto L_0899495C;
    case 149u: goto L_08994964;
    case 150u: goto L_08994970;
    case 151u: goto L_0899497C;
    case 152u: goto L_08994984;
    case 153u: goto L_08994988;
    case 154u: goto L_089949B8;
    case 155u: goto L_089949C0;
    case 156u: goto L_089949F0;
    case 157u: goto L_089949F8;
    case 158u: goto L_08994A04;
    case 159u: goto L_08994A10;
    case 160u: goto L_08994A18;
    case 161u: goto L_08994A1C;
    case 162u: goto L_08994A4C;
    case 163u: goto L_08994A54;
    case 164u: goto L_08994A84;
    case 165u: goto L_08994A8C;
    case 166u: goto L_08994A98;
    case 167u: goto L_08994AA0;
    case 168u: goto L_08994AF8;
    case 169u: goto L_08994B00;
    case 170u: goto L_08994B08;
    case 171u: goto L_08994B14;
    case 172u: goto L_08994B1C;
    case 173u: goto L_08994B20;
    case 174u: goto L_08994B50;
    case 175u: goto L_08994B58;
    case 176u: goto L_08994B88;
    case 177u: goto L_08994B90;
    case 178u: goto L_08994B9C;
    case 179u: goto L_08994BA8;
    case 180u: goto L_08994BB0;
    case 181u: goto L_08994BB4;
    case 182u: goto L_08994BE4;
    case 183u: goto L_08994BEC;
    case 184u: goto L_08994C1C;
    case 185u: goto L_08994C24;
    case 186u: goto L_08994C30;
    case 187u: goto L_08994C3C;
    case 188u: goto L_08994C44;
    case 189u: goto L_08994C48;
    case 190u: goto L_08994C78;
    case 191u: goto L_08994C80;
    case 192u: goto L_08994CB0;
    case 193u: goto L_08994CB8;
    case 194u: goto L_08994CC4;
    case 195u: goto L_08994CCC;
    case 196u: goto L_08994D24;
    case 197u: goto L_08994D2C;
    case 198u: goto L_08994D34;
    case 199u: goto L_08994D40;
    case 200u: goto L_08994D48;
    case 201u: goto L_08994D4C;
    case 202u: goto L_08994D7C;
    case 203u: goto L_08994D84;
    case 204u: goto L_08994DB4;
    case 205u: goto L_08994DBC;
    case 206u: goto L_08994DC8;
    case 207u: goto L_08994DD4;
    case 208u: goto L_08994DDC;
    case 209u: goto L_08994E00;
    case 210u: goto L_08994E08;
    case 211u: goto L_08994E2C;
    case 212u: goto L_08994E34;
    case 213u: goto L_08994E40;
    case 214u: goto L_08994E54;
    case 215u: goto L_08994E74;
    case 216u: goto L_08994E8C;
    case 217u: goto L_08994E94;
    case 218u: goto L_08994E9C;
    case 219u: goto L_08994EB0;
    case 220u: goto L_08994EBC;
    case 221u: goto L_08994EC8;
    case 222u: goto L_08994ED0;
    case 223u: goto L_08994ED4;
    case 224u: goto L_08994ED8;
    case 225u: goto L_08994EE4;
    case 226u: goto L_08994EF0;
    case 227u: goto L_08994EF8;
    case 228u: goto L_08994F00;
    case 229u: goto L_08994F08;
    case 230u: goto L_08994F1C;
    case 231u: goto L_08994F28;
    case 232u: goto L_08994F34;
    case 233u: goto L_08994F3C;
    case 234u: goto L_08994F40;
    case 235u: goto L_08994F44;
    case 236u: goto L_08994F50;
    case 237u: goto L_08994F5C;
    case 238u: goto L_08994F64;
    case 239u: goto L_08994F6C;
    case 240u: goto L_08994F74;
    case 241u: goto L_08994F88;
    case 242u: goto L_08994F94;
    case 243u: goto L_08994FA0;
    case 244u: goto L_08994FA8;
    case 245u: goto L_08994FAC;
    case 246u: goto L_08994FB0;
    case 247u: goto L_08994FBC;
    case 248u: goto L_08994FC8;
    case 249u: goto L_08994FD0;
    case 250u: goto L_08994FD8;
    case 251u: goto L_08994FE0;
    case 252u: goto L_08994FF4;
    case 253u: goto L_08995000;
    case 254u: goto L_0899500C;
    case 255u: goto L_08995014;
    case 256u: goto L_08995018;
    case 257u: goto L_0899501C;
    case 258u: goto L_08995028;
    case 259u: goto L_08995034;
    case 260u: goto L_0899503C;
    case 261u: goto L_08995044;
    case 262u: goto L_0899504C;
    case 263u: goto L_08995060;
    case 264u: goto L_0899506C;
    case 265u: goto L_08995078;
    case 266u: goto L_08995080;
    case 267u: goto L_08995084;
    case 268u: goto L_08995088;
    case 269u: goto L_08995094;
    case 270u: goto L_089950A0;
    case 271u: goto L_089950A8;
    case 272u: goto L_089950B0;
    case 273u: goto L_089950B8;
    case 274u: goto L_089950CC;
    case 275u: goto L_089950D8;
    case 276u: goto L_089950E4;
    case 277u: goto L_089950EC;
    case 278u: goto L_089950F0;
    case 279u: goto L_089950F4;
    case 280u: goto L_08995100;
    case 281u: goto L_0899510C;
    case 282u: goto L_08995114;
    case 283u: goto L_0899511C;
    case 284u: goto L_08995124;
    case 285u: goto L_08995138;
    case 286u: goto L_08995144;
    case 287u: goto L_08995150;
    case 288u: goto L_08995158;
    case 289u: goto L_0899515C;
    case 290u: goto L_08995160;
    case 291u: goto L_0899516C;
    case 292u: goto L_08995178;
    case 293u: goto L_08995180;
    case 294u: goto L_08995188;
    case 295u: goto L_08995190;
    case 296u: goto L_089951A4;
    case 297u: goto L_089951B0;
    case 298u: goto L_089951BC;
    case 299u: goto L_089951C4;
    case 300u: goto L_089951C8;
    case 301u: goto L_089951CC;
    case 302u: goto L_089951D8;
    case 303u: goto L_089951E4;
    case 304u: goto L_089951EC;
    case 305u: goto L_089951F4;
    case 306u: goto L_089951FC;
    case 307u: goto L_08995210;
    case 308u: goto L_0899521C;
    case 309u: goto L_08995228;
    case 310u: goto L_08995230;
    case 311u: goto L_08995234;
    case 312u: goto L_08995238;
    case 313u: goto L_08995244;
    case 314u: goto L_08995250;
    case 315u: goto L_08995258;
    case 316u: goto L_08995260;
    case 317u: goto L_08995268;
    case 318u: goto L_0899527C;
    case 319u: goto L_08995288;
    case 320u: goto L_08995294;
    case 321u: goto L_0899529C;
    case 322u: goto L_089952A0;
    case 323u: goto L_089952A4;
    case 324u: goto L_089952B0;
    case 325u: goto L_089952BC;
    case 326u: goto L_089952C4;
    case 327u: goto L_089952CC;
    case 328u: goto L_089952D4;
    case 329u: goto L_089952E8;
    case 330u: goto L_089952F4;
    case 331u: goto L_08995300;
    case 332u: goto L_08995308;
    case 333u: goto L_0899530C;
    case 334u: goto L_08995310;
    case 335u: goto L_0899531C;
    case 336u: goto L_08995328;
    case 337u: goto L_08995330;
    case 338u: goto L_08995338;
    case 339u: goto L_08995340;
    case 340u: goto L_08995354;
    case 341u: goto L_08995360;
    case 342u: goto L_0899536C;
    case 343u: goto L_08995374;
    case 344u: goto L_08995378;
    case 345u: goto L_0899537C;
    case 346u: goto L_08995388;
    case 347u: goto L_08995394;
    case 348u: goto L_0899539C;
    case 349u: goto L_089953A4;
    case 350u: goto L_089953AC;
    case 351u: goto L_089953C0;
    case 352u: goto L_089953CC;
    case 353u: goto L_089953D8;
    case 354u: goto L_089953E0;
    case 355u: goto L_089953E4;
    case 356u: goto L_089953E8;
    case 357u: goto L_089953F4;
    case 358u: goto L_08995400;
    case 359u: goto L_08995408;
    case 360u: goto L_0899540C;
    case 361u: goto L_08995414;
    case 362u: goto L_08995420;
    case 363u: goto L_08995428;
    case 364u: goto L_08995454;
    case 365u: goto L_0899545C;
    case 366u: goto L_08995480;
    case 367u: goto L_08995488;
    case 368u: goto L_08995494;
    case 369u: goto L_089954A0;
    case 370u: goto L_089954A8;
    case 371u: goto L_089954CC;
    case 372u: goto L_089954D4;
    case 373u: goto L_089954F8;
    case 374u: goto L_08995500;
    case 375u: goto L_0899550C;
    case 376u: goto L_08995518;
    case 377u: goto L_08995520;
    case 378u: goto L_08995544;
    case 379u: goto L_0899554C;
    case 380u: goto L_08995570;
    case 381u: goto L_08995578;
    case 382u: goto L_08995584;
    case 383u: goto L_08995590;
    case 384u: goto L_08995598;
    case 385u: goto L_089955BC;
    case 386u: goto L_089955C4;
    case 387u: goto L_089955E8;
    case 388u: goto L_089955F0;
    case 389u: goto L_089955FC;
    case 390u: goto L_08995604;
    case 391u: goto L_0899560C;
    case 392u: goto L_08995630;
    case 393u: goto L_08995638;
    case 394u: goto L_08995644;
    case 395u: goto L_0899564C;
    case 396u: goto L_08995654;
    case 397u: goto L_08995678;
    case 398u: goto L_08995680;
    case 399u: goto L_0899568C;
    case 400u: goto L_08995694;
    case 401u: goto L_0899569C;
    case 402u: goto L_089956C0;
    case 403u: goto L_089956C8;
    case 404u: goto L_089956D4;
    case 405u: goto L_089956DC;
    case 406u: goto L_089956E4;
    case 407u: goto L_0899570C;
    case 408u: goto L_08995714;
    case 409u: goto L_08995720;
    case 410u: goto L_08995728;
    case 411u: goto L_08995730;
    case 412u: goto L_08995754;
    case 413u: goto L_0899575C;
    case 414u: goto L_08995768;
    case 415u: goto L_08995770;
    case 416u: goto L_08995778;
    case 417u: goto L_0899579C;
    case 418u: goto L_089957A4;
    case 419u: goto L_089957B0;
    case 420u: goto L_089957B8;
    case 421u: goto L_089957C0;
    case 422u: goto L_089957E4;
    case 423u: goto L_089957EC;
    case 424u: goto L_089957F8;
    case 425u: goto L_08995800;
    case 426u: goto L_08995808;
    case 427u: goto L_0899582C;
    case 428u: goto L_08995834;
    case 429u: goto L_08995840;
    case 430u: goto L_08995848;
    case 431u: goto L_08995850;
    case 432u: goto L_0899587C;
    case 433u: goto L_08995884;
    case 434u: goto L_08995890;
    case 435u: goto L_08995898;
    case 436u: goto L_089958A0;
    case 437u: goto L_089958C8;
    case 438u: goto L_089958D0;
    case 439u: goto L_089958E8;
    case 440u: goto L_089958F0;
    case 441u: goto L_089958F8;
    case 442u: goto L_08995900;
    case 443u: goto L_0899590C;
    case 444u: goto L_0899592C;
    case 445u: goto L_08995934;
    case 446u: goto L_0899594C;
    case 447u: goto L_08995954;
    case 448u: goto L_0899595C;
    case 449u: goto L_08995964;
    case 450u: goto L_08995970;
    case 451u: goto L_08995990;
    case 452u: goto L_08995998;
    case 453u: goto L_089959B0;
    case 454u: goto L_089959B8;
    case 455u: goto L_089959C0;
    case 456u: goto L_089959C8;
    case 457u: goto L_089959D4;
    case 458u: goto L_089959F4;
    case 459u: goto L_089959FC;
    case 460u: goto L_08995A08;
    case 461u: goto L_08995A10;
    case 462u: goto L_08995A18;
    case 463u: goto L_08995A3C;
    case 464u: goto L_08995A44;
    case 465u: goto L_08995A50;
    case 466u: goto L_08995A58;
    case 467u: goto L_08995A60;
    case 468u: goto L_08995A88;
    case 469u: goto L_08995A90;
    case 470u: goto L_08995A9C;
    case 471u: goto L_08995AA4;
    case 472u: goto L_08995AAC;
    case 473u: goto L_08995AD0;
    case 474u: goto L_08995AD8;
    case 475u: goto L_08995AE4;
    case 476u: goto L_08995AEC;
    case 477u: goto L_08995AF4;
    case 478u: goto L_08995B18;
    case 479u: goto L_08995B20;
    case 480u: goto L_08995B2C;
    case 481u: goto L_08995B34;
    case 482u: goto L_08995B3C;
    case 483u: goto L_08995B60;
    case 484u: goto L_08995B68;
    case 485u: goto L_08995B74;
    case 486u: goto L_08995B7C;
    case 487u: goto L_08995B84;
    case 488u: goto L_08995BA8;
    case 489u: goto L_08995BB0;
    case 490u: goto L_08995BBC;
    case 491u: goto L_08995BC4;
    case 492u: goto L_08995BCC;
    case 493u: goto L_08995BF0;
    case 494u: goto L_08995BF8;
    case 495u: goto L_08995C04;
    case 496u: goto L_08995C0C;
    case 497u: goto L_08995C14;
    case 498u: goto L_08995C38;
    case 499u: goto L_08995C40;
    case 500u: goto L_08995C58;
    case 501u: goto L_08995C60;
    case 502u: goto L_08995C68;
    case 503u: goto L_08995C70;
    case 504u: goto L_08995C7C;
    case 505u: goto L_08995C9C;
    case 506u: goto L_08995CA4;
    case 507u: goto L_08995CBC;
    case 508u: goto L_08995CC4;
    case 509u: goto L_08995CCC;
    case 510u: goto L_08995CD4;
    case 511u: goto L_08995CE0;
    case 512u: goto L_08995D00;
    case 513u: goto L_08995D08;
    case 514u: goto L_08995D20;
    case 515u: goto L_08995D28;
    case 516u: goto L_08995D30;
    case 517u: goto L_08995D38;
    case 518u: goto L_08995D44;
    case 519u: goto L_08995D64;
    case 520u: goto L_08995D6C;
    case 521u: goto L_08995D84;
    case 522u: goto L_08995D8C;
    case 523u: goto L_08995D94;
    case 524u: goto L_08995D9C;
    case 525u: goto L_08995DA8;
    case 526u: goto L_08995DC8;
    case 527u: goto L_08995DD0;
    case 528u: goto L_08995DE8;
    case 529u: goto L_08995DF0;
    case 530u: goto L_08995DF8;
    case 531u: goto L_08995E00;
    case 532u: goto L_08995E0C;
    case 533u: goto L_08995E2C;
    case 534u: goto L_08995E34;
    case 535u: goto L_08995E40;
    case 536u: goto L_08995E48;
    case 537u: goto L_08995E54;
    case 538u: goto L_08995E5C;
    case 539u: goto L_08995E80;
    case 540u: goto L_08995E88;
    case 541u: goto L_08995EAC;
    case 542u: goto L_08995EB4;
    case 543u: goto L_08995EC0;
    case 544u: goto L_08995EC8;
    case 545u: goto L_08995ED4;
    case 546u: goto L_08995EDC;
    case 547u: goto L_08995F00;
    case 548u: goto L_08995F08;
    case 549u: goto L_08995F10;
    case 550u: goto L_08995F1C;
    case 551u: goto L_08995F3C;
    case 552u: goto L_08995F44;
    case 553u: goto L_08995F50;
    case 554u: goto L_08995F58;
    case 555u: goto L_08995F7C;
    case 556u: goto L_08995F84;
    case 557u: goto L_08995F94;
    case 558u: goto L_08995FB8;
    case 559u: goto L_08995FC8;
    case 560u: goto L_08995FD0;
    case 561u: goto L_08995FDC;
    case 562u: goto L_08995FE4;
    case 563u: goto L_08995FFC;
    case 564u: goto L_08996004;
    case 565u: goto L_08996038;
    case 566u: goto L_08996040;
    case 567u: goto L_0899604C;
    case 568u: goto L_08996058;
    case 569u: goto L_08996060;
    case 570u: goto L_08996078;
    case 571u: goto L_08996084;
    case 572u: goto L_089960A4;
    case 573u: goto L_089960AC;
    case 574u: goto L_089960C4;
    case 575u: goto L_089960D0;
    case 576u: goto L_089960F0;
    case 577u: goto L_089960F8;
    case 578u: goto L_089960FC;
    case 579u: goto L_0899610C;
    case 580u: goto L_0899611C;
    case 581u: goto L_08996138;
    case 582u: goto L_08996140;
    case 583u: goto L_08996148;
    case 584u: goto L_08996154;
    case 585u: goto L_0899616C;
    case 586u: goto L_08996174;
    case 587u: goto L_08996184;
    case 588u: goto L_0899618C;
    case 589u: goto L_08996198;
    case 590u: goto L_089961A0;
    case 591u: goto L_089961BC;
    case 592u: goto L_089961C4;
    case 593u: goto L_089961DC;
    case 594u: goto L_089961E8;
    case 595u: goto L_08996208;
    case 596u: goto L_08996210;
    case 597u: goto L_0899621C;
    case 598u: goto L_08996224;
    case 599u: goto L_0899623C;
    case 600u: goto L_08996248;
    case 601u: goto L_08996268;
    case 602u: goto L_08996270;
    case 603u: goto L_08996280;
    case 604u: goto L_08996294;
    case 605u: goto L_089962B0;
    case 606u: goto L_089962B8;
    case 607u: goto L_089962C0;
    case 608u: goto L_089962D0;
    case 609u: goto L_089962E8;
    case 610u: goto L_089962F0;
    case 611u: goto L_08996300;
    case 612u: goto L_08996308;
    case 613u: goto L_08996314;
    case 614u: goto L_0899631C;
    case 615u: goto L_08996338;
    case 616u: goto L_08996340;
    case 617u: goto L_08996358;
    case 618u: goto L_08996364;
    case 619u: goto L_08996384;
    case 620u: goto L_0899638C;
    case 621u: goto L_08996398;
    case 622u: goto L_089963A0;
    case 623u: goto L_089963B8;
    case 624u: goto L_089963C4;
    case 625u: goto L_089963E4;
    case 626u: goto L_089963EC;
    case 627u: goto L_089963FC;
    case 628u: goto L_08996414;
    case 629u: goto L_0899641C;
    case 630u: goto L_08996424;
    case 631u: goto L_0899642C;
    case 632u: goto L_08996450;
    case 633u: goto L_08996458;
    case 634u: goto L_0899646C;
    case 635u: goto L_08996488;
    case 636u: goto L_08996490;
    case 637u: goto L_08996498;
    case 638u: goto L_089964A8;
    case 639u: goto L_089964C0;
    case 640u: goto L_089964C8;
    case 641u: goto L_089964D8;
    case 642u: goto L_089964E0;
    case 643u: goto L_089964EC;
    case 644u: goto L_089964F4;
    case 645u: goto L_08996510;
    case 646u: goto L_08996518;
    case 647u: goto L_08996530;
    case 648u: goto L_0899653C;
    case 649u: goto L_0899655C;
    case 650u: goto L_08996564;
    case 651u: goto L_08996570;
    case 652u: goto L_08996578;
    case 653u: goto L_08996590;
    case 654u: goto L_0899659C;
    case 655u: goto L_089965BC;
    case 656u: goto L_089965C4;
    case 657u: goto L_089965D4;
    case 658u: goto L_089965EC;
    case 659u: goto L_089965F4;
    case 660u: goto L_089965FC;
    case 661u: goto L_08996604;
    case 662u: goto L_08996628;
    case 663u: goto L_08996630;
    case 664u: goto L_08996644;
    case 665u: goto L_08996658;
    case 666u: goto L_08996660;
    case 667u: goto L_08996668;
    case 668u: goto L_08996678;
    case 669u: goto L_08996690;
    case 670u: goto L_08996698;
    case 671u: goto L_089966A8;
    case 672u: goto L_089966B0;
    case 673u: goto L_089966BC;
    case 674u: goto L_089966C4;
    case 675u: goto L_089966E0;
    case 676u: goto L_089966E8;
    case 677u: goto L_089966F8;
    case 678u: goto L_08996704;
    case 679u: goto L_08996724;
    case 680u: goto L_0899672C;
    case 681u: goto L_08996738;
    case 682u: goto L_08996740;
    case 683u: goto L_08996750;
    case 684u: goto L_0899675C;
    case 685u: goto L_0899677C;
    case 686u: goto L_08996784;
    case 687u: goto L_08996794;
    case 688u: goto L_089967AC;
    case 689u: goto L_089967B4;
    case 690u: goto L_089967BC;
    case 691u: goto L_089967C4;
    case 692u: goto L_089967E8;
    case 693u: goto L_089967F0;
    case 694u: goto L_089967FC;
    case 695u: goto L_08996804;
    case 696u: goto L_0899680C;
    case 697u: goto L_08996830;
    case 698u: goto L_08996838;
    case 699u: goto L_08996844;
    case 700u: goto L_0899684C;
    case 701u: goto L_08996854;
    case 702u: goto L_08996878;
    case 703u: goto L_08996880;
    case 704u: goto L_08996888;
    case 705u: goto L_08996894;
    case 706u: goto L_0899689C;
    case 707u: goto L_089968C0;
    case 708u: goto L_089968C8;
    case 709u: goto L_089968D0;
    case 710u: goto L_089968D8;
    case 711u: goto L_089968FC;
    case 712u: goto L_08996904;
    case 713u: goto L_0899690C;
    case 714u: goto L_08996914;
    case 715u: goto L_0899691C;
    case 716u: goto L_08996924;
    case 717u: goto L_08996934;
    case 718u: goto L_0899694C;
    case 719u: goto L_0899695C;
    case 720u: goto L_08996964;
    case 721u: goto L_08996974;
    case 722u: goto L_0899697C;
    case 723u: goto L_0899698C;
    case 724u: goto L_08996994;
    case 725u: goto L_089969A4;
    case 726u: goto L_089969AC;
    case 727u: goto L_089969BC;
    case 728u: goto L_089969C4;
    case 729u: goto L_089969D4;
    case 730u: goto L_089969DC;
    case 731u: goto L_089969EC;
    case 732u: goto L_089969F4;
    case 733u: goto L_08996A04;
    case 734u: goto L_08996A0C;
    case 735u: goto L_08996A1C;
    case 736u: goto L_08996A24;
    case 737u: goto L_08996A30;
    case 738u: goto L_08996A38;
    case 739u: goto L_08996A48;
    case 740u: goto L_08996A60;
    case 741u: goto L_08996A70;
    case 742u: goto L_08996A78;
    case 743u: goto L_08996A88;
    case 744u: goto L_08996A90;
    case 745u: goto L_08996AA0;
    case 746u: goto L_08996AA8;
    case 747u: goto L_08996AB8;
    case 748u: goto L_08996AC0;
    case 749u: goto L_08996AD0;
    case 750u: goto L_08996AD8;
    case 751u: goto L_08996AE8;
    case 752u: goto L_08996AF0;
    case 753u: goto L_08996B00;
    case 754u: goto L_08996B08;
    case 755u: goto L_08996B18;
    case 756u: goto L_08996B20;
    case 757u: goto L_08996B30;
    case 758u: goto L_08996B38;
    case 759u: goto L_08996B3C;
    case 760u: goto L_08996B44;
    case 761u: goto L_08996B50;
    case 762u: goto L_08996B58;
    case 763u: goto L_08996B7C;
    case 764u: goto L_08996B84;
    case 765u: goto L_08996BA8;
    case 766u: goto L_08996BB0;
    case 767u: goto L_08996BBC;
    case 768u: goto L_08996BC8;
    case 769u: goto L_08996BD0;
    case 770u: goto L_08996BF4;
    case 771u: goto L_08996BFC;
    case 772u: goto L_08996C24;
    case 773u: goto L_08996C2C;
    case 774u: goto L_08996C38;
    case 775u: goto L_08996C44;
    case 776u: goto L_08996C4C;
    case 777u: goto L_08996C58;
    case 778u: goto L_08996C68;
    case 779u: goto L_08996C70;
    case 780u: goto L_08996C94;
    case 781u: goto L_08996C9C;
    case 782u: goto L_08996CAC;
    case 783u: goto L_08996CC4;
    case 784u: goto L_08996CCC;
    case 785u: goto L_08996CD4;
    case 786u: goto L_08996CE0;
    case 787u: goto L_08996CF8;
    case 788u: goto L_08996D00;
    case 789u: goto L_08996D10;
    case 790u: goto L_08996D18;
    case 791u: goto L_08996D20;
    case 792u: goto L_08996D3C;
    case 793u: goto L_08996D44;
    case 794u: goto L_08996D54;
    case 795u: goto L_08996D58;
    case 796u: goto L_08996D78;
    case 797u: goto L_08996DB8;
    case 798u: goto L_08996DDC;
    case 799u: goto L_08996DE4;
    case 800u: goto L_08996DEC;
    case 801u: goto L_08996DFC;
    case 802u: goto L_08996E10;
    case 803u: goto L_08996E18;
    case 804u: goto L_08996E2C;
    case 805u: goto L_08996E34;
    case 806u: goto L_08996E3C;
    case 807u: goto L_08996E4C;
    case 808u: goto L_08996E68;
    case 809u: goto L_08996E70;
    case 810u: goto L_08996E78;
    case 811u: goto L_08996E80;
    case 812u: goto L_08996E88;
    case 813u: goto L_08996E9C;
    case 814u: goto L_08996EA8;
    case 815u: goto L_08996EB4;
    case 816u: goto L_08996EBC;
    case 817u: goto L_08996EC0;
    case 818u: goto L_08996EC4;
    case 819u: goto L_08996ED0;
    case 820u: goto L_08996ED8;
    case 821u: goto L_08996EF0;
    case 822u: goto L_08996EF8;
    case 823u: goto L_08996F08;
    case 824u: goto L_08996F18;
    case 825u: goto L_08996F24;
    case 826u: goto L_08996F30;
    case 827u: goto L_08996F38;
    case 828u: goto L_08996F3C;
    case 829u: goto L_08996F40;
    case 830u: goto L_08996F4C;
    case 831u: goto L_08996F54;
    case 832u: goto L_08996F60;
    case 833u: goto L_08996F80;
    case 834u: goto L_08996F88;
    case 835u: goto L_08996F9C;
    case 836u: goto L_08996FA8;
    case 837u: goto L_08996FB4;
    case 838u: goto L_08996FBC;
    case 839u: goto L_08996FC0;
    case 840u: goto L_08996FC4;
    case 841u: goto L_08996FD0;
    case 842u: goto L_08996FD8;
    case 843u: goto L_08996FF0;
    case 844u: goto L_08996FF8;
    case 845u: goto L_0899700C;
    case 846u: goto L_0899701C;
    case 847u: goto L_08997028;
    case 848u: goto L_08997034;
    case 849u: goto L_0899703C;
    case 850u: goto L_08997040;
    case 851u: goto L_08997044;
    case 852u: goto L_08997050;
    case 853u: goto L_08997058;
    case 854u: goto L_08997064;
    case 855u: goto L_08997084;
    case 856u: goto L_0899708C;
    case 857u: goto L_089970A0;
    case 858u: goto L_089970AC;
    case 859u: goto L_089970B8;
    case 860u: goto L_089970C0;
    case 861u: goto L_089970C4;
    case 862u: goto L_089970C8;
    case 863u: goto L_089970D4;
    case 864u: goto L_089970DC;
    case 865u: goto L_089970F4;
    case 866u: goto L_089970FC;
    case 867u: goto L_08997110;
    case 868u: goto L_08997120;
    case 869u: goto L_0899713C;
    case 870u: goto L_08997148;
    case 871u: goto L_08997154;
    case 872u: goto L_08997160;
    case 873u: goto L_0899716C;
    case 874u: goto L_08997178;
    case 875u: goto L_08997180;
    case 876u: goto L_08997184;
    case 877u: goto L_08997188;
    case 878u: goto L_08997194;
    case 879u: goto L_0899719C;
    case 880u: goto L_089971BC;
    case 881u: goto L_089971C4;
    case 882u: goto L_089971D0;
    case 883u: goto L_089971DC;
    case 884u: goto L_089971E8;
    case 885u: goto L_089971F0;
    case 886u: goto L_089971F4;
    case 887u: goto L_089971F8;
    case 888u: goto L_08997204;
    case 889u: goto L_0899720C;
    case 890u: goto L_0899722C;
    case 891u: goto L_08997240;
    case 892u: goto L_0899724C;
    case 893u: goto L_0899725C;
    case 894u: goto L_0899726C;
    case 895u: goto L_08997274;
    case 896u: goto L_0899727C;
    case 897u: goto L_08997284;
    case 898u: goto L_0899728C;
    case 899u: goto L_089972A4;
    case 900u: goto L_089972AC;
    case 901u: goto L_089972C0;
    case 902u: goto L_089972D4;
    case 903u: goto L_089972DC;
    case 904u: goto L_089972F4;
    case 905u: goto L_089972FC;
    case 906u: goto L_08997310;
    case 907u: goto L_08997324;
    case 908u: goto L_0899732C;
    case 909u: goto L_08997344;
    case 910u: goto L_0899734C;
    case 911u: goto L_0899735C;
    case 912u: goto L_08997368;
    case 913u: goto L_08997374;
    case 914u: goto L_08997380;
    case 915u: goto L_08997394;
    case 916u: goto L_0899739C;
    case 917u: goto L_089973B0;
    case 918u: goto L_089973B4;
    case 919u: goto L_089973BC;
    case 920u: goto L_089973C8;
    case 921u: goto L_089973D0;
    case 922u: goto L_089973E4;
    case 923u: goto L_089973F8;
    case 924u: goto L_08997404;
    case 925u: goto L_08997414;
    case 926u: goto L_08997420;
    case 927u: goto L_0899742C;
    case 928u: goto L_08997438;
    case 929u: goto L_08997444;
    case 930u: goto L_0899744C;
    case 931u: goto L_08997450;
    case 932u: goto L_08997458;
    case 933u: goto L_08997460;
    case 934u: goto L_0899746C;
    case 935u: goto L_08997474;
    case 936u: goto L_08997480;
    case 937u: goto L_08997488;
    case 938u: goto L_08997494;
    case 939u: goto L_089974A0;
    case 940u: goto L_089974AC;
    case 941u: goto L_089974B4;
    case 942u: goto L_089974B8;
    case 943u: goto L_089974C0;
    case 944u: goto L_089974C8;
    case 945u: goto L_089974D4;
    case 946u: goto L_089974DC;
    case 947u: goto L_089974E8;
    case 948u: goto L_0899751C;
    case 949u: goto L_089975FC;
    case 950u: goto L_08997604;
    case 951u: goto L_08997618;
    case 952u: goto L_0899762C;
    case 953u: goto L_08997648;
    case 954u: goto L_0899765C;
    case 955u: goto L_08997698;
    case 956u: goto L_089976B0;
    case 957u: goto L_089976B8;
    case 958u: goto L_089976BC;
    case 959u: goto L_089976E4;
    case 960u: goto L_089976F4;
    case 961u: goto L_0899773C;
    case 962u: goto L_08997838;
    case 963u: goto L_08997840;
    case 964u: goto L_08997854;
    case 965u: goto L_08997868;
    case 966u: goto L_08997884;
    case 967u: goto L_08997898;
    case 968u: goto L_089978D4;
    case 969u: goto L_089978EC;
    case 970u: goto L_089978F4;
    case 971u: goto L_089978F8;
    case 972u: goto L_08997920;
    case 973u: goto L_08997930;
    case 974u: goto L_08997940;
    case 975u: goto L_08997988;
    case 976u: goto L_08997A84;
    case 977u: goto L_08997A8C;
    case 978u: goto L_08997AA0;
    case 979u: goto L_08997AB4;
    case 980u: goto L_08997AD0;
    case 981u: goto L_08997AE4;
    case 982u: goto L_08997B20;
    case 983u: goto L_08997B38;
    case 984u: goto L_08997B40;
    case 985u: goto L_08997B44;
    case 986u: goto L_08997B6C;
    case 987u: goto L_08997B7C;
    case 988u: goto L_08997B8C;
    case 989u: goto L_08997BD4;
    case 990u: goto L_08997C00;
    case 991u: goto L_08997C10;
    case 992u: goto L_08997C24;
    case 993u: goto L_08997D04;
    case 994u: goto L_08997D0C;
    case 995u: goto L_08997D20;
    case 996u: goto L_08997D34;
    case 997u: goto L_08997D58;
    case 998u: goto L_08997D6C;
    case 999u: goto L_08997DB4;
    case 1000u: goto L_08997DCC;
    case 1001u: goto L_08997DD4;
    case 1002u: goto L_08997DD8;
    case 1003u: goto L_08997E00;
    case 1004u: goto L_08997E14;
    case 1005u: goto L_08997E24;
    case 1006u: goto L_08997E7C;
    case 1007u: goto L_08997E8C;
    case 1008u: goto L_08997E9C;
    case 1009u: goto L_08997EE4;
    case 1010u: goto L_08997FC8;
    case 1011u: goto L_08997FD0;
    case 1012u: goto L_08997FE4;
    case 1013u: goto L_08997FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08994000:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[31] = (0x08994020u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[10]);
    goto L_08996D78;
L_08994020:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994028;
    }
L_08994028:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994138;
      }
      goto L_08994038;
    }
L_08994038:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15068));
    ctx.gpr[31] = (0x08994048u);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08994048u) goto L_08994048;
    return;
L_08994048:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[28]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8160)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899406C;
      }
      goto L_08994058;
    }
L_08994058:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[31] = (0x08994064u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15056));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08994064u) goto L_08994064;
    return;
L_08994064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08994084;
      }
      goto L_0899406C;
    }
L_0899406C:
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[28]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(8160)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15048));
    ctx.gpr[31] = (0x08994084u);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08994084u) goto L_08994084;
    return;
L_08994084:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089940C4;
      }
      goto L_0899408C;
    }
L_0899408C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089940AC;
      }
      goto L_08994098;
    }
L_08994098:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089940E8;
      }
      goto L_089940A4;
    }
L_089940A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08994124;
      }
      goto L_089940AC;
    }
L_089940AC:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15036));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[31] = (0x089940BCu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x089940BCu) goto L_089940BC;
    return;
L_089940BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089940C4;
    }
L_089940C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089940E0u);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_089940E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089940E8;
    }
L_089940E8:
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23472));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15028));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0899411Cu);
    ctx.gpr[9] = (0u | 8u);
    goto L_08996D78;
L_0899411C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994124;
    }
L_08994124:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08994038;
      }
      goto L_08994138;
    }
L_08994138:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08994154;
      }
      goto L_08994140;
    }
L_08994140:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8156)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08994188;
      }
      goto L_0899414C;
    }
L_0899414C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089941CC;
      }
      goto L_08994154;
    }
L_08994154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9376)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9380)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15020));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994180u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994188;
    }
L_08994188:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08994198;
      }
      goto L_08994190;
    }
L_08994190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089941CC;
      }
      goto L_08994198;
    }
L_08994198:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8156)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8158)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15012));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089941C4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089941C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089941CC;
    }
L_089941CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899428C;
      }
      goto L_089941D8;
    }
L_089941D8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089941F4;
      }
      goto L_089941E0;
    }
L_089941E0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08994220;
      }
      goto L_089941EC;
    }
L_089941EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899424C;
      }
      goto L_089941F4;
    }
L_089941F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9300)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15004));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994218u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994220;
    }
L_08994220:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9384)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14996));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994244u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899424C;
    }
L_0899424C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08994260;
      }
      goto L_08994258;
    }
L_08994258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899428C;
      }
      goto L_08994260;
    }
L_08994260:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9304)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14988));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994284u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899428C;
    }
L_0899428C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089942A8;
      }
      goto L_08994294;
    }
L_08994294:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089942D4;
      }
      goto L_089942A0;
    }
L_089942A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08994300;
      }
      goto L_089942A8;
    }
L_089942A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9308)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14980));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089942CCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089942CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089942D4;
    }
L_089942D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9312)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14972));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089942F8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089942F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994300;
    }
L_08994300:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08994320;
      }
      goto L_0899430C;
    }
L_0899430C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899434C;
      }
      goto L_08994318;
    }
L_08994318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08994378;
      }
      goto L_08994320;
    }
L_08994320:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9320)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14964));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994344u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899434C;
    }
L_0899434C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7880)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14956));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994370u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994370:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994378;
    }
L_08994378:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08994398;
      }
      goto L_08994384;
    }
L_08994384:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089943C4;
      }
      goto L_08994390;
    }
L_08994390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089943F0;
      }
      goto L_08994398;
    }
L_08994398:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9332)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14948));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089943BCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089943BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089943C4;
    }
L_089943C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9336)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14940));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089943E8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089943E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089943F0;
    }
L_089943F0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08994410;
      }
      goto L_089943FC;
    }
L_089943FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899443C;
      }
      goto L_08994408;
    }
L_08994408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08994468;
      }
      goto L_08994410;
    }
L_08994410:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9036)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14932));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994434u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899443C;
    }
L_0899443C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9032)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14924));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994460u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994468;
    }
L_08994468:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899448C;
      }
      goto L_08994474;
    }
L_08994474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15220)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8912)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089944B8;
      }
      goto L_08994484;
    }
L_08994484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08994500;
      }
      goto L_0899448C;
    }
L_0899448C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8676)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14916));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089944B0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089944B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089944B8;
    }
L_089944B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8912)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15220), ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089944E4;
      }
      goto L_089944D8;
    }
L_089944D8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089944E4;
L_089944E4:
    ctx.gpr[4] = (17279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15216), ctx.gpr[4]);
    goto L_08994500;
L_08994500:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15216)));
        goto L_08994510;
    }
    goto L_08994508;
L_08994508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08994540;
      }
      goto L_08994510;
    }
L_08994510:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 3u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14908));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08994538u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08996D78;
L_08994538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994540;
    }
L_08994540:
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089945B8;
      }
      goto L_08994554;
    }
L_08994554:
    ctx.gpr[7] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 9u);
      if (branch_taken) {
          goto L_08994570;
      }
      goto L_08994560;
    }
L_08994560:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 12u);
      if (branch_taken) {
          goto L_08994570;
      }
      goto L_08994568;
    }
L_08994568:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089945A8;
      }
      goto L_08994570;
    }
L_08994570:
    ctx.gpr[8] = (2279u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(17488));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089945A8;
      }
      goto L_08994590;
    }
L_08994590:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (2279u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17488));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089945A8;
L_089945A8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08994554;
      }
      goto L_089945B8;
    }
L_089945B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089946CC;
      }
      goto L_089945C0;
    }
L_089945C0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089946C8;
      }
      goto L_089945C8;
    }
L_089945C8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_089945D8;
    }
L_089945D8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4944)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089945F0:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14900));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14892));
    ctx.gpr[31] = (0x08994600u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08994600u) goto L_08994600;
    return;
L_08994600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_08994608;
    }
L_08994608:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14900));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14884));
    ctx.gpr[31] = (0x08994618u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08994618u) goto L_08994618;
    return;
L_08994618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_08994620;
    }
L_08994620:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14900));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14876));
    ctx.gpr[31] = (0x08994630u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08994630u) goto L_08994630;
    return;
L_08994630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_08994638;
    }
L_08994638:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14900));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14868));
    ctx.gpr[31] = (0x08994648u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08994648u) goto L_08994648;
    return;
L_08994648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_08994650;
    }
L_08994650:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14900));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14860));
    ctx.gpr[31] = (0x08994660u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08994660u) goto L_08994660;
    return;
L_08994660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_08994668;
    }
L_08994668:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14900));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14852));
    ctx.gpr[31] = (0x08994678u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08994678u) goto L_08994678;
    return;
L_08994678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_08994680;
    }
L_08994680:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14900));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14844));
    ctx.gpr[31] = (0x08994690u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08994690u) goto L_08994690;
    return;
L_08994690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_08994698;
    }
L_08994698:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14900));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14836));
    ctx.gpr[31] = (0x089946A8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x089946A8u) goto L_089946A8;
    return;
L_089946A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_089946B0;
    }
L_089946B0:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14900));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14828));
    ctx.gpr[31] = (0x089946C0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x089946C0u) goto L_089946C0;
    return;
L_089946C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089946C8;
    }
L_089946C8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089946CC;
L_089946CC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (2279u << 16u);
      if (branch_taken) {
          goto L_089946E8;
      }
      goto L_089946D4;
    }
L_089946D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08994728;
      }
      goto L_089946E0;
    }
L_089946E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899475C;
      }
      goto L_089946E8;
    }
L_089946E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17488));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14820));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994720u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994728;
    }
L_08994728:
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17488));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14812));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994754u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899475C;
    }
L_0899475C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899477C;
      }
      goto L_08994768;
    }
L_08994768:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089947A8;
      }
      goto L_08994774;
    }
L_08994774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089947D4;
      }
      goto L_0899477C;
    }
L_0899477C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9324)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14804));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089947A0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089947A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089947A8;
    }
L_089947A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9316)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14796));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089947CCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089947CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089947D4;
    }
L_089947D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089947F4;
      }
      goto L_089947E0;
    }
L_089947E0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08994820;
      }
      goto L_089947EC;
    }
L_089947EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08994884;
      }
      goto L_089947F4;
    }
L_089947F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14788));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994818u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994820;
    }
L_08994820:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9316)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0899485C;
      }
      goto L_0899482C;
    }
L_0899482C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9316)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0899485C;
L_0899485C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14780));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0899487Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_0899487C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994884;
    }
L_08994884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089948A0;
      }
      goto L_08994890;
    }
L_08994890:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), ctx.gpr[4]);
    ctx.gpr[31] = (0x089948A0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem) && ctx.pc == 0x089948A0u) goto L_089948A0;
    return;
L_089948A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994D2C;
      }
      goto L_089948B0;
    }
L_089948B0:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08994B00;
      }
      goto L_089948BC;
    }
L_089948BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08994B00;
      }
      goto L_089948C4;
    }
L_089948C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08994B00;
      }
      goto L_089948CC;
    }
L_089948CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08994B00;
      }
      goto L_089948D4;
    }
L_089948D4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (17616u << 16u);
      if (branch_taken) {
          goto L_089948F4;
      }
      goto L_089948DC;
    }
L_089948DC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (17616u << 16u);
      if (branch_taken) {
          goto L_0899492C;
      }
      goto L_089948E8;
    }
L_089948E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08994964;
      }
      goto L_089948F0;
    }
L_089948F0:
    ctx.gpr[4] = (17616u << 16u);
    goto L_089948F4;
L_089948F4:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9084)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14772));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08994924u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08996D78;
L_08994924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899492C;
    }
L_0899492C:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9080)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14764));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0899495Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08996D78;
L_0899495C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994964;
    }
L_08994964:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (17616u << 16u);
      if (branch_taken) {
          goto L_08994988;
      }
      goto L_08994970;
    }
L_08994970:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (17616u << 16u);
      if (branch_taken) {
          goto L_089949C0;
      }
      goto L_0899497C;
    }
L_0899497C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089949F8;
      }
      goto L_08994984;
    }
L_08994984:
    ctx.gpr[4] = (17616u << 16u);
    goto L_08994988;
L_08994988:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9068)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14756));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089949B8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08996D78;
L_089949B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089949C0;
    }
L_089949C0:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9072)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14748));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089949F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08996D78;
L_089949F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089949F8;
    }
L_089949F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (17616u << 16u);
      if (branch_taken) {
          goto L_08994A1C;
      }
      goto L_08994A04;
    }
L_08994A04:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (17616u << 16u);
      if (branch_taken) {
          goto L_08994A54;
      }
      goto L_08994A10;
    }
L_08994A10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08994A8C;
      }
      goto L_08994A18;
    }
L_08994A18:
    ctx.gpr[4] = (17616u << 16u);
    goto L_08994A1C;
L_08994A1C:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9076)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14740));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08994A4Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08996D78;
L_08994A4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994A54;
    }
L_08994A54:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9064)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14732));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08994A84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08996D78;
L_08994A84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994A8C;
    }
L_08994A8C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9084)));
        goto L_08994AA0;
    }
    goto L_08994A98;
L_08994A98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08994D2C;
      }
      goto L_08994AA0;
    }
L_08994AA0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9080)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9068)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9076)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9064)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9072)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (17616u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14724));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08994AF8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08996D78;
L_08994AF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994B00;
    }
L_08994B00:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9084)));
        goto L_08994B20;
    }
    goto L_08994B08;
L_08994B08:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9080)));
        goto L_08994B58;
    }
    goto L_08994B14;
L_08994B14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08994B90;
      }
      goto L_08994B1C;
    }
L_08994B1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9084)));
    goto L_08994B20;
L_08994B20:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14716));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08994B50u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08996D78;
L_08994B50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994B58;
    }
L_08994B58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14708));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08994B88u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08996D78;
L_08994B88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994B90;
    }
L_08994B90:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9068)));
        goto L_08994BB4;
    }
    goto L_08994B9C;
L_08994B9C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9072)));
        goto L_08994BEC;
    }
    goto L_08994BA8;
L_08994BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08994C24;
      }
      goto L_08994BB0;
    }
L_08994BB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9068)));
    goto L_08994BB4;
L_08994BB4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14700));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08994BE4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08996D78;
L_08994BE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994BEC;
    }
L_08994BEC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14692));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(236));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08994C1Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08996D78;
L_08994C1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994C24;
    }
L_08994C24:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9076)));
        goto L_08994C48;
    }
    goto L_08994C30;
L_08994C30:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9064)));
        goto L_08994C80;
    }
    goto L_08994C3C;
L_08994C3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08994CB8;
      }
      goto L_08994C44;
    }
L_08994C44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9076)));
    goto L_08994C48;
L_08994C48:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14684));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08994C78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08996D78;
L_08994C78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994C80;
    }
L_08994C80:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14676));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08994CB0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08996D78;
L_08994CB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994CB8;
    }
L_08994CB8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9084)));
        goto L_08994CCC;
    }
    goto L_08994CC4;
L_08994CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08994D2C;
      }
      goto L_08994CCC;
    }
L_08994CCC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9080)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9068)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9076)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9064)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9072)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14668));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (0u | 1u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[31] = (0x08994D24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08996D78;
L_08994D24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994D2C;
    }
L_08994D2C:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8088)));
        goto L_08994D4C;
    }
    goto L_08994D34;
L_08994D34:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8092)));
        goto L_08994D84;
    }
    goto L_08994D40;
L_08994D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08994DBC;
      }
      goto L_08994D48;
    }
L_08994D48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8088)));
    goto L_08994D4C;
L_08994D4C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14660));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(252));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08994D7Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08996D78;
L_08994D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994D84;
    }
L_08994D84:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14652));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08994DB4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08996D78;
L_08994DB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994DBC;
    }
L_08994DBC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08994DDC;
      }
      goto L_08994DC8;
    }
L_08994DC8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08994E08;
      }
      goto L_08994DD4;
    }
L_08994DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08994E34;
      }
      goto L_08994DDC;
    }
L_08994DDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8096)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14644));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994E00u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994E00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994E08;
    }
L_08994E08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8100)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14636));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994E2Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994E34;
    }
L_08994E34:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14628));
      if (branch_taken) {
          goto L_08994E74;
      }
      goto L_08994E40;
    }
L_08994E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089953A4;
      }
      goto L_08994E54;
    }
L_08994E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4904)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994E74:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994E8Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994E8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994E94;
    }
L_08994E94:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_08994EF8;
      }
      goto L_08994E9C;
    }
L_08994E9C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08994ED8;
      }
      goto L_08994EB0;
    }
L_08994EB0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08994EBCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08994EBCu) goto L_08994EBC;
    return;
L_08994EBC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994ED4;
      }
      goto L_08994EC8;
    }
L_08994EC8:
    ctx.gpr[31] = (0x08994ED0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08994ED0u) goto L_08994ED0;
    return;
L_08994ED0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08994ED4;
L_08994ED4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08994ED8;
L_08994ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08994EE4u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14620));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08994EE4u) goto L_08994EE4;
    return;
L_08994EE4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08994EF0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x08994EF0u) goto L_08994EF0;
    return;
L_08994EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994EF8;
    }
L_08994EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_08994F00;
    }
L_08994F00:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_08994F64;
      }
      goto L_08994F08;
    }
L_08994F08:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08994F44;
      }
      goto L_08994F1C;
    }
L_08994F1C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08994F28u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08994F28u) goto L_08994F28;
    return;
L_08994F28:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994F40;
      }
      goto L_08994F34;
    }
L_08994F34:
    ctx.gpr[31] = (0x08994F3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08994F3Cu) goto L_08994F3C;
    return;
L_08994F3C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08994F40;
L_08994F40:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08994F44;
L_08994F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08994F50u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14612));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08994F50u) goto L_08994F50;
    return;
L_08994F50:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08994F5Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x08994F5Cu) goto L_08994F5C;
    return;
L_08994F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994F64;
    }
L_08994F64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_08994F6C;
    }
L_08994F6C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_08994FD0;
      }
      goto L_08994F74;
    }
L_08994F74:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08994FB0;
      }
      goto L_08994F88;
    }
L_08994F88:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08994F94u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08994F94u) goto L_08994F94;
    return;
L_08994F94:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994FAC;
      }
      goto L_08994FA0;
    }
L_08994FA0:
    ctx.gpr[31] = (0x08994FA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08994FA8u) goto L_08994FA8;
    return;
L_08994FA8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08994FAC;
L_08994FAC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08994FB0;
L_08994FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08994FBCu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14604));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08994FBCu) goto L_08994FBC;
    return;
L_08994FBC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08994FC8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x08994FC8u) goto L_08994FC8;
    return;
L_08994FC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994FD0;
    }
L_08994FD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_08994FD8;
    }
L_08994FD8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_0899503C;
      }
      goto L_08994FE0;
    }
L_08994FE0:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_0899501C;
      }
      goto L_08994FF4;
    }
L_08994FF4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08995000u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08995000u) goto L_08995000;
    return;
L_08995000:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995018;
      }
      goto L_0899500C;
    }
L_0899500C:
    ctx.gpr[31] = (0x08995014u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08995014u) goto L_08995014;
    return;
L_08995014:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08995018;
L_08995018:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_0899501C;
L_0899501C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08995028u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14596));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08995028u) goto L_08995028;
    return;
L_08995028:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08995034u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x08995034u) goto L_08995034;
    return;
L_08995034:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899503C;
    }
L_0899503C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_08995044;
    }
L_08995044:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_089950A8;
      }
      goto L_0899504C;
    }
L_0899504C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08995088;
      }
      goto L_08995060;
    }
L_08995060:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0899506Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0899506Cu) goto L_0899506C;
    return;
L_0899506C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995084;
      }
      goto L_08995078;
    }
L_08995078:
    ctx.gpr[31] = (0x08995080u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08995080u) goto L_08995080;
    return;
L_08995080:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08995084;
L_08995084:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08995088;
L_08995088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08995094u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14588));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08995094u) goto L_08995094;
    return;
L_08995094:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089950A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x089950A0u) goto L_089950A0;
    return;
L_089950A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089950A8;
    }
L_089950A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_089950B0;
    }
L_089950B0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_08995114;
      }
      goto L_089950B8;
    }
L_089950B8:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_089950F4;
      }
      goto L_089950CC;
    }
L_089950CC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089950D8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089950D8u) goto L_089950D8;
    return;
L_089950D8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089950F0;
      }
      goto L_089950E4;
    }
L_089950E4:
    ctx.gpr[31] = (0x089950ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089950ECu) goto L_089950EC;
    return;
L_089950EC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089950F0;
L_089950F0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089950F4;
L_089950F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08995100u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14580));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08995100u) goto L_08995100;
    return;
L_08995100:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0899510Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x0899510Cu) goto L_0899510C;
    return;
L_0899510C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995114;
    }
L_08995114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_0899511C;
    }
L_0899511C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_08995180;
      }
      goto L_08995124;
    }
L_08995124:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08995160;
      }
      goto L_08995138;
    }
L_08995138:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08995144u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08995144u) goto L_08995144;
    return;
L_08995144:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899515C;
      }
      goto L_08995150;
    }
L_08995150:
    ctx.gpr[31] = (0x08995158u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08995158u) goto L_08995158;
    return;
L_08995158:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0899515C;
L_0899515C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08995160;
L_08995160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0899516Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14572));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0899516Cu) goto L_0899516C;
    return;
L_0899516C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08995178u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x08995178u) goto L_08995178;
    return;
L_08995178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995180;
    }
L_08995180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_08995188;
    }
L_08995188:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_089951EC;
      }
      goto L_08995190;
    }
L_08995190:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_089951CC;
      }
      goto L_089951A4;
    }
L_089951A4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089951B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089951B0u) goto L_089951B0;
    return;
L_089951B0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089951C8;
      }
      goto L_089951BC;
    }
L_089951BC:
    ctx.gpr[31] = (0x089951C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089951C4u) goto L_089951C4;
    return;
L_089951C4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089951C8;
L_089951C8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089951CC;
L_089951CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x089951D8u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14564));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089951D8u) goto L_089951D8;
    return;
L_089951D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089951E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x089951E4u) goto L_089951E4;
    return;
L_089951E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089951EC;
    }
L_089951EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_089951F4;
    }
L_089951F4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_08995258;
      }
      goto L_089951FC;
    }
L_089951FC:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08995238;
      }
      goto L_08995210;
    }
L_08995210:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0899521Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0899521Cu) goto L_0899521C;
    return;
L_0899521C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995234;
      }
      goto L_08995228;
    }
L_08995228:
    ctx.gpr[31] = (0x08995230u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08995230u) goto L_08995230;
    return;
L_08995230:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08995234;
L_08995234:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08995238;
L_08995238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08995244u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14556));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08995244u) goto L_08995244;
    return;
L_08995244:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08995250u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x08995250u) goto L_08995250;
    return;
L_08995250:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995258;
    }
L_08995258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_08995260;
    }
L_08995260:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_089952C4;
      }
      goto L_08995268;
    }
L_08995268:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_089952A4;
      }
      goto L_0899527C;
    }
L_0899527C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08995288u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08995288u) goto L_08995288;
    return;
L_08995288:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089952A0;
      }
      goto L_08995294;
    }
L_08995294:
    ctx.gpr[31] = (0x0899529Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0899529Cu) goto L_0899529C;
    return;
L_0899529C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089952A0;
L_089952A0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089952A4;
L_089952A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x089952B0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14548));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089952B0u) goto L_089952B0;
    return;
L_089952B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089952BCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x089952BCu) goto L_089952BC;
    return;
L_089952BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089952C4;
    }
L_089952C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_089952CC;
    }
L_089952CC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_08995330;
      }
      goto L_089952D4;
    }
L_089952D4:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08995310;
      }
      goto L_089952E8;
    }
L_089952E8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089952F4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089952F4u) goto L_089952F4;
    return;
L_089952F4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899530C;
      }
      goto L_08995300;
    }
L_08995300:
    ctx.gpr[31] = (0x08995308u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08995308u) goto L_08995308;
    return;
L_08995308:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0899530C;
L_0899530C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08995310;
L_08995310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0899531Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14540));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0899531Cu) goto L_0899531C;
    return;
L_0899531C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08995328u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x08995328u) goto L_08995328;
    return;
L_08995328:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995330;
    }
L_08995330:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_08995338;
    }
L_08995338:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_0899539C;
      }
      goto L_08995340;
    }
L_08995340:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_0899537C;
      }
      goto L_08995354;
    }
L_08995354:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08995360u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08995360u) goto L_08995360;
    return;
L_08995360:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995378;
      }
      goto L_0899536C;
    }
L_0899536C:
    ctx.gpr[31] = (0x08995374u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08995374u) goto L_08995374;
    return;
L_08995374:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08995378;
L_08995378:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_0899537C;
L_0899537C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08995388u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14532));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08995388u) goto L_08995388;
    return;
L_08995388:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08995394u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x08995394u) goto L_08995394;
    return;
L_08995394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899539C;
    }
L_0899539C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_089953A4;
    }
L_089953A4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_08995408;
      }
      goto L_089953AC;
    }
L_089953AC:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[16] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_089953E8;
      }
      goto L_089953C0;
    }
L_089953C0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089953CCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089953CCu) goto L_089953CC;
    return;
L_089953CC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089953E4;
      }
      goto L_089953D8;
    }
L_089953D8:
    ctx.gpr[31] = (0x089953E0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089953E0u) goto L_089953E0;
    return;
L_089953E0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089953E4;
L_089953E4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_089953E8;
L_089953E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x089953F4u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14524));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089953F4u) goto L_089953F4;
    return;
L_089953F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08995400u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x08995400u) goto L_08995400;
    return;
L_08995400:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995408;
    }
L_08995408:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0899540C;
L_0899540C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995428;
      }
      goto L_08995414;
    }
L_08995414:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899545C;
      }
      goto L_08995420;
    }
L_08995420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08995488;
      }
      goto L_08995428;
    }
L_08995428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14516));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995454u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995454:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899545C;
    }
L_0899545C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9048)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14508));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995480u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995480:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995488;
    }
L_08995488:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089954A8;
      }
      goto L_08995494;
    }
L_08995494:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089954D4;
      }
      goto L_089954A0;
    }
L_089954A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08995500;
      }
      goto L_089954A8;
    }
L_089954A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9052)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14500));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089954CCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089954CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089954D4;
    }
L_089954D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9056)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14492));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(284));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089954F8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089954F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995500;
    }
L_08995500:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995520;
      }
      goto L_0899550C;
    }
L_0899550C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899554C;
      }
      goto L_08995518;
    }
L_08995518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08995578;
      }
      goto L_08995520;
    }
L_08995520:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9060)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14484));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995544u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899554C;
    }
L_0899554C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8144)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14476));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995570u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995570:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995578;
    }
L_08995578:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995598;
      }
      goto L_08995584;
    }
L_08995584:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089955C4;
      }
      goto L_08995590;
    }
L_08995590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089955F0;
      }
      goto L_08995598;
    }
L_08995598:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9040)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14468));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089955BCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089955BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089955C4;
    }
L_089955C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9044)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14460));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089955E8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089955E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089955F0;
    }
L_089955F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9352)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995638;
      }
      goto L_089955FC;
    }
L_089955FC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899560C;
      }
      goto L_08995604;
    }
L_08995604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995638;
      }
      goto L_0899560C;
    }
L_0899560C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9352)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14452));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995630u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995638;
    }
L_08995638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9360)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08995680;
      }
      goto L_08995644;
    }
L_08995644:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995654;
      }
      goto L_0899564C;
    }
L_0899564C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995680;
      }
      goto L_08995654;
    }
L_08995654:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9360)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14444));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995678u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995680;
    }
L_08995680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8116)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089956C8;
      }
      goto L_0899568C;
    }
L_0899568C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899569C;
      }
      goto L_08995694;
    }
L_08995694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089956C8;
      }
      goto L_0899569C;
    }
L_0899569C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8116)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14436));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(312));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089956C0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089956C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089956C8;
    }
L_089956C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8120)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08995714;
      }
      goto L_089956D4;
    }
L_089956D4:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8120)));
        goto L_089956E4;
    }
    goto L_089956DC;
L_089956DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995714;
      }
      goto L_089956E4;
    }
L_089956E4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(316));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 3u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14428));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0899570Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08996D78;
L_0899570C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995714;
    }
L_08995714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9348)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0899575C;
      }
      goto L_08995720;
    }
L_08995720:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995730;
      }
      goto L_08995728;
    }
L_08995728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899575C;
      }
      goto L_08995730;
    }
L_08995730:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9348)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14420));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995754u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899575C;
    }
L_0899575C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9364)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089957A4;
      }
      goto L_08995768;
    }
L_08995768:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995778;
      }
      goto L_08995770;
    }
L_08995770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089957A4;
      }
      goto L_08995778;
    }
L_08995778:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9364)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14412));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(324));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0899579Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_0899579C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089957A4;
    }
L_089957A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9356)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089957EC;
      }
      goto L_089957B0;
    }
L_089957B0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089957C0;
      }
      goto L_089957B8;
    }
L_089957B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089957EC;
      }
      goto L_089957C0;
    }
L_089957C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9356)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14404));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089957E4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089957E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089957EC;
    }
L_089957EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9368)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08995834;
      }
      goto L_089957F8;
    }
L_089957F8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995808;
      }
      goto L_08995800;
    }
L_08995800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995834;
      }
      goto L_08995808;
    }
L_08995808:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9368)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14396));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(332));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0899582Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_0899582C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995834;
    }
L_08995834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08995884;
      }
      goto L_08995840;
    }
L_08995840:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995850;
      }
      goto L_08995848;
    }
L_08995848:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995884;
      }
      goto L_08995850;
    }
L_08995850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14388));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0899587Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_0899587C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995884;
    }
L_08995884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089958D0;
      }
      goto L_08995890;
    }
L_08995890:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8196)));
        goto L_089958A0;
    }
    goto L_08995898;
L_08995898:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089958D0;
      }
      goto L_089958A0;
    }
L_089958A0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(344));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 3u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14380));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089958C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08996D78;
L_089958C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089958D0;
    }
L_089958D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8200)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995934;
      }
      goto L_089958E8;
    }
L_089958E8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089958F8;
      }
      goto L_089958F0;
    }
L_089958F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995934;
      }
      goto L_089958F8;
    }
L_089958F8:
    ctx.gpr[31] = (0x08995900u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8200)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x08995900u) goto L_08995900;
    return;
L_08995900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8200)));
    ctx.gpr[31] = (0x0899590Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x0899590Cu) goto L_0899590C;
    return;
L_0899590C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14372));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(348));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0899592Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_0899592C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995934;
    }
L_08995934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8204)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995998;
      }
      goto L_0899594C;
    }
L_0899594C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899595C;
      }
      goto L_08995954;
    }
L_08995954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995998;
      }
      goto L_0899595C;
    }
L_0899595C:
    ctx.gpr[31] = (0x08995964u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8204)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x08995964u) goto L_08995964;
    return;
L_08995964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8204)));
    ctx.gpr[31] = (0x08995970u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x08995970u) goto L_08995970;
    return;
L_08995970:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14364));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(356));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08995990u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995990:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995998;
    }
L_08995998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8208)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089959FC;
      }
      goto L_089959B0;
    }
L_089959B0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089959C0;
      }
      goto L_089959B8;
    }
L_089959B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089959FC;
      }
      goto L_089959C0;
    }
L_089959C0:
    ctx.gpr[31] = (0x089959C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8208)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x089959C8u) goto L_089959C8;
    return;
L_089959C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8208)));
    ctx.gpr[31] = (0x089959D4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x089959D4u) goto L_089959D4;
    return;
L_089959D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14356));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(364));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089959F4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089959F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089959FC;
    }
L_089959FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8168)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08995A44;
      }
      goto L_08995A08;
    }
L_08995A08:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995A18;
      }
      goto L_08995A10;
    }
L_08995A10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995A44;
      }
      goto L_08995A18;
    }
L_08995A18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8168)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14348));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(372));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995A3Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995A44;
    }
L_08995A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8212)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08995A90;
      }
      goto L_08995A50;
    }
L_08995A50:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8212)));
        goto L_08995A60;
    }
    goto L_08995A58;
L_08995A58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995A90;
      }
      goto L_08995A60;
    }
L_08995A60:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(376));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 3u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14340));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08995A88u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08996D78;
L_08995A88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995A90;
    }
L_08995A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8216)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08995AD8;
      }
      goto L_08995A9C;
    }
L_08995A9C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995AAC;
      }
      goto L_08995AA4;
    }
L_08995AA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995AD8;
      }
      goto L_08995AAC;
    }
L_08995AAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8216)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14332));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(380));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995AD0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995AD8;
    }
L_08995AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8220)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08995B20;
      }
      goto L_08995AE4;
    }
L_08995AE4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995AF4;
      }
      goto L_08995AEC;
    }
L_08995AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995B20;
      }
      goto L_08995AF4;
    }
L_08995AF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8220)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14324));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995B18u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995B18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995B20;
    }
L_08995B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8224)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08995B68;
      }
      goto L_08995B2C;
    }
L_08995B2C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995B3C;
      }
      goto L_08995B34;
    }
L_08995B34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995B68;
      }
      goto L_08995B3C;
    }
L_08995B3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8224)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14316));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995B60u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995B60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995B68;
    }
L_08995B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8228)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08995BB0;
      }
      goto L_08995B74;
    }
L_08995B74:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995B84;
      }
      goto L_08995B7C;
    }
L_08995B7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995BB0;
      }
      goto L_08995B84;
    }
L_08995B84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8228)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14308));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(392));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995BA8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995BB0;
    }
L_08995BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8232)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08995BF8;
      }
      goto L_08995BBC;
    }
L_08995BBC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995BCC;
      }
      goto L_08995BC4;
    }
L_08995BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995BF8;
      }
      goto L_08995BCC;
    }
L_08995BCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8232)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14300));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(396));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995BF0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995BF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995BF8;
    }
L_08995BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8236)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08995C40;
      }
      goto L_08995C04;
    }
L_08995C04:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995C14;
      }
      goto L_08995C0C;
    }
L_08995C0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995C40;
      }
      goto L_08995C14;
    }
L_08995C14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8236)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14292));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995C38u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995C38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995C40;
    }
L_08995C40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8240)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995CA4;
      }
      goto L_08995C58;
    }
L_08995C58:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995C68;
      }
      goto L_08995C60;
    }
L_08995C60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995CA4;
      }
      goto L_08995C68;
    }
L_08995C68:
    ctx.gpr[31] = (0x08995C70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8240)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x08995C70u) goto L_08995C70;
    return;
L_08995C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8240)));
    ctx.gpr[31] = (0x08995C7Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x08995C7Cu) goto L_08995C7C;
    return;
L_08995C7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14284));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08995C9Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995C9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995CA4;
    }
L_08995CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8244)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995D08;
      }
      goto L_08995CBC;
    }
L_08995CBC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995CCC;
      }
      goto L_08995CC4;
    }
L_08995CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995D08;
      }
      goto L_08995CCC;
    }
L_08995CCC:
    ctx.gpr[31] = (0x08995CD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8244)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x08995CD4u) goto L_08995CD4;
    return;
L_08995CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8244)));
    ctx.gpr[31] = (0x08995CE0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x08995CE0u) goto L_08995CE0;
    return;
L_08995CE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14276));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08995D00u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995D00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995D08;
    }
L_08995D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8248)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995D6C;
      }
      goto L_08995D20;
    }
L_08995D20:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995D30;
      }
      goto L_08995D28;
    }
L_08995D28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995D6C;
      }
      goto L_08995D30;
    }
L_08995D30:
    ctx.gpr[31] = (0x08995D38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8248)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x08995D38u) goto L_08995D38;
    return;
L_08995D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8248)));
    ctx.gpr[31] = (0x08995D44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x08995D44u) goto L_08995D44;
    return;
L_08995D44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14268));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(420));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(424));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08995D64u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995D6C;
    }
L_08995D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8252)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995DD0;
      }
      goto L_08995D84;
    }
L_08995D84:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995D94;
      }
      goto L_08995D8C;
    }
L_08995D8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995DD0;
      }
      goto L_08995D94;
    }
L_08995D94:
    ctx.gpr[31] = (0x08995D9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8252)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x08995D9Cu) goto L_08995D9C;
    return;
L_08995D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8252)));
    ctx.gpr[31] = (0x08995DA8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x08995DA8u) goto L_08995DA8;
    return;
L_08995DA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14260));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(428));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08995DC8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995DC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995DD0;
    }
L_08995DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8256)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995E34;
      }
      goto L_08995DE8;
    }
L_08995DE8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995DF8;
      }
      goto L_08995DF0;
    }
L_08995DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995E34;
      }
      goto L_08995DF8;
    }
L_08995DF8:
    ctx.gpr[31] = (0x08995E00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8256)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x08995E00u) goto L_08995E00;
    return;
L_08995E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8256)));
    ctx.gpr[31] = (0x08995E0Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x08995E0Cu) goto L_08995E0C;
    return;
L_08995E0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14252));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(436));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(440));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08995E2Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995E34;
    }
L_08995E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8172)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08995EB4;
      }
      goto L_08995E40;
    }
L_08995E40:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995E5C;
      }
      goto L_08995E48;
    }
L_08995E48:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995E88;
      }
      goto L_08995E54;
    }
L_08995E54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995EB4;
      }
      goto L_08995E5C;
    }
L_08995E5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8172)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14244));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(444));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995E80u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995E80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995E88;
    }
L_08995E88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8176)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14236));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995EACu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995EB4;
    }
L_08995EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8280)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08995F84;
      }
      goto L_08995EC0;
    }
L_08995EC0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995EDC;
      }
      goto L_08995EC8;
    }
L_08995EC8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995F08;
      }
      goto L_08995ED4;
    }
L_08995ED4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08995F44;
      }
      goto L_08995EDC;
    }
L_08995EDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8280)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14228));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(452));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995F00u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995F00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995F08;
    }
L_08995F08:
    ctx.gpr[31] = (0x08995F10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8272)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x08995F10u) goto L_08995F10;
    return;
L_08995F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8272)));
    ctx.gpr[31] = (0x08995F1Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x08995F1Cu) goto L_08995F1C;
    return;
L_08995F1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14220));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(456));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(460));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08995F3Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995F3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995F44;
    }
L_08995F44:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08995F58;
      }
      goto L_08995F50;
    }
L_08995F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995F84;
      }
      goto L_08995F58;
    }
L_08995F58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8276)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14212));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995F7Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995F7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995F84;
    }
L_08995F84:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899610C;
      }
      goto L_08995F94;
    }
L_08995F94:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17624));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089960FC;
      }
      goto L_08995FB8;
    }
L_08995FB8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(468));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14204));
    ctx.gpr[31] = (0x08995FC8u);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08995FC8u) goto L_08995FC8;
    return;
L_08995FC8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(468));
      if (branch_taken) {
          goto L_08995FE4;
      }
      goto L_08995FD0;
    }
L_08995FD0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996004;
      }
      goto L_08995FDC;
    }
L_08995FDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996040;
      }
      goto L_08995FE4;
    }
L_08995FE4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08995FFCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995FFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996004;
    }
L_08996004:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17624));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08996038u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_08996038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996040;
    }
L_08996040:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996060;
      }
      goto L_0899604C;
    }
L_0899604C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089960AC;
      }
      goto L_08996058;
    }
L_08996058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089960F8;
      }
      goto L_08996060;
    }
L_08996060:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17704));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08996078u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x08996078u) goto L_08996078;
    return;
L_08996078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08996084u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x08996084u) goto L_08996084;
    return;
L_08996084:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14184));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(492));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089960A4u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_089960A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089960AC;
    }
L_089960AC:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17664));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089960C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x089960C4u) goto L_089960C4;
    return;
L_089960C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089960D0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x089960D0u) goto L_089960D0;
    return;
L_089960D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14176));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(500));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(504));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089960F0u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_089960F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089960F8;
    }
L_089960F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089960FC;
L_089960FC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08995F94;
      }
      goto L_0899610C;
    }
L_0899610C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08996280;
      }
      goto L_0899611C;
    }
L_0899611C:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17904));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996270;
      }
      goto L_08996138;
    }
L_08996138:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08996174;
      }
      goto L_08996140;
    }
L_08996140:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14168));
      if (branch_taken) {
          goto L_08996154;
      }
      goto L_08996148;
    }
L_08996148:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08996174;
      }
      goto L_08996154;
    }
L_08996154:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0899616Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_0899616C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996174;
    }
L_08996174:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(508));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14160));
    ctx.gpr[31] = (0x08996184u);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08996184u) goto L_08996184;
    return;
L_08996184:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089961A0;
      }
      goto L_0899618C;
    }
L_0899618C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089961C4;
      }
      goto L_08996198;
    }
L_08996198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996210;
      }
      goto L_089961A0;
    }
L_089961A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(508));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089961BCu);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_089961BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089961C4;
    }
L_089961C4:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17936));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089961DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x089961DCu) goto L_089961DC;
    return;
L_089961DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089961E8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x089961E8u) goto L_089961E8;
    return;
L_089961E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14184));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08996208u);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_08996208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996210;
    }
L_08996210:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996224;
      }
      goto L_0899621C;
    }
L_0899621C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996270;
      }
      goto L_08996224;
    }
L_08996224:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17904));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0899623Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x0899623Cu) goto L_0899623C;
    return;
L_0899623C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08996248u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x08996248u) goto L_08996248;
    return;
L_08996248:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14176));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(536));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(540));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08996268u);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_08996268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996270;
    }
L_08996270:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899611C;
      }
      goto L_08996280;
    }
L_08996280:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089963FC;
      }
      goto L_08996294;
    }
L_08996294:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17744));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089963EC;
      }
      goto L_089962B0;
    }
L_089962B0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089962F0;
      }
      goto L_089962B8;
    }
L_089962B8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14148));
      if (branch_taken) {
          goto L_089962D0;
      }
      goto L_089962C0;
    }
L_089962C0:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089962F0;
      }
      goto L_089962D0;
    }
L_089962D0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089962E8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089962E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089962F0;
    }
L_089962F0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14160));
    ctx.gpr[31] = (0x08996300u);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08996300u) goto L_08996300;
    return;
L_08996300:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899631C;
      }
      goto L_08996308;
    }
L_08996308:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996340;
      }
      goto L_08996314;
    }
L_08996314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899638C;
      }
      goto L_0899631C;
    }
L_0899631C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08996338u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_08996338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996340;
    }
L_08996340:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17792));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08996358u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x08996358u) goto L_08996358;
    return;
L_08996358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08996364u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x08996364u) goto L_08996364;
    return;
L_08996364:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14184));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(564));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(568));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08996384u);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_08996384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899638C;
    }
L_0899638C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089963A0;
      }
      goto L_08996398;
    }
L_08996398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089963EC;
      }
      goto L_089963A0;
    }
L_089963A0:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17744));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089963B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x089963B8u) goto L_089963B8;
    return;
L_089963B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089963C4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x089963C4u) goto L_089963C4;
    return;
L_089963C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14176));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(572));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089963E4u);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_089963E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089963EC;
    }
L_089963EC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08996294;
      }
      goto L_089963FC;
    }
L_089963FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8260)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08996458;
      }
      goto L_08996414;
    }
L_08996414:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996458;
      }
      goto L_0899641C;
    }
L_0899641C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899642C;
      }
      goto L_08996424;
    }
L_08996424:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996458;
      }
      goto L_0899642C;
    }
L_0899642C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8260)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14140));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(580));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08996450u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_08996450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996458;
    }
L_08996458:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089965D4;
      }
      goto L_0899646C;
    }
L_0899646C:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089965C4;
      }
      goto L_08996488;
    }
L_08996488:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089964C8;
      }
      goto L_08996490;
    }
L_08996490:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14132));
      if (branch_taken) {
          goto L_089964A8;
      }
      goto L_08996498;
    }
L_08996498:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089964C8;
      }
      goto L_089964A8;
    }
L_089964A8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089964C0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089964C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089964C8;
    }
L_089964C8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(584));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14160));
    ctx.gpr[31] = (0x089964D8u);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089964D8u) goto L_089964D8;
    return;
L_089964D8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089964F4;
      }
      goto L_089964E0;
    }
L_089964E0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996518;
      }
      goto L_089964EC;
    }
L_089964EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996564;
      }
      goto L_089964F4;
    }
L_089964F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(584));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08996510u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_08996510:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996518;
    }
L_08996518:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17872));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08996530u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x08996530u) goto L_08996530;
    return;
L_08996530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0899653Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x0899653Cu) goto L_0899653C;
    return;
L_0899653C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14184));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(604));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0899655Cu);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_0899655C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996564;
    }
L_08996564:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996578;
      }
      goto L_08996570;
    }
L_08996570:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089965C4;
      }
      goto L_08996578;
    }
L_08996578:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08996590u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x08996590u) goto L_08996590;
    return;
L_08996590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0899659Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x0899659Cu) goto L_0899659C;
    return;
L_0899659C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14176));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(612));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(616));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089965BCu);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_089965BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089965C4;
    }
L_089965C4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899646C;
      }
      goto L_089965D4;
    }
L_089965D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8264)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08996630;
      }
      goto L_089965EC;
    }
L_089965EC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996630;
      }
      goto L_089965F4;
    }
L_089965F4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996604;
      }
      goto L_089965FC;
    }
L_089965FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996630;
      }
      goto L_08996604;
    }
L_08996604:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8264)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14140));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(620));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08996628u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_08996628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996630;
    }
L_08996630:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08996794;
      }
      goto L_08996644;
    }
L_08996644:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9416)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996784;
      }
      goto L_08996658;
    }
L_08996658:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08996698;
      }
      goto L_08996660;
    }
L_08996660:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14124));
      if (branch_taken) {
          goto L_08996678;
      }
      goto L_08996668;
    }
L_08996668:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08996698;
      }
      goto L_08996678;
    }
L_08996678:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08996690u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996698;
    }
L_08996698:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14160));
    ctx.gpr[31] = (0x089966A8u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089966A8u) goto L_089966A8;
    return;
L_089966A8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089966C4;
      }
      goto L_089966B0;
    }
L_089966B0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089966E8;
      }
      goto L_089966BC;
    }
L_089966BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899672C;
      }
      goto L_089966C4;
    }
L_089966C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089966E0u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_089966E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089966E8;
    }
L_089966E8:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[16] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089966F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9432)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x089966F8u) goto L_089966F8;
    return;
L_089966F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9432)));
    ctx.gpr[31] = (0x08996704u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x08996704u) goto L_08996704;
    return;
L_08996704:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14184));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(644));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(648));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08996724u);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_08996724:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899672C;
    }
L_0899672C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996740;
      }
      goto L_08996738;
    }
L_08996738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996784;
      }
      goto L_08996740;
    }
L_08996740:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[16] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08996750u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem) && ctx.pc == 0x08996750u) goto L_08996750;
    return;
L_08996750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    ctx.gpr[31] = (0x0899675Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem) && ctx.pc == 0x0899675Cu) goto L_0899675C;
    return;
L_0899675C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14176));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(652));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0899677Cu);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_0899677C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996784;
    }
L_08996784:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08996644;
      }
      goto L_08996794;
    }
L_08996794:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8268)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089967F0;
      }
      goto L_089967AC;
    }
L_089967AC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089967F0;
      }
      goto L_089967B4;
    }
L_089967B4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089967C4;
      }
      goto L_089967BC;
    }
L_089967BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089967F0;
      }
      goto L_089967C4;
    }
L_089967C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8268)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14140));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(660));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089967E8u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_089967E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089967F0;
    }
L_089967F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9372)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08996838;
      }
      goto L_089967FC;
    }
L_089967FC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899680C;
      }
      goto L_08996804;
    }
L_08996804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996838;
      }
      goto L_0899680C;
    }
L_0899680C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9372)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14116));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(664));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08996830u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996838;
    }
L_08996838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9404)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996880;
      }
      goto L_08996844;
    }
L_08996844:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996854;
      }
      goto L_0899684C;
    }
L_0899684C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996880;
      }
      goto L_08996854;
    }
L_08996854:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9404)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14108));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(668));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08996878u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996880;
    }
L_08996880:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899689C;
      }
      goto L_08996888;
    }
L_08996888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9388)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089968C8;
      }
      goto L_08996894;
    }
L_08996894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996904;
      }
      goto L_0899689C;
    }
L_0899689C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8684)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089968C0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089968C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089968C8;
    }
L_089968C8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089968D8;
      }
      goto L_089968D0;
    }
L_089968D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996904;
      }
      goto L_089968D8;
    }
L_089968D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9388)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14092));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(676));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089968FCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089968FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996904;
    }
L_08996904:
    ctx.gpr[31] = (0x0899690Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 286u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x0899690Cu) goto L_0899690C;
    return;
L_0899690C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08996B3C;
      }
      goto L_08996914;
    }
L_08996914:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996A24;
      }
      goto L_0899691C;
    }
L_0899691C:
    ctx.gpr[31] = (0x08996924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 293u, 0x08991444u>(ctx, &aot_mem) && ctx.pc == 0x08996924u) goto L_08996924;
    return;
L_08996924:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996A0C;
      }
      goto L_08996934;
    }
L_08996934:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4856)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899694C:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14084));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14076));
    ctx.gpr[31] = (0x0899695Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x0899695Cu) goto L_0899695C;
    return;
L_0899695C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_08996964;
    }
L_08996964:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14084));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14068));
    ctx.gpr[31] = (0x08996974u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08996974u) goto L_08996974;
    return;
L_08996974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_0899697C;
    }
L_0899697C:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14084));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14060));
    ctx.gpr[31] = (0x0899698Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x0899698Cu) goto L_0899698C;
    return;
L_0899698C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_08996994;
    }
L_08996994:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14084));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14052));
    ctx.gpr[31] = (0x089969A4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x089969A4u) goto L_089969A4;
    return;
L_089969A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_089969AC;
    }
L_089969AC:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14084));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14044));
    ctx.gpr[31] = (0x089969BCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x089969BCu) goto L_089969BC;
    return;
L_089969BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_089969C4;
    }
L_089969C4:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14084));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14036));
    ctx.gpr[31] = (0x089969D4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x089969D4u) goto L_089969D4;
    return;
L_089969D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_089969DC;
    }
L_089969DC:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14084));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14028));
    ctx.gpr[31] = (0x089969ECu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x089969ECu) goto L_089969EC;
    return;
L_089969EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_089969F4;
    }
L_089969F4:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14084));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14020));
    ctx.gpr[31] = (0x08996A04u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08996A04u) goto L_08996A04;
    return;
L_08996A04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_08996A0C;
    }
L_08996A0C:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14084));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14012));
    ctx.gpr[31] = (0x08996A1Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08996A1Cu) goto L_08996A1C;
    return;
L_08996A1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996A24;
    }
L_08996A24:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996B38;
      }
      goto L_08996A30;
    }
L_08996A30:
    ctx.gpr[31] = (0x08996A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 298u, 0x08991490u>(ctx, &aot_mem) && ctx.pc == 0x08996A38u) goto L_08996A38;
    return;
L_08996A38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996B20;
      }
      goto L_08996A48;
    }
L_08996A48:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4824)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08996A60:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14004));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14076));
    ctx.gpr[31] = (0x08996A70u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08996A70u) goto L_08996A70;
    return;
L_08996A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996A78;
    }
L_08996A78:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14004));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14068));
    ctx.gpr[31] = (0x08996A88u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08996A88u) goto L_08996A88;
    return;
L_08996A88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996A90;
    }
L_08996A90:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14004));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14060));
    ctx.gpr[31] = (0x08996AA0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08996AA0u) goto L_08996AA0;
    return;
L_08996AA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996AA8;
    }
L_08996AA8:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14004));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14052));
    ctx.gpr[31] = (0x08996AB8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08996AB8u) goto L_08996AB8;
    return;
L_08996AB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996AC0;
    }
L_08996AC0:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14004));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14044));
    ctx.gpr[31] = (0x08996AD0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08996AD0u) goto L_08996AD0;
    return;
L_08996AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996AD8;
    }
L_08996AD8:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14004));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14036));
    ctx.gpr[31] = (0x08996AE8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08996AE8u) goto L_08996AE8;
    return;
L_08996AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996AF0;
    }
L_08996AF0:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14004));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14028));
    ctx.gpr[31] = (0x08996B00u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08996B00u) goto L_08996B00;
    return;
L_08996B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996B08;
    }
L_08996B08:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14004));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14020));
    ctx.gpr[31] = (0x08996B18u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08996B18u) goto L_08996B18;
    return;
L_08996B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996B20;
    }
L_08996B20:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14004));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-14012));
    ctx.gpr[31] = (0x08996B30u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08996B30u) goto L_08996B30;
    return;
L_08996B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996B38;
    }
L_08996B38:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08996B3C;
L_08996B3C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996B58;
      }
      goto L_08996B44;
    }
L_08996B44:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996B84;
      }
      goto L_08996B50;
    }
L_08996B50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996BB0;
      }
      goto L_08996B58;
    }
L_08996B58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9344)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13996));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(680));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08996B7Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996B7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996B84;
    }
L_08996B84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9392)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13988));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(684));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08996BA8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996BB0;
    }
L_08996BB0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996BD0;
      }
      goto L_08996BBC;
    }
L_08996BBC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7904)));
        goto L_08996BFC;
    }
    goto L_08996BC8;
L_08996BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996C2C;
      }
      goto L_08996BD0;
    }
L_08996BD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9396)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13980));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08996BF4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996BF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996BFC;
    }
L_08996BFC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(692));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 3u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13972));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08996C24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08996D78;
L_08996C24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996C2C;
    }
L_08996C2C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996C4C;
      }
      goto L_08996C38;
    }
L_08996C38:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996C70;
      }
      goto L_08996C44;
    }
L_08996C44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996C9C;
      }
      goto L_08996C4C;
    }
L_08996C4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9088)));
    ctx.gpr[31] = (0x08996C58u);
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13964));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 170u, 0x08990C28u>(ctx, &aot_mem) && ctx.pc == 0x08996C58u) goto L_08996C58;
    return;
L_08996C58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08996C68u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem) && ctx.pc == 0x08996C68u) goto L_08996C68;
    return;
L_08996C68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996C70;
    }
L_08996C70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8140)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13956));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(696));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08996C94u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996C94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996C9C;
    }
L_08996C9C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D54;
      }
      goto L_08996CAC;
    }
L_08996CAC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9400)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] << (ctx.gpr[19] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996D44;
      }
      goto L_08996CC4;
    }
L_08996CC4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08996D00;
      }
      goto L_08996CCC;
    }
L_08996CCC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13948));
      if (branch_taken) {
          goto L_08996CE0;
      }
      goto L_08996CD4;
    }
L_08996CD4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08996D00;
      }
      goto L_08996CE0;
    }
L_08996CE0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08996CF8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996D00;
    }
L_08996D00:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(700));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13940));
    ctx.gpr[31] = (0x08996D10u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08996D10u) goto L_08996D10;
    return;
L_08996D10:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08996D20;
      }
      goto L_08996D18;
    }
L_08996D18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996D44;
      }
      goto L_08996D20;
    }
L_08996D20:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(700));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08996D3Cu);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_08996D3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996D44;
    }
L_08996D44:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08996CAC;
      }
      goto L_08996D54;
    }
L_08996D54:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08996D58;
L_08996D58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(716)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08996D78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08996DE4;
      }
      goto L_08996DB8;
    }
L_08996DB8:
    ctx.gpr[21] = (2247u << 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-800), static_cast<std::uint8_t>(0u));
    ctx.gpr[23] = (2238u << 16u);
    ctx.gpr[20] = (2238u << 16u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-800));
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(-8144));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[17];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08996DEC;
      }
      goto L_08996DDC;
    }
L_08996DDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996E34;
      }
      goto L_08996DE4;
    }
L_08996DE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089974E8;
      }
      goto L_08996DEC;
    }
L_08996DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08996E18;
      }
      goto L_08996DFC;
    }
L_08996DFC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13932));
    ctx.gpr[31] = (0x08996E10u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08996E10u) goto L_08996E10;
    return;
L_08996E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996E2C;
      }
      goto L_08996E18;
    }
L_08996E18:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13924));
    ctx.gpr[31] = (0x08996E2Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08996E2Cu) goto L_08996E2C;
    return;
L_08996E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089973BC;
      }
      goto L_08996E34;
    }
L_08996E34:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997240;
      }
      goto L_08996E3C;
    }
L_08996E3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_08996E4C;
    }
L_08996E4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[22]);
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13904));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08996EF8;
      }
      goto L_08996E68;
    }
L_08996E68:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08996F88;
      }
      goto L_08996E70;
    }
L_08996E70:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089970FC;
      }
      goto L_08996E78;
    }
L_08996E78:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0899708C;
      }
      goto L_08996E80;
    }
L_08996E80:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08996FF8;
      }
      goto L_08996E88;
    }
L_08996E88:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13916));
      if (branch_taken) {
          goto L_08996EC4;
      }
      goto L_08996E9C;
    }
L_08996E9C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08996EA8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08996EA8u) goto L_08996EA8;
    return;
L_08996EA8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996EC0;
      }
      goto L_08996EB4;
    }
L_08996EB4:
    ctx.gpr[31] = (0x08996EBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08996EBCu) goto L_08996EBC;
    return;
L_08996EBC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08996EC0;
L_08996EC0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08996EC4;
L_08996EC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08996ED0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08996ED0u) goto L_08996ED0;
    return;
L_08996ED0:
    ctx.gpr[31] = (0x08996ED8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem) && ctx.pc == 0x08996ED8u) goto L_08996ED8;
    return;
L_08996ED8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08996EF0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08996EF0u) goto L_08996EF0;
    return;
L_08996EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_08996EF8;
    }
L_08996EF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08996F08u);
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13896));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08996F08u) goto L_08996F08;
    return;
L_08996F08:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08996F40;
      }
      goto L_08996F18;
    }
L_08996F18:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08996F24u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08996F24u) goto L_08996F24;
    return;
L_08996F24:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996F3C;
      }
      goto L_08996F30;
    }
L_08996F30:
    ctx.gpr[31] = (0x08996F38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08996F38u) goto L_08996F38;
    return;
L_08996F38:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08996F3C;
L_08996F3C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08996F40;
L_08996F40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08996F4Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08996F4Cu) goto L_08996F4C;
    return;
L_08996F4C:
    ctx.gpr[31] = (0x08996F54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem) && ctx.pc == 0x08996F54u) goto L_08996F54;
    return;
L_08996F54:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08996F60u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08996F60u) goto L_08996F60;
    return;
L_08996F60:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08996F80u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08996F80u) goto L_08996F80;
    return;
L_08996F80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_08996F88;
    }
L_08996F88:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13880));
      if (branch_taken) {
          goto L_08996FC4;
      }
      goto L_08996F9C;
    }
L_08996F9C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08996FA8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08996FA8u) goto L_08996FA8;
    return;
L_08996FA8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996FC0;
      }
      goto L_08996FB4;
    }
L_08996FB4:
    ctx.gpr[31] = (0x08996FBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08996FBCu) goto L_08996FBC;
    return;
L_08996FBC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08996FC0;
L_08996FC0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08996FC4;
L_08996FC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08996FD0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08996FD0u) goto L_08996FD0;
    return;
L_08996FD0:
    ctx.gpr[31] = (0x08996FD8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem) && ctx.pc == 0x08996FD8u) goto L_08996FD8;
    return;
L_08996FD8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08996FF0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08996FF0u) goto L_08996FF0;
    return;
L_08996FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_08996FF8;
    }
L_08996FF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (2232u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0899700Cu);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5008));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x0899700Cu) goto L_0899700C;
    return;
L_0899700C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08997044;
      }
      goto L_0899701C;
    }
L_0899701C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08997028u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08997028u) goto L_08997028;
    return;
L_08997028:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997040;
      }
      goto L_08997034;
    }
L_08997034:
    ctx.gpr[31] = (0x0899703Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0899703Cu) goto L_0899703C;
    return;
L_0899703C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08997040;
L_08997040:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08997044;
L_08997044:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997050u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08997050u) goto L_08997050;
    return;
L_08997050:
    ctx.gpr[31] = (0x08997058u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem) && ctx.pc == 0x08997058u) goto L_08997058;
    return;
L_08997058:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08997064u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08997064u) goto L_08997064;
    return;
L_08997064:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997084u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08997084u) goto L_08997084;
    return;
L_08997084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_0899708C;
    }
L_0899708C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13864));
      if (branch_taken) {
          goto L_089970C8;
      }
      goto L_089970A0;
    }
L_089970A0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089970ACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089970ACu) goto L_089970AC;
    return;
L_089970AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089970C4;
      }
      goto L_089970B8;
    }
L_089970B8:
    ctx.gpr[31] = (0x089970C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089970C0u) goto L_089970C0;
    return;
L_089970C0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089970C4;
L_089970C4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_089970C8;
L_089970C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089970D4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089970D4u) goto L_089970D4;
    return;
L_089970D4:
    ctx.gpr[31] = (0x089970DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem) && ctx.pc == 0x089970DCu) goto L_089970DC;
    return;
L_089970DC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089970F4u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089970F4u) goto L_089970F4;
    return;
L_089970F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_089970FC;
    }
L_089970FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08997110u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08997110u) goto L_08997110;
    return;
L_08997110:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08997120u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08997120u) goto L_08997120;
    return;
L_08997120:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[16]);
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[16] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
      if (branch_taken) {
          goto L_08997148;
      }
      goto L_0899713C;
    }
L_0899713C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), ctx.gpr[17]);
    ctx.gpr[31] = (0x08997148u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem) && ctx.pc == 0x08997148u) goto L_08997148;
    return;
L_08997148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_089971C4;
      }
      goto L_08997154;
    }
L_08997154:
    ctx.gpr[18] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4988));
      if (branch_taken) {
          goto L_08997188;
      }
      goto L_08997160;
    }
L_08997160:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0899716Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0899716Cu) goto L_0899716C;
    return;
L_0899716C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997184;
      }
      goto L_08997178;
    }
L_08997178:
    ctx.gpr[31] = (0x08997180u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08997180u) goto L_08997180;
    return;
L_08997180:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08997184;
L_08997184:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08997188;
L_08997188:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997194u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08997194u) goto L_08997194;
    return;
L_08997194:
    ctx.gpr[31] = (0x0899719Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 300u, 0x089F5A5Cu>(ctx, &aot_mem) && ctx.pc == 0x0899719Cu) goto L_0899719C;
    return;
L_0899719C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089971BCu);
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089971BCu) goto L_089971BC;
    return;
L_089971BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899722C;
      }
      goto L_089971C4;
    }
L_089971C4:
    ctx.gpr[18] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4968));
      if (branch_taken) {
          goto L_089971F8;
      }
      goto L_089971D0;
    }
L_089971D0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089971DCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089971DCu) goto L_089971DC;
    return;
L_089971DC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089971F4;
      }
      goto L_089971E8;
    }
L_089971E8:
    ctx.gpr[31] = (0x089971F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089971F0u) goto L_089971F0;
    return;
L_089971F0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089971F4;
L_089971F4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_089971F8;
L_089971F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997204u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08997204u) goto L_08997204;
    return;
L_08997204:
    ctx.gpr[31] = (0x0899720Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 300u, 0x089F5A5Cu>(ctx, &aot_mem) && ctx.pc == 0x0899720Cu) goto L_0899720C;
    return;
L_0899720C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0899722Cu);
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x0899722Cu) goto L_0899722C;
    return;
L_0899722C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (2238u << 16u);
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_08997240;
    }
L_08997240:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_0899724C;
    }
L_0899724C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_0899725C;
    }
L_0899725C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089972AC;
      }
      goto L_0899726C;
    }
L_0899726C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089972DC;
      }
      goto L_08997274;
    }
L_08997274:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899734C;
      }
      goto L_0899727C;
    }
L_0899727C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0899732C;
      }
      goto L_08997284;
    }
L_08997284:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089972FC;
      }
      goto L_0899728C;
    }
L_0899728C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13848));
    ctx.gpr[31] = (0x089972A4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089972A4u) goto L_089972A4;
    return;
L_089972A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_089972AC;
    }
L_089972AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089972C0u);
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13844));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x089972C0u) goto L_089972C0;
    return;
L_089972C0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089972D4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089972D4u) goto L_089972D4;
    return;
L_089972D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_089972DC;
    }
L_089972DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13836));
    ctx.gpr[31] = (0x089972F4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089972F4u) goto L_089972F4;
    return;
L_089972F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_089972FC;
    }
L_089972FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08997310u);
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13828));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08997310u) goto L_08997310;
    return;
L_08997310:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997324u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08997324u) goto L_08997324;
    return;
L_08997324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_0899732C;
    }
L_0899732C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13820));
    ctx.gpr[31] = (0x08997344u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08997344u) goto L_08997344;
    return;
L_08997344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_0899734C;
    }
L_0899734C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    ctx.gpr[31] = (0x0899735Cu);
    ctx.gpr[16] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x0899735Cu) goto L_0899735C;
    return;
L_0899735C:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08997374;
      }
      goto L_08997368;
    }
L_08997368:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), ctx.gpr[17]);
    ctx.gpr[31] = (0x08997374u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem) && ctx.pc == 0x08997374u) goto L_08997374;
    return;
L_08997374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899739C;
      }
      goto L_08997380;
    }
L_08997380:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13816));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08997394u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08997394u) goto L_08997394;
    return;
L_08997394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089973B0;
      }
      goto L_0899739C;
    }
L_0899739C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13808));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089973B0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x089973B0u) goto L_089973B0;
    return;
L_089973B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    goto L_089973B4;
L_089973B4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    goto L_089973BC;
L_089973BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08997488;
      }
      goto L_089973C8;
    }
L_089973C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997488;
      }
      goto L_089973D0;
    }
L_089973D0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15696));
    ctx.gpr[31] = (0x089973E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem) && ctx.pc == 0x089973E4u) goto L_089973E4;
    return;
L_089973E4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997414;
      }
      goto L_089973F8;
    }
L_089973F8:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08997404u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 846u, 0x08887B30u>(ctx, &aot_mem) && ctx.pc == 0x08997404u) goto L_08997404;
    return;
L_08997404:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089973F8;
      }
      goto L_08997414;
    }
L_08997414:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08997420u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x08997420u) goto L_08997420;
    return;
L_08997420:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08997458;
      }
      goto L_0899742C;
    }
L_0899742C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08997438u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08997438u) goto L_08997438;
    return;
L_08997438:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997450;
      }
      goto L_08997444;
    }
L_08997444:
    ctx.gpr[31] = (0x0899744Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0899744Cu) goto L_0899744C;
    return;
L_0899744C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08997450;
L_08997450:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08997458;
L_08997458:
    ctx.gpr[31] = (0x08997460u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08997460u) goto L_08997460;
    return;
L_08997460:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0899746Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 846u, 0x08887B30u>(ctx, &aot_mem) && ctx.pc == 0x0899746Cu) goto L_0899746C;
    return;
L_0899746C:
    ctx.gpr[31] = (0x08997474u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(-8144));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 340u, 0x089F5C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08997474u) goto L_08997474;
    return;
L_08997474:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08997480u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem) && ctx.pc == 0x08997480u) goto L_08997480;
    return;
L_08997480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089974E8;
      }
      goto L_08997488;
    }
L_08997488:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089974C0;
      }
      goto L_08997494;
    }
L_08997494:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089974A0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089974A0u) goto L_089974A0;
    return;
L_089974A0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089974B8;
      }
      goto L_089974AC;
    }
L_089974AC:
    ctx.gpr[31] = (0x089974B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089974B4u) goto L_089974B4;
    return;
L_089974B4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089974B8;
L_089974B8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089974C0;
L_089974C0:
    ctx.gpr[31] = (0x089974C8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089974C8u) goto L_089974C8;
    return;
L_089974C8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089974D4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x089974D4u) goto L_089974D4;
    return;
L_089974D4:
    ctx.gpr[31] = (0x089974DCu);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(-8144));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 340u, 0x089F5C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089974DCu) goto L_089974DC;
    return;
L_089974DC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089974E8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem) && ctx.pc == 0x089974E8u) goto L_089974E8;
    return;
L_089974E8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899751C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 200u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (48819u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (14673u << 16u);
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | 46871u);
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13780)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13784)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_089975FC;
L_089975FC:
    ctx.gpr[31] = (0x08997604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997604u) goto L_08997604;
    return;
L_08997604:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08997618u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997618u) goto L_08997618;
    return;
L_08997618:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x0899762Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x0899762Cu) goto L_0899762C;
    return;
L_0899762C:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08997648u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08997648u) goto L_08997648;
    return;
L_08997648:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13788)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13792)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0899765Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0899765Cu) goto L_0899765C;
    return;
L_0899765C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[22] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] & 255u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08997698u);
    ctx.gpr[17] = (ctx.gpr[17] & 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997698u) goto L_08997698;
    return;
L_08997698:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_089976B8;
      }
      goto L_089976B0;
    }
L_089976B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089976BC;
      }
      goto L_089976B8;
    }
L_089976B8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089976BC;
L_089976BC:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 62u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089976E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x089976E4u) goto L_089976E4;
    return;
L_089976E4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089975FC;
      }
      goto L_089976F4;
    }
L_089976F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899773C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 144u);
    ctx.gpr[5] = (0u | 173u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 196u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 100u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 142u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (14673u << 16u);
    ctx.gpr[5] = (0u | 190u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.gpr[6] = (0u | 198u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 120u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (48819u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16051u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13780)));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (16000u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13784)));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08997838;
L_08997838:
    ctx.gpr[31] = (0x08997840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997840u) goto L_08997840;
    return;
L_08997840:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08997854u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997854u) goto L_08997854;
    return;
L_08997854:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08997868u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997868u) goto L_08997868;
    return;
L_08997868:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08997884u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08997884u) goto L_08997884;
    return;
L_08997884:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13788)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13792)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08997898u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08997898u) goto L_08997898;
    return;
L_08997898:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[22] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] & 255u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089978D4u);
    ctx.gpr[17] = (ctx.gpr[17] & 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089978D4u) goto L_089978D4;
    return;
L_089978D4:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_089978F4;
      }
      goto L_089978EC;
    }
L_089978EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089978F8;
      }
      goto L_089978F4;
    }
L_089978F4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089978F8;
L_089978F8:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 62u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997920u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x08997920u) goto L_08997920;
    return;
L_08997920:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08997838;
      }
      goto L_08997930;
    }
L_08997930:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (0u | 80u);
    ctx.gpr[31] = (0x08997940u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem) && ctx.pc == 0x08997940u) goto L_08997940;
    return;
L_08997940:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
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
L_08997988:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 144u);
    ctx.gpr[5] = (0u | 173u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 196u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 100u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 142u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (14673u << 16u);
    ctx.gpr[5] = (0u | 190u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.gpr[6] = (0u | 198u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 120u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (48819u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16051u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13780)));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (16000u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13784)));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08997A84;
L_08997A84:
    ctx.gpr[31] = (0x08997A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997A8Cu) goto L_08997A8C;
    return;
L_08997A8C:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08997AA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997AA0u) goto L_08997AA0;
    return;
L_08997AA0:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08997AB4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997AB4u) goto L_08997AB4;
    return;
L_08997AB4:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08997AD0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08997AD0u) goto L_08997AD0;
    return;
L_08997AD0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13788)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13792)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08997AE4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08997AE4u) goto L_08997AE4;
    return;
L_08997AE4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[22] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] & 255u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08997B20u);
    ctx.gpr[17] = (ctx.gpr[17] & 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997B20u) goto L_08997B20;
    return;
L_08997B20:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08997B40;
      }
      goto L_08997B38;
    }
L_08997B38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08997B44;
      }
      goto L_08997B40;
    }
L_08997B40:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08997B44;
L_08997B44:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 62u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997B6Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x08997B6Cu) goto L_08997B6C;
    return;
L_08997B6C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08997A84;
      }
      goto L_08997B7C;
    }
L_08997B7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (0u | 80u);
    ctx.gpr[31] = (0x08997B8Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem) && ctx.pc == 0x08997B8Cu) goto L_08997B8C;
    return;
L_08997B8C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
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
L_08997BD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08997C00u);
    // nop
    goto L_0899751C;
L_08997C00:
    ctx.gpr[4] = (0u | 84u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997C10u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem) && ctx.pc == 0x08997C10u) goto L_08997C10;
    return;
L_08997C10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997C24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (48819u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (14673u << 16u);
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-13776));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_08997D04;
L_08997D04:
    ctx.gpr[31] = (0x08997D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997D0Cu) goto L_08997D0C;
    return;
L_08997D0C:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08997D20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997D20u) goto L_08997D20;
    return;
L_08997D20:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08997D34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997D34u) goto L_08997D34;
    return;
L_08997D34:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08997D58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08997D58u) goto L_08997D58;
    return;
L_08997D58:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13788)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13792)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08997D6Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08997D6Cu) goto L_08997D6C;
    return;
L_08997D6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13780)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13784)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08997DB4u);
    ctx.gpr[18] = (ctx.gpr[18] & 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997DB4u) goto L_08997DB4;
    return;
L_08997DB4:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08997DD4;
      }
      goto L_08997DCC;
    }
L_08997DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08997DD8;
      }
      goto L_08997DD4;
    }
L_08997DD4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08997DD8;
L_08997DD8:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 62u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08997E00u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x08997E00u) goto L_08997E00;
    return;
L_08997E00:
    ctx.gpr[4] = (0u | 7u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08997E7C;
      }
      goto L_08997E14;
    }
L_08997E14:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08997E24u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08997E24u) goto L_08997E24;
    return;
L_08997E24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08997E7Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x08997E7Cu) goto L_08997E7C;
    return;
L_08997E7C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08997D04;
      }
      goto L_08997E8C;
    }
L_08997E8C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (0u | 83u);
    ctx.gpr[31] = (0x08997E9Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem) && ctx.pc == 0x08997E9Cu) goto L_08997E9C;
    return;
L_08997E9C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997EE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 200u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (48819u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (14673u << 16u);
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | 46871u);
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13780)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13784)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08997FC8;
L_08997FC8:
    ctx.gpr[31] = (0x08997FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997FD0u) goto L_08997FD0;
    return;
L_08997FD0:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08997FE4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997FE4u) goto L_08997FE4;
    return;
L_08997FE4:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08997FF8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08997FF8u) goto L_08997FF8;
    return;
L_08997FF8:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.pc = 0x08998000u; return;
}

void recomp_unit_0100(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0100_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_100(Runtime &runtime) {
    runtime.register_generated_unit(100u, 0x08994000u, 16384u, &recomp_unit_0100, &recomp_unit_0100_entry);
    runtime.register_function(0x08994000u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994020u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994028u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994038u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994048u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994058u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994064u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899406Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994084u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899408Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994098u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899411Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994124u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994138u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994140u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899414Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994154u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994180u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994188u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994190u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994198u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089941C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089941CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089941D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089941E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089941ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089941F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994218u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994220u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994244u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899424Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994258u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994260u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994284u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899428Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994294u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089942A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089942A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089942CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089942D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089942F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994300u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899430Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994318u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994320u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994344u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899434Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994370u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994378u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994384u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994390u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994398u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994408u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994410u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994434u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899443Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994460u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994468u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994474u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994484u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899448Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089944B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089944B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089944D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089944E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994500u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994508u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994510u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994538u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994540u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994554u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994560u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994568u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994570u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994590u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089945A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089945B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089945C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089945C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089945D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089945F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994600u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994608u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994618u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994620u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994630u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994638u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994648u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994650u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994660u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994668u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994678u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994680u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994690u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994698u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089946A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089946B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089946C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089946C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089946CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089946D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089946E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089946E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994720u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994728u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994754u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899475Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994768u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994774u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899477Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994818u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994820u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899482Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899485Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899487Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994884u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994890u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994924u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899492Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899495Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994964u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994970u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899497Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994984u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994988u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A10u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A98u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994AA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994AF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B14u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B90u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BB0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C30u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CB0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CCCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DD4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DDCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E74u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EB0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994ED0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994ED4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994ED8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F28u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F5Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F64u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F74u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FB0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FE0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FF4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995000u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899500Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995014u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995018u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899501Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995028u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995034u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899503Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995044u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899504Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995060u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899506Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995078u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995080u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995084u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995088u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995094u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995100u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899510Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995114u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899511Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995124u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995138u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995144u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995150u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995158u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899515Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995160u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899516Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995178u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995180u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995188u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995190u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995210u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899521Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995228u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995230u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995234u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995238u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995244u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995250u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995258u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995260u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995268u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899527Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995288u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995294u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899529Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995300u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995308u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899530Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995310u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899531Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995328u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995330u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995338u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995340u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995354u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995360u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899536Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995374u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995378u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899537Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995388u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995394u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899539Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995400u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995408u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899540Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995414u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995420u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995428u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995454u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899545Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995480u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995488u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995494u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995500u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899550Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995518u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995520u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995544u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899554Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995570u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995578u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995584u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995590u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995598u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995604u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899560Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995630u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995638u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995644u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899564Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995654u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995678u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995680u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899568Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995694u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899569Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089956C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089956C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089956D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089956DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089956E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899570Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995714u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995720u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995728u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995730u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995754u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899575Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995768u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995770u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995778u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899579Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995800u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995808u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899582Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995834u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995840u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995848u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995850u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899587Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995884u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995890u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995898u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089958A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089958C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089958D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089958E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089958F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089958F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995900u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899590Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899592Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995934u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899594Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995954u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899595Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995964u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995970u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995990u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995998u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A10u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A60u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A90u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995AA4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995AACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995AD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995AD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995AE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995AECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995AF4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B60u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B74u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BB0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BCCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C14u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C60u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CA4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CCCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CD4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CE0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D28u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D30u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D64u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DE8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E5Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995EACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995EB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995EC0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995EC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995ED4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995EDCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F10u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FDCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FFCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996004u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996038u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996040u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899604Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996058u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996060u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996078u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996084u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899610Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899611Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996138u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996140u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996148u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996154u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899616Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996174u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996184u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899618Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996198u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089961A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089961BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089961C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089961DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089961E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996208u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996210u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899621Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996224u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899623Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996248u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996268u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996270u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996280u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996294u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089962B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089962B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089962C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089962D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089962E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089962F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996300u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996308u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996314u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899631Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996338u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996340u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996358u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996364u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996384u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899638Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996398u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089963A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089963B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089963C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089963E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089963ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089963FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996414u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899641Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996424u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899642Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996450u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996458u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899646Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996488u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996490u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996498u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996510u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996518u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996530u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899653Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899655Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996564u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996570u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996578u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996590u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899659Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089965BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089965C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089965D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089965ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089965F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089965FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996604u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996628u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996630u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996644u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996658u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996660u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996668u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996678u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996690u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996698u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996704u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996724u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899672Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996738u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996740u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996750u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899675Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899677Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996784u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996794u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996804u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899680Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996830u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996838u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996844u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899684Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996854u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996878u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996880u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996888u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996894u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899689Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089968C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089968C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089968D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089968D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089968FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996904u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899690Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996914u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899691Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996924u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996934u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899694Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899695Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996964u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996974u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899697Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899698Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996994u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A30u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A60u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A90u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AC0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AE8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B30u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BB0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BF4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BFCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CCCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CD4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CE0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D10u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996DB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996DDCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996DE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996DECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996DFCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E10u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996EA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996EB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996EBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996EC0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996EC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996ED0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996ED8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996EF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996EF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F30u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F60u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FC0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899700Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899701Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997028u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997034u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899703Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997040u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997044u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997050u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997058u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997064u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997084u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899708Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997110u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997120u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899713Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997148u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997154u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997160u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899716Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997178u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997180u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997184u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997188u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997194u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899719Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089971BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089971C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089971D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089971DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089971E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089971F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089971F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089971F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997204u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899720Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899722Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997240u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899724Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899725Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899726Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997274u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899727Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997284u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899728Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997310u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997324u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899732Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997344u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899734Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899735Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997368u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997374u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997380u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997394u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899739Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997404u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997414u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997420u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899742Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997438u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997444u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899744Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997450u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997458u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997460u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899746Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997474u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997480u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997488u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997494u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899751Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089975FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997604u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997618u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899762Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997648u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899765Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997698u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089976B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089976B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089976BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089976E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089976F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899773Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997838u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997840u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997854u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997868u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997884u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997898u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089978D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089978ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089978F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089978F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997920u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997930u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997940u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997988u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997AA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997AB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997AD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997AE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997BD4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C10u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997DB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997DCCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997DD4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997DD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E14u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997EE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997FC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997FD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997FE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997FF8u, &recomp_unit_0100, "recomp_unit_0100");
}
} // namespace psprecomp
