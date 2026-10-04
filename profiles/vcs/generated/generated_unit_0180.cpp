#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0180[4095] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 6, 0, 7, 8, 0, 0, 0, 0, 9, 0, 0, 10, 0, 11, 12, 0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17,
    0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 43, 0,
    0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 50, 0, 51, 0, 0, 0, 0, 0, 0, 52, 53,
    0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 64,
    0, 65, 0, 0, 66, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0,
    74, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 84,
    0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 106,
    0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0, 0, 115, 0, 116, 117, 0, 0, 118, 0,
    0, 119, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0,
    0, 135, 0, 0, 136, 0, 0, 137, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141,
    0, 142, 0, 0, 0, 143, 0, 0, 144, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0,
    151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 162,
    0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 167, 0, 0, 0, 168, 0, 0, 169, 170, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174,
    0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 184, 185, 0, 0, 0,
    0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0,
    0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 204,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207,
    0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0,
    0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230,
    0, 231, 0, 232, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237,
    0, 0, 238, 239, 0, 240, 0, 241, 242, 0, 243, 0, 0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 0, 248, 0, 249, 0, 0, 250, 0, 251, 252,
    0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 257, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0,
    263, 0, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282,
    0, 0, 283, 0, 0, 0, 284, 0, 285, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290,
    0, 0, 0, 0, 291, 0, 292, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 0, 298, 0, 299, 300, 0, 301, 0, 0,
    0, 302, 0, 0, 303, 0, 304, 0, 0, 305, 0, 0, 306, 0, 307, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311,
    0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 325, 0, 0, 326, 0, 0,
    0, 327, 0, 0, 0, 328, 329, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 333, 0, 0, 334, 0, 0, 335, 0, 336, 0, 337, 0, 0, 338, 0,
    0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 345, 0, 0,
    346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 350, 0, 0, 351, 0, 352, 0, 0, 353,
    0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 361, 0, 0, 362, 0, 0, 363, 0,
    364, 0, 0, 365, 0, 0, 0, 366, 0, 367, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 372, 0, 0, 373, 0, 0, 374, 0,
    375, 0, 0, 376, 0, 0, 0, 377, 0, 378, 379, 0, 380, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 385, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390,
    0, 0, 391, 0, 0, 392, 0, 393, 0, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 400, 0, 401, 0, 402, 0,
    0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 406, 0, 0, 407, 0, 408, 0, 0, 409, 0, 410, 0, 411, 0, 412, 0, 0, 413, 0, 414, 415, 0,
    416, 0, 0, 0, 417, 0, 0, 418, 0, 419, 0, 420, 0, 421, 0, 0, 422, 0, 423, 0, 424, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0, 428,
    0, 429, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 435, 0, 0, 436, 0, 437, 438, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0,
    0, 0, 445, 0, 446, 0, 447, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0,
    454, 455, 0, 0, 456, 457, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 468,
    0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 0, 478, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 0,
    0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 491,
    0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 500, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 504, 0, 0, 0, 505, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 0, 0, 0, 512, 0, 0,
    0, 513, 0, 0, 0, 514, 0, 0, 515, 0, 516, 0, 517, 0, 0, 518, 519, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0,
    0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 525, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 528, 529, 0,
    530, 0, 0, 0, 531, 0, 0, 532, 0, 533, 0, 0, 534, 0, 0, 535, 0, 536, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 539,
    0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0,
    0, 0, 0, 547, 0, 548, 0, 549, 0, 0, 550, 0, 0, 551, 0, 552, 0, 0, 553, 0, 554, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 557,
    0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 0, 563, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567,
    0, 0, 0, 568, 0, 0, 0, 569, 0, 570, 0, 571, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 576, 0,
    577, 0, 578, 0, 0, 579, 0, 0, 580, 0, 581, 0, 0, 0, 0, 582, 0, 0, 583, 0, 584, 0, 585, 0, 0, 586, 0, 587, 0, 588, 0, 0,
    589, 0, 590, 591, 0, 0, 592, 0, 593, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 599, 0,
    600, 0, 601, 0, 0, 602, 0, 0, 603, 0, 604, 0, 605, 0, 0, 606, 0, 0, 607, 0, 608, 609, 0, 0, 610, 0, 611, 0, 0, 612, 0, 0,
    613, 0, 0, 614, 0, 615, 0, 616, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 620, 621, 0, 0, 622, 0, 0, 0, 0, 623,
    0, 624, 0, 625, 0, 626, 0, 627, 0, 0, 0, 628, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0,
    0, 635, 0, 636, 0, 637, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 0, 0, 0,
    641, 0, 0, 0, 0, 0, 642, 0, 0, 643, 644, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 647, 0, 648, 0, 0, 0, 0, 0, 649, 0,
    650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0, 656, 657, 0, 0, 0, 658, 0, 659, 0, 0, 660,
    0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 667, 0, 0, 0,
    668, 0, 0, 0, 669, 0, 0, 670, 0, 0, 671, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 679,
    0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 683, 0, 0, 0, 0, 684, 685, 0, 686, 0, 0, 0, 0, 0, 687, 0, 688, 0, 689, 0,
    690, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 696, 0, 697, 0, 0, 698, 0, 0,
    699, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 705, 706, 0, 0,
    0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 0, 710,
    0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 715, 0, 0, 0, 0, 716, 0, 717, 0, 718, 0, 0, 719, 0,
    720, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 724, 0, 0, 725, 0, 726, 727, 0, 728, 0, 729, 0, 0, 0, 730,
    0, 0, 731, 0, 732, 0, 0, 733, 0, 734, 735, 0, 736, 0, 737, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 740,
    0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0,
    0, 0, 746, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 751, 0,
    0, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 757, 0,
    0, 0, 0, 758, 759, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 761, 0, 0, 762, 0, 763, 0, 764, 0, 0, 0, 765, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 769, 0, 0, 0, 0, 0, 770, 0, 0, 0,
    0, 0, 0, 0, 771, 0, 0, 0, 772, 0, 773, 0, 774, 0, 775, 776, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 779, 0,
    0, 0, 0, 780, 781, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 783, 0, 0, 784, 0, 0, 785, 0, 0, 0, 786, 0, 0, 787, 0,
    0, 788, 0, 0, 789, 0, 790, 0, 0, 791, 792, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 795, 0, 0,
    0, 796, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0, 800, 0, 801, 0, 0, 802, 803, 0, 0, 0, 0, 0, 0, 0, 804,
    0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 807, 0, 0, 0, 0, 808, 0, 0, 0, 809, 0, 0, 810,
    0, 811, 0, 0, 0, 812, 0, 0, 813, 0, 814, 0, 815, 0, 816, 0, 0, 817, 0, 818, 0, 0, 0, 0, 0, 819, 0, 0, 0, 820, 0, 0,
    0, 821, 0, 0, 822, 0, 0, 823, 0, 0, 824, 0, 825, 0, 0, 826, 0, 827, 0, 828, 829, 0, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 832, 0, 0, 0, 0, 833, 0, 0, 0, 834, 0, 0, 835, 0, 836, 0, 837, 0,
    0, 0, 838, 0, 839, 0, 0, 0, 840, 0, 0, 841, 0, 842, 0, 843, 0, 0, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 846, 0, 0,
    847, 0, 0, 848, 0, 0, 849, 0, 850, 0, 0, 851, 0, 852, 0, 853, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0,
    0, 856, 0, 0, 0, 0, 857, 0, 0, 0, 858, 0, 859, 0, 0, 0, 0, 0, 860, 0, 861, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 864, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 866, 0, 0, 867, 0, 0, 868, 0,
    869, 0, 870, 0, 871, 0, 0, 872, 0, 0, 873, 0, 874, 0, 0, 875, 0, 876, 0, 877, 878, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 879,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 880, 0, 0, 0, 881, 0, 882, 0, 0, 883, 0, 0, 884, 0,
    885, 0, 0, 0, 0, 0, 886, 887, 0, 888, 0, 889, 0, 890, 0, 0, 0, 0, 891, 0, 892, 0, 0, 0, 893, 0, 0, 0, 0, 0, 0, 894,
    0, 895, 0, 0, 0, 0, 896, 0, 897, 0, 898, 0, 899, 0, 0, 0, 0, 0, 900, 0, 901, 0, 0, 0, 0, 902, 0, 903, 0, 0, 0, 0,
    904, 0, 0, 0, 0, 0, 0, 905, 0, 0, 906, 0, 0, 907, 0, 908, 0, 0, 0, 0, 909, 0, 910, 0, 0, 0, 0, 911, 0, 912, 913, 0,
    914, 0, 0, 915, 0, 916, 0, 917, 0, 918, 0, 919, 0, 920, 0, 921, 922, 0, 0, 0, 0, 0, 0, 0, 923, 0, 0, 924, 0, 0, 925, 0,
    926, 0, 0, 0, 0, 927, 0, 928, 0, 0, 0, 0, 929, 0, 930, 931, 0, 0, 932, 0, 0, 933, 0, 934, 0, 935, 0, 0, 936, 0, 937, 0,
    938, 0, 0, 0, 0, 0, 0, 939, 0, 940, 941, 0, 0, 0, 942, 0, 0, 943, 0, 0, 944, 0, 0, 0, 945, 0, 946, 0, 0, 0, 0, 947,
    948, 0, 949, 0, 0, 0, 0, 950, 0, 0, 951, 0, 0, 0, 0, 952, 0, 953, 0, 954, 0, 0, 955, 0, 956, 0, 957, 0, 0, 958, 0, 959,
    0, 0, 960, 0, 0, 961, 0, 0, 0, 0, 962, 0, 963, 0, 964, 0, 965, 0, 0, 966, 0, 0, 0, 967, 0, 0, 968, 0, 0, 969, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 970, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 971, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 972, 0, 0, 0, 973, 0, 0, 0, 974, 0, 975, 0, 976, 0, 0, 977, 0, 978, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    979, 0, 980, 0, 0, 981, 0, 0, 982, 0, 0, 0, 983, 984, 0, 0, 0, 0, 985, 0, 986, 0, 0, 0, 0, 987, 0, 0, 0, 0, 0, 0,
    0, 0, 988, 0, 0, 0, 0, 0, 0, 0, 0, 0, 989, 0, 990, 0, 991, 0, 0, 0, 0, 992, 0, 0, 0, 993, 0, 0, 0, 994, 0, 0,
    995, 0, 0, 0, 0, 0, 996, 0, 0, 0, 997, 0, 998, 0, 0, 0, 0, 0, 0, 999, 0, 1000, 0, 0, 1001, 0, 0, 1002, 0, 1003, 0, 0,
    0, 1004, 0, 0, 1005, 0, 0, 0, 1006, 0, 0, 1007, 0, 1008, 0, 0, 0, 0, 1009, 0, 0, 0, 0, 0, 0, 0, 0, 1010, 0, 0, 0, 1011,
    0, 1012, 0, 1013, 0, 0, 1014, 0, 0, 0, 0, 0, 0, 0, 1015, 0, 0, 0, 0, 1016, 0, 0, 1017, 0, 0, 1018, 0, 0, 1019, 0, 1020, 0,
    1021, 0, 0, 1022, 0, 1023, 0, 1024, 0, 1025, 0, 0, 0, 0, 1026, 0, 1027, 0, 1028, 0, 0, 0, 0, 1029, 0, 0, 0, 0, 0, 0, 0, 1030,
    1031, 0, 0, 1032, 0, 0, 0, 1033, 0, 1034, 0, 0, 0, 1035, 0, 1036, 1037, 0, 0, 1038, 0, 0, 0, 1039, 0, 1040, 0, 0, 0, 1041, 0, 0,
    1042, 0, 0, 1043, 0, 0, 0, 0, 0, 1044, 0, 0, 0, 0, 1045, 0, 0, 0, 1046, 0, 0, 0, 0, 1047, 0, 0, 0, 0, 1048, 0, 0, 0,
    1049, 0, 1050, 0, 0, 0, 1051, 0, 0, 1052, 0, 0, 1053, 0, 0, 1054, 0, 0, 1055, 0, 0, 0, 1056, 0, 0, 1057, 0, 0, 1058, 0, 0, 0,
    1059, 0, 0, 0, 0, 1060, 0, 1061, 0, 1062, 0, 0, 0, 1063, 0, 0, 1064, 0, 0, 1065, 0, 0, 0, 1066, 1067, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1068, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1069, 0, 0, 0, 1070, 0, 1071, 0, 0, 0, 0, 1072, 0, 0, 0, 0, 1073, 0,
    1074, 0, 1075, 0, 1076, 0, 1077, 0, 1078, 0, 1079, 0, 1080, 0, 1081, 0, 0, 0, 0, 1082, 0, 0, 0, 0, 1083, 0, 1084, 0, 0, 1085, 0, 0,
    1086, 0, 1087, 0, 0, 1088, 0, 1089, 0, 1090, 0, 1091, 0, 1092, 0, 1093, 0, 0, 0, 0, 1094, 0, 0, 0, 0, 1095, 0, 1096, 0, 0, 1097,
};
void recomp_unit_0180_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AD4004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0180[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AD4004;
    case 2u: goto L_08AD4014;
    case 3u: goto L_08AD4020;
    case 4u: goto L_08AD4040;
    case 5u: goto L_08AD4084;
    case 6u: goto L_08AD4090;
    case 7u: goto L_08AD4098;
    case 8u: goto L_08AD409C;
    case 9u: goto L_08AD40B0;
    case 10u: goto L_08AD40BC;
    case 11u: goto L_08AD40C4;
    case 12u: goto L_08AD40C8;
    case 13u: goto L_08AD40D4;
    case 14u: goto L_08AD40DC;
    case 15u: goto L_08AD40E8;
    case 16u: goto L_08AD40F4;
    case 17u: goto L_08AD4100;
    case 18u: goto L_08AD410C;
    case 19u: goto L_08AD4114;
    case 20u: goto L_08AD411C;
    case 21u: goto L_08AD4124;
    case 22u: goto L_08AD412C;
    case 23u: goto L_08AD414C;
    case 24u: goto L_08AD416C;
    case 25u: goto L_08AD4180;
    case 26u: goto L_08AD41A0;
    case 27u: goto L_08AD41A8;
    case 28u: goto L_08AD41B0;
    case 29u: goto L_08AD41BC;
    case 30u: goto L_08AD41C4;
    case 31u: goto L_08AD41D0;
    case 32u: goto L_08AD41DC;
    case 33u: goto L_08AD41EC;
    case 34u: goto L_08AD41F4;
    case 35u: goto L_08AD4214;
    case 36u: goto L_08AD4224;
    case 37u: goto L_08AD4230;
    case 38u: goto L_08AD423C;
    case 39u: goto L_08AD4254;
    case 40u: goto L_08AD4260;
    case 41u: goto L_08AD426C;
    case 42u: goto L_08AD4278;
    case 43u: goto L_08AD427C;
    case 44u: goto L_08AD429C;
    case 45u: goto L_08AD42A8;
    case 46u: goto L_08AD42AC;
    case 47u: goto L_08AD42BC;
    case 48u: goto L_08AD42CC;
    case 49u: goto L_08AD42D4;
    case 50u: goto L_08AD42D8;
    case 51u: goto L_08AD42E0;
    case 52u: goto L_08AD42FC;
    case 53u: goto L_08AD4300;
    case 54u: goto L_08AD4308;
    case 55u: goto L_08AD4314;
    case 56u: goto L_08AD431C;
    case 57u: goto L_08AD432C;
    case 58u: goto L_08AD4338;
    case 59u: goto L_08AD4340;
    case 60u: goto L_08AD4350;
    case 61u: goto L_08AD435C;
    case 62u: goto L_08AD4364;
    case 63u: goto L_08AD4374;
    case 64u: goto L_08AD4380;
    case 65u: goto L_08AD4388;
    case 66u: goto L_08AD4394;
    case 67u: goto L_08AD4398;
    case 68u: goto L_08AD43C4;
    case 69u: goto L_08AD43F0;
    case 70u: goto L_08AD4420;
    case 71u: goto L_08AD4434;
    case 72u: goto L_08AD4464;
    case 73u: goto L_08AD4474;
    case 74u: goto L_08AD4484;
    case 75u: goto L_08AD4490;
    case 76u: goto L_08AD4498;
    case 77u: goto L_08AD44A8;
    case 78u: goto L_08AD44B4;
    case 79u: goto L_08AD44C4;
    case 80u: goto L_08AD44D0;
    case 81u: goto L_08AD44D8;
    case 82u: goto L_08AD44E0;
    case 83u: goto L_08AD44F8;
    case 84u: goto L_08AD4500;
    case 85u: goto L_08AD4510;
    case 86u: goto L_08AD4518;
    case 87u: goto L_08AD4524;
    case 88u: goto L_08AD452C;
    case 89u: goto L_08AD453C;
    case 90u: goto L_08AD4544;
    case 91u: goto L_08AD454C;
    case 92u: goto L_08AD4590;
    case 93u: goto L_08AD45A0;
    case 94u: goto L_08AD45AC;
    case 95u: goto L_08AD45C0;
    case 96u: goto L_08AD45C8;
    case 97u: goto L_08AD45D0;
    case 98u: goto L_08AD45D8;
    case 99u: goto L_08AD4618;
    case 100u: goto L_08AD4620;
    case 101u: goto L_08AD4630;
    case 102u: goto L_08AD4640;
    case 103u: goto L_08AD4650;
    case 104u: goto L_08AD4668;
    case 105u: goto L_08AD4678;
    case 106u: goto L_08AD4680;
    case 107u: goto L_08AD4690;
    case 108u: goto L_08AD469C;
    case 109u: goto L_08AD46A4;
    case 110u: goto L_08AD46AC;
    case 111u: goto L_08AD46BC;
    case 112u: goto L_08AD46C8;
    case 113u: goto L_08AD46D0;
    case 114u: goto L_08AD46D8;
    case 115u: goto L_08AD46E4;
    case 116u: goto L_08AD46EC;
    case 117u: goto L_08AD46F0;
    case 118u: goto L_08AD46FC;
    case 119u: goto L_08AD4708;
    case 120u: goto L_08AD4714;
    case 121u: goto L_08AD471C;
    case 122u: goto L_08AD4724;
    case 123u: goto L_08AD473C;
    case 124u: goto L_08AD474C;
    case 125u: goto L_08AD4768;
    case 126u: goto L_08AD4784;
    case 127u: goto L_08AD47A0;
    case 128u: goto L_08AD47A8;
    case 129u: goto L_08AD47B8;
    case 130u: goto L_08AD47CC;
    case 131u: goto L_08AD47D8;
    case 132u: goto L_08AD47E0;
    case 133u: goto L_08AD47F0;
    case 134u: goto L_08AD47FC;
    case 135u: goto L_08AD4808;
    case 136u: goto L_08AD4814;
    case 137u: goto L_08AD4820;
    case 138u: goto L_08AD4824;
    case 139u: goto L_08AD4838;
    case 140u: goto L_08AD4850;
    case 141u: goto L_08AD4880;
    case 142u: goto L_08AD4888;
    case 143u: goto L_08AD4898;
    case 144u: goto L_08AD48A4;
    case 145u: goto L_08AD48A8;
    case 146u: goto L_08AD48C4;
    case 147u: goto L_08AD48D4;
    case 148u: goto L_08AD48E4;
    case 149u: goto L_08AD48F0;
    case 150u: goto L_08AD48FC;
    case 151u: goto L_08AD4904;
    case 152u: goto L_08AD4914;
    case 153u: goto L_08AD4920;
    case 154u: goto L_08AD492C;
    case 155u: goto L_08AD4934;
    case 156u: goto L_08AD493C;
    case 157u: goto L_08AD4944;
    case 158u: goto L_08AD4950;
    case 159u: goto L_08AD4958;
    case 160u: goto L_08AD4968;
    case 161u: goto L_08AD4974;
    case 162u: goto L_08AD4980;
    case 163u: goto L_08AD4988;
    case 164u: goto L_08AD49AC;
    case 165u: goto L_08AD4A10;
    case 166u: goto L_08AD4A28;
    case 167u: goto L_08AD4A2C;
    case 168u: goto L_08AD4A3C;
    case 169u: goto L_08AD4A48;
    case 170u: goto L_08AD4A4C;
    case 171u: goto L_08AD4A58;
    case 172u: goto L_08AD4A60;
    case 173u: goto L_08AD4A70;
    case 174u: goto L_08AD4A80;
    case 175u: goto L_08AD4A8C;
    case 176u: goto L_08AD4A94;
    case 177u: goto L_08AD4AA0;
    case 178u: goto L_08AD4AAC;
    case 179u: goto L_08AD4AC4;
    case 180u: goto L_08AD4ACC;
    case 181u: goto L_08AD4AD8;
    case 182u: goto L_08AD4AE0;
    case 183u: goto L_08AD4AE8;
    case 184u: goto L_08AD4AF0;
    case 185u: goto L_08AD4AF4;
    case 186u: goto L_08AD4B08;
    case 187u: goto L_08AD4B10;
    case 188u: goto L_08AD4B1C;
    case 189u: goto L_08AD4B24;
    case 190u: goto L_08AD4B30;
    case 191u: goto L_08AD4B48;
    case 192u: goto L_08AD4B54;
    case 193u: goto L_08AD4B64;
    case 194u: goto L_08AD4B6C;
    case 195u: goto L_08AD4B7C;
    case 196u: goto L_08AD4B88;
    case 197u: goto L_08AD4B94;
    case 198u: goto L_08AD4BA8;
    case 199u: goto L_08AD4BB8;
    case 200u: goto L_08AD4BC8;
    case 201u: goto L_08AD4BDC;
    case 202u: goto L_08AD4BEC;
    case 203u: goto L_08AD4BF4;
    case 204u: goto L_08AD4C00;
    case 205u: goto L_08AD4C38;
    case 206u: goto L_08AD4C6C;
    case 207u: goto L_08AD4C80;
    case 208u: goto L_08AD4C90;
    case 209u: goto L_08AD4CA0;
    case 210u: goto L_08AD4CAC;
    case 211u: goto L_08AD4CB8;
    case 212u: goto L_08AD4CD0;
    case 213u: goto L_08AD4CDC;
    case 214u: goto L_08AD4CE8;
    case 215u: goto L_08AD4CFC;
    case 216u: goto L_08AD4D20;
    case 217u: goto L_08AD4D44;
    case 218u: goto L_08AD4D54;
    case 219u: goto L_08AD4D68;
    case 220u: goto L_08AD4D78;
    case 221u: goto L_08AD4D88;
    case 222u: goto L_08AD4D94;
    case 223u: goto L_08AD4DA0;
    case 224u: goto L_08AD4DAC;
    case 225u: goto L_08AD4DBC;
    case 226u: goto L_08AD4DC4;
    case 227u: goto L_08AD4DCC;
    case 228u: goto L_08AD4DE4;
    case 229u: goto L_08AD4DF0;
    case 230u: goto L_08AD4E00;
    case 231u: goto L_08AD4E08;
    case 232u: goto L_08AD4E10;
    case 233u: goto L_08AD4E14;
    case 234u: goto L_08AD4E34;
    case 235u: goto L_08AD4E44;
    case 236u: goto L_08AD4E5C;
    case 237u: goto L_08AD4E80;
    case 238u: goto L_08AD4E8C;
    case 239u: goto L_08AD4E90;
    case 240u: goto L_08AD4E98;
    case 241u: goto L_08AD4EA0;
    case 242u: goto L_08AD4EA4;
    case 243u: goto L_08AD4EAC;
    case 244u: goto L_08AD4EB8;
    case 245u: goto L_08AD4EC0;
    case 246u: goto L_08AD4EC8;
    case 247u: goto L_08AD4ED0;
    case 248u: goto L_08AD4EE0;
    case 249u: goto L_08AD4EE8;
    case 250u: goto L_08AD4EF4;
    case 251u: goto L_08AD4EFC;
    case 252u: goto L_08AD4F00;
    case 253u: goto L_08AD4F0C;
    case 254u: goto L_08AD4F1C;
    case 255u: goto L_08AD4F28;
    case 256u: goto L_08AD4F34;
    case 257u: goto L_08AD4F3C;
    case 258u: goto L_08AD4F44;
    case 259u: goto L_08AD4F4C;
    case 260u: goto L_08AD4F58;
    case 261u: goto L_08AD4F68;
    case 262u: goto L_08AD4F74;
    case 263u: goto L_08AD4F84;
    case 264u: goto L_08AD4F94;
    case 265u: goto L_08AD4F9C;
    case 266u: goto L_08AD4FA8;
    case 267u: goto L_08AD4FC0;
    case 268u: goto L_08AD4FDC;
    case 269u: goto L_08AD4FEC;
    case 270u: goto L_08AD4FFC;
    case 271u: goto L_08AD501C;
    case 272u: goto L_08AD502C;
    case 273u: goto L_08AD503C;
    case 274u: goto L_08AD5050;
    case 275u: goto L_08AD5064;
    case 276u: goto L_08AD5078;
    case 277u: goto L_08AD508C;
    case 278u: goto L_08AD50A0;
    case 279u: goto L_08AD50B0;
    case 280u: goto L_08AD50C0;
    case 281u: goto L_08AD50DC;
    case 282u: goto L_08AD5100;
    case 283u: goto L_08AD510C;
    case 284u: goto L_08AD511C;
    case 285u: goto L_08AD5124;
    case 286u: goto L_08AD512C;
    case 287u: goto L_08AD513C;
    case 288u: goto L_08AD5148;
    case 289u: goto L_08AD516C;
    case 290u: goto L_08AD5180;
    case 291u: goto L_08AD5194;
    case 292u: goto L_08AD519C;
    case 293u: goto L_08AD51A4;
    case 294u: goto L_08AD51B4;
    case 295u: goto L_08AD51C4;
    case 296u: goto L_08AD51CC;
    case 297u: goto L_08AD51D4;
    case 298u: goto L_08AD51E4;
    case 299u: goto L_08AD51EC;
    case 300u: goto L_08AD51F0;
    case 301u: goto L_08AD51F8;
    case 302u: goto L_08AD5208;
    case 303u: goto L_08AD5214;
    case 304u: goto L_08AD521C;
    case 305u: goto L_08AD5228;
    case 306u: goto L_08AD5234;
    case 307u: goto L_08AD523C;
    case 308u: goto L_08AD5244;
    case 309u: goto L_08AD5250;
    case 310u: goto L_08AD5274;
    case 311u: goto L_08AD5280;
    case 312u: goto L_08AD5290;
    case 313u: goto L_08AD52A0;
    case 314u: goto L_08AD52B0;
    case 315u: goto L_08AD52C0;
    case 316u: goto L_08AD52CC;
    case 317u: goto L_08AD52D8;
    case 318u: goto L_08AD52EC;
    case 319u: goto L_08AD5308;
    case 320u: goto L_08AD5318;
    case 321u: goto L_08AD5328;
    case 322u: goto L_08AD5334;
    case 323u: goto L_08AD5358;
    case 324u: goto L_08AD5368;
    case 325u: goto L_08AD536C;
    case 326u: goto L_08AD5378;
    case 327u: goto L_08AD5388;
    case 328u: goto L_08AD5398;
    case 329u: goto L_08AD539C;
    case 330u: goto L_08AD53A4;
    case 331u: goto L_08AD53B4;
    case 332u: goto L_08AD53C0;
    case 333u: goto L_08AD53C8;
    case 334u: goto L_08AD53D4;
    case 335u: goto L_08AD53E0;
    case 336u: goto L_08AD53E8;
    case 337u: goto L_08AD53F0;
    case 338u: goto L_08AD53FC;
    case 339u: goto L_08AD5420;
    case 340u: goto L_08AD542C;
    case 341u: goto L_08AD543C;
    case 342u: goto L_08AD544C;
    case 343u: goto L_08AD545C;
    case 344u: goto L_08AD546C;
    case 345u: goto L_08AD5478;
    case 346u: goto L_08AD5484;
    case 347u: goto L_08AD5498;
    case 348u: goto L_08AD54C4;
    case 349u: goto L_08AD54CC;
    case 350u: goto L_08AD54E0;
    case 351u: goto L_08AD54EC;
    case 352u: goto L_08AD54F4;
    case 353u: goto L_08AD5500;
    case 354u: goto L_08AD5510;
    case 355u: goto L_08AD5518;
    case 356u: goto L_08AD5528;
    case 357u: goto L_08AD5538;
    case 358u: goto L_08AD5540;
    case 359u: goto L_08AD554C;
    case 360u: goto L_08AD555C;
    case 361u: goto L_08AD5564;
    case 362u: goto L_08AD5570;
    case 363u: goto L_08AD557C;
    case 364u: goto L_08AD5584;
    case 365u: goto L_08AD5590;
    case 366u: goto L_08AD55A0;
    case 367u: goto L_08AD55A8;
    case 368u: goto L_08AD55B0;
    case 369u: goto L_08AD55C0;
    case 370u: goto L_08AD55CC;
    case 371u: goto L_08AD55DC;
    case 372u: goto L_08AD55E4;
    case 373u: goto L_08AD55F0;
    case 374u: goto L_08AD55FC;
    case 375u: goto L_08AD5604;
    case 376u: goto L_08AD5610;
    case 377u: goto L_08AD5620;
    case 378u: goto L_08AD5628;
    case 379u: goto L_08AD562C;
    case 380u: goto L_08AD5634;
    case 381u: goto L_08AD5638;
    case 382u: goto L_08AD5658;
    case 383u: goto L_08AD5698;
    case 384u: goto L_08AD56A8;
    case 385u: goto L_08AD56B0;
    case 386u: goto L_08AD56BC;
    case 387u: goto L_08AD56C4;
    case 388u: goto L_08AD56E0;
    case 389u: goto L_08AD56F0;
    case 390u: goto L_08AD5700;
    case 391u: goto L_08AD570C;
    case 392u: goto L_08AD5718;
    case 393u: goto L_08AD5720;
    case 394u: goto L_08AD5730;
    case 395u: goto L_08AD573C;
    case 396u: goto L_08AD5748;
    case 397u: goto L_08AD5750;
    case 398u: goto L_08AD5758;
    case 399u: goto L_08AD5760;
    case 400u: goto L_08AD576C;
    case 401u: goto L_08AD5774;
    case 402u: goto L_08AD577C;
    case 403u: goto L_08AD578C;
    case 404u: goto L_08AD5798;
    case 405u: goto L_08AD57A0;
    case 406u: goto L_08AD57AC;
    case 407u: goto L_08AD57B8;
    case 408u: goto L_08AD57C0;
    case 409u: goto L_08AD57CC;
    case 410u: goto L_08AD57D4;
    case 411u: goto L_08AD57DC;
    case 412u: goto L_08AD57E4;
    case 413u: goto L_08AD57F0;
    case 414u: goto L_08AD57F8;
    case 415u: goto L_08AD57FC;
    case 416u: goto L_08AD5804;
    case 417u: goto L_08AD5814;
    case 418u: goto L_08AD5820;
    case 419u: goto L_08AD5828;
    case 420u: goto L_08AD5830;
    case 421u: goto L_08AD5838;
    case 422u: goto L_08AD5844;
    case 423u: goto L_08AD584C;
    case 424u: goto L_08AD5854;
    case 425u: goto L_08AD585C;
    case 426u: goto L_08AD586C;
    case 427u: goto L_08AD5878;
    case 428u: goto L_08AD5880;
    case 429u: goto L_08AD5888;
    case 430u: goto L_08AD5898;
    case 431u: goto L_08AD58A8;
    case 432u: goto L_08AD58B4;
    case 433u: goto L_08AD58C0;
    case 434u: goto L_08AD58CC;
    case 435u: goto L_08AD58D4;
    case 436u: goto L_08AD58E0;
    case 437u: goto L_08AD58E8;
    case 438u: goto L_08AD58EC;
    case 439u: goto L_08AD5914;
    case 440u: goto L_08AD5944;
    case 441u: goto L_08AD594C;
    case 442u: goto L_08AD5954;
    case 443u: goto L_08AD5974;
    case 444u: goto L_08AD597C;
    case 445u: goto L_08AD598C;
    case 446u: goto L_08AD5994;
    case 447u: goto L_08AD599C;
    case 448u: goto L_08AD59A4;
    case 449u: goto L_08AD59B4;
    case 450u: goto L_08AD59C4;
    case 451u: goto L_08AD59D4;
    case 452u: goto L_08AD59E0;
    case 453u: goto L_08AD59EC;
    case 454u: goto L_08AD5A04;
    case 455u: goto L_08AD5A08;
    case 456u: goto L_08AD5A14;
    case 457u: goto L_08AD5A18;
    case 458u: goto L_08AD5A3C;
    case 459u: goto L_08AD5A74;
    case 460u: goto L_08AD5A7C;
    case 461u: goto L_08AD5AA4;
    case 462u: goto L_08AD5AAC;
    case 463u: goto L_08AD5AB8;
    case 464u: goto L_08AD5AC4;
    case 465u: goto L_08AD5AD4;
    case 466u: goto L_08AD5AE8;
    case 467u: goto L_08AD5AFC;
    case 468u: goto L_08AD5B00;
    case 469u: goto L_08AD5B0C;
    case 470u: goto L_08AD5B18;
    case 471u: goto L_08AD5B24;
    case 472u: goto L_08AD5B30;
    case 473u: goto L_08AD5B3C;
    case 474u: goto L_08AD5B48;
    case 475u: goto L_08AD5B54;
    case 476u: goto L_08AD5B60;
    case 477u: goto L_08AD5B6C;
    case 478u: goto L_08AD5B7C;
    case 479u: goto L_08AD5BAC;
    case 480u: goto L_08AD5C24;
    case 481u: goto L_08AD5C30;
    case 482u: goto L_08AD5C5C;
    case 483u: goto L_08AD5C68;
    case 484u: goto L_08AD5C74;
    case 485u: goto L_08AD5C90;
    case 486u: goto L_08AD5CA4;
    case 487u: goto L_08AD5CC0;
    case 488u: goto L_08AD5CC8;
    case 489u: goto L_08AD5CD8;
    case 490u: goto L_08AD5CEC;
    case 491u: goto L_08AD5D00;
    case 492u: goto L_08AD5D14;
    case 493u: goto L_08AD5D28;
    case 494u: goto L_08AD5D3C;
    case 495u: goto L_08AD5D4C;
    case 496u: goto L_08AD5D5C;
    case 497u: goto L_08AD5D88;
    case 498u: goto L_08AD5DA4;
    case 499u: goto L_08AD5DB4;
    case 500u: goto L_08AD5DBC;
    case 501u: goto L_08AD5DC4;
    case 502u: goto L_08AD5DD8;
    case 503u: goto L_08AD5DE8;
    case 504u: goto L_08AD5E14;
    case 505u: goto L_08AD5E24;
    case 506u: goto L_08AD5E28;
    case 507u: goto L_08AD5E48;
    case 508u: goto L_08AD5E50;
    case 509u: goto L_08AD5E58;
    case 510u: goto L_08AD5E60;
    case 511u: goto L_08AD5E68;
    case 512u: goto L_08AD5E78;
    case 513u: goto L_08AD5E88;
    case 514u: goto L_08AD5E98;
    case 515u: goto L_08AD5EA4;
    case 516u: goto L_08AD5EAC;
    case 517u: goto L_08AD5EB4;
    case 518u: goto L_08AD5EC0;
    case 519u: goto L_08AD5EC4;
    case 520u: goto L_08AD5EE4;
    case 521u: goto L_08AD5EF8;
    case 522u: goto L_08AD5F14;
    case 523u: goto L_08AD5F38;
    case 524u: goto L_08AD5F48;
    case 525u: goto L_08AD5F4C;
    case 526u: goto L_08AD5F58;
    case 527u: goto L_08AD5F68;
    case 528u: goto L_08AD5F78;
    case 529u: goto L_08AD5F7C;
    case 530u: goto L_08AD5F84;
    case 531u: goto L_08AD5F94;
    case 532u: goto L_08AD5FA0;
    case 533u: goto L_08AD5FA8;
    case 534u: goto L_08AD5FB4;
    case 535u: goto L_08AD5FC0;
    case 536u: goto L_08AD5FC8;
    case 537u: goto L_08AD5FD0;
    case 538u: goto L_08AD5FDC;
    case 539u: goto L_08AD6000;
    case 540u: goto L_08AD600C;
    case 541u: goto L_08AD6020;
    case 542u: goto L_08AD6038;
    case 543u: goto L_08AD6048;
    case 544u: goto L_08AD6058;
    case 545u: goto L_08AD6064;
    case 546u: goto L_08AD6070;
    case 547u: goto L_08AD6090;
    case 548u: goto L_08AD6098;
    case 549u: goto L_08AD60A0;
    case 550u: goto L_08AD60AC;
    case 551u: goto L_08AD60B8;
    case 552u: goto L_08AD60C0;
    case 553u: goto L_08AD60CC;
    case 554u: goto L_08AD60D4;
    case 555u: goto L_08AD60E0;
    case 556u: goto L_08AD60E8;
    case 557u: goto L_08AD6100;
    case 558u: goto L_08AD610C;
    case 559u: goto L_08AD6118;
    case 560u: goto L_08AD6124;
    case 561u: goto L_08AD6130;
    case 562u: goto L_08AD613C;
    case 563u: goto L_08AD6148;
    case 564u: goto L_08AD6150;
    case 565u: goto L_08AD6158;
    case 566u: goto L_08AD6178;
    case 567u: goto L_08AD6180;
    case 568u: goto L_08AD6190;
    case 569u: goto L_08AD61A0;
    case 570u: goto L_08AD61A8;
    case 571u: goto L_08AD61B0;
    case 572u: goto L_08AD61B8;
    case 573u: goto L_08AD61C4;
    case 574u: goto L_08AD61DC;
    case 575u: goto L_08AD61F0;
    case 576u: goto L_08AD61FC;
    case 577u: goto L_08AD6204;
    case 578u: goto L_08AD620C;
    case 579u: goto L_08AD6218;
    case 580u: goto L_08AD6224;
    case 581u: goto L_08AD622C;
    case 582u: goto L_08AD6240;
    case 583u: goto L_08AD624C;
    case 584u: goto L_08AD6254;
    case 585u: goto L_08AD625C;
    case 586u: goto L_08AD6268;
    case 587u: goto L_08AD6270;
    case 588u: goto L_08AD6278;
    case 589u: goto L_08AD6284;
    case 590u: goto L_08AD628C;
    case 591u: goto L_08AD6290;
    case 592u: goto L_08AD629C;
    case 593u: goto L_08AD62A4;
    case 594u: goto L_08AD62AC;
    case 595u: goto L_08AD62B8;
    case 596u: goto L_08AD62C4;
    case 597u: goto L_08AD62DC;
    case 598u: goto L_08AD62F4;
    case 599u: goto L_08AD62FC;
    case 600u: goto L_08AD6304;
    case 601u: goto L_08AD630C;
    case 602u: goto L_08AD6318;
    case 603u: goto L_08AD6324;
    case 604u: goto L_08AD632C;
    case 605u: goto L_08AD6334;
    case 606u: goto L_08AD6340;
    case 607u: goto L_08AD634C;
    case 608u: goto L_08AD6354;
    case 609u: goto L_08AD6358;
    case 610u: goto L_08AD6364;
    case 611u: goto L_08AD636C;
    case 612u: goto L_08AD6378;
    case 613u: goto L_08AD6384;
    case 614u: goto L_08AD6390;
    case 615u: goto L_08AD6398;
    case 616u: goto L_08AD63A0;
    case 617u: goto L_08AD63AC;
    case 618u: goto L_08AD63BC;
    case 619u: goto L_08AD63D4;
    case 620u: goto L_08AD63DC;
    case 621u: goto L_08AD63E0;
    case 622u: goto L_08AD63EC;
    case 623u: goto L_08AD6400;
    case 624u: goto L_08AD6408;
    case 625u: goto L_08AD6410;
    case 626u: goto L_08AD6418;
    case 627u: goto L_08AD6420;
    case 628u: goto L_08AD6430;
    case 629u: goto L_08AD6438;
    case 630u: goto L_08AD6444;
    case 631u: goto L_08AD6450;
    case 632u: goto L_08AD6460;
    case 633u: goto L_08AD646C;
    case 634u: goto L_08AD6478;
    case 635u: goto L_08AD6488;
    case 636u: goto L_08AD6490;
    case 637u: goto L_08AD6498;
    case 638u: goto L_08AD64A0;
    case 639u: goto L_08AD64E4;
    case 640u: goto L_08AD64F0;
    case 641u: goto L_08AD6504;
    case 642u: goto L_08AD651C;
    case 643u: goto L_08AD6528;
    case 644u: goto L_08AD652C;
    case 645u: goto L_08AD653C;
    case 646u: goto L_08AD6550;
    case 647u: goto L_08AD655C;
    case 648u: goto L_08AD6564;
    case 649u: goto L_08AD657C;
    case 650u: goto L_08AD6584;
    case 651u: goto L_08AD6594;
    case 652u: goto L_08AD65A4;
    case 653u: goto L_08AD65B4;
    case 654u: goto L_08AD65C0;
    case 655u: goto L_08AD65C8;
    case 656u: goto L_08AD65D8;
    case 657u: goto L_08AD65DC;
    case 658u: goto L_08AD65EC;
    case 659u: goto L_08AD65F4;
    case 660u: goto L_08AD6600;
    case 661u: goto L_08AD6624;
    case 662u: goto L_08AD662C;
    case 663u: goto L_08AD6638;
    case 664u: goto L_08AD6640;
    case 665u: goto L_08AD6664;
    case 666u: goto L_08AD6670;
    case 667u: goto L_08AD6674;
    case 668u: goto L_08AD6684;
    case 669u: goto L_08AD6694;
    case 670u: goto L_08AD66A0;
    case 671u: goto L_08AD66AC;
    case 672u: goto L_08AD66B0;
    case 673u: goto L_08AD66D8;
    case 674u: goto L_08AD6708;
    case 675u: goto L_08AD6740;
    case 676u: goto L_08AD6754;
    case 677u: goto L_08AD675C;
    case 678u: goto L_08AD676C;
    case 679u: goto L_08AD6780;
    case 680u: goto L_08AD6788;
    case 681u: goto L_08AD6798;
    case 682u: goto L_08AD67AC;
    case 683u: goto L_08AD67B4;
    case 684u: goto L_08AD67C8;
    case 685u: goto L_08AD67CC;
    case 686u: goto L_08AD67D4;
    case 687u: goto L_08AD67EC;
    case 688u: goto L_08AD67F4;
    case 689u: goto L_08AD67FC;
    case 690u: goto L_08AD6804;
    case 691u: goto L_08AD6818;
    case 692u: goto L_08AD6828;
    case 693u: goto L_08AD6838;
    case 694u: goto L_08AD6848;
    case 695u: goto L_08AD6858;
    case 696u: goto L_08AD6864;
    case 697u: goto L_08AD686C;
    case 698u: goto L_08AD6878;
    case 699u: goto L_08AD6884;
    case 700u: goto L_08AD6894;
    case 701u: goto L_08AD68B0;
    case 702u: goto L_08AD68B8;
    case 703u: goto L_08AD68C8;
    case 704u: goto L_08AD68E4;
    case 705u: goto L_08AD68F4;
    case 706u: goto L_08AD68F8;
    case 707u: goto L_08AD691C;
    case 708u: goto L_08AD6958;
    case 709u: goto L_08AD6968;
    case 710u: goto L_08AD6980;
    case 711u: goto L_08AD698C;
    case 712u: goto L_08AD69A0;
    case 713u: goto L_08AD69AC;
    case 714u: goto L_08AD69C0;
    case 715u: goto L_08AD69CC;
    case 716u: goto L_08AD69E0;
    case 717u: goto L_08AD69E8;
    case 718u: goto L_08AD69F0;
    case 719u: goto L_08AD69FC;
    case 720u: goto L_08AD6A04;
    case 721u: goto L_08AD6A0C;
    case 722u: goto L_08AD6A38;
    case 723u: goto L_08AD6A40;
    case 724u: goto L_08AD6A48;
    case 725u: goto L_08AD6A54;
    case 726u: goto L_08AD6A5C;
    case 727u: goto L_08AD6A60;
    case 728u: goto L_08AD6A68;
    case 729u: goto L_08AD6A70;
    case 730u: goto L_08AD6A80;
    case 731u: goto L_08AD6A8C;
    case 732u: goto L_08AD6A94;
    case 733u: goto L_08AD6AA0;
    case 734u: goto L_08AD6AA8;
    case 735u: goto L_08AD6AAC;
    case 736u: goto L_08AD6AB4;
    case 737u: goto L_08AD6ABC;
    case 738u: goto L_08AD6AC0;
    case 739u: goto L_08AD6AE8;
    case 740u: goto L_08AD6B00;
    case 741u: goto L_08AD6B0C;
    case 742u: goto L_08AD6B40;
    case 743u: goto L_08AD6B4C;
    case 744u: goto L_08AD6B58;
    case 745u: goto L_08AD6B74;
    case 746u: goto L_08AD6B8C;
    case 747u: goto L_08AD6B98;
    case 748u: goto L_08AD6BC0;
    case 749u: goto L_08AD6BDC;
    case 750u: goto L_08AD6BEC;
    case 751u: goto L_08AD6BFC;
    case 752u: goto L_08AD6C14;
    case 753u: goto L_08AD6C1C;
    case 754u: goto L_08AD6C3C;
    case 755u: goto L_08AD6C50;
    case 756u: goto L_08AD6C60;
    case 757u: goto L_08AD6C7C;
    case 758u: goto L_08AD6C90;
    case 759u: goto L_08AD6C94;
    case 760u: goto L_08AD6CAC;
    case 761u: goto L_08AD6CC4;
    case 762u: goto L_08AD6CD0;
    case 763u: goto L_08AD6CD8;
    case 764u: goto L_08AD6CE0;
    case 765u: goto L_08AD6CF0;
    case 766u: goto L_08AD6D20;
    case 767u: goto L_08AD6D3C;
    case 768u: goto L_08AD6D4C;
    case 769u: goto L_08AD6D5C;
    case 770u: goto L_08AD6D74;
    case 771u: goto L_08AD6D94;
    case 772u: goto L_08AD6DA4;
    case 773u: goto L_08AD6DAC;
    case 774u: goto L_08AD6DB4;
    case 775u: goto L_08AD6DBC;
    case 776u: goto L_08AD6DC0;
    case 777u: goto L_08AD6DCC;
    case 778u: goto L_08AD6DE0;
    case 779u: goto L_08AD6DFC;
    case 780u: goto L_08AD6E10;
    case 781u: goto L_08AD6E14;
    case 782u: goto L_08AD6E34;
    case 783u: goto L_08AD6E48;
    case 784u: goto L_08AD6E54;
    case 785u: goto L_08AD6E60;
    case 786u: goto L_08AD6E70;
    case 787u: goto L_08AD6E7C;
    case 788u: goto L_08AD6E88;
    case 789u: goto L_08AD6E94;
    case 790u: goto L_08AD6E9C;
    case 791u: goto L_08AD6EA8;
    case 792u: goto L_08AD6EAC;
    case 793u: goto L_08AD6EB4;
    case 794u: goto L_08AD6EEC;
    case 795u: goto L_08AD6EF8;
    case 796u: goto L_08AD6F08;
    case 797u: goto L_08AD6F18;
    case 798u: goto L_08AD6F28;
    case 799u: goto L_08AD6F40;
    case 800u: goto L_08AD6F48;
    case 801u: goto L_08AD6F50;
    case 802u: goto L_08AD6F5C;
    case 803u: goto L_08AD6F60;
    case 804u: goto L_08AD6F80;
    case 805u: goto L_08AD6F90;
    case 806u: goto L_08AD6FC4;
    case 807u: goto L_08AD6FD0;
    case 808u: goto L_08AD6FE4;
    case 809u: goto L_08AD6FF4;
    case 810u: goto L_08AD7000;
    case 811u: goto L_08AD7008;
    case 812u: goto L_08AD7018;
    case 813u: goto L_08AD7024;
    case 814u: goto L_08AD702C;
    case 815u: goto L_08AD7034;
    case 816u: goto L_08AD703C;
    case 817u: goto L_08AD7048;
    case 818u: goto L_08AD7050;
    case 819u: goto L_08AD7068;
    case 820u: goto L_08AD7078;
    case 821u: goto L_08AD7088;
    case 822u: goto L_08AD7094;
    case 823u: goto L_08AD70A0;
    case 824u: goto L_08AD70AC;
    case 825u: goto L_08AD70B4;
    case 826u: goto L_08AD70C0;
    case 827u: goto L_08AD70C8;
    case 828u: goto L_08AD70D0;
    case 829u: goto L_08AD70D4;
    case 830u: goto L_08AD70FC;
    case 831u: goto L_08AD7130;
    case 832u: goto L_08AD713C;
    case 833u: goto L_08AD7150;
    case 834u: goto L_08AD7160;
    case 835u: goto L_08AD716C;
    case 836u: goto L_08AD7174;
    case 837u: goto L_08AD717C;
    case 838u: goto L_08AD718C;
    case 839u: goto L_08AD7194;
    case 840u: goto L_08AD71A4;
    case 841u: goto L_08AD71B0;
    case 842u: goto L_08AD71B8;
    case 843u: goto L_08AD71C0;
    case 844u: goto L_08AD71D8;
    case 845u: goto L_08AD71E8;
    case 846u: goto L_08AD71F8;
    case 847u: goto L_08AD7204;
    case 848u: goto L_08AD7210;
    case 849u: goto L_08AD721C;
    case 850u: goto L_08AD7224;
    case 851u: goto L_08AD7230;
    case 852u: goto L_08AD7238;
    case 853u: goto L_08AD7240;
    case 854u: goto L_08AD7244;
    case 855u: goto L_08AD726C;
    case 856u: goto L_08AD7288;
    case 857u: goto L_08AD729C;
    case 858u: goto L_08AD72AC;
    case 859u: goto L_08AD72B4;
    case 860u: goto L_08AD72CC;
    case 861u: goto L_08AD72D4;
    case 862u: goto L_08AD72E8;
    case 863u: goto L_08AD732C;
    case 864u: goto L_08AD7338;
    case 865u: goto L_08AD7354;
    case 866u: goto L_08AD7364;
    case 867u: goto L_08AD7370;
    case 868u: goto L_08AD737C;
    case 869u: goto L_08AD7384;
    case 870u: goto L_08AD738C;
    case 871u: goto L_08AD7394;
    case 872u: goto L_08AD73A0;
    case 873u: goto L_08AD73AC;
    case 874u: goto L_08AD73B4;
    case 875u: goto L_08AD73C0;
    case 876u: goto L_08AD73C8;
    case 877u: goto L_08AD73D0;
    case 878u: goto L_08AD73D4;
    case 879u: goto L_08AD7400;
    case 880u: goto L_08AD744C;
    case 881u: goto L_08AD745C;
    case 882u: goto L_08AD7464;
    case 883u: goto L_08AD7470;
    case 884u: goto L_08AD747C;
    case 885u: goto L_08AD7484;
    case 886u: goto L_08AD749C;
    case 887u: goto L_08AD74A0;
    case 888u: goto L_08AD74A8;
    case 889u: goto L_08AD74B0;
    case 890u: goto L_08AD74B8;
    case 891u: goto L_08AD74CC;
    case 892u: goto L_08AD74D4;
    case 893u: goto L_08AD74E4;
    case 894u: goto L_08AD7500;
    case 895u: goto L_08AD7508;
    case 896u: goto L_08AD751C;
    case 897u: goto L_08AD7524;
    case 898u: goto L_08AD752C;
    case 899u: goto L_08AD7534;
    case 900u: goto L_08AD754C;
    case 901u: goto L_08AD7554;
    case 902u: goto L_08AD7568;
    case 903u: goto L_08AD7570;
    case 904u: goto L_08AD7584;
    case 905u: goto L_08AD75A0;
    case 906u: goto L_08AD75AC;
    case 907u: goto L_08AD75B8;
    case 908u: goto L_08AD75C0;
    case 909u: goto L_08AD75D4;
    case 910u: goto L_08AD75DC;
    case 911u: goto L_08AD75F0;
    case 912u: goto L_08AD75F8;
    case 913u: goto L_08AD75FC;
    case 914u: goto L_08AD7604;
    case 915u: goto L_08AD7610;
    case 916u: goto L_08AD7618;
    case 917u: goto L_08AD7620;
    case 918u: goto L_08AD7628;
    case 919u: goto L_08AD7630;
    case 920u: goto L_08AD7638;
    case 921u: goto L_08AD7640;
    case 922u: goto L_08AD7644;
    case 923u: goto L_08AD7664;
    case 924u: goto L_08AD7670;
    case 925u: goto L_08AD767C;
    case 926u: goto L_08AD7684;
    case 927u: goto L_08AD7698;
    case 928u: goto L_08AD76A0;
    case 929u: goto L_08AD76B4;
    case 930u: goto L_08AD76BC;
    case 931u: goto L_08AD76C0;
    case 932u: goto L_08AD76CC;
    case 933u: goto L_08AD76D8;
    case 934u: goto L_08AD76E0;
    case 935u: goto L_08AD76E8;
    case 936u: goto L_08AD76F4;
    case 937u: goto L_08AD76FC;
    case 938u: goto L_08AD7704;
    case 939u: goto L_08AD7720;
    case 940u: goto L_08AD7728;
    case 941u: goto L_08AD772C;
    case 942u: goto L_08AD773C;
    case 943u: goto L_08AD7748;
    case 944u: goto L_08AD7754;
    case 945u: goto L_08AD7764;
    case 946u: goto L_08AD776C;
    case 947u: goto L_08AD7780;
    case 948u: goto L_08AD7784;
    case 949u: goto L_08AD778C;
    case 950u: goto L_08AD77A0;
    case 951u: goto L_08AD77AC;
    case 952u: goto L_08AD77C0;
    case 953u: goto L_08AD77C8;
    case 954u: goto L_08AD77D0;
    case 955u: goto L_08AD77DC;
    case 956u: goto L_08AD77E4;
    case 957u: goto L_08AD77EC;
    case 958u: goto L_08AD77F8;
    case 959u: goto L_08AD7800;
    case 960u: goto L_08AD780C;
    case 961u: goto L_08AD7818;
    case 962u: goto L_08AD782C;
    case 963u: goto L_08AD7834;
    case 964u: goto L_08AD783C;
    case 965u: goto L_08AD7844;
    case 966u: goto L_08AD7850;
    case 967u: goto L_08AD7860;
    case 968u: goto L_08AD786C;
    case 969u: goto L_08AD7878;
    case 970u: goto L_08AD78AC;
    case 971u: goto L_08AD78DC;
    case 972u: goto L_08AD7918;
    case 973u: goto L_08AD7928;
    case 974u: goto L_08AD7938;
    case 975u: goto L_08AD7940;
    case 976u: goto L_08AD7948;
    case 977u: goto L_08AD7954;
    case 978u: goto L_08AD795C;
    case 979u: goto L_08AD7984;
    case 980u: goto L_08AD798C;
    case 981u: goto L_08AD7998;
    case 982u: goto L_08AD79A4;
    case 983u: goto L_08AD79B4;
    case 984u: goto L_08AD79B8;
    case 985u: goto L_08AD79CC;
    case 986u: goto L_08AD79D4;
    case 987u: goto L_08AD79E8;
    case 988u: goto L_08AD7A0C;
    case 989u: goto L_08AD7A34;
    case 990u: goto L_08AD7A3C;
    case 991u: goto L_08AD7A44;
    case 992u: goto L_08AD7A58;
    case 993u: goto L_08AD7A68;
    case 994u: goto L_08AD7A78;
    case 995u: goto L_08AD7A84;
    case 996u: goto L_08AD7A9C;
    case 997u: goto L_08AD7AAC;
    case 998u: goto L_08AD7AB4;
    case 999u: goto L_08AD7AD0;
    case 1000u: goto L_08AD7AD8;
    case 1001u: goto L_08AD7AE4;
    case 1002u: goto L_08AD7AF0;
    case 1003u: goto L_08AD7AF8;
    case 1004u: goto L_08AD7B08;
    case 1005u: goto L_08AD7B14;
    case 1006u: goto L_08AD7B24;
    case 1007u: goto L_08AD7B30;
    case 1008u: goto L_08AD7B38;
    case 1009u: goto L_08AD7B4C;
    case 1010u: goto L_08AD7B70;
    case 1011u: goto L_08AD7B80;
    case 1012u: goto L_08AD7B88;
    case 1013u: goto L_08AD7B90;
    case 1014u: goto L_08AD7B9C;
    case 1015u: goto L_08AD7BBC;
    case 1016u: goto L_08AD7BD0;
    case 1017u: goto L_08AD7BDC;
    case 1018u: goto L_08AD7BE8;
    case 1019u: goto L_08AD7BF4;
    case 1020u: goto L_08AD7BFC;
    case 1021u: goto L_08AD7C04;
    case 1022u: goto L_08AD7C10;
    case 1023u: goto L_08AD7C18;
    case 1024u: goto L_08AD7C20;
    case 1025u: goto L_08AD7C28;
    case 1026u: goto L_08AD7C3C;
    case 1027u: goto L_08AD7C44;
    case 1028u: goto L_08AD7C4C;
    case 1029u: goto L_08AD7C60;
    case 1030u: goto L_08AD7C80;
    case 1031u: goto L_08AD7C84;
    case 1032u: goto L_08AD7C90;
    case 1033u: goto L_08AD7CA0;
    case 1034u: goto L_08AD7CA8;
    case 1035u: goto L_08AD7CB8;
    case 1036u: goto L_08AD7CC0;
    case 1037u: goto L_08AD7CC4;
    case 1038u: goto L_08AD7CD0;
    case 1039u: goto L_08AD7CE0;
    case 1040u: goto L_08AD7CE8;
    case 1041u: goto L_08AD7CF8;
    case 1042u: goto L_08AD7D04;
    case 1043u: goto L_08AD7D10;
    case 1044u: goto L_08AD7D28;
    case 1045u: goto L_08AD7D3C;
    case 1046u: goto L_08AD7D4C;
    case 1047u: goto L_08AD7D60;
    case 1048u: goto L_08AD7D74;
    case 1049u: goto L_08AD7D84;
    case 1050u: goto L_08AD7D8C;
    case 1051u: goto L_08AD7D9C;
    case 1052u: goto L_08AD7DA8;
    case 1053u: goto L_08AD7DB4;
    case 1054u: goto L_08AD7DC0;
    case 1055u: goto L_08AD7DCC;
    case 1056u: goto L_08AD7DDC;
    case 1057u: goto L_08AD7DE8;
    case 1058u: goto L_08AD7DF4;
    case 1059u: goto L_08AD7E04;
    case 1060u: goto L_08AD7E18;
    case 1061u: goto L_08AD7E20;
    case 1062u: goto L_08AD7E28;
    case 1063u: goto L_08AD7E38;
    case 1064u: goto L_08AD7E44;
    case 1065u: goto L_08AD7E50;
    case 1066u: goto L_08AD7E60;
    case 1067u: goto L_08AD7E64;
    case 1068u: goto L_08AD7E94;
    case 1069u: goto L_08AD7EBC;
    case 1070u: goto L_08AD7ECC;
    case 1071u: goto L_08AD7ED4;
    case 1072u: goto L_08AD7EE8;
    case 1073u: goto L_08AD7EFC;
    case 1074u: goto L_08AD7F04;
    case 1075u: goto L_08AD7F0C;
    case 1076u: goto L_08AD7F14;
    case 1077u: goto L_08AD7F1C;
    case 1078u: goto L_08AD7F24;
    case 1079u: goto L_08AD7F2C;
    case 1080u: goto L_08AD7F34;
    case 1081u: goto L_08AD7F3C;
    case 1082u: goto L_08AD7F50;
    case 1083u: goto L_08AD7F64;
    case 1084u: goto L_08AD7F6C;
    case 1085u: goto L_08AD7F78;
    case 1086u: goto L_08AD7F84;
    case 1087u: goto L_08AD7F8C;
    case 1088u: goto L_08AD7F98;
    case 1089u: goto L_08AD7FA0;
    case 1090u: goto L_08AD7FA8;
    case 1091u: goto L_08AD7FB0;
    case 1092u: goto L_08AD7FB8;
    case 1093u: goto L_08AD7FC0;
    case 1094u: goto L_08AD7FD4;
    case 1095u: goto L_08AD7FE8;
    case 1096u: goto L_08AD7FF0;
    case 1097u: goto L_08AD7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AD4004:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AD4014u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 278u, 0x08939138u>(ctx, &aot_mem) && ctx.pc == 0x08AD4014u) goto L_08AD4014;
    return;
L_08AD4014:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 758u, 0x08AD3FC0u>(ctx, &aot_mem); return;
      }
      goto L_08AD4020;
    }
L_08AD4020:
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
L_08AD4040:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AD40DC;
      }
      goto L_08AD4084;
    }
L_08AD4084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
        goto L_08AD409C;
    }
    goto L_08AD4090;
L_08AD4090:
    ctx.gpr[31] = (0x08AD4098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4098u) goto L_08AD4098;
    return;
L_08AD4098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_08AD409C;
L_08AD409C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD40DC;
      }
      goto L_08AD40B0;
    }
L_08AD40B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
        goto L_08AD40C8;
    }
    goto L_08AD40BC;
L_08AD40BC:
    ctx.gpr[31] = (0x08AD40C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD40C4u) goto L_08AD40C4;
    return;
L_08AD40C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_08AD40C8;
L_08AD40C8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD40D4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 174u, 0x08954B84u>(ctx, &aot_mem) && ctx.pc == 0x08AD40D4u) goto L_08AD40D4;
    return;
L_08AD40D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD411C;
      }
      goto L_08AD40DC;
    }
L_08AD40DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD40E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD40E8u) goto L_08AD40E8;
    return;
L_08AD40E8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4114;
      }
      goto L_08AD40F4;
    }
L_08AD40F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4114;
      }
      goto L_08AD4100;
    }
L_08AD4100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD4124;
      }
      goto L_08AD410C;
    }
L_08AD410C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD4124;
      }
      goto L_08AD4114;
    }
L_08AD4114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD43C4;
      }
      goto L_08AD411C;
    }
L_08AD411C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD43C4;
      }
      goto L_08AD4124;
    }
L_08AD4124:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD416C;
      }
      goto L_08AD412C;
    }
L_08AD412C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] & 131u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08AD416C;
      }
      goto L_08AD414C;
    }
L_08AD414C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(156));
    ctx.gpr[4] = (ctx.gpr[4] - 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    goto L_08AD416C;
L_08AD416C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AD41B0;
      }
      goto L_08AD4180;
    }
L_08AD4180:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-41));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[18]);
    ctx.gpr[31] = (0x08AD41A0u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 744u, 0x08A071F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD41A0u) goto L_08AD41A0;
    return;
L_08AD41A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD41C4;
      }
      goto L_08AD41A8;
    }
L_08AD41A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4214;
      }
      goto L_08AD41B0;
    }
L_08AD41B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD41BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AD4C38;
L_08AD41BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD43C4;
      }
      goto L_08AD41C4;
    }
L_08AD41C4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AD41D0u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AD41D0u) goto L_08AD41D0;
    return;
L_08AD41D0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
      if (branch_taken) {
          goto L_08AD41F4;
      }
      goto L_08AD41DC;
    }
L_08AD41DC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD41ECu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 700u, 0x08AD3C44u>(ctx, &aot_mem) && ctx.pc == 0x08AD41ECu) goto L_08AD41EC;
    return;
L_08AD41EC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    goto L_08AD41F4;
L_08AD41F4:
    ctx.gpr[4] = (ctx.gpr[4] - 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AD43C4;
      }
      goto L_08AD4214;
    }
L_08AD4214:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AD4224u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 136u, 0x08B70B9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4224u) goto L_08AD4224;
    return;
L_08AD4224:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD423C;
      }
      goto L_08AD4230;
    }
L_08AD4230:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD423Cu);
    ctx.gpr[5] = (0u | 131u);
    goto L_08AD5498;
L_08AD423C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] << 11u);
    ctx.gpr[21] = (0u + ctx.gpr[21]);
    ctx.gpr[31] = (0x08AD4254u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AD6070;
L_08AD4254:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4260u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AD4260u) goto L_08AD4260;
    return;
L_08AD4260:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08AD427C;
      }
      goto L_08AD426C;
    }
L_08AD426C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD4278u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 700u, 0x08AD3C44u>(ctx, &aot_mem) && ctx.pc == 0x08AD4278u) goto L_08AD4278;
    return;
L_08AD4278:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD427C;
L_08AD427C:
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 11u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AD429Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD429Cu) goto L_08AD429C;
    return;
L_08AD429C:
    ctx.gpr[5] = (ctx.gpr[23] & 32u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD42AC;
      }
      goto L_08AD42A8;
    }
L_08AD42A8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AD42AC;
L_08AD42AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD42D8;
      }
      goto L_08AD42BC;
    }
L_08AD42BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD42D8;
      }
      goto L_08AD42CC;
    }
L_08AD42CC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD42D8;
      }
      goto L_08AD42D4;
    }
L_08AD42D4:
    ctx.gpr[4] = (0u | 500u);
    goto L_08AD42D8;
L_08AD42D8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4300;
      }
      goto L_08AD42E0;
    }
L_08AD42E0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AD42FCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 274u, 0x089390ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD42FCu) goto L_08AD42FC;
    return;
L_08AD42FC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AD4300;
L_08AD4300:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD431C;
      }
      goto L_08AD4308;
    }
L_08AD4308:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AD4314u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 314u, 0x08939328u>(ctx, &aot_mem) && ctx.pc == 0x08AD4314u) goto L_08AD4314;
    return;
L_08AD4314:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
      if (branch_taken) {
          goto L_08AD4398;
      }
      goto L_08AD431C;
    }
L_08AD431C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4340;
      }
      goto L_08AD432C;
    }
L_08AD432C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-624));
    ctx.gpr[31] = (0x08AD4338u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 314u, 0x08939328u>(ctx, &aot_mem) && ctx.pc == 0x08AD4338u) goto L_08AD4338;
    return;
L_08AD4338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
      if (branch_taken) {
          goto L_08AD4398;
      }
      goto L_08AD4340;
    }
L_08AD4340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4364;
      }
      goto L_08AD4350;
    }
L_08AD4350:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-616));
    ctx.gpr[31] = (0x08AD435Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 314u, 0x08939328u>(ctx, &aot_mem) && ctx.pc == 0x08AD435Cu) goto L_08AD435C;
    return;
L_08AD435C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
      if (branch_taken) {
          goto L_08AD4398;
      }
      goto L_08AD4364;
    }
L_08AD4364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4388;
      }
      goto L_08AD4374;
    }
L_08AD4374:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-608));
    ctx.gpr[31] = (0x08AD4380u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 314u, 0x08939328u>(ctx, &aot_mem) && ctx.pc == 0x08AD4380u) goto L_08AD4380;
    return;
L_08AD4380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
      if (branch_taken) {
          goto L_08AD4398;
      }
      goto L_08AD4388;
    }
L_08AD4388:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-596));
    ctx.gpr[31] = (0x08AD4394u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 314u, 0x08939328u>(ctx, &aot_mem) && ctx.pc == 0x08AD4394u) goto L_08AD4394;
    return;
L_08AD4394:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    goto L_08AD4398;
L_08AD4398:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[4] - 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.gpr[31] = (0x08AD43C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AD4C38;
L_08AD43C4:
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
L_08AD43F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD44A8;
      }
      goto L_08AD4420;
    }
L_08AD4420:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AD4498;
      }
      goto L_08AD4434;
    }
L_08AD4434:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD4474;
      }
      goto L_08AD4464;
    }
L_08AD4464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD4474;
L_08AD4474:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(629))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AD4490;
      }
      goto L_08AD4484;
    }
L_08AD4484:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(629))))));
    ctx.gpr[31] = (0x08AD4490u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 456u, 0x08B41EB4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4490u) goto L_08AD4490;
    return;
L_08AD4490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD44A8;
      }
      goto L_08AD4498;
    }
L_08AD4498:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4420;
      }
      goto L_08AD44A8;
    }
L_08AD44A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD44B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD44B4u) goto L_08AD44B4;
    return;
L_08AD44B4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4500;
      }
      goto L_08AD44C4;
    }
L_08AD44C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD44D8;
      }
      goto L_08AD44D0;
    }
L_08AD44D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD44D8;
      }
      goto L_08AD44D8;
    }
L_08AD44D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD44F8;
      }
      goto L_08AD44E0;
    }
L_08AD44E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AD44F8;
L_08AD44F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4768;
      }
      goto L_08AD4500;
    }
L_08AD4500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AD452C;
      }
      goto L_08AD4510;
    }
L_08AD4510:
    ctx.gpr[31] = (0x08AD4518u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD613C;
L_08AD4518:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD4524u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08AD6EB4;
L_08AD4524:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4544;
      }
      goto L_08AD452C;
    }
L_08AD452C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
        goto L_08AD454C;
    }
    goto L_08AD453C;
L_08AD453C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4620;
      }
      goto L_08AD4544;
    }
L_08AD4544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4768;
      }
      goto L_08AD454C;
    }
L_08AD454C:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(164));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4618;
      }
      goto L_08AD4590;
    }
L_08AD4590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[5] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08AD45D8;
    }
    goto L_08AD45A0;
L_08AD45A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD45C8;
      }
      goto L_08AD45AC;
    }
L_08AD45AC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AD45C0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 278u, 0x08939138u>(ctx, &aot_mem) && ctx.pc == 0x08AD45C0u) goto L_08AD45C0;
    return;
L_08AD45C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD45D0;
      }
      goto L_08AD45C8;
    }
L_08AD45C8:
    ctx.gpr[31] = (0x08AD45D0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 709u, 0x08AD3CC4u>(ctx, &aot_mem) && ctx.pc == 0x08AD45D0u) goto L_08AD45D0;
    return;
L_08AD45D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4618;
      }
      goto L_08AD45D8;
    }
L_08AD45D8:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(164));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4590;
      }
      goto L_08AD4618;
    }
L_08AD4618:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD4768;
      }
      goto L_08AD4620;
    }
L_08AD4620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4680;
      }
      goto L_08AD4630;
    }
L_08AD4630:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD4650;
      }
      goto L_08AD4640;
    }
L_08AD4640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD4650;
L_08AD4650:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AD4668u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD4668u) goto L_08AD4668;
    return;
L_08AD4668:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4678u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16260));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 699u, 0x08AD3C1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4678u) goto L_08AD4678;
    return;
L_08AD4678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4708;
      }
      goto L_08AD4680;
    }
L_08AD4680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD46AC;
      }
      goto L_08AD4690;
    }
L_08AD4690:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD469Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD6130;
L_08AD469C:
    ctx.gpr[31] = (0x08AD46A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 621u, 0x08AAEEA8u>(ctx, &aot_mem) && ctx.pc == 0x08AD46A4u) goto L_08AD46A4;
    return;
L_08AD46A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4708;
      }
      goto L_08AD46AC;
    }
L_08AD46AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD46D8;
      }
      goto L_08AD46BC;
    }
L_08AD46BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD46C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD6124;
L_08AD46C8:
    ctx.gpr[31] = (0x08AD46D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 218u, 0x088093ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD46D0u) goto L_08AD46D0;
    return;
L_08AD46D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4708;
      }
      goto L_08AD46D8;
    }
L_08AD46D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08AD46F0;
    }
    goto L_08AD46E4;
L_08AD46E4:
    ctx.gpr[31] = (0x08AD46ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AD46ECu) goto L_08AD46EC;
    return;
L_08AD46EC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08AD46F0;
L_08AD46F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD46FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD613C;
L_08AD46FC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD4708u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 556u, 0x0893E35Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4708u) goto L_08AD4708;
    return;
L_08AD4708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD471C;
      }
      goto L_08AD4714;
    }
L_08AD4714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD471C;
      }
      goto L_08AD471C;
    }
L_08AD471C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD473C;
      }
      goto L_08AD4724;
    }
L_08AD4724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AD473C;
L_08AD473C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD474Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD474Cu) goto L_08AD474C;
    return;
L_08AD474C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[6] = (0u - ctx.gpr[6]);
    ctx.gpr[31] = (0x08AD4768u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD6F80;
L_08AD4768:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4784:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    goto L_08AD47A0;
L_08AD47A0:
    ctx.gpr[31] = (0x08AD47A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 639u, 0x08AD38A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD47A8u) goto L_08AD47A8;
    return;
L_08AD47A8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD47A0;
      }
      goto L_08AD47B8;
    }
L_08AD47B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u | 400u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 1600u);
      if (branch_taken) {
          goto L_08AD4838;
      }
      goto L_08AD47CC;
    }
L_08AD47CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD47D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AD4E34;
L_08AD47D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4824;
      }
      goto L_08AD47E0;
    }
L_08AD47E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD47FC;
      }
      goto L_08AD47F0;
    }
L_08AD47F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD47FC;
L_08AD47FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4824;
      }
      goto L_08AD4808;
    }
L_08AD4808:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4814u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AD43F0;
L_08AD4814:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4820u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD4820u) goto L_08AD4820;
    return;
L_08AD4820:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    goto L_08AD4824;
L_08AD4824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD47CC;
      }
      goto L_08AD4838;
    }
L_08AD4838:
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
L_08AD4850:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(156));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[17] - 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[18] = (0u | 0u);
    goto L_08AD4880;
L_08AD4880:
    ctx.gpr[31] = (0x08AD4888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 639u, 0x08AD38A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4888u) goto L_08AD4888;
    return;
L_08AD4888:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4880;
      }
      goto L_08AD4898;
    }
L_08AD4898:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[17];
    ctx.gpr[19] = (0u | 20u);
      if (branch_taken) {
          goto L_08AD4988;
      }
      goto L_08AD48A4;
    }
L_08AD48A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    goto L_08AD48A8;
L_08AD48A8:
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD4904;
      }
      goto L_08AD48C4;
    }
L_08AD48C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD48E4;
      }
      goto L_08AD48D4;
    }
L_08AD48D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD48E4;
L_08AD48E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4980;
      }
      goto L_08AD48F0;
    }
L_08AD48F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD48FCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AD43F0;
L_08AD48FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
      if (branch_taken) {
          goto L_08AD4980;
      }
      goto L_08AD4904;
    }
L_08AD4904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4958;
      }
      goto L_08AD4914;
    }
L_08AD4914:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4920u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AD6130;
L_08AD4920:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD492Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 687u, 0x08AAF2ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD492Cu) goto L_08AD492C;
    return;
L_08AD492C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD4950;
      }
      goto L_08AD4934;
    }
L_08AD4934:
    ctx.gpr[31] = (0x08AD493Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AD6E34;
L_08AD493C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4950;
      }
      goto L_08AD4944;
    }
L_08AD4944:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4950u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AD43F0;
L_08AD4950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4980;
      }
      goto L_08AD4958;
    }
L_08AD4958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4980;
      }
      goto L_08AD4968;
    }
L_08AD4968:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4974u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AD6124;
L_08AD4974:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4980u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AD43F0;
L_08AD4980:
    if (ctx.gpr[20] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
        goto L_08AD48A8;
    }
    goto L_08AD4988;
L_08AD4988:
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
L_08AD49AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[30]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[30] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(185), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(164));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31984));
    ctx.gpr[6] = (ctx.gpr[6] - 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[31]);
    goto L_08AD4A10;
L_08AD4A10:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD4BB8;
      }
      goto L_08AD4A28;
    }
L_08AD4A28:
    ctx.gpr[19] = (ctx.gpr[29] | 0u);
    goto L_08AD4A2C;
L_08AD4A2C:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD4A4C;
      }
      goto L_08AD4A3C;
    }
L_08AD4A3C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD4A48u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD4A48u) goto L_08AD4A48;
    return;
L_08AD4A48:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08AD4A4C;
L_08AD4A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AD4A70;
      }
      goto L_08AD4A58;
    }
L_08AD4A58:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4BA8;
      }
      goto L_08AD4A60;
    }
L_08AD4A60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4BA8;
      }
      goto L_08AD4A70;
    }
L_08AD4A70:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AD4A94;
      }
      goto L_08AD4A80;
    }
L_08AD4A80:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD4A8Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AD4D20;
L_08AD4A8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4AC4;
      }
      goto L_08AD4A94;
    }
L_08AD4A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4AAC;
      }
      goto L_08AD4AA0;
    }
L_08AD4AA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4AACu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 709u, 0x08AD3CC4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4AACu) goto L_08AD4AAC;
    return;
L_08AD4AAC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD4BA8;
      }
      goto L_08AD4AC4;
    }
L_08AD4AC4:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), 0u);
      if (branch_taken) {
          goto L_08AD4AE0;
      }
      goto L_08AD4ACC;
    }
L_08AD4ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AD4AD8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 282u, 0x08939174u>(ctx, &aot_mem) && ctx.pc == 0x08AD4AD8u) goto L_08AD4AD8;
    return;
L_08AD4AD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4BA8;
      }
      goto L_08AD4AE0;
    }
L_08AD4AE0:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4AF4;
      }
      goto L_08AD4AE8;
    }
L_08AD4AE8:
    ctx.gpr[31] = (0x08AD4AF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 286u, 0x089391C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4AF0u) goto L_08AD4AF0;
    return;
L_08AD4AF0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[2]);
    goto L_08AD4AF4;
L_08AD4AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08AD4B08u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem) && ctx.pc == 0x08AD4B08u) goto L_08AD4B08;
    return;
L_08AD4B08:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4B24;
      }
      goto L_08AD4B10;
    }
L_08AD4B10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4B1Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 709u, 0x08AD3CC4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4B1Cu) goto L_08AD4B1C;
    return;
L_08AD4B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4BA8;
      }
      goto L_08AD4B24;
    }
L_08AD4B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD4B48;
      }
      goto L_08AD4B30;
    }
L_08AD4B30:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(2047));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 11u));
    ctx.gpr[5] = (ctx.gpr[5] >> 21u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(2047));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 11u));
    goto L_08AD4B48;
L_08AD4B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD4B88;
      }
      goto L_08AD4B54;
    }
L_08AD4B54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD4B64u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AD66D8;
L_08AD4B64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4B88;
      }
      goto L_08AD4B6C;
    }
L_08AD4B6C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4B7Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 709u, 0x08AD3CC4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4B7Cu) goto L_08AD4B7C;
    return;
L_08AD4B7C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AD4BA8;
      }
      goto L_08AD4B88;
    }
L_08AD4B88:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD4B94u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AD43F0;
L_08AD4B94:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_08AD4BA8;
L_08AD4BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD4A2C;
      }
      goto L_08AD4BB8;
    }
L_08AD4BB8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08AD4BEC;
      }
      goto L_08AD4BC8;
    }
L_08AD4BC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD4BDCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AD4040;
L_08AD4BDC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD4BC8;
      }
      goto L_08AD4BEC;
    }
L_08AD4BEC:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4C00;
      }
      goto L_08AD4BF4;
    }
L_08AD4BF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4A10;
      }
      goto L_08AD4C00;
    }
L_08AD4C00:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(185), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4C38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD4CFC;
      }
      goto L_08AD4C6C;
    }
L_08AD4C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD4C90;
      }
      goto L_08AD4C80;
    }
L_08AD4C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD4C90;
L_08AD4C90:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AD4CB8;
      }
      goto L_08AD4CA0;
    }
L_08AD4CA0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD4CACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD4CACu) goto L_08AD4CAC;
    return;
L_08AD4CAC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    ctx.gpr[31] = (0x08AD4CB8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 559u, 0x08AD3374u>(ctx, &aot_mem) && ctx.pc == 0x08AD4CB8u) goto L_08AD4CB8;
    return;
L_08AD4CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AD4CD0u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD4CD0u) goto L_08AD4CD0;
    return;
L_08AD4CD0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AD4CFC;
      }
      goto L_08AD4CDC;
    }
L_08AD4CDC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD4CE8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD4CE8u) goto L_08AD4CE8;
    return;
L_08AD4CE8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    ctx.gpr[31] = (0x08AD4CFCu);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 556u, 0x08AD3328u>(ctx, &aot_mem) && ctx.pc == 0x08AD4CFCu) goto L_08AD4CFC;
    return;
L_08AD4CFC:
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
L_08AD4D20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD4E10;
      }
      goto L_08AD4D44;
    }
L_08AD4D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4E10;
      }
      goto L_08AD4D54;
    }
L_08AD4D54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD4D78;
      }
      goto L_08AD4D68;
    }
L_08AD4D68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AD4D78;
L_08AD4D78:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AD4DCC;
      }
      goto L_08AD4D88;
    }
L_08AD4D88:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08AD4D94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD4D94u) goto L_08AD4D94;
    return;
L_08AD4D94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4DCC;
      }
      goto L_08AD4DA0;
    }
L_08AD4DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4DCC;
      }
      goto L_08AD4DAC;
    }
L_08AD4DAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4DBCu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    goto L_08AD4E34;
L_08AD4DBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4DCC;
      }
      goto L_08AD4DC4;
    }
L_08AD4DC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD4E14;
      }
      goto L_08AD4DCC;
    }
L_08AD4DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AD4DE4u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD4DE4u) goto L_08AD4DE4;
    return;
L_08AD4DE4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AD4E10;
      }
      goto L_08AD4DF0;
    }
L_08AD4DF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4E00u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    goto L_08AD4E34;
L_08AD4E00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4E10;
      }
      goto L_08AD4E08;
    }
L_08AD4E08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD4E14;
      }
      goto L_08AD4E10;
    }
L_08AD4E10:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AD4E14;
L_08AD4E14:
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
L_08AD4E34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD4E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD4E44u) goto L_08AD4E44;
    return;
L_08AD4E44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4E5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD4E80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem) && ctx.pc == 0x08AD4E80u) goto L_08AD4E80;
    return;
L_08AD4E80:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
      if (branch_taken) {
          goto L_08AD4E90;
      }
      goto L_08AD4E8C;
    }
L_08AD4E8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    goto L_08AD4E90;
L_08AD4E90:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7652), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AD4EA4;
      }
      goto L_08AD4E98;
    }
L_08AD4E98:
    ctx.gpr[31] = (0x08AD4EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4EA0u) goto L_08AD4EA0;
    return;
L_08AD4EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_08AD4EA4;
L_08AD4EA4:
    ctx.gpr[31] = (0x08AD4EACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 887u, 0x08953F94u>(ctx, &aot_mem) && ctx.pc == 0x08AD4EACu) goto L_08AD4EAC;
    return;
L_08AD4EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4EC0;
      }
      goto L_08AD4EB8;
    }
L_08AD4EB8:
    ctx.gpr[31] = (0x08AD4EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 399u, 0x08B65A54u>(ctx, &aot_mem) && ctx.pc == 0x08AD4EC0u) goto L_08AD4EC0;
    return;
L_08AD4EC0:
    ctx.gpr[31] = (0x08AD4EC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 162u, 0x08805340u>(ctx, &aot_mem) && ctx.pc == 0x08AD4EC8u) goto L_08AD4EC8;
    return;
L_08AD4EC8:
    ctx.gpr[31] = (0x08AD4ED0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 756u, 0x08AD3F88u>(ctx, &aot_mem) && ctx.pc == 0x08AD4ED0u) goto L_08AD4ED0;
    return;
L_08AD4ED0:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7640), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AD4EE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AD4FFC;
L_08AD4EE0:
    ctx.gpr[31] = (0x08AD4EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 11u, 0x08A7C6A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4EE8u) goto L_08AD4EE8;
    return;
L_08AD4EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4F1C;
      }
      goto L_08AD4EF4;
    }
L_08AD4EF4:
    ctx.gpr[31] = (0x08AD4EFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 532u, 0x0896E338u>(ctx, &aot_mem) && ctx.pc == 0x08AD4EFCu) goto L_08AD4EFC;
    return;
L_08AD4EFC:
    ctx.gpr[18] = (0u | 0u);
    goto L_08AD4F00;
L_08AD4F00:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD4F0Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD5D88;
L_08AD4F0C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4F00;
      }
      goto L_08AD4F1C;
    }
L_08AD4F1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD4F28u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD78DC;
L_08AD4F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19)));
        goto L_08AD4F44;
    }
    goto L_08AD4F34;
L_08AD4F34:
    ctx.gpr[31] = (0x08AD4F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD4F3Cu) goto L_08AD4F3C;
    return;
L_08AD4F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19)));
    goto L_08AD4F44;
L_08AD4F44:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4F58;
      }
      goto L_08AD4F4C;
    }
L_08AD4F4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4F58u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 257u, 0x08809600u>(ctx, &aot_mem) && ctx.pc == 0x08AD4F58u) goto L_08AD4F58;
    return;
L_08AD4F58:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AD4F68u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AD49AC;
L_08AD4F68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4FA8;
      }
      goto L_08AD4F74;
    }
L_08AD4F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AD4F9C;
      }
      goto L_08AD4F84;
    }
L_08AD4F84:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AD4F94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AD4F94u) goto L_08AD4F94;
    return;
L_08AD4F94:
    ctx.gpr[31] = (0x08AD4F9Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-660));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AD4F9Cu) goto L_08AD4F9C;
    return;
L_08AD4F9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4FA8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 610u, 0x0882E9ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD4FA8u) goto L_08AD4FA8;
    return;
L_08AD4FA8:
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
L_08AD4FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD4FDCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 257u, 0x08809600u>(ctx, &aot_mem) && ctx.pc == 0x08AD4FDCu) goto L_08AD4FDC;
    return;
L_08AD4FDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AD4FECu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AD49AC;
L_08AD4FEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4FFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[19] = (0u | 0u);
    goto L_08AD501C;
L_08AD501C:
    ctx.gpr[17] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
    goto L_08AD502C;
L_08AD502C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD503Cu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_08AD726C;
L_08AD503C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AD5050u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_08AD726C;
L_08AD5050:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AD5064u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    goto L_08AD726C;
L_08AD5064:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AD5078u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    goto L_08AD726C;
L_08AD5078:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AD508Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    goto L_08AD726C;
L_08AD508C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AD50A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(52));
    goto L_08AD726C;
L_08AD50A0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2800));
      if (branch_taken) {
          goto L_08AD502C;
      }
      goto L_08AD50B0;
    }
L_08AD50B0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD501C;
      }
      goto L_08AD50C0;
    }
L_08AD50C0:
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
L_08AD50DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD5124;
      }
      goto L_08AD5100;
    }
L_08AD5100:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD510Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD510Cu) goto L_08AD510C;
    return;
L_08AD510C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD512C;
      }
      goto L_08AD511C;
    }
L_08AD511C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD513C;
      }
      goto L_08AD5124;
    }
L_08AD5124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD52D8;
      }
      goto L_08AD512C;
    }
L_08AD512C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD513Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16288));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 699u, 0x08AD3C1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD513Cu) goto L_08AD513C;
    return;
L_08AD513C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5148u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD5148u) goto L_08AD5148;
    return;
L_08AD5148:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(9));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD51CC;
      }
      goto L_08AD516C;
    }
L_08AD516C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD5194;
      }
      goto L_08AD5180;
    }
L_08AD5180:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (ctx.gpr[17] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    goto L_08AD5194;
L_08AD5194:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_08AD51CC;
    }
    goto L_08AD519C;
L_08AD519C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD51B4;
      }
      goto L_08AD51A4;
    }
L_08AD51A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[17] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AD51B4;
L_08AD51B4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AD51CC;
      }
      goto L_08AD51C4;
    }
L_08AD51C4:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08AD51CC;
L_08AD51CC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD51E4;
      }
      goto L_08AD51D4;
    }
L_08AD51D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD51F0;
      }
      goto L_08AD51E4;
    }
L_08AD51E4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5280;
      }
      goto L_08AD51EC;
    }
L_08AD51EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD51F0;
L_08AD51F0:
    ctx.gpr[31] = (0x08AD51F8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD51F8u) goto L_08AD51F8;
    return;
L_08AD51F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 129u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5280;
      }
      goto L_08AD5208;
    }
L_08AD5208:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5214u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AD4E34;
L_08AD5214:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5274;
      }
      goto L_08AD521C;
    }
L_08AD521C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5228u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD5228u) goto L_08AD5228;
    return;
L_08AD5228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD523C;
      }
      goto L_08AD5234;
    }
L_08AD5234:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD523C;
      }
      goto L_08AD523C;
    }
L_08AD523C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5280;
      }
      goto L_08AD5244;
    }
L_08AD5244:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5250u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD5250u) goto L_08AD5250;
    return;
L_08AD5250:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(156));
    ctx.gpr[4] = (ctx.gpr[4] - 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD5280;
      }
      goto L_08AD5274;
    }
L_08AD5274:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5280u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AD43F0;
L_08AD5280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD52D8;
      }
      goto L_08AD5290;
    }
L_08AD5290:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD52B0;
      }
      goto L_08AD52A0;
    }
L_08AD52A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD52B0;
L_08AD52B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AD52D8;
      }
      goto L_08AD52C0;
    }
L_08AD52C0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD52CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD610C;
L_08AD52CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD52D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08AD50DC;
L_08AD52D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD52EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD5308u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD5308u) goto L_08AD5308;
    return;
L_08AD5308:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5328;
      }
      goto L_08AD5318;
    }
L_08AD5318:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5328u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16332));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 699u, 0x08AD3C1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5328u) goto L_08AD5328;
    return;
L_08AD5328:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD5334u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD5334u) goto L_08AD5334;
    return;
L_08AD5334:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(9));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
        goto L_08AD536C;
    }
    goto L_08AD5358;
L_08AD5358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AD539C;
      }
      goto L_08AD5368;
    }
L_08AD5368:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    goto L_08AD536C;
L_08AD536C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD5388;
      }
      goto L_08AD5378;
    }
L_08AD5378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD5388;
L_08AD5388:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD542C;
      }
      goto L_08AD5398;
    }
L_08AD5398:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AD539C;
L_08AD539C:
    ctx.gpr[31] = (0x08AD53A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD53A4u) goto L_08AD53A4;
    return;
L_08AD53A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD542C;
      }
      goto L_08AD53B4;
    }
L_08AD53B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD53C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD4E34;
L_08AD53C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5420;
      }
      goto L_08AD53C8;
    }
L_08AD53C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD53D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD53D4u) goto L_08AD53D4;
    return;
L_08AD53D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD53E8;
      }
      goto L_08AD53E0;
    }
L_08AD53E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD53E8;
      }
      goto L_08AD53E8;
    }
L_08AD53E8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD542C;
      }
      goto L_08AD53F0;
    }
L_08AD53F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD53FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD53FCu) goto L_08AD53FC;
    return;
L_08AD53FC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(156));
    ctx.gpr[4] = (ctx.gpr[4] - 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD542C;
      }
      goto L_08AD5420;
    }
L_08AD5420:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD542Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD43F0;
L_08AD542C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5484;
      }
      goto L_08AD543C;
    }
L_08AD543C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD545C;
      }
      goto L_08AD544C;
    }
L_08AD544C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD545C;
L_08AD545C:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD5484;
      }
      goto L_08AD546C;
    }
L_08AD546C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD5478u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD610C;
L_08AD5478:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD5484u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08AD52EC;
L_08AD5484:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5498:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(185)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD54CC;
      }
      goto L_08AD54C4;
    }
L_08AD54C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD5638;
      }
      goto L_08AD54CC;
    }
L_08AD54CC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(164));
    ctx.gpr[18] = (ctx.gpr[18] - 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AD5634;
      }
      goto L_08AD54E0;
    }
L_08AD54E0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD54F4;
      }
      goto L_08AD54EC;
    }
L_08AD54EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD562C;
      }
      goto L_08AD54F4;
    }
L_08AD54F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD5500u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD5500u) goto L_08AD5500;
    return;
L_08AD5500:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5518;
      }
      goto L_08AD5510;
    }
L_08AD5510:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD562C;
      }
      goto L_08AD5518;
    }
L_08AD5518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5540;
      }
      goto L_08AD5528;
    }
L_08AD5528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5564;
      }
      goto L_08AD5538;
    }
L_08AD5538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD55B0;
      }
      goto L_08AD5540;
    }
L_08AD5540:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD554Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AD43F0;
L_08AD554C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AD555Cu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AD49AC;
L_08AD555C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD5638;
      }
      goto L_08AD5564;
    }
L_08AD5564:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD5570u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AD6130;
L_08AD5570:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD557Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08AD6E34;
L_08AD557C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD55A8;
      }
      goto L_08AD5584;
    }
L_08AD5584:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD5590u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AD43F0;
L_08AD5590:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AD55A0u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AD49AC;
L_08AD55A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD5638;
      }
      goto L_08AD55A8;
    }
L_08AD55A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD562C;
      }
      goto L_08AD55B0;
    }
L_08AD55B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD55E4;
      }
      goto L_08AD55C0;
    }
L_08AD55C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD55CCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AD43F0;
L_08AD55CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AD55DCu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AD49AC;
L_08AD55DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD5638;
      }
      goto L_08AD55E4;
    }
L_08AD55E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD55F0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AD613C;
L_08AD55F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD55FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08AD6EB4;
L_08AD55FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5628;
      }
      goto L_08AD5604;
    }
L_08AD5604:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD5610u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AD43F0;
L_08AD5610:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AD5620u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AD49AC;
L_08AD5620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD5638;
      }
      goto L_08AD5628;
    }
L_08AD5628:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08AD562C;
L_08AD562C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AD54E0;
      }
      goto L_08AD5634;
    }
L_08AD5634:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD5638;
L_08AD5638:
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
L_08AD5658:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(156));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[19] - 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    ctx.gpr[20] = (0u | 20u);
      if (branch_taken) {
          goto L_08AD5804;
      }
      goto L_08AD5698;
    }
L_08AD5698:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD56B0;
      }
      goto L_08AD56A8;
    }
L_08AD56A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD57FC;
      }
      goto L_08AD56B0;
    }
L_08AD56B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
        goto L_08AD56C4;
    }
    goto L_08AD56BC;
L_08AD56BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD57FC;
      }
      goto L_08AD56C4;
    }
L_08AD56C4:
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5720;
      }
      goto L_08AD56E0;
    }
L_08AD56E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD5700;
      }
      goto L_08AD56F0;
    }
L_08AD56F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD5700;
L_08AD5700:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AD57F8;
      }
      goto L_08AD570C;
    }
L_08AD570C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5718u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AD43F0;
L_08AD5718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD58EC;
      }
      goto L_08AD5720;
    }
L_08AD5720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD577C;
      }
      goto L_08AD5730;
    }
L_08AD5730:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD573Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AD6130;
L_08AD573C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD5748u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 687u, 0x08AAF2ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD5748u) goto L_08AD5748;
    return;
L_08AD5748:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD5774;
      }
      goto L_08AD5750;
    }
L_08AD5750:
    ctx.gpr[31] = (0x08AD5758u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08AD6E34;
L_08AD5758:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5774;
      }
      goto L_08AD5760;
    }
L_08AD5760:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD576Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AD43F0;
L_08AD576C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD58EC;
      }
      goto L_08AD5774;
    }
L_08AD5774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD57F8;
      }
      goto L_08AD577C;
    }
L_08AD577C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD57A0;
      }
      goto L_08AD578C;
    }
L_08AD578C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5798u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AD43F0;
L_08AD5798:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD58EC;
      }
      goto L_08AD57A0;
    }
L_08AD57A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD57ACu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AD613C;
L_08AD57AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD57C0;
      }
      goto L_08AD57B8;
    }
L_08AD57B8:
    ctx.gpr[31] = (0x08AD57C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AD57C0u) goto L_08AD57C0;
    return;
L_08AD57C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[31] = (0x08AD57CCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 700u, 0x0893EE64u>(ctx, &aot_mem) && ctx.pc == 0x08AD57CCu) goto L_08AD57CC;
    return;
L_08AD57CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD57F8;
      }
      goto L_08AD57D4;
    }
L_08AD57D4:
    ctx.gpr[31] = (0x08AD57DCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08AD6EB4;
L_08AD57DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD57F8;
      }
      goto L_08AD57E4;
    }
L_08AD57E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD57F0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AD43F0;
L_08AD57F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD58EC;
      }
      goto L_08AD57F8;
    }
L_08AD57F8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AD57FC;
L_08AD57FC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AD5698;
      }
      goto L_08AD5804;
    }
L_08AD5804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5828;
      }
      goto L_08AD5814;
    }
L_08AD5814:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5838;
      }
      goto L_08AD5820;
    }
L_08AD5820:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5838;
      }
      goto L_08AD5828;
    }
L_08AD5828:
    ctx.gpr[31] = (0x08AD5830u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD5DE8;
L_08AD5830:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5854;
      }
      goto L_08AD5838;
    }
L_08AD5838:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5844u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AD5498;
L_08AD5844:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD585C;
      }
      goto L_08AD584C;
    }
L_08AD584C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD58EC;
      }
      goto L_08AD5854;
    }
L_08AD5854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD58EC;
      }
      goto L_08AD585C;
    }
L_08AD585C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[19] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_08AD58E8;
      }
      goto L_08AD586C;
    }
L_08AD586C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5878u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AD4E34;
L_08AD5878:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD58C0;
      }
      goto L_08AD5880;
    }
L_08AD5880:
    ctx.gpr[31] = (0x08AD5888u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD5888u) goto L_08AD5888;
    return;
L_08AD5888:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD58C0;
      }
      goto L_08AD5898;
    }
L_08AD5898:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD58B4;
      }
      goto L_08AD58A8;
    }
L_08AD58A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD58B4;
L_08AD58B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD58D4;
      }
      goto L_08AD58C0;
    }
L_08AD58C0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08AD586C;
      }
      goto L_08AD58CC;
    }
L_08AD58CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD58E8;
      }
      goto L_08AD58D4;
    }
L_08AD58D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD58E0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AD43F0;
L_08AD58E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD58EC;
      }
      goto L_08AD58E8;
    }
L_08AD58E8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD58EC;
L_08AD58EC:
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
L_08AD5914:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD594C;
      }
      goto L_08AD5944;
    }
L_08AD5944:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD5A18;
      }
      goto L_08AD594C;
    }
L_08AD594C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08AD5954;
L_08AD5954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11840)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AD597C;
      }
      goto L_08AD5974;
    }
L_08AD5974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD5A08;
      }
      goto L_08AD597C;
    }
L_08AD597C:
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD5A04;
      }
      goto L_08AD598C;
    }
L_08AD598C:
    ctx.gpr[31] = (0x08AD5994u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AD4E34;
L_08AD5994:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD5A04;
      }
      goto L_08AD599C;
    }
L_08AD599C:
    ctx.gpr[31] = (0x08AD59A4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD59A4u) goto L_08AD59A4;
    return;
L_08AD59A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 131u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5A04;
      }
      goto L_08AD59B4;
    }
L_08AD59B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD59D4;
      }
      goto L_08AD59C4;
    }
L_08AD59C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD59D4;
L_08AD59D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5A04;
      }
      goto L_08AD59E0;
    }
L_08AD59E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD59ECu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AD43F0;
L_08AD59EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD5A18;
      }
      goto L_08AD5A04;
    }
L_08AD5A04:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AD5A08;
L_08AD5A08:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD5954;
      }
      goto L_08AD5A14;
    }
L_08AD5A14:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD5A18;
L_08AD5A18:
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
L_08AD5A3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (2246u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(30712));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD5AD4;
      }
      goto L_08AD5A74;
    }
L_08AD5A74:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08AD5A7C;
L_08AD5A7C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11840)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AD5AAC;
      }
      goto L_08AD5AA4;
    }
L_08AD5AA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5AC4;
      }
      goto L_08AD5AAC;
    }
L_08AD5AAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5AB8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AD5EF8;
L_08AD5AB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5AC4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AD6020;
L_08AD5AC4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD5A7C;
      }
      goto L_08AD5AD4;
    }
L_08AD5AD4:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-588));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x08AD5AE8u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AD4040;
L_08AD5AE8:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-576));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 35u);
    ctx.gpr[31] = (0x08AD5AFCu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AD4040;
L_08AD5AFC:
    ctx.gpr[18] = (0u | 0u);
    goto L_08AD5B00;
L_08AD5B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AD5B24;
      }
      goto L_08AD5B0C;
    }
L_08AD5B0C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD5B18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD5EF8;
L_08AD5B18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD5B24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD6020;
L_08AD5B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AD5B48;
      }
      goto L_08AD5B30;
    }
L_08AD5B30:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD5B3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD5EF8;
L_08AD5B3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AD5B48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD6020;
L_08AD5B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AD5B6C;
      }
      goto L_08AD5B54;
    }
L_08AD5B54:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD5B60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD5EF8;
L_08AD5B60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD5B6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD6020;
L_08AD5B6C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08AD5B00;
      }
      goto L_08AD5B7C;
    }
L_08AD5B7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
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
L_08AD5BAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (0u | 49u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[7] = (16880u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (0u | 49u);
        goto L_08AD5C24;
    }
    goto L_08AD5C24;
L_08AD5C24:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 0 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 0u);
        goto L_08AD5C30;
    }
    goto L_08AD5C30;
L_08AD5C30:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16840u << 16u);
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (0u | 49u);
        goto L_08AD5C5C;
    }
    goto L_08AD5C5C;
L_08AD5C5C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 0 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (0u | 0u);
        goto L_08AD5C68;
    }
    goto L_08AD5C68;
L_08AD5C68:
    ctx.gpr[4] = (16448u << 16u);
    ctx.gpr[21] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08AD5C74;
L_08AD5C74:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[21] << 6u);
    ctx.gpr[4] = (ctx.gpr[21] << 3u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[4]);
    goto L_08AD5C90;
L_08AD5C90:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AD5CC0;
      }
      goto L_08AD5CA4;
    }
L_08AD5CA4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD5CC8;
      }
      goto L_08AD5CC0;
    }
L_08AD5CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5D3C;
      }
      goto L_08AD5CC8;
    }
L_08AD5CC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5CD8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    goto L_08AD726C;
L_08AD5CD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08AD5CECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_08AD726C;
L_08AD5CEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08AD5D00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    goto L_08AD726C;
L_08AD5D00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08AD5D14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    goto L_08AD726C;
L_08AD5D14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08AD5D28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    goto L_08AD726C;
L_08AD5D28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08AD5D3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(52));
    goto L_08AD726C;
L_08AD5D3C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2800));
      if (branch_taken) {
          goto L_08AD5C90;
      }
      goto L_08AD5D4C;
    }
L_08AD5D4C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5C74;
      }
      goto L_08AD5D5C;
    }
L_08AD5D5C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5D88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD5DD8;
      }
      goto L_08AD5DA4;
    }
L_08AD5DA4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x08AD5DB4u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 526u, 0x08A8EB48u>(ctx, &aot_mem) && ctx.pc == 0x08AD5DB4u) goto L_08AD5DB4;
    return;
L_08AD5DB4:
    ctx.gpr[31] = (0x08AD5DBCu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 443u, 0x08B41D30u>(ctx, &aot_mem) && ctx.pc == 0x08AD5DBCu) goto L_08AD5DBC;
    return;
L_08AD5DBC:
    ctx.gpr[31] = (0x08AD5DC4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 450u, 0x08B41DB8u>(ctx, &aot_mem) && ctx.pc == 0x08AD5DC4u) goto L_08AD5DC4;
    return;
L_08AD5DC4:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-564));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD5DD8u);
    ctx.gpr[6] = (0u | 4u);
    goto L_08AD4040;
L_08AD5DD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5DE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 20u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    goto L_08AD5E14;
L_08AD5E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD5E28;
      }
      goto L_08AD5E24;
    }
L_08AD5E24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    goto L_08AD5E28;
L_08AD5E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5E58;
      }
      goto L_08AD5E48;
    }
L_08AD5E48:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AD5E14;
      }
      goto L_08AD5E50;
    }
L_08AD5E50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD5E60;
      }
      goto L_08AD5E58;
    }
L_08AD5E58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD5EC4;
      }
      goto L_08AD5E60;
    }
L_08AD5E60:
    ctx.gpr[31] = (0x08AD5E68u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD5E68u) goto L_08AD5E68;
    return;
L_08AD5E68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 131u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5E14;
      }
      goto L_08AD5E78;
    }
L_08AD5E78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD5E98;
      }
      goto L_08AD5E88;
    }
L_08AD5E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD5E98;
L_08AD5E98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD5E14;
      }
      goto L_08AD5EA4;
    }
L_08AD5EA4:
    ctx.gpr[31] = (0x08AD5EACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AD4E34;
L_08AD5EAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5E14;
      }
      goto L_08AD5EB4;
    }
L_08AD5EB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5EC0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AD43F0;
L_08AD5EC0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AD5EC4;
L_08AD5EC4:
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
L_08AD5EE4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5EF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD5F14u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD5F14u) goto L_08AD5F14;
    return;
L_08AD5F14:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(9));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
        goto L_08AD5F4C;
    }
    goto L_08AD5F38;
L_08AD5F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AD5F7C;
      }
      goto L_08AD5F48;
    }
L_08AD5F48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    goto L_08AD5F4C;
L_08AD5F4C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD5F68;
      }
      goto L_08AD5F58;
    }
L_08AD5F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD5F68;
L_08AD5F68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD600C;
      }
      goto L_08AD5F78;
    }
L_08AD5F78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AD5F7C;
L_08AD5F7C:
    ctx.gpr[31] = (0x08AD5F84u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD5F84u) goto L_08AD5F84;
    return;
L_08AD5F84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 130u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD600C;
      }
      goto L_08AD5F94;
    }
L_08AD5F94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD5FA0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD4E34;
L_08AD5FA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6000;
      }
      goto L_08AD5FA8;
    }
L_08AD5FA8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD5FB4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD5FB4u) goto L_08AD5FB4;
    return;
L_08AD5FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD5FC8;
      }
      goto L_08AD5FC0;
    }
L_08AD5FC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD5FC8;
      }
      goto L_08AD5FC8;
    }
L_08AD5FC8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD600C;
      }
      goto L_08AD5FD0;
    }
L_08AD5FD0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD5FDCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD5FDCu) goto L_08AD5FDC;
    return;
L_08AD5FDC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(156));
    ctx.gpr[4] = (ctx.gpr[4] - 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD600C;
      }
      goto L_08AD6000;
    }
L_08AD6000:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD600Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD43F0;
L_08AD600C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD6048;
      }
      goto L_08AD6038;
    }
L_08AD6038:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AD6048;
L_08AD6048:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(30))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AD6058u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 579u, 0x08AD34F8u>(ctx, &aot_mem) && ctx.pc == 0x08AD6058u) goto L_08AD6058;
    return;
L_08AD6058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD6064u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08AD5EF8;
L_08AD6064:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6070:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD6090u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 820u, 0x08A076C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD6090u) goto L_08AD6090;
    return;
L_08AD6090:
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(31984));
    goto L_08AD6098;
L_08AD6098:
    ctx.gpr[31] = (0x08AD60A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD60A0u) goto L_08AD60A0;
    return;
L_08AD60A0:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD60CC;
      }
      goto L_08AD60AC;
    }
L_08AD60AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD60B8u);
    ctx.gpr[5] = (0u | 131u);
    goto L_08AD5658;
L_08AD60B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD60D4;
      }
      goto L_08AD60C0;
    }
L_08AD60C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD60CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 115u, 0x08AD867Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD60CCu) goto L_08AD60CC;
    return;
L_08AD60CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD60E8;
      }
      goto L_08AD60D4;
    }
L_08AD60D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD60E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem) && ctx.pc == 0x08AD60E0u) goto L_08AD60E0;
    return;
L_08AD60E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6098;
      }
      goto L_08AD60E8;
    }
L_08AD60E8:
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
L_08AD6100:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD610C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6118:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6124:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6130:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD613C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6148:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(172));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6150:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6158:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD6180;
      }
      goto L_08AD6178;
    }
L_08AD6178:
    ctx.gpr[31] = (0x08AD6180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6180u) goto L_08AD6180;
    return;
L_08AD6180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD61A8;
      }
      goto L_08AD6190;
    }
L_08AD6190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD61B0;
      }
      goto L_08AD61A0;
    }
L_08AD61A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD62C4;
      }
      goto L_08AD61A8;
    }
L_08AD61A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD62C4;
      }
      goto L_08AD61B0;
    }
L_08AD61B0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD62C4;
      }
      goto L_08AD61B8;
    }
L_08AD61B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AD62C4;
      }
      goto L_08AD61C4;
    }
L_08AD61C4:
    ctx.gpr[5] = (ctx.gpr[17] ^ 3u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 3u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08AD61DCu);
    ctx.gpr[18] = (ctx.gpr[5] | ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 163u, 0x08A114E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD61DCu) goto L_08AD61DC;
    return;
L_08AD61DC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7652), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD61F0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD61F0u) goto L_08AD61F0;
    return;
L_08AD61F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD61FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 528u, 0x08A0611Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD61FCu) goto L_08AD61FC;
    return;
L_08AD61FC:
    ctx.gpr[31] = (0x08AD6204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 844u, 0x0898B4F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6204u) goto L_08AD6204;
    return;
L_08AD6204:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6278;
      }
      goto L_08AD620C;
    }
L_08AD620C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6278;
      }
      goto L_08AD6218;
    }
L_08AD6218:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19681)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6278;
      }
      goto L_08AD6224;
    }
L_08AD6224:
    ctx.gpr[31] = (0x08AD622Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A05EFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD622Cu) goto L_08AD622C;
    return;
L_08AD622C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AD6240u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-524)));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 430u, 0x08935AA4u>(ctx, &aot_mem) && ctx.pc == 0x08AD6240u) goto L_08AD6240;
    return;
L_08AD6240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6254;
      }
      goto L_08AD624C;
    }
L_08AD624C:
    ctx.gpr[31] = (0x08AD6254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 399u, 0x08B65A54u>(ctx, &aot_mem) && ctx.pc == 0x08AD6254u) goto L_08AD6254;
    return;
L_08AD6254:
    ctx.gpr[31] = (0x08AD625Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 162u, 0x08805340u>(ctx, &aot_mem) && ctx.pc == 0x08AD625Cu) goto L_08AD625C;
    return;
L_08AD625C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6278;
      }
      goto L_08AD6268;
    }
L_08AD6268:
    ctx.gpr[31] = (0x08AD6270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 339u, 0x08935474u>(ctx, &aot_mem) && ctx.pc == 0x08AD6270u) goto L_08AD6270;
    return;
L_08AD6270:
    ctx.gpr[31] = (0x08AD6278u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 269u, 0x0893509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6278u) goto L_08AD6278;
    return;
L_08AD6278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
        goto L_08AD6290;
    }
    goto L_08AD6284;
L_08AD6284:
    ctx.gpr[31] = (0x08AD628Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD628Cu) goto L_08AD628C;
    return;
L_08AD628C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_08AD6290;
L_08AD6290:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    ctx.gpr[31] = (0x08AD629Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 753u, 0x089579B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD629Cu) goto L_08AD629C;
    return;
L_08AD629C:
    ctx.gpr[31] = (0x08AD62A4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08AD62A4u) goto L_08AD62A4;
    return;
L_08AD62A4:
    ctx.gpr[31] = (0x08AD62ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 165u, 0x08A11504u>(ctx, &aot_mem) && ctx.pc == 0x08AD62ACu) goto L_08AD62AC;
    return;
L_08AD62AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD62B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD62B8u) goto L_08AD62B8;
    return;
L_08AD62B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD62C4u);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 528u, 0x08A0611Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD62C4u) goto L_08AD62C4;
    return;
L_08AD62C4:
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
L_08AD62DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD62FC;
      }
      goto L_08AD62F4;
    }
L_08AD62F4:
    ctx.gpr[31] = (0x08AD62FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD62FCu) goto L_08AD62FC;
    return;
L_08AD62FC:
    ctx.gpr[31] = (0x08AD6304u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 121u, 0x08954778u>(ctx, &aot_mem) && ctx.pc == 0x08AD6304u) goto L_08AD6304;
    return;
L_08AD6304:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6318;
      }
      goto L_08AD630C;
    }
L_08AD630C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-508), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD632C;
      }
      goto L_08AD6318;
    }
L_08AD6318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD632C;
      }
      goto L_08AD6324;
    }
L_08AD6324:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-508), ctx.gpr[4]);
    goto L_08AD632C;
L_08AD632C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD63AC;
      }
      goto L_08AD6334;
    }
L_08AD6334:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD63AC;
      }
      goto L_08AD6340;
    }
L_08AD6340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
        goto L_08AD6358;
    }
    goto L_08AD634C;
L_08AD634C:
    ctx.gpr[31] = (0x08AD6354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6354u) goto L_08AD6354;
    return;
L_08AD6354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08AD6358;
L_08AD6358:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD63AC;
      }
      goto L_08AD6364;
    }
L_08AD6364:
    ctx.gpr[31] = (0x08AD636Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 136u, 0x08B70B9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD636Cu) goto L_08AD636C;
    return;
L_08AD636C:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD63AC;
      }
      goto L_08AD6378;
    }
L_08AD6378:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7640)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD63AC;
      }
      goto L_08AD6384;
    }
L_08AD6384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD63AC;
      }
      goto L_08AD6390;
    }
L_08AD6390:
    ctx.gpr[31] = (0x08AD6398u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD7E94;
L_08AD6398:
    ctx.gpr[31] = (0x08AD63A0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08AD63A0u) goto L_08AD63A0;
    return;
L_08AD63A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD63ACu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08AD78DC;
L_08AD63AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD63BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
        goto L_08AD63E0;
    }
    goto L_08AD63D4;
L_08AD63D4:
    ctx.gpr[31] = (0x08AD63DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD63DCu) goto L_08AD63DC;
    return;
L_08AD63DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08AD63E0;
L_08AD63E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6408;
      }
      goto L_08AD63EC;
    }
L_08AD63EC:
    ctx.gpr[16] = (2238u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6410;
      }
      goto L_08AD6400;
    }
L_08AD6400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6438;
      }
      goto L_08AD6408;
    }
L_08AD6408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6450;
      }
      goto L_08AD6410;
    }
L_08AD6410:
    ctx.gpr[31] = (0x08AD6418u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08AD6418u) goto L_08AD6418;
    return;
L_08AD6418:
    ctx.gpr[31] = (0x08AD6420u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x08809870u>(ctx, &aot_mem) && ctx.pc == 0x08AD6420u) goto L_08AD6420;
    return;
L_08AD6420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AD6430u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 257u, 0x08809600u>(ctx, &aot_mem) && ctx.pc == 0x08AD6430u) goto L_08AD6430;
    return;
L_08AD6430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6450;
      }
      goto L_08AD6438;
    }
L_08AD6438:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AD6444u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08AD6444u) goto L_08AD6444;
    return;
L_08AD6444:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD6450u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 257u, 0x08809600u>(ctx, &aot_mem) && ctx.pc == 0x08AD6450u) goto L_08AD6450;
    return;
L_08AD6450:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6460:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD646C;
L_08AD646C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD6490;
      }
      goto L_08AD6478;
    }
L_08AD6478:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD646C;
      }
      goto L_08AD6488;
    }
L_08AD6488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6498;
      }
      goto L_08AD6490;
    }
L_08AD6490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD6498;
      }
      goto L_08AD6498;
    }
L_08AD6498:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD64A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[19] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD655C;
      }
      goto L_08AD64E4;
    }
L_08AD64E4:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (0u | 1u);
    goto L_08AD64F0;
L_08AD64F0:
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AD651C;
      }
      goto L_08AD6504;
    }
L_08AD6504:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD6550;
      }
      goto L_08AD651C;
    }
L_08AD651C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AD652C;
      }
      goto L_08AD6528;
    }
L_08AD6528:
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD652C;
L_08AD652C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD64F0;
      }
      goto L_08AD653C;
    }
L_08AD653C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08AD6550;
L_08AD6550:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD6664;
      }
      goto L_08AD655C;
    }
L_08AD655C:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[21] = (0u | 0u);
    goto L_08AD6564;
L_08AD6564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD65C8;
      }
      goto L_08AD657C;
    }
L_08AD657C:
    ctx.gpr[31] = (0x08AD6584u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD6584u) goto L_08AD6584;
    return;
L_08AD6584:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 131u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD65C8;
      }
      goto L_08AD6594;
    }
L_08AD6594:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD65B4;
      }
      goto L_08AD65A4;
    }
L_08AD65A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[22] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD65B4;
L_08AD65B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD65C8;
      }
      goto L_08AD65C0;
    }
L_08AD65C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AD65EC;
      }
      goto L_08AD65C8;
    }
L_08AD65C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD65DC;
      }
      goto L_08AD65D8;
    }
L_08AD65D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    goto L_08AD65DC;
L_08AD65DC:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6564;
      }
      goto L_08AD65EC;
    }
L_08AD65EC:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AD6624;
      }
      goto L_08AD65F4;
    }
L_08AD65F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD6600u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AD43F0;
L_08AD6600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD6664;
      }
      goto L_08AD6624;
    }
L_08AD6624:
    ctx.gpr[31] = (0x08AD662Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD6460;
L_08AD662C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AD6640;
      }
      goto L_08AD6638;
    }
L_08AD6638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD66B0;
      }
      goto L_08AD6640;
    }
L_08AD6640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (0u | 1u);
    goto L_08AD6664;
L_08AD6664:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[19];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AD6674;
      }
      goto L_08AD6670;
    }
L_08AD6670:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    goto L_08AD6674;
L_08AD6674:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD6694;
      }
      goto L_08AD6684;
    }
L_08AD6684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD6694;
L_08AD6694:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(629))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AD66AC;
      }
      goto L_08AD66A0;
    }
L_08AD66A0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(626))))));
    ctx.gpr[31] = (0x08AD66ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 453u, 0x08B41E40u>(ctx, &aot_mem) && ctx.pc == 0x08AD66ACu) goto L_08AD66AC;
    return;
L_08AD66AC:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    goto L_08AD66B0;
L_08AD66B0:
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
L_08AD66D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD6708u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD6708u) goto L_08AD6708;
    return;
L_08AD6708:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[4] << 11u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (21845u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21845));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u + ctx.gpr[19]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD675C;
      }
      goto L_08AD6740;
    }
L_08AD6740:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD6754u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08AD691C;
L_08AD6754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD67CC;
      }
      goto L_08AD675C;
    }
L_08AD675C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6788;
      }
      goto L_08AD676C;
    }
L_08AD676C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD6780u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08AD6AE8;
L_08AD6780:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD67CC;
      }
      goto L_08AD6788;
    }
L_08AD6788:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD67B4;
      }
      goto L_08AD6798;
    }
L_08AD6798:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD67ACu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08AD6B74;
L_08AD67AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD67CC;
      }
      goto L_08AD67B4;
    }
L_08AD67B4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD67C8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08AD6CAC;
L_08AD67C8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AD67CC;
L_08AD67CC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD67F4;
      }
      goto L_08AD67D4;
    }
L_08AD67D4:
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD67FC;
      }
      goto L_08AD67EC;
    }
L_08AD67EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD67FC;
      }
      goto L_08AD67F4;
    }
L_08AD67F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD68F8;
      }
      goto L_08AD67FC;
    }
L_08AD67FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6818;
      }
      goto L_08AD6804;
    }
L_08AD6804:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AD6818;
L_08AD6818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD68B8;
      }
      goto L_08AD6828;
    }
L_08AD6828:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD6848;
      }
      goto L_08AD6838;
    }
L_08AD6838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD6848;
L_08AD6848:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD6878;
      }
      goto L_08AD6858;
    }
L_08AD6858:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD6864u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AD64A0;
L_08AD6864:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD68B0;
      }
      goto L_08AD686C;
    }
L_08AD686C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD68F8;
      }
      goto L_08AD6878;
    }
L_08AD6878:
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD68B0;
      }
      goto L_08AD6884;
    }
L_08AD6884:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 131u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(156));
      if (branch_taken) {
          goto L_08AD68B0;
      }
      goto L_08AD6894;
    }
L_08AD6894:
    ctx.gpr[4] = (ctx.gpr[4] - 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    goto L_08AD68B0;
L_08AD68B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD68E4;
      }
      goto L_08AD68B8;
    }
L_08AD68B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(156));
      if (branch_taken) {
          goto L_08AD68E4;
      }
      goto L_08AD68C8;
    }
L_08AD68C8:
    ctx.gpr[4] = (ctx.gpr[4] - 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    goto L_08AD68E4;
L_08AD68E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD68F4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08AD6F80;
L_08AD68F4:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    goto L_08AD68F8;
L_08AD68F8:
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
L_08AD691C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD6968;
      }
      goto L_08AD6958;
    }
L_08AD6958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD6968;
L_08AD6968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AD6980u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD6980u) goto L_08AD6980;
    return;
L_08AD6980:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD69A0;
      }
      goto L_08AD698C;
    }
L_08AD698C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AD69AC;
    }
    goto L_08AD69A0;
L_08AD69A0:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD69E0;
      }
      goto L_08AD69AC;
    }
L_08AD69AC:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08AD69CC;
      }
      goto L_08AD69C0;
    }
L_08AD69C0:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD69E0;
      }
      goto L_08AD69CC;
    }
L_08AD69CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD69E0;
L_08AD69E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD6ABC;
      }
      goto L_08AD69E8;
    }
L_08AD69E8:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AD6A38;
      }
      goto L_08AD69F0;
    }
L_08AD69F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08AD6A0C;
    }
    goto L_08AD69FC;
L_08AD69FC:
    ctx.gpr[31] = (0x08AD6A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AD6A04u) goto L_08AD6A04;
    return;
L_08AD6A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08AD6A0C;
L_08AD6A0C:
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6ABC;
      }
      goto L_08AD6A38;
    }
L_08AD6A38:
    ctx.gpr[31] = (0x08AD6A40u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(30))))));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 644u, 0x08AAF008u>(ctx, &aot_mem) && ctx.pc == 0x08AD6A40u) goto L_08AD6A40;
    return;
L_08AD6A40:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AD6A68;
      }
      goto L_08AD6A48;
    }
L_08AD6A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6A60;
      }
      goto L_08AD6A54;
    }
L_08AD6A54:
    ctx.gpr[31] = (0x08AD6A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AD6A5Cu) goto L_08AD6A5C;
    return;
L_08AD6A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08AD6A60;
L_08AD6A60:
    ctx.gpr[31] = (0x08AD6A68u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 695u, 0x0893EDA0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6A68u) goto L_08AD6A68;
    return;
L_08AD6A68:
    ctx.gpr[31] = (0x08AD6A70u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(30))))));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6A70u) goto L_08AD6A70;
    return;
L_08AD6A70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD6A80u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 73u, 0x08AD8384u>(ctx, &aot_mem) && ctx.pc == 0x08AD6A80u) goto L_08AD6A80;
    return;
L_08AD6A80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[31] = (0x08AD6A8Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 680u, 0x08AAF24Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6A8Cu) goto L_08AD6A8C;
    return;
L_08AD6A8C:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AD6AC0;
      }
      goto L_08AD6A94;
    }
L_08AD6A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6AAC;
      }
      goto L_08AD6AA0;
    }
L_08AD6AA0:
    ctx.gpr[31] = (0x08AD6AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AD6AA8u) goto L_08AD6AA8;
    return;
L_08AD6AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08AD6AAC;
L_08AD6AAC:
    ctx.gpr[31] = (0x08AD6AB4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 699u, 0x0893EE30u>(ctx, &aot_mem) && ctx.pc == 0x08AD6AB4u) goto L_08AD6AB4;
    return;
L_08AD6AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6AC0;
      }
      goto L_08AD6ABC;
    }
L_08AD6ABC:
    ctx.gpr[16] = (0u | 0u);
    goto L_08AD6AC0;
L_08AD6AC0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08AD6AE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD6B00u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AD6B0C;
L_08AD6B00:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6B0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD6B40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 523u, 0x08ABE6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6B40u) goto L_08AD6B40;
    return;
L_08AD6B40:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD6B4Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AD6130;
L_08AD6B4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD6B58u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 721u, 0x08AAF460u>(ctx, &aot_mem) && ctx.pc == 0x08AD6B58u) goto L_08AD6B58;
    return;
L_08AD6B58:
    ctx.gpr[2] = (0u | 1u);
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
L_08AD6B74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD6B8Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AD6B98;
L_08AD6B8C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6B98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD6BC0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD6BC0u) goto L_08AD6BC0;
    return;
L_08AD6BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (25455u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(27698));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD6C14;
      }
      goto L_08AD6BDC;
    }
L_08AD6BDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6C14;
      }
      goto L_08AD6BEC;
    }
L_08AD6BEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6C14;
      }
      goto L_08AD6BFC;
    }
L_08AD6BFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6C1C;
      }
      goto L_08AD6C14;
    }
L_08AD6C14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD6C94;
      }
      goto L_08AD6C1C;
    }
L_08AD6C1C:
    ctx.gpr[4] = (25455u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27698));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AD6C3Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 285u, 0x08A3137Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6C3Cu) goto L_08AD6C3C;
    return;
L_08AD6C3C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD6C50u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD6124;
L_08AD6C50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD6C60u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 205u, 0x08809288u>(ctx, &aot_mem) && ctx.pc == 0x08AD6C60u) goto L_08AD6C60;
    return;
L_08AD6C60:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD6C7Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 523u, 0x08ABE6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6C7Cu) goto L_08AD6C7C;
    return;
L_08AD6C7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD6C90u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem) && ctx.pc == 0x08AD6C90u) goto L_08AD6C90;
    return;
L_08AD6C90:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08AD6C94;
L_08AD6C94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6CAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD6CC4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AD6CF0;
L_08AD6CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6CD8;
      }
      goto L_08AD6CD0;
    }
L_08AD6CD0:
    ctx.gpr[31] = (0x08AD6CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AD6CD8u) goto L_08AD6CD8;
    return;
L_08AD6CD8:
    ctx.gpr[31] = (0x08AD6CE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 606u, 0x0893E618u>(ctx, &aot_mem) && ctx.pc == 0x08AD6CE0u) goto L_08AD6CE0;
    return;
L_08AD6CE0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6CF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD6D20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD6D20u) goto L_08AD6D20;
    return;
L_08AD6D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (24942u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(26989));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD6DAC;
      }
      goto L_08AD6D3C;
    }
L_08AD6D3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6DAC;
      }
      goto L_08AD6D4C;
    }
L_08AD6D4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6DAC;
      }
      goto L_08AD6D5C;
    }
L_08AD6D5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6DAC;
      }
      goto L_08AD6D74;
    }
L_08AD6D74:
    ctx.gpr[4] = (24942u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26989));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AD6D94u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 285u, 0x08A3137Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6D94u) goto L_08AD6D94;
    return;
L_08AD6D94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD6DB4;
      }
      goto L_08AD6DA4;
    }
L_08AD6DA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
      if (branch_taken) {
          goto L_08AD6DC0;
      }
      goto L_08AD6DAC;
    }
L_08AD6DAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD6E14;
      }
      goto L_08AD6DB4;
    }
L_08AD6DB4:
    ctx.gpr[31] = (0x08AD6DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AD6DBCu) goto L_08AD6DBC;
    return;
L_08AD6DBC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08AD6DC0;
L_08AD6DC0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD6DCCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD613C;
L_08AD6DCC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD6DE0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 549u, 0x0893E214u>(ctx, &aot_mem) && ctx.pc == 0x08AD6DE0u) goto L_08AD6DE0;
    return;
L_08AD6DE0:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD6DFCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 523u, 0x08ABE6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6DFCu) goto L_08AD6DFC;
    return;
L_08AD6DFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD6E10u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem) && ctx.pc == 0x08AD6E10u) goto L_08AD6E10;
    return;
L_08AD6E10:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08AD6E14;
L_08AD6E14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6E34:
    ctx.gpr[11] = (ctx.gpr[4] + static_cast<std::uint32_t>(164));
    ctx.gpr[11] = (ctx.gpr[11] - 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08AD6EA8;
      }
      goto L_08AD6E48;
    }
L_08AD6E48:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    goto L_08AD6E54;
L_08AD6E54:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AD6E9C;
      }
      goto L_08AD6E60;
    }
L_08AD6E60:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6E9C;
      }
      goto L_08AD6E70;
    }
L_08AD6E70:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD6E88;
      }
      goto L_08AD6E7C;
    }
L_08AD6E7C:
    ctx.gpr[8] = (ctx.gpr[10] << 2u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_08AD6E88;
L_08AD6E88:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD6E9C;
      }
      goto L_08AD6E94;
    }
L_08AD6E94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD6EAC;
      }
      goto L_08AD6E9C;
    }
L_08AD6E9C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08AD6E54;
      }
      goto L_08AD6EA8;
    }
L_08AD6EA8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD6EAC;
L_08AD6EAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6EB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(164));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[19] - 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD6F5C;
      }
      goto L_08AD6EEC;
    }
L_08AD6EEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AD6F50;
      }
      goto L_08AD6EF8;
    }
L_08AD6EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6F50;
      }
      goto L_08AD6F08;
    }
L_08AD6F08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD6F28;
      }
      goto L_08AD6F18;
    }
L_08AD6F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD6F28;
L_08AD6F28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AD6F40u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD6F40u) goto L_08AD6F40;
    return;
L_08AD6F40:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AD6F50;
      }
      goto L_08AD6F48;
    }
L_08AD6F48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD6F60;
      }
      goto L_08AD6F50;
    }
L_08AD6F50:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AD6EEC;
      }
      goto L_08AD6F5C;
    }
L_08AD6F5C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD6F60;
L_08AD6F60:
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
L_08AD6F80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6F90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD70D0;
      }
      goto L_08AD6FC4;
    }
L_08AD6FC4:
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(31984));
    ctx.gpr[20] = (32768u << 16u);
    goto L_08AD6FD0;
L_08AD6FD0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AD7000;
      }
      goto L_08AD6FE4;
    }
L_08AD6FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7000;
      }
      goto L_08AD6FF4;
    }
L_08AD6FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7008;
      }
      goto L_08AD7000;
    }
L_08AD7000:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD70C8;
      }
      goto L_08AD7008;
    }
L_08AD7008:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD7018u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD7018u) goto L_08AD7018;
    return;
L_08AD7018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD702C;
      }
      goto L_08AD7024;
    }
L_08AD7024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD702C;
      }
      goto L_08AD702C;
    }
L_08AD702C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD70C8;
      }
      goto L_08AD7034;
    }
L_08AD7034:
    ctx.gpr[31] = (0x08AD703Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AD703Cu) goto L_08AD703C;
    return;
L_08AD703C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AD7050;
      }
      goto L_08AD7048;
    }
L_08AD7048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD70C8;
      }
      goto L_08AD7050;
    }
L_08AD7050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AD7068u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD7068u) goto L_08AD7068;
    return;
L_08AD7068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD7088;
      }
      goto L_08AD7078;
    }
L_08AD7078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD7088;
L_08AD7088:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD70C8;
      }
      goto L_08AD7094;
    }
L_08AD7094:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD70A0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AD43F0;
L_08AD70A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD70ACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem) && ctx.pc == 0x08AD70ACu) goto L_08AD70AC;
    return;
L_08AD70AC:
    ctx.gpr[31] = (0x08AD70B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD70B4u) goto L_08AD70B4;
    return;
L_08AD70B4:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD70C8;
      }
      goto L_08AD70C0;
    }
L_08AD70C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD70D4;
      }
      goto L_08AD70C8;
    }
L_08AD70C8:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6FD0;
      }
      goto L_08AD70D0;
    }
L_08AD70D0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD70D4;
L_08AD70D4:
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
L_08AD70FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD7240;
      }
      goto L_08AD7130;
    }
L_08AD7130:
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(31984));
    ctx.gpr[20] = (32768u << 16u);
    goto L_08AD713C;
L_08AD713C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AD718C;
      }
      goto L_08AD7150;
    }
L_08AD7150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD718C;
      }
      goto L_08AD7160;
    }
L_08AD7160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD718C;
      }
      goto L_08AD716C;
    }
L_08AD716C:
    ctx.gpr[31] = (0x08AD7174u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 51u, 0x08AD0598u>(ctx, &aot_mem) && ctx.pc == 0x08AD7174u) goto L_08AD7174;
    return;
L_08AD7174:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7194;
      }
      goto L_08AD717C;
    }
L_08AD717C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7194;
      }
      goto L_08AD718C;
    }
L_08AD718C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7238;
      }
      goto L_08AD7194;
    }
L_08AD7194:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD71A4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD71A4u) goto L_08AD71A4;
    return;
L_08AD71A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD71B8;
      }
      goto L_08AD71B0;
    }
L_08AD71B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD71B8;
      }
      goto L_08AD71B8;
    }
L_08AD71B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7238;
      }
      goto L_08AD71C0;
    }
L_08AD71C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AD71D8u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD71D8u) goto L_08AD71D8;
    return;
L_08AD71D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD71F8;
      }
      goto L_08AD71E8;
    }
L_08AD71E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD71F8;
L_08AD71F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7238;
      }
      goto L_08AD7204;
    }
L_08AD7204:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD7210u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AD43F0;
L_08AD7210:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD721Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem) && ctx.pc == 0x08AD721Cu) goto L_08AD721C;
    return;
L_08AD721C:
    ctx.gpr[31] = (0x08AD7224u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7224u) goto L_08AD7224;
    return;
L_08AD7224:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7238;
      }
      goto L_08AD7230;
    }
L_08AD7230:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD7244;
      }
      goto L_08AD7238;
    }
L_08AD7238:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD713C;
      }
      goto L_08AD7240;
    }
L_08AD7240:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD7244;
L_08AD7244:
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
L_08AD726C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (32768u << 16u);
      if (branch_taken) {
          goto L_08AD72D4;
      }
      goto L_08AD7288;
    }
L_08AD7288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AD72AC;
      }
      goto L_08AD729C;
    }
L_08AD729C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD72B4;
      }
      goto L_08AD72AC;
    }
L_08AD72AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD72CC;
      }
      goto L_08AD72B4;
    }
L_08AD72B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AD72CCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD72CCu) goto L_08AD72CC;
    return;
L_08AD72CC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7288;
      }
      goto L_08AD72D4;
    }
L_08AD72D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD72E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(156));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[22] = (ctx.gpr[22] - 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[22];
    ctx.gpr[18] = (2236u << 16u);
      if (branch_taken) {
          goto L_08AD73D0;
      }
      goto L_08AD732C;
    }
L_08AD732C:
    ctx.gpr[21] = (0u | 20u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(31984));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    goto L_08AD7338;
L_08AD7338:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD73C8;
      }
      goto L_08AD7354;
    }
L_08AD7354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD73C8;
      }
      goto L_08AD7364;
    }
L_08AD7364:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD7370u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AD6130;
L_08AD7370:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD737Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 687u, 0x08AAF2ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD737Cu) goto L_08AD737C;
    return;
L_08AD737C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AD73C8;
      }
      goto L_08AD7384;
    }
L_08AD7384:
    ctx.gpr[31] = (0x08AD738Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08AD6E34;
L_08AD738C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD73C8;
      }
      goto L_08AD7394;
    }
L_08AD7394:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD73A0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AD43F0;
L_08AD73A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD73ACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem) && ctx.pc == 0x08AD73ACu) goto L_08AD73AC;
    return;
L_08AD73AC:
    ctx.gpr[31] = (0x08AD73B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD73B4u) goto L_08AD73B4;
    return;
L_08AD73B4:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD73C8;
      }
      goto L_08AD73C0;
    }
L_08AD73C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD73D4;
      }
      goto L_08AD73C8;
    }
L_08AD73C8:
    if (ctx.gpr[19] != ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
        goto L_08AD7338;
    }
    goto L_08AD73D0;
L_08AD73D0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD73D4;
L_08AD73D4:
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
L_08AD7400:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AD745C;
      }
      goto L_08AD744C;
    }
L_08AD744C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[22] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD745C;
L_08AD745C:
    ctx.gpr[31] = (0x08AD7464u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 79u, 0x08A8C7F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7464u) goto L_08AD7464;
    return;
L_08AD7464:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD7470u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17528));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 79u, 0x08A8C7F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7470u) goto L_08AD7470;
    return;
L_08AD7470:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD747Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-488));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 79u, 0x08A8C7F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD747Cu) goto L_08AD747C;
    return;
L_08AD747C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD74CC;
      }
      goto L_08AD7484;
    }
L_08AD7484:
    ctx.gpr[17] = (2234u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(13220));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2234u << 16u);
      if (branch_taken) {
          goto L_08AD74CC;
      }
      goto L_08AD749C;
    }
L_08AD749C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13152));
    goto L_08AD74A0;
L_08AD74A0:
    ctx.gpr[31] = (0x08AD74A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 79u, 0x08A8C7F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD74A8u) goto L_08AD74A8;
    return;
L_08AD74A8:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD74B8;
      }
      goto L_08AD74B0;
    }
L_08AD74B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD74CC;
      }
      goto L_08AD74B8;
    }
L_08AD74B8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD74A0;
      }
      goto L_08AD74CC;
    }
L_08AD74CC:
    ctx.gpr[31] = (0x08AD74D4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 79u, 0x08A8C7F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD74D4u) goto L_08AD74D4;
    return;
L_08AD74D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD7508;
      }
      goto L_08AD74E4;
    }
L_08AD74E4:
    ctx.gpr[17] = (2234u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(13152));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7524;
      }
      goto L_08AD7500;
    }
L_08AD7500:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7570;
      }
      goto L_08AD7508;
    }
L_08AD7508:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD751Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AD4040;
L_08AD751C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD78AC;
      }
      goto L_08AD7524;
    }
L_08AD7524:
    ctx.gpr[31] = (0x08AD752Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 79u, 0x08A8C7F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD752Cu) goto L_08AD752C;
    return;
L_08AD752C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD7554;
      }
      goto L_08AD7534;
    }
L_08AD7534:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7524;
      }
      goto L_08AD754C;
    }
L_08AD754C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7570;
      }
      goto L_08AD7554;
    }
L_08AD7554:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD7568u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AD4040;
L_08AD7568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD78AC;
      }
      goto L_08AD7570;
    }
L_08AD7570:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[20] = (ctx.gpr[22] << 4u);
    ctx.gpr[5] = (ctx.gpr[22] << 2u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AD772C;
      }
      goto L_08AD7584;
    }
L_08AD7584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(3344));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AD75A0;
L_08AD75A0:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08AD7640;
      }
      goto L_08AD75AC;
    }
L_08AD75AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(28))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
        goto L_08AD7644;
    }
    goto L_08AD75B8;
L_08AD75B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD75D4;
      }
      goto L_08AD75C0;
    }
L_08AD75C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AD75DC;
    }
    goto L_08AD75D4;
L_08AD75D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD75FC;
      }
      goto L_08AD75DC;
    }
L_08AD75DC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AD75F8;
    }
    goto L_08AD75F0;
L_08AD75F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD75FC;
      }
      goto L_08AD75F8;
    }
L_08AD75F8:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[18]);
    goto L_08AD75FC;
L_08AD75FC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7638;
      }
      goto L_08AD7604;
    }
L_08AD7604:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AD7638;
      }
      goto L_08AD7610;
    }
L_08AD7610:
    ctx.gpr[31] = (0x08AD7618u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD7618u) goto L_08AD7618;
    return;
L_08AD7618:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7638;
      }
      goto L_08AD7620;
    }
L_08AD7620:
    ctx.gpr[31] = (0x08AD7628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 140u, 0x0890C80Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD7628u) goto L_08AD7628;
    return;
L_08AD7628:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7638;
      }
      goto L_08AD7630;
    }
L_08AD7630:
    ctx.gpr[31] = (0x08AD7638u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 765u, 0x08863DD8u>(ctx, &aot_mem) && ctx.pc == 0x08AD7638u) goto L_08AD7638;
    return;
L_08AD7638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AD75A0;
      }
      goto L_08AD7640;
    }
L_08AD7640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    goto L_08AD7644;
L_08AD7644:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[19] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AD7664;
L_08AD7664:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-544));
      if (branch_taken) {
          goto L_08AD7728;
      }
      goto L_08AD7670;
    }
L_08AD7670:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD7728;
      }
      goto L_08AD767C;
    }
L_08AD767C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD7698;
      }
      goto L_08AD7684;
    }
L_08AD7684:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08AD76A0;
    }
    goto L_08AD7698;
L_08AD7698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD76C0;
      }
      goto L_08AD76A0;
    }
L_08AD76A0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AD76BC;
    }
    goto L_08AD76B4;
L_08AD76B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD76C0;
      }
      goto L_08AD76BC;
    }
L_08AD76BC:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08AD76C0;
L_08AD76C0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7720;
      }
      goto L_08AD76CC;
    }
L_08AD76CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AD7720;
      }
      goto L_08AD76D8;
    }
L_08AD76D8:
    ctx.gpr[31] = (0x08AD76E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 398u, 0x0882B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08AD76E0u) goto L_08AD76E0;
    return;
L_08AD76E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7720;
      }
      goto L_08AD76E8;
    }
L_08AD76E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD76F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD76F4u) goto L_08AD76F4;
    return;
L_08AD76F4:
    ctx.gpr[31] = (0x08AD76FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 537u, 0x0889358Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD76FCu) goto L_08AD76FC;
    return;
L_08AD76FC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7720;
      }
      goto L_08AD7704;
    }
L_08AD7704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AD7720u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD7720u) goto L_08AD7720;
    return;
L_08AD7720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AD7664;
      }
      goto L_08AD7728;
    }
L_08AD7728:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AD772C;
L_08AD772C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AD773Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 456u, 0x088DF720u>(ctx, &aot_mem) && ctx.pc == 0x08AD773Cu) goto L_08AD773C;
    return;
L_08AD773C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD7748u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 157u, 0x08AEC9B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7748u) goto L_08AD7748;
    return;
L_08AD7748:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7800;
      }
      goto L_08AD7754;
    }
L_08AD7754:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD77EC;
      }
      goto L_08AD7764;
    }
L_08AD7764:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD7784;
      }
      goto L_08AD776C;
    }
L_08AD776C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08AD778C;
    }
    goto L_08AD7780;
L_08AD7780:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AD7784;
L_08AD7784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD77C0;
      }
      goto L_08AD778C;
    }
L_08AD778C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08AD77AC;
    }
    goto L_08AD77A0;
L_08AD77A0:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD77C0;
      }
      goto L_08AD77AC;
    }
L_08AD77AC:
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD77C0;
L_08AD77C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD77EC;
      }
      goto L_08AD77C8;
    }
L_08AD77C8:
    ctx.gpr[31] = (0x08AD77D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 644u, 0x08AAF008u>(ctx, &aot_mem) && ctx.pc == 0x08AD77D0u) goto L_08AD77D0;
    return;
L_08AD77D0:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AD77DCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08AD43F0;
L_08AD77DC:
    ctx.gpr[31] = (0x08AD77E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 680u, 0x08AAF24Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD77E4u) goto L_08AD77E4;
    return;
L_08AD77E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD77F8;
      }
      goto L_08AD77EC;
    }
L_08AD77EC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AD77F8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08AD43F0;
L_08AD77F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD780C;
      }
      goto L_08AD7800;
    }
L_08AD7800:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AD780Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08AD43F0;
L_08AD780C:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AD7818u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08AD6148;
L_08AD7818:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AD782Cu);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 484u, 0x0886A440u>(ctx, &aot_mem) && ctx.pc == 0x08AD782Cu) goto L_08AD782C;
    return;
L_08AD782C:
    ctx.gpr[31] = (0x08AD7834u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 470u, 0x088DF80Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD7834u) goto L_08AD7834;
    return;
L_08AD7834:
    ctx.gpr[31] = (0x08AD783Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem) && ctx.pc == 0x08AD783Cu) goto L_08AD783C;
    return;
L_08AD783C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AD7860;
      }
      goto L_08AD7844;
    }
L_08AD7844:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-480));
    ctx.gpr[31] = (0x08AD7850u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 465u, 0x088DF7B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD7850u) goto L_08AD7850;
    return;
L_08AD7850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AD7878;
      }
      goto L_08AD7860;
    }
L_08AD7860:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AD786Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 465u, 0x088DF7B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD786Cu) goto L_08AD786C;
    return;
L_08AD786C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_08AD7878;
L_08AD7878:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AD78ACu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AD4040;
L_08AD78AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD78DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD7940;
      }
      goto L_08AD7918;
    }
L_08AD7918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AD7928u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 526u, 0x08A8EB48u>(ctx, &aot_mem) && ctx.pc == 0x08AD7928u) goto L_08AD7928;
    return;
L_08AD7928:
    ctx.gpr[21] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(70)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD7948;
      }
      goto L_08AD7938;
    }
L_08AD7938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7A78;
      }
      goto L_08AD7940;
    }
L_08AD7940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7E64;
      }
      goto L_08AD7948;
    }
L_08AD7948:
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD79B8;
      }
      goto L_08AD7954;
    }
L_08AD7954:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08AD795C;
L_08AD795C:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11840)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08AD798C;
      }
      goto L_08AD7984;
    }
L_08AD7984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD79A4;
      }
      goto L_08AD798C;
    }
L_08AD798C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD7998u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD5EF8;
L_08AD7998:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD79A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD6020;
L_08AD79A4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD795C;
      }
      goto L_08AD79B4;
    }
L_08AD79B4:
    ctx.gpr[21] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(70)));
    goto L_08AD79B8;
L_08AD79B8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-412)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-416)));
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-468));
    goto L_08AD79CC;
L_08AD79CC:
    ctx.gpr[31] = (0x08AD79D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AD79D4u) goto L_08AD79D4;
    return;
L_08AD79D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD79E8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD79E8u) goto L_08AD79E8;
    return;
L_08AD79E8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7A3C;
      }
      goto L_08AD7A0C;
    }
L_08AD7A0C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11840)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08AD7A44;
      }
      goto L_08AD7A34;
    }
L_08AD7A34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7A58;
      }
      goto L_08AD7A3C;
    }
L_08AD7A3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD79CC;
      }
      goto L_08AD7A44;
    }
L_08AD7A44:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD7A58u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    goto L_08AD4040;
L_08AD7A58:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD79CC;
      }
      goto L_08AD7A68;
    }
L_08AD7A68:
    ctx.gpr[4] = (0u | 300u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-472), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    goto L_08AD7A78;
L_08AD7A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-472)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD7C10;
      }
      goto L_08AD7A84;
    }
L_08AD7A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11840)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD7A9C;
L_08AD7A9C:
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[21]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7AB4;
      }
      goto L_08AD7AAC;
    }
L_08AD7AAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7AF8;
      }
      goto L_08AD7AB4;
    }
L_08AD7AB4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[9];
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD7AF8;
      }
      goto L_08AD7AD0;
    }
L_08AD7AD0:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD7AE4;
      }
      goto L_08AD7AD8;
    }
L_08AD7AD8:
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AD7AE4;
L_08AD7AE4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7AF8;
      }
      goto L_08AD7AF0;
    }
L_08AD7AF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7B08;
      }
      goto L_08AD7AF8;
    }
L_08AD7AF8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD7A9C;
      }
      goto L_08AD7B08;
    }
L_08AD7B08:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD7B24;
      }
      goto L_08AD7B14;
    }
L_08AD7B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7C18;
      }
      goto L_08AD7B24;
    }
L_08AD7B24:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-412)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-416)));
    ctx.gpr[20] = (0u | 8u);
    goto L_08AD7B30;
L_08AD7B30:
    ctx.gpr[31] = (0x08AD7B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AD7B38u) goto L_08AD7B38;
    return;
L_08AD7B38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD7B4Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD7B4Cu) goto L_08AD7B4C;
    return;
L_08AD7B4C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7B88;
      }
      goto L_08AD7B70;
    }
L_08AD7B70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[20];
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
      if (branch_taken) {
          goto L_08AD7B90;
      }
      goto L_08AD7B80;
    }
L_08AD7B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD7B9C;
      }
      goto L_08AD7B88;
    }
L_08AD7B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7B30;
      }
      goto L_08AD7B90;
    }
L_08AD7B90:
    ctx.gpr[7] = (ctx.gpr[18] + ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (0u | 1u);
    goto L_08AD7B9C;
L_08AD7B9C:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11840)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AD7C18;
      }
      goto L_08AD7BBC;
    }
L_08AD7BBC:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-456));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD7BD0u);
    ctx.gpr[6] = (0u | 4u);
    goto L_08AD4040;
L_08AD7BD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AD7BFC;
      }
      goto L_08AD7BDC;
    }
L_08AD7BDC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD7BE8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AD5EF8;
L_08AD7BE8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD7BF4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AD6020;
L_08AD7BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7C04;
      }
      goto L_08AD7BFC;
    }
L_08AD7BFC:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    goto L_08AD7C04;
L_08AD7C04:
    ctx.gpr[4] = (0u | 300u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-472), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD7C18;
      }
      goto L_08AD7C10;
    }
L_08AD7C10:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-472), ctx.gpr[4]);
    goto L_08AD7C18;
L_08AD7C18:
    ctx.gpr[31] = (0x08AD7C20u);
    ctx.gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x08AD7C20u) goto L_08AD7C20;
    return;
L_08AD7C20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7C3C;
      }
      goto L_08AD7C28;
    }
L_08AD7C28:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-588));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x08AD7C3Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AD4040;
L_08AD7C3C:
    ctx.gpr[31] = (0x08AD7C44u);
    ctx.gpr[4] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x08AD7C44u) goto L_08AD7C44;
    return;
L_08AD7C44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7C60;
      }
      goto L_08AD7C4C;
    }
L_08AD7C4C:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-576));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 35u);
    ctx.gpr[31] = (0x08AD7C60u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AD4040;
L_08AD7C60:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(50)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08AD7C84;
      }
      goto L_08AD7C80;
    }
L_08AD7C80:
    ctx.gpr[30] = (0u | 1u);
    goto L_08AD7C84;
L_08AD7C84:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    goto L_08AD7C90;
L_08AD7C90:
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(50)));
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08AD7CA8;
      }
      goto L_08AD7CA0;
    }
L_08AD7CA0:
    ctx.gpr[10] = (ctx.gpr[9] << (ctx.gpr[8] & 31u));
    ctx.gpr[30] = (ctx.gpr[30] | ctx.gpr[10]);
    goto L_08AD7CA8;
L_08AD7CA8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AD7C90;
      }
      goto L_08AD7CB8;
    }
L_08AD7CB8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AD7CC4;
      }
      goto L_08AD7CC0;
    }
L_08AD7CC0:
    ctx.gpr[21] = (0u | 1u);
    goto L_08AD7CC4;
L_08AD7CC4:
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    goto L_08AD7CD0;
L_08AD7CD0:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AD7CE8;
      }
      goto L_08AD7CE0;
    }
L_08AD7CE0:
    ctx.gpr[8] = (ctx.gpr[7] << (ctx.gpr[6] & 31u));
    ctx.gpr[21] = (ctx.gpr[21] | ctx.gpr[8]);
    goto L_08AD7CE8;
L_08AD7CE8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AD7CD0;
      }
      goto L_08AD7CF8;
    }
L_08AD7CF8:
    ctx.gpr[30] = (ctx.gpr[21] | ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD7D10;
      }
      goto L_08AD7D04;
    }
L_08AD7D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD7E64;
      }
      goto L_08AD7D10;
    }
L_08AD7D10:
    ctx.gpr[17] = (2246u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-448));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-440));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(30712));
    goto L_08AD7D28;
L_08AD7D28:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[16] << (ctx.gpr[19] & 31u));
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7D84;
      }
      goto L_08AD7D3C;
    }
L_08AD7D3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7D84;
      }
      goto L_08AD7D4C;
    }
L_08AD7D4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD7D60u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08AD4040;
L_08AD7D60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD7D74u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08AD4040;
L_08AD7D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD7DDC;
      }
      goto L_08AD7D84;
    }
L_08AD7D84:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7DDC;
      }
      goto L_08AD7D8C;
    }
L_08AD7D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7DDC;
      }
      goto L_08AD7D9C;
    }
L_08AD7D9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD7DA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AD5EF8;
L_08AD7DA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AD7DB4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AD5EF8;
L_08AD7DB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD7DC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AD6020;
L_08AD7DC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AD7DCCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AD6020;
L_08AD7DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (~(ctx.gpr[16] | 0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    goto L_08AD7DDC;
L_08AD7DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08AD7E50;
      }
      goto L_08AD7DE8;
    }
L_08AD7DE8:
    ctx.gpr[5] = (ctx.gpr[16] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7E20;
      }
      goto L_08AD7DF4;
    }
L_08AD7DF4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7E20;
      }
      goto L_08AD7E04;
    }
L_08AD7E04:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD7E18u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    goto L_08AD4040;
L_08AD7E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7E50;
      }
      goto L_08AD7E20;
    }
L_08AD7E20:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7E50;
      }
      goto L_08AD7E28;
    }
L_08AD7E28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7E50;
      }
      goto L_08AD7E38;
    }
L_08AD7E38:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD7E44u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AD5EF8;
L_08AD7E44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD7E50u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AD6020;
L_08AD7E50:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08AD7D28;
      }
      goto L_08AD7E60;
    }
L_08AD7E60:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    goto L_08AD7E64;
L_08AD7E64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7E94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD7F1C;
      }
      goto L_08AD7EBC;
    }
L_08AD7EBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9296))))));
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08AD7F14;
      }
      goto L_08AD7ECC;
    }
L_08AD7ECC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD7F14;
      }
      goto L_08AD7ED4;
    }
L_08AD7ED4:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-400));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 191u);
    ctx.gpr[31] = (0x08AD7EE8u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AD4040;
L_08AD7EE8:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-388));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 119u);
    ctx.gpr[31] = (0x08AD7EFCu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AD4040;
L_08AD7EFC:
    ctx.gpr[31] = (0x08AD7F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AD7F04u) goto L_08AD7F04;
    return;
L_08AD7F04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7F24;
      }
      goto L_08AD7F0C;
    }
L_08AD7F0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7F6C;
      }
      goto L_08AD7F14;
    }
L_08AD7F14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 72u, 0x08AD8364u>(ctx, &aot_mem); return;
      }
      goto L_08AD7F1C;
    }
L_08AD7F1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 72u, 0x08AD8364u>(ctx, &aot_mem); return;
      }
      goto L_08AD7F24;
    }
L_08AD7F24:
    ctx.gpr[31] = (0x08AD7F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AD7F2Cu) goto L_08AD7F2C;
    return;
L_08AD7F2C:
    ctx.gpr[31] = (0x08AD7F34u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 1013u, 0x08AB3F28u>(ctx, &aot_mem) && ctx.pc == 0x08AD7F34u) goto L_08AD7F34;
    return;
L_08AD7F34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7F6C;
      }
      goto L_08AD7F3C;
    }
L_08AD7F3C:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-380));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 234u);
    ctx.gpr[31] = (0x08AD7F50u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AD4040;
L_08AD7F50:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-368));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08AD7F64u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AD4040;
L_08AD7F64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7F98;
      }
      goto L_08AD7F6C;
    }
L_08AD7F6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD7F78u);
    ctx.gpr[5] = (0u | 234u);
    goto L_08AD5EF8;
L_08AD7F78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD7F84u);
    ctx.gpr[5] = (0u | 234u);
    goto L_08AD4E34;
L_08AD7F84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7F98;
      }
      goto L_08AD7F8C;
    }
L_08AD7F8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD7F98u);
    ctx.gpr[5] = (0u | 9u);
    goto L_08AD5EF8;
L_08AD7F98:
    ctx.gpr[31] = (0x08AD7FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AD7FA0u) goto L_08AD7FA0;
    return;
L_08AD7FA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7FF0;
      }
      goto L_08AD7FA8;
    }
L_08AD7FA8:
    ctx.gpr[31] = (0x08AD7FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AD7FB0u) goto L_08AD7FB0;
    return;
L_08AD7FB0:
    ctx.gpr[31] = (0x08AD7FB8u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 1021u, 0x08AB3F70u>(ctx, &aot_mem) && ctx.pc == 0x08AD7FB8u) goto L_08AD7FB8;
    return;
L_08AD7FB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7FF0;
      }
      goto L_08AD7FC0;
    }
L_08AD7FC0:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-360));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 193u);
    ctx.gpr[31] = (0x08AD7FD4u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AD4040;
L_08AD7FD4:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-352));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x08AD7FE8u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AD4040;
L_08AD7FE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 4u, 0x08AD801Cu>(ctx, &aot_mem); return;
      }
      goto L_08AD7FF0;
    }
L_08AD7FF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD7FFCu);
    ctx.gpr[5] = (0u | 193u);
    goto L_08AD5EF8;
L_08AD7FFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AD8000u; return;
}

void recomp_unit_0180(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0180_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_180(Runtime &runtime) {
    runtime.register_generated_unit(180u, 0x08AD4000u, 16384u, &recomp_unit_0180, &recomp_unit_0180_entry);
    runtime.register_function(0x08AD4004u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4014u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4020u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4040u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4084u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4090u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4098u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD409Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4100u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD410Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4114u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD411Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4124u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD412Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD414Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD416Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4180u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4214u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4224u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4230u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD423Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4254u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4260u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD426Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4278u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD427Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD429Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4300u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4308u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4314u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD431Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD432Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4338u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4340u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4350u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD435Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4364u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4374u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4380u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4388u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4394u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4398u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD43C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD43F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4420u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4434u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4464u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4474u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4484u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4490u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4498u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD44A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD44B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD44C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD44D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD44D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD44E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD44F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4500u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4510u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4518u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4524u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD452Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD453Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4544u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD454Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4590u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD45A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD45ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD45C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD45C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD45D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD45D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4618u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4620u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4630u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4640u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4650u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4668u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4678u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4680u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4690u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD469Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD46A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD46ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD46BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD46C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD46D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD46D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD46E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD46ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD46F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD46FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4708u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4714u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD471Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4724u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD473Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD474Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4768u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4784u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD47A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD47A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD47B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD47CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD47D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD47E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD47F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD47FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4808u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4814u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4820u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4824u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4838u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4850u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4880u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4888u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4898u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4904u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4914u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4920u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD492Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4934u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD493Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4944u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4950u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4958u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4968u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4974u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4980u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4988u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4ACCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B64u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4ED0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD501Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD502Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD503Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5050u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5064u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5078u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD508Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5100u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD510Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD511Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5124u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD512Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD513Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5148u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD516Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5180u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5194u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD519Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD51A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD51B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD51C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD51CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD51D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD51E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD51ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD51F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD51F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5208u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5214u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD521Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5228u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5234u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD523Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5244u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5250u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5274u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5280u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5290u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5308u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5318u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5328u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5334u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5358u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5368u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD536Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5378u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5388u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5398u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD539Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5420u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD542Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD543Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD544Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD545Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD546Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5478u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5484u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5498u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5500u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5510u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5518u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5528u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5538u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5540u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD554Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD555Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5564u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5570u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD557Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5584u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5590u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5604u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5610u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5620u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5628u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD562Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5634u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5638u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5658u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5698u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5700u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD570Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5718u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5720u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5730u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD573Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5748u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5750u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5758u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5760u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD576Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5774u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD577Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD578Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5798u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5804u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5814u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5820u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5828u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5830u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5838u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5844u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD584Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5854u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD585Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD586Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5878u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5880u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5888u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5898u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5914u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5944u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD594Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5954u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5974u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD597Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD598Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5994u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD599Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6000u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD600Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6020u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6038u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6048u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6058u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6064u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6070u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6090u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6098u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6100u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD610Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6118u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6124u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6130u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD613Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6148u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6150u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6158u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6178u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6180u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6190u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6204u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD620Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6218u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6224u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD622Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6240u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD624Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6254u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD625Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6268u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6270u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6278u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6284u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD628Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6290u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD629Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6304u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD630Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6318u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6324u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD632Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6334u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6340u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD634Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6354u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6358u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6364u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD636Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6378u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6384u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6390u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6398u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6400u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6408u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6410u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6418u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6420u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6430u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6438u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6444u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6450u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6460u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD646Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6478u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6488u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6490u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6498u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD64A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD64E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD64F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6504u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD651Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6528u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD652Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD653Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6550u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD655Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6564u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD657Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6584u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6594u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6600u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6624u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD662Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6638u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6640u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6664u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6670u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6674u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6684u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6694u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6708u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6740u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6754u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD675Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD676Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6780u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6788u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6798u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6804u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6818u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6828u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6838u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6848u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6858u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6864u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD686Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6878u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6884u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6894u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD691Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6958u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6968u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6980u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD698Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6ABCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6DA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6DACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6DB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6DBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6DC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6DCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6DE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6DFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6FC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6FD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6FE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6FF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7000u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7008u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7018u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7024u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD702Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7034u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD703Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7048u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7050u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7068u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7078u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7088u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7094u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7130u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD713Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7150u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7160u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD716Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7174u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD717Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD718Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7194u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD71A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD71B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD71B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD71C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD71D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD71E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD71F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7204u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7210u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD721Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7224u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7230u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7238u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7240u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7244u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD726Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7288u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD729Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD72ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD72B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD72CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD72D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD72E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD732Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7338u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7354u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7364u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7370u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD737Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7384u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD738Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7394u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7400u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD744Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD745Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7464u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7470u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD747Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7484u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD749Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7500u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7508u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD751Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7524u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD752Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7534u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD754Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7554u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7568u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7570u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7584u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7604u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7610u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7618u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7620u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7628u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7630u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7638u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7640u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7644u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7664u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7670u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD767Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7684u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7698u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7704u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7720u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7728u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD772Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD773Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7748u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7754u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7764u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD776Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7780u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7784u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD778Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7800u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD780Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7818u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD782Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7834u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD783Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7844u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7850u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7860u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD786Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7878u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7918u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7928u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7938u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7940u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7948u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7954u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD795Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7984u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD798Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7998u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7DA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7DB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7DC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7DCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7DDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7DE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7DF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E64u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7ECCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7ED4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F64u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FFCu, &recomp_unit_0180, "recomp_unit_0180");
}
} // namespace psprecomp
