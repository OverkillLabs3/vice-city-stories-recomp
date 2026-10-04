#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0213[4092] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 10, 0, 11, 12, 0, 13, 0,
    14, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 22, 0, 23,
    0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 31,
    0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 0, 39, 40, 0, 0, 0, 0, 0,
    0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0, 56, 57, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61,
    0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 67, 68, 0, 0, 69, 0,
    70, 0, 0, 71, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 0, 151,
    152, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 159, 160, 0, 0, 0, 161, 0, 162, 0, 163,
    0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 168, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0,
    175, 0, 0, 0, 176, 177, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 183, 184, 0, 0,
    185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 197,
    0, 0, 0, 198, 199, 0, 0, 200, 0, 0, 0, 201, 202, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 207,
    0, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 212, 213, 0, 0, 214, 215, 0, 216, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 220,
    221, 0, 222, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 231, 0, 0,
    0, 232, 0, 233, 0, 0, 234, 235, 0, 0, 236, 0, 0, 0, 237, 238, 0, 0, 239, 0, 0, 240, 241, 0, 0, 0, 0, 242, 0, 0, 243, 0,
    0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 249, 250, 0, 251, 0, 0, 0, 0, 252, 0, 253,
    0, 0, 0, 0, 0, 254, 255, 0, 256, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 262, 263, 0,
    0, 264, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 273, 0,
    0, 0, 274, 275, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 283, 0, 284, 0,
    0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 0, 0, 290, 291, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0,
    0, 297, 0, 0, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 303, 0, 304, 0, 0, 305, 0, 306, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0,
    0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 316, 0,
    317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0,
    327, 328, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 333, 0, 334, 335, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 337, 338, 0, 339, 0, 0, 0, 340, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 346, 0, 0,
    0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 353,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 360,
    0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 367, 0,
    0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 374, 0, 375, 376,
    0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0,
    381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 388, 0,
    389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 393, 0, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0,
    399, 0, 0, 0, 400, 401, 0, 402, 0, 0, 403, 404, 0, 405, 0, 0, 406, 407, 0, 408, 0, 0, 409, 410, 0, 0, 0, 0, 0, 411, 0, 0,
    0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 419, 0, 420,
    0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 427, 428, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 429, 0, 430, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0,
    436, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 443, 0, 0, 0, 0, 0,
    444, 0, 0, 445, 0, 0, 0, 0, 446, 447, 0, 448, 0, 449, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0,
    0, 0, 454, 0, 0, 0, 0, 455, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461,
    0, 462, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0,
    0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 470, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0,
    0, 0, 475, 0, 476, 0, 0, 0, 0, 477, 0, 0, 478, 0, 479, 0, 0, 480, 0, 0, 481, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0,
    484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 0, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 0,
    0, 493, 494, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 497, 0, 498, 0, 499, 500, 0, 0, 0, 0, 501, 0, 502, 503, 0, 0, 504, 0,
    0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 509, 0, 0, 510, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 514, 515,
    0, 0, 0, 516, 0, 0, 517, 0, 518, 0, 519, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0,
    0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 526, 0, 0, 527, 0, 528, 0, 529, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 532,
    0, 533, 0, 534, 0, 0, 535, 0, 0, 0, 0, 536, 0, 537, 0, 538, 0, 0, 539, 0, 540, 0, 541, 0, 542, 0, 0, 543, 0, 0, 0, 544,
    0, 0, 0, 545, 0, 0, 0, 546, 0, 547, 548, 0, 0, 0, 549, 0, 550, 0, 551, 0, 552, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0,
    0, 0, 555, 0, 556, 0, 557, 558, 0, 559, 0, 560, 0, 0, 561, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 567, 0, 0, 568, 0, 569, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    571, 0, 572, 0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 578, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 581, 0,
    582, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 0, 590, 0, 0,
    591, 592, 0, 0, 0, 0, 0, 593, 0, 594, 0, 0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 604, 0,
    0, 605, 606, 0, 0, 0, 0, 607, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 611, 0, 0, 0, 0, 612, 0,
    613, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 620,
    0, 621, 0, 0, 0, 0, 622, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 627, 0,
    0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 631, 632, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635,
    0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0,
    642, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 646, 647, 0, 0, 0, 0,
    648, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 654, 0, 0,
    0, 0, 0, 655, 0, 656, 0, 657, 0, 0, 658, 0, 0, 0, 659, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 663, 0, 0, 0,
    0, 0, 664, 0, 665, 0, 666, 0, 0, 0, 667, 0, 668, 0, 0, 669, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0,
    673, 0, 0, 0, 674, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 677, 678, 0, 0, 0, 679, 0, 680, 0, 681, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 0,
    0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690,
    0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0,
    0, 0, 0, 0, 0, 695, 696, 0, 697, 0, 0, 698, 0, 0, 699, 0, 700, 0, 0, 701, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0,
    704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 706, 707, 0, 0, 708, 0, 0, 0, 0, 0, 0, 709, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0,
    0, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0,
    721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 725, 0, 726, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0,
    729, 0, 730, 0, 0, 731, 0, 0, 0, 732, 733, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0,
    738, 0, 0, 739, 0, 0, 740, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 744, 0, 745, 0, 0, 0, 746, 0, 0, 0, 0, 747,
    0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 752, 0, 753, 0, 0,
    754, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 758, 0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 761, 0,
    762, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 767, 0, 0,
    0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0, 772, 0, 0, 773, 0, 774, 0, 775, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 780, 0, 0, 0, 781, 782, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 784, 0, 0, 0, 0, 0, 0, 0, 785, 0, 786, 0,
    0, 787, 0, 0, 788, 0, 789, 0, 0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 793, 0, 794, 0, 0, 0, 0, 795,
    0, 796, 797, 0, 0, 798, 0, 799, 800, 0, 801, 0, 802, 0, 803, 0, 0, 0, 0, 0, 0, 804, 0, 0, 805, 0, 0, 0, 806, 0, 0, 0,
    0, 807, 0, 0, 808, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 813, 0, 0, 0, 0,
    0, 814, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0, 0, 817, 0, 818, 0, 0, 0, 0, 0, 0, 0, 819, 0, 820, 0, 0, 0,
    0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 824, 0, 825, 0, 826, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 830, 0, 0, 831, 0, 0, 832, 0, 0, 0, 833, 0, 0, 834, 0, 0, 835,
    0, 836, 0, 0, 837, 0, 0, 838, 0, 0, 0, 0, 0, 0, 839, 0, 0, 0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 0, 0, 842, 0, 843,
    0, 0, 0, 0, 0, 844, 0, 845, 0, 0, 0, 0, 0, 846, 0, 0, 847, 0, 848, 0, 849, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0,
    851, 0, 0, 0, 0, 0, 852, 0, 853, 0, 0, 0, 0, 0, 0, 0, 854, 0, 855, 0, 0, 0, 0, 0, 856, 0, 857, 0, 0, 0, 0, 0,
    858, 0, 0, 859, 0, 860, 0, 861, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 863, 0, 864, 0, 865, 866, 0, 0, 0, 0, 0, 867, 0, 868,
    0, 0, 0, 0, 0, 869, 0, 870, 0, 871, 0, 872, 0, 873, 0, 0, 0, 874, 0, 0, 875, 0, 876, 0, 0, 877, 0, 878, 0, 0, 0, 0,
    0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 880, 0, 881, 0, 882, 0, 0, 0, 883, 0, 0, 884, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 885, 886, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 891, 0, 892, 893, 0, 0, 0, 894, 0, 0, 895, 0, 0, 0, 0, 896, 0, 0,
    897, 898, 0, 899, 0, 900, 0, 0, 0, 0, 0, 0, 0, 901, 0, 0, 0, 0, 0, 0, 0, 902, 0, 903, 0, 904, 0, 0, 905, 906, 907, 0,
    908, 0, 0, 909, 0, 910, 0, 911, 0, 0, 0, 912, 0, 0, 0, 913, 0, 0, 0, 0, 0, 0, 0, 0, 914, 0, 0, 0, 915, 0, 0, 0,
    0, 0, 0, 0, 916, 0, 917, 0, 918, 919, 920, 0, 0, 0, 921, 0, 922, 0, 0, 0, 923, 0, 924, 0, 0, 0, 925, 0, 0, 0, 926, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 927, 0, 0, 0, 928, 0, 0, 0, 0, 0, 0, 0, 0, 929, 0, 0, 930, 0, 931, 0, 0, 0, 932, 0,
    0, 0, 933, 0, 0, 934, 935, 0, 0, 936, 0, 937, 0, 0, 0, 938, 0, 0, 0, 939, 0, 0, 0, 0, 0, 0, 0, 0, 940, 0, 0, 0,
    941, 0, 0, 0, 0, 0, 0, 0, 942, 0, 943, 0, 944, 0, 0, 945, 0, 0, 0, 946, 0, 0, 947, 0, 0, 948, 0, 0, 949, 0, 0, 0,
    950, 0, 0, 0, 951, 0, 0, 0, 0, 0, 0, 0, 0, 952, 0, 0, 0, 953, 0, 0, 0, 0, 0, 0, 0, 954, 0, 0, 955, 0, 956, 0,
    0, 957, 0, 0, 0, 958, 0, 959, 0, 0, 0, 960, 0, 961, 0, 962, 0, 963, 0, 0, 0, 964, 0, 0, 0, 965, 0, 0, 0, 0, 0, 0,
    0, 0, 966, 0, 0, 0, 967, 0, 0, 0, 0, 0, 0, 0, 968, 0, 969, 0, 970, 0, 971, 0, 0, 0, 972, 0, 973, 0, 0, 0, 974, 0,
    975, 0, 0, 0, 976, 0, 0, 0, 977, 0, 0, 0, 0, 0, 0, 0, 0, 978, 0, 0, 0, 979, 0, 0, 0, 0, 0, 0, 0, 980, 0, 981,
    0, 982, 0, 0, 983, 0, 0, 0, 984, 0, 985, 0, 0, 0, 0, 986, 0, 987, 0, 988, 0, 0, 0, 989, 0, 0, 0, 990, 0, 0, 0, 0,
    0, 0, 0, 0, 991, 0, 0, 0, 992, 0, 0, 0, 0, 0, 0, 0, 993, 0, 994, 0, 995, 0, 996, 0, 0, 0, 997, 0, 998, 0, 0, 0,
    999, 0, 1000, 0, 0, 0, 1001, 0, 0, 0, 1002, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1003, 0, 0, 0, 1004, 0, 0, 0, 0, 0, 0, 0,
    0, 1005, 0, 1006, 0, 1007, 0, 0, 1008, 0, 0, 0, 1009, 0, 0, 1010, 0, 1011, 0, 0, 0, 1012, 0, 0, 0, 1013, 0, 0, 0, 0, 0, 0,
    0, 1014, 0, 0, 0, 1015, 0, 0, 0, 0, 0, 1016, 0, 1017, 0, 1018, 0, 0, 1019, 0, 0, 0, 1020, 0, 0, 1021, 0, 0, 1022, 0, 0, 0,
    0, 0, 1023, 0, 1024, 0, 0, 0, 1025, 0, 0, 0, 1026, 0, 0, 0, 0, 0, 0, 0, 0, 1027, 0, 0, 0, 1028, 0, 0, 0, 0, 0, 0,
    0, 1029, 0, 1030, 0, 1031, 0, 1032, 0, 0, 0, 1033, 0, 1034, 0, 0, 0, 1035, 0, 1036, 0, 0, 0, 1037, 0, 0, 0, 1038,
};
void recomp_unit_0213_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B58004u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0213[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B58004;
    case 2u: goto L_08B5800C;
    case 3u: goto L_08B58014;
    case 4u: goto L_08B5801C;
    case 5u: goto L_08B58024;
    case 6u: goto L_08B5802C;
    case 7u: goto L_08B5803C;
    case 8u: goto L_08B58054;
    case 9u: goto L_08B5805C;
    case 10u: goto L_08B58068;
    case 11u: goto L_08B58070;
    case 12u: goto L_08B58074;
    case 13u: goto L_08B5807C;
    case 14u: goto L_08B58084;
    case 15u: goto L_08B58088;
    case 16u: goto L_08B58090;
    case 17u: goto L_08B580B0;
    case 18u: goto L_08B580BC;
    case 19u: goto L_08B580D4;
    case 20u: goto L_08B580E0;
    case 21u: goto L_08B580F0;
    case 22u: goto L_08B580F8;
    case 23u: goto L_08B58100;
    case 24u: goto L_08B58114;
    case 25u: goto L_08B58124;
    case 26u: goto L_08B5813C;
    case 27u: goto L_08B58144;
    case 28u: goto L_08B5814C;
    case 29u: goto L_08B58160;
    case 30u: goto L_08B58178;
    case 31u: goto L_08B58180;
    case 32u: goto L_08B58190;
    case 33u: goto L_08B58198;
    case 34u: goto L_08B581A8;
    case 35u: goto L_08B581B0;
    case 36u: goto L_08B581C8;
    case 37u: goto L_08B581D0;
    case 38u: goto L_08B581D8;
    case 39u: goto L_08B581E8;
    case 40u: goto L_08B581EC;
    case 41u: goto L_08B58208;
    case 42u: goto L_08B58210;
    case 43u: goto L_08B58224;
    case 44u: goto L_08B58230;
    case 45u: goto L_08B58238;
    case 46u: goto L_08B58248;
    case 47u: goto L_08B58258;
    case 48u: goto L_08B58270;
    case 49u: goto L_08B5828C;
    case 50u: goto L_08B58294;
    case 51u: goto L_08B582A0;
    case 52u: goto L_08B582A8;
    case 53u: goto L_08B582B0;
    case 54u: goto L_08B582BC;
    case 55u: goto L_08B582C4;
    case 56u: goto L_08B582CC;
    case 57u: goto L_08B582D0;
    case 58u: goto L_08B582D8;
    case 59u: goto L_08B582E4;
    case 60u: goto L_08B582F4;
    case 61u: goto L_08B58300;
    case 62u: goto L_08B58310;
    case 63u: goto L_08B5831C;
    case 64u: goto L_08B5833C;
    case 65u: goto L_08B58358;
    case 66u: goto L_08B58360;
    case 67u: goto L_08B5836C;
    case 68u: goto L_08B58370;
    case 69u: goto L_08B5837C;
    case 70u: goto L_08B58384;
    case 71u: goto L_08B58390;
    case 72u: goto L_08B58394;
    case 73u: goto L_08B583A0;
    case 74u: goto L_08B583A8;
    case 75u: goto L_08B583C0;
    case 76u: goto L_08B583D8;
    case 77u: goto L_08B583EC;
    case 78u: goto L_08B58400;
    case 79u: goto L_08B58414;
    case 80u: goto L_08B58428;
    case 81u: goto L_08B5843C;
    case 82u: goto L_08B58450;
    case 83u: goto L_08B58464;
    case 84u: goto L_08B58478;
    case 85u: goto L_08B5848C;
    case 86u: goto L_08B584A0;
    case 87u: goto L_08B584B4;
    case 88u: goto L_08B584C8;
    case 89u: goto L_08B584DC;
    case 90u: goto L_08B584F0;
    case 91u: goto L_08B58504;
    case 92u: goto L_08B58518;
    case 93u: goto L_08B5852C;
    case 94u: goto L_08B58540;
    case 95u: goto L_08B58554;
    case 96u: goto L_08B58568;
    case 97u: goto L_08B5857C;
    case 98u: goto L_08B58590;
    case 99u: goto L_08B585A4;
    case 100u: goto L_08B585B8;
    case 101u: goto L_08B585CC;
    case 102u: goto L_08B585E0;
    case 103u: goto L_08B585F4;
    case 104u: goto L_08B58608;
    case 105u: goto L_08B5861C;
    case 106u: goto L_08B58630;
    case 107u: goto L_08B58644;
    case 108u: goto L_08B58658;
    case 109u: goto L_08B5866C;
    case 110u: goto L_08B58680;
    case 111u: goto L_08B58694;
    case 112u: goto L_08B586A8;
    case 113u: goto L_08B586BC;
    case 114u: goto L_08B586D0;
    case 115u: goto L_08B586E4;
    case 116u: goto L_08B586F8;
    case 117u: goto L_08B5870C;
    case 118u: goto L_08B58720;
    case 119u: goto L_08B58734;
    case 120u: goto L_08B58748;
    case 121u: goto L_08B5875C;
    case 122u: goto L_08B58770;
    case 123u: goto L_08B58784;
    case 124u: goto L_08B58798;
    case 125u: goto L_08B587AC;
    case 126u: goto L_08B587C0;
    case 127u: goto L_08B587D4;
    case 128u: goto L_08B587E8;
    case 129u: goto L_08B587FC;
    case 130u: goto L_08B58810;
    case 131u: goto L_08B58824;
    case 132u: goto L_08B58838;
    case 133u: goto L_08B5884C;
    case 134u: goto L_08B58860;
    case 135u: goto L_08B58874;
    case 136u: goto L_08B58888;
    case 137u: goto L_08B5889C;
    case 138u: goto L_08B588B0;
    case 139u: goto L_08B588C4;
    case 140u: goto L_08B588D8;
    case 141u: goto L_08B588EC;
    case 142u: goto L_08B58900;
    case 143u: goto L_08B58914;
    case 144u: goto L_08B58928;
    case 145u: goto L_08B5893C;
    case 146u: goto L_08B58950;
    case 147u: goto L_08B58958;
    case 148u: goto L_08B58960;
    case 149u: goto L_08B58968;
    case 150u: goto L_08B58974;
    case 151u: goto L_08B58980;
    case 152u: goto L_08B58984;
    case 153u: goto L_08B58990;
    case 154u: goto L_08B58998;
    case 155u: goto L_08B589A4;
    case 156u: goto L_08B589B4;
    case 157u: goto L_08B589C4;
    case 158u: goto L_08B589D4;
    case 159u: goto L_08B589DC;
    case 160u: goto L_08B589E0;
    case 161u: goto L_08B589F0;
    case 162u: goto L_08B589F8;
    case 163u: goto L_08B58A00;
    case 164u: goto L_08B58A10;
    case 165u: goto L_08B58A18;
    case 166u: goto L_08B58A24;
    case 167u: goto L_08B58A3C;
    case 168u: goto L_08B58A44;
    case 169u: goto L_08B58A48;
    case 170u: goto L_08B58A5C;
    case 171u: goto L_08B58A64;
    case 172u: goto L_08B58A6C;
    case 173u: goto L_08B58A74;
    case 174u: goto L_08B58A7C;
    case 175u: goto L_08B58A84;
    case 176u: goto L_08B58A94;
    case 177u: goto L_08B58A98;
    case 178u: goto L_08B58AB4;
    case 179u: goto L_08B58ABC;
    case 180u: goto L_08B58AD0;
    case 181u: goto L_08B58ADC;
    case 182u: goto L_08B58AE4;
    case 183u: goto L_08B58AF4;
    case 184u: goto L_08B58AF8;
    case 185u: goto L_08B58B04;
    case 186u: goto L_08B58B10;
    case 187u: goto L_08B58B24;
    case 188u: goto L_08B58B2C;
    case 189u: goto L_08B58B34;
    case 190u: goto L_08B58B3C;
    case 191u: goto L_08B58B44;
    case 192u: goto L_08B58B4C;
    case 193u: goto L_08B58B54;
    case 194u: goto L_08B58B60;
    case 195u: goto L_08B58B70;
    case 196u: goto L_08B58B78;
    case 197u: goto L_08B58B80;
    case 198u: goto L_08B58B90;
    case 199u: goto L_08B58B94;
    case 200u: goto L_08B58BA0;
    case 201u: goto L_08B58BB0;
    case 202u: goto L_08B58BB4;
    case 203u: goto L_08B58BCC;
    case 204u: goto L_08B58BD4;
    case 205u: goto L_08B58BE0;
    case 206u: goto L_08B58BF8;
    case 207u: goto L_08B58C00;
    case 208u: goto L_08B58C0C;
    case 209u: goto L_08B58C14;
    case 210u: goto L_08B58C20;
    case 211u: goto L_08B58C28;
    case 212u: goto L_08B58C38;
    case 213u: goto L_08B58C3C;
    case 214u: goto L_08B58C48;
    case 215u: goto L_08B58C4C;
    case 216u: goto L_08B58C54;
    case 217u: goto L_08B58C5C;
    case 218u: goto L_08B58C68;
    case 219u: goto L_08B58C78;
    case 220u: goto L_08B58C80;
    case 221u: goto L_08B58C84;
    case 222u: goto L_08B58C8C;
    case 223u: goto L_08B58C98;
    case 224u: goto L_08B58CA4;
    case 225u: goto L_08B58CAC;
    case 226u: goto L_08B58CBC;
    case 227u: goto L_08B58CC4;
    case 228u: goto L_08B58D50;
    case 229u: goto L_08B58D5C;
    case 230u: goto L_08B58D74;
    case 231u: goto L_08B58D78;
    case 232u: goto L_08B58D88;
    case 233u: goto L_08B58D90;
    case 234u: goto L_08B58D9C;
    case 235u: goto L_08B58DA0;
    case 236u: goto L_08B58DAC;
    case 237u: goto L_08B58DBC;
    case 238u: goto L_08B58DC0;
    case 239u: goto L_08B58DCC;
    case 240u: goto L_08B58DD8;
    case 241u: goto L_08B58DDC;
    case 242u: goto L_08B58DF0;
    case 243u: goto L_08B58DFC;
    case 244u: goto L_08B58E08;
    case 245u: goto L_08B58E14;
    case 246u: goto L_08B58E2C;
    case 247u: goto L_08B58E34;
    case 248u: goto L_08B58E44;
    case 249u: goto L_08B58E58;
    case 250u: goto L_08B58E5C;
    case 251u: goto L_08B58E64;
    case 252u: goto L_08B58E78;
    case 253u: goto L_08B58E80;
    case 254u: goto L_08B58E98;
    case 255u: goto L_08B58E9C;
    case 256u: goto L_08B58EA4;
    case 257u: goto L_08B58EB0;
    case 258u: goto L_08B58EC0;
    case 259u: goto L_08B58ECC;
    case 260u: goto L_08B58ED8;
    case 261u: goto L_08B58EE4;
    case 262u: goto L_08B58EF8;
    case 263u: goto L_08B58EFC;
    case 264u: goto L_08B58F08;
    case 265u: goto L_08B58F18;
    case 266u: goto L_08B58F24;
    case 267u: goto L_08B58F2C;
    case 268u: goto L_08B58F3C;
    case 269u: goto L_08B58F48;
    case 270u: goto L_08B58F5C;
    case 271u: goto L_08B58F68;
    case 272u: goto L_08B58F78;
    case 273u: goto L_08B58F7C;
    case 274u: goto L_08B58F8C;
    case 275u: goto L_08B58F90;
    case 276u: goto L_08B58F98;
    case 277u: goto L_08B58FA4;
    case 278u: goto L_08B58FB4;
    case 279u: goto L_08B58FBC;
    case 280u: goto L_08B58FD4;
    case 281u: goto L_08B58FE0;
    case 282u: goto L_08B58FE8;
    case 283u: goto L_08B58FF4;
    case 284u: goto L_08B58FFC;
    case 285u: goto L_08B59008;
    case 286u: goto L_08B59010;
    case 287u: goto L_08B59018;
    case 288u: goto L_08B59020;
    case 289u: goto L_08B59028;
    case 290u: goto L_08B59038;
    case 291u: goto L_08B5903C;
    case 292u: goto L_08B59044;
    case 293u: goto L_08B5904C;
    case 294u: goto L_08B59054;
    case 295u: goto L_08B59068;
    case 296u: goto L_08B59070;
    case 297u: goto L_08B59088;
    case 298u: goto L_08B59098;
    case 299u: goto L_08B590A0;
    case 300u: goto L_08B590A8;
    case 301u: goto L_08B590B0;
    case 302u: goto L_08B590B8;
    case 303u: goto L_08B590BC;
    case 304u: goto L_08B590C4;
    case 305u: goto L_08B590D0;
    case 306u: goto L_08B590D8;
    case 307u: goto L_08B590E4;
    case 308u: goto L_08B590F0;
    case 309u: goto L_08B590F8;
    case 310u: goto L_08B59108;
    case 311u: goto L_08B59134;
    case 312u: goto L_08B59144;
    case 313u: goto L_08B59158;
    case 314u: goto L_08B59168;
    case 315u: goto L_08B59174;
    case 316u: goto L_08B5917C;
    case 317u: goto L_08B59184;
    case 318u: goto L_08B59190;
    case 319u: goto L_08B591C4;
    case 320u: goto L_08B591D0;
    case 321u: goto L_08B591E4;
    case 322u: goto L_08B59214;
    case 323u: goto L_08B59238;
    case 324u: goto L_08B59244;
    case 325u: goto L_08B5924C;
    case 326u: goto L_08B59278;
    case 327u: goto L_08B59284;
    case 328u: goto L_08B59288;
    case 329u: goto L_08B59294;
    case 330u: goto L_08B592A0;
    case 331u: goto L_08B592D4;
    case 332u: goto L_08B592DC;
    case 333u: goto L_08B592E4;
    case 334u: goto L_08B592EC;
    case 335u: goto L_08B592F0;
    case 336u: goto L_08B59314;
    case 337u: goto L_08B5931C;
    case 338u: goto L_08B59320;
    case 339u: goto L_08B59328;
    case 340u: goto L_08B59338;
    case 341u: goto L_08B59340;
    case 342u: goto L_08B5934C;
    case 343u: goto L_08B59358;
    case 344u: goto L_08B59364;
    case 345u: goto L_08B59370;
    case 346u: goto L_08B59378;
    case 347u: goto L_08B59398;
    case 348u: goto L_08B593BC;
    case 349u: goto L_08B593C8;
    case 350u: goto L_08B593E0;
    case 351u: goto L_08B593E8;
    case 352u: goto L_08B593F0;
    case 353u: goto L_08B59400;
    case 354u: goto L_08B59434;
    case 355u: goto L_08B5943C;
    case 356u: goto L_08B59444;
    case 357u: goto L_08B59450;
    case 358u: goto L_08B59468;
    case 359u: goto L_08B59474;
    case 360u: goto L_08B59480;
    case 361u: goto L_08B5948C;
    case 362u: goto L_08B59498;
    case 363u: goto L_08B594A0;
    case 364u: goto L_08B594BC;
    case 365u: goto L_08B594DC;
    case 366u: goto L_08B594E4;
    case 367u: goto L_08B594FC;
    case 368u: goto L_08B59518;
    case 369u: goto L_08B59538;
    case 370u: goto L_08B59540;
    case 371u: goto L_08B59544;
    case 372u: goto L_08B59568;
    case 373u: goto L_08B59570;
    case 374u: goto L_08B59574;
    case 375u: goto L_08B5957C;
    case 376u: goto L_08B59580;
    case 377u: goto L_08B59598;
    case 378u: goto L_08B595C0;
    case 379u: goto L_08B595CC;
    case 380u: goto L_08B595EC;
    case 381u: goto L_08B59604;
    case 382u: goto L_08B59614;
    case 383u: goto L_08B59634;
    case 384u: goto L_08B59648;
    case 385u: goto L_08B59658;
    case 386u: goto L_08B59660;
    case 387u: goto L_08B59668;
    case 388u: goto L_08B5967C;
    case 389u: goto L_08B59684;
    case 390u: goto L_08B5968C;
    case 391u: goto L_08B596A4;
    case 392u: goto L_08B596B0;
    case 393u: goto L_08B596B8;
    case 394u: goto L_08B596C4;
    case 395u: goto L_08B596CC;
    case 396u: goto L_08B596D4;
    case 397u: goto L_08B596EC;
    case 398u: goto L_08B596FC;
    case 399u: goto L_08B59704;
    case 400u: goto L_08B59714;
    case 401u: goto L_08B59718;
    case 402u: goto L_08B59720;
    case 403u: goto L_08B5972C;
    case 404u: goto L_08B59730;
    case 405u: goto L_08B59738;
    case 406u: goto L_08B59744;
    case 407u: goto L_08B59748;
    case 408u: goto L_08B59750;
    case 409u: goto L_08B5975C;
    case 410u: goto L_08B59760;
    case 411u: goto L_08B59778;
    case 412u: goto L_08B59794;
    case 413u: goto L_08B597A0;
    case 414u: goto L_08B597AC;
    case 415u: goto L_08B597B8;
    case 416u: goto L_08B597D0;
    case 417u: goto L_08B597E0;
    case 418u: goto L_08B597F0;
    case 419u: goto L_08B597F8;
    case 420u: goto L_08B59800;
    case 421u: goto L_08B59808;
    case 422u: goto L_08B5981C;
    case 423u: goto L_08B5982C;
    case 424u: goto L_08B59838;
    case 425u: goto L_08B59854;
    case 426u: goto L_08B5985C;
    case 427u: goto L_08B59864;
    case 428u: goto L_08B59868;
    case 429u: goto L_08B59890;
    case 430u: goto L_08B59898;
    case 431u: goto L_08B598A0;
    case 432u: goto L_08B598B4;
    case 433u: goto L_08B598C8;
    case 434u: goto L_08B598D4;
    case 435u: goto L_08B598F0;
    case 436u: goto L_08B59904;
    case 437u: goto L_08B59920;
    case 438u: goto L_08B59928;
    case 439u: goto L_08B59930;
    case 440u: goto L_08B5993C;
    case 441u: goto L_08B5995C;
    case 442u: goto L_08B59964;
    case 443u: goto L_08B5996C;
    case 444u: goto L_08B59984;
    case 445u: goto L_08B59990;
    case 446u: goto L_08B599A4;
    case 447u: goto L_08B599A8;
    case 448u: goto L_08B599B0;
    case 449u: goto L_08B599B8;
    case 450u: goto L_08B599BC;
    case 451u: goto L_08B599D8;
    case 452u: goto L_08B599F4;
    case 453u: goto L_08B599FC;
    case 454u: goto L_08B59A0C;
    case 455u: goto L_08B59A20;
    case 456u: goto L_08B59A28;
    case 457u: goto L_08B59A34;
    case 458u: goto L_08B59A40;
    case 459u: goto L_08B59A58;
    case 460u: goto L_08B59A74;
    case 461u: goto L_08B59A80;
    case 462u: goto L_08B59A88;
    case 463u: goto L_08B59A90;
    case 464u: goto L_08B59AA0;
    case 465u: goto L_08B59AD0;
    case 466u: goto L_08B59AE4;
    case 467u: goto L_08B59AF8;
    case 468u: goto L_08B59B1C;
    case 469u: goto L_08B59B30;
    case 470u: goto L_08B59B40;
    case 471u: goto L_08B59B44;
    case 472u: goto L_08B59B58;
    case 473u: goto L_08B59B6C;
    case 474u: goto L_08B59B78;
    case 475u: goto L_08B59B8C;
    case 476u: goto L_08B59B94;
    case 477u: goto L_08B59BA8;
    case 478u: goto L_08B59BB4;
    case 479u: goto L_08B59BBC;
    case 480u: goto L_08B59BC8;
    case 481u: goto L_08B59BD4;
    case 482u: goto L_08B59BDC;
    case 483u: goto L_08B59BF0;
    case 484u: goto L_08B59C04;
    case 485u: goto L_08B59C18;
    case 486u: goto L_08B59C2C;
    case 487u: goto L_08B59C34;
    case 488u: goto L_08B59C40;
    case 489u: goto L_08B59C48;
    case 490u: goto L_08B59C5C;
    case 491u: goto L_08B59C68;
    case 492u: goto L_08B59C74;
    case 493u: goto L_08B59C88;
    case 494u: goto L_08B59C8C;
    case 495u: goto L_08B59CA0;
    case 496u: goto L_08B59CA8;
    case 497u: goto L_08B59CBC;
    case 498u: goto L_08B59CC4;
    case 499u: goto L_08B59CCC;
    case 500u: goto L_08B59CD0;
    case 501u: goto L_08B59CE4;
    case 502u: goto L_08B59CEC;
    case 503u: goto L_08B59CF0;
    case 504u: goto L_08B59CFC;
    case 505u: goto L_08B59D08;
    case 506u: goto L_08B59D14;
    case 507u: goto L_08B59D20;
    case 508u: goto L_08B59D3C;
    case 509u: goto L_08B59D40;
    case 510u: goto L_08B59D4C;
    case 511u: goto L_08B59D58;
    case 512u: goto L_08B59D64;
    case 513u: goto L_08B59D70;
    case 514u: goto L_08B59D7C;
    case 515u: goto L_08B59D80;
    case 516u: goto L_08B59D90;
    case 517u: goto L_08B59D9C;
    case 518u: goto L_08B59DA4;
    case 519u: goto L_08B59DAC;
    case 520u: goto L_08B59DB0;
    case 521u: goto L_08B59DE0;
    case 522u: goto L_08B59DFC;
    case 523u: goto L_08B59E08;
    case 524u: goto L_08B59E20;
    case 525u: goto L_08B59E2C;
    case 526u: goto L_08B59E34;
    case 527u: goto L_08B59E40;
    case 528u: goto L_08B59E48;
    case 529u: goto L_08B59E50;
    case 530u: goto L_08B59E68;
    case 531u: goto L_08B59E70;
    case 532u: goto L_08B59E80;
    case 533u: goto L_08B59E88;
    case 534u: goto L_08B59E90;
    case 535u: goto L_08B59E9C;
    case 536u: goto L_08B59EB0;
    case 537u: goto L_08B59EB8;
    case 538u: goto L_08B59EC0;
    case 539u: goto L_08B59ECC;
    case 540u: goto L_08B59ED4;
    case 541u: goto L_08B59EDC;
    case 542u: goto L_08B59EE4;
    case 543u: goto L_08B59EF0;
    case 544u: goto L_08B59F00;
    case 545u: goto L_08B59F10;
    case 546u: goto L_08B59F20;
    case 547u: goto L_08B59F28;
    case 548u: goto L_08B59F2C;
    case 549u: goto L_08B59F3C;
    case 550u: goto L_08B59F44;
    case 551u: goto L_08B59F4C;
    case 552u: goto L_08B59F54;
    case 553u: goto L_08B59F68;
    case 554u: goto L_08B59F74;
    case 555u: goto L_08B59F8C;
    case 556u: goto L_08B59F94;
    case 557u: goto L_08B59F9C;
    case 558u: goto L_08B59FA0;
    case 559u: goto L_08B59FA8;
    case 560u: goto L_08B59FB0;
    case 561u: goto L_08B59FBC;
    case 562u: goto L_08B59FC0;
    case 563u: goto L_08B59FD0;
    case 564u: goto L_08B59FE8;
    case 565u: goto L_08B5A014;
    case 566u: goto L_08B5A01C;
    case 567u: goto L_08B5A030;
    case 568u: goto L_08B5A03C;
    case 569u: goto L_08B5A044;
    case 570u: goto L_08B5A050;
    case 571u: goto L_08B5A084;
    case 572u: goto L_08B5A08C;
    case 573u: goto L_08B5A0A0;
    case 574u: goto L_08B5A0AC;
    case 575u: goto L_08B5A0B8;
    case 576u: goto L_08B5A13C;
    case 577u: goto L_08B5A148;
    case 578u: goto L_08B5A150;
    case 579u: goto L_08B5A164;
    case 580u: goto L_08B5A16C;
    case 581u: goto L_08B5A17C;
    case 582u: goto L_08B5A184;
    case 583u: goto L_08B5A194;
    case 584u: goto L_08B5A19C;
    case 585u: goto L_08B5A1C0;
    case 586u: goto L_08B5A1C8;
    case 587u: goto L_08B5A1D0;
    case 588u: goto L_08B5A1DC;
    case 589u: goto L_08B5A1E8;
    case 590u: goto L_08B5A1F8;
    case 591u: goto L_08B5A204;
    case 592u: goto L_08B5A208;
    case 593u: goto L_08B5A220;
    case 594u: goto L_08B5A228;
    case 595u: goto L_08B5A234;
    case 596u: goto L_08B5A250;
    case 597u: goto L_08B5A25C;
    case 598u: goto L_08B5A268;
    case 599u: goto L_08B5A290;
    case 600u: goto L_08B5A29C;
    case 601u: goto L_08B5A2B4;
    case 602u: goto L_08B5A2C8;
    case 603u: goto L_08B5A2DC;
    case 604u: goto L_08B5A2FC;
    case 605u: goto L_08B5A308;
    case 606u: goto L_08B5A30C;
    case 607u: goto L_08B5A320;
    case 608u: goto L_08B5A324;
    case 609u: goto L_08B5A354;
    case 610u: goto L_08B5A35C;
    case 611u: goto L_08B5A368;
    case 612u: goto L_08B5A37C;
    case 613u: goto L_08B5A384;
    case 614u: goto L_08B5A3A4;
    case 615u: goto L_08B5A3B0;
    case 616u: goto L_08B5A3C8;
    case 617u: goto L_08B5A3D0;
    case 618u: goto L_08B5A3DC;
    case 619u: goto L_08B5A3F4;
    case 620u: goto L_08B5A400;
    case 621u: goto L_08B5A408;
    case 622u: goto L_08B5A41C;
    case 623u: goto L_08B5A424;
    case 624u: goto L_08B5A43C;
    case 625u: goto L_08B5A448;
    case 626u: goto L_08B5A45C;
    case 627u: goto L_08B5A47C;
    case 628u: goto L_08B5A48C;
    case 629u: goto L_08B5A498;
    case 630u: goto L_08B5A4A4;
    case 631u: goto L_08B5A4AC;
    case 632u: goto L_08B5A4B0;
    case 633u: goto L_08B5A4D0;
    case 634u: goto L_08B5A4E4;
    case 635u: goto L_08B5A500;
    case 636u: goto L_08B5A50C;
    case 637u: goto L_08B5A520;
    case 638u: goto L_08B5A53C;
    case 639u: goto L_08B5A550;
    case 640u: goto L_08B5A558;
    case 641u: goto L_08B5A570;
    case 642u: goto L_08B5A584;
    case 643u: goto L_08B5A58C;
    case 644u: goto L_08B5A5C0;
    case 645u: goto L_08B5A5DC;
    case 646u: goto L_08B5A5EC;
    case 647u: goto L_08B5A5F0;
    case 648u: goto L_08B5A604;
    case 649u: goto L_08B5A61C;
    case 650u: goto L_08B5A640;
    case 651u: goto L_08B5A648;
    case 652u: goto L_08B5A660;
    case 653u: goto L_08B5A670;
    case 654u: goto L_08B5A678;
    case 655u: goto L_08B5A690;
    case 656u: goto L_08B5A698;
    case 657u: goto L_08B5A6A0;
    case 658u: goto L_08B5A6AC;
    case 659u: goto L_08B5A6BC;
    case 660u: goto L_08B5A6C0;
    case 661u: goto L_08B5A6D8;
    case 662u: goto L_08B5A6E8;
    case 663u: goto L_08B5A6F4;
    case 664u: goto L_08B5A70C;
    case 665u: goto L_08B5A714;
    case 666u: goto L_08B5A71C;
    case 667u: goto L_08B5A72C;
    case 668u: goto L_08B5A734;
    case 669u: goto L_08B5A740;
    case 670u: goto L_08B5A74C;
    case 671u: goto L_08B5A760;
    case 672u: goto L_08B5A778;
    case 673u: goto L_08B5A784;
    case 674u: goto L_08B5A794;
    case 675u: goto L_08B5A79C;
    case 676u: goto L_08B5A7B0;
    case 677u: goto L_08B5A7C0;
    case 678u: goto L_08B5A7C4;
    case 679u: goto L_08B5A7D4;
    case 680u: goto L_08B5A7DC;
    case 681u: goto L_08B5A7E4;
    case 682u: goto L_08B5A818;
    case 683u: goto L_08B5A850;
    case 684u: goto L_08B5A860;
    case 685u: goto L_08B5A870;
    case 686u: goto L_08B5A88C;
    case 687u: goto L_08B5A8C0;
    case 688u: goto L_08B5A8C4;
    case 689u: goto L_08B5A8F0;
    case 690u: goto L_08B5A900;
    case 691u: goto L_08B5A90C;
    case 692u: goto L_08B5A91C;
    case 693u: goto L_08B5A948;
    case 694u: goto L_08B5A974;
    case 695u: goto L_08B5A998;
    case 696u: goto L_08B5A99C;
    case 697u: goto L_08B5A9A4;
    case 698u: goto L_08B5A9B0;
    case 699u: goto L_08B5A9BC;
    case 700u: goto L_08B5A9C4;
    case 701u: goto L_08B5A9D0;
    case 702u: goto L_08B5A9E0;
    case 703u: goto L_08B5A9EC;
    case 704u: goto L_08B5AA04;
    case 705u: goto L_08B5AA20;
    case 706u: goto L_08B5AA2C;
    case 707u: goto L_08B5AA30;
    case 708u: goto L_08B5AA3C;
    case 709u: goto L_08B5AA58;
    case 710u: goto L_08B5AA64;
    case 711u: goto L_08B5AAA0;
    case 712u: goto L_08B5AAF4;
    case 713u: goto L_08B5AB0C;
    case 714u: goto L_08B5AB24;
    case 715u: goto L_08B5AB30;
    case 716u: goto L_08B5AB3C;
    case 717u: goto L_08B5AB48;
    case 718u: goto L_08B5AB54;
    case 719u: goto L_08B5AB64;
    case 720u: goto L_08B5AB74;
    case 721u: goto L_08B5AB84;
    case 722u: goto L_08B5ABA0;
    case 723u: goto L_08B5ABB0;
    case 724u: goto L_08B5ABC8;
    case 725u: goto L_08B5ABD0;
    case 726u: goto L_08B5ABD8;
    case 727u: goto L_08B5ABE8;
    case 728u: goto L_08B5ABF8;
    case 729u: goto L_08B5AC04;
    case 730u: goto L_08B5AC0C;
    case 731u: goto L_08B5AC18;
    case 732u: goto L_08B5AC28;
    case 733u: goto L_08B5AC2C;
    case 734u: goto L_08B5AC48;
    case 735u: goto L_08B5AC58;
    case 736u: goto L_08B5AC60;
    case 737u: goto L_08B5AC78;
    case 738u: goto L_08B5AC84;
    case 739u: goto L_08B5AC90;
    case 740u: goto L_08B5AC9C;
    case 741u: goto L_08B5ACA8;
    case 742u: goto L_08B5ACC0;
    case 743u: goto L_08B5ACCC;
    case 744u: goto L_08B5ACD4;
    case 745u: goto L_08B5ACDC;
    case 746u: goto L_08B5ACEC;
    case 747u: goto L_08B5AD00;
    case 748u: goto L_08B5AD1C;
    case 749u: goto L_08B5AD24;
    case 750u: goto L_08B5AD34;
    case 751u: goto L_08B5AD60;
    case 752u: goto L_08B5AD70;
    case 753u: goto L_08B5AD78;
    case 754u: goto L_08B5AD84;
    case 755u: goto L_08B5AD88;
    case 756u: goto L_08B5ADB4;
    case 757u: goto L_08B5ADC4;
    case 758u: goto L_08B5ADD0;
    case 759u: goto L_08B5ADDC;
    case 760u: goto L_08B5ADEC;
    case 761u: goto L_08B5ADFC;
    case 762u: goto L_08B5AE04;
    case 763u: goto L_08B5AE10;
    case 764u: goto L_08B5AE48;
    case 765u: goto L_08B5AE60;
    case 766u: goto L_08B5AE70;
    case 767u: goto L_08B5AE78;
    case 768u: goto L_08B5AE98;
    case 769u: goto L_08B5AEA0;
    case 770u: goto L_08B5AEB8;
    case 771u: goto L_08B5AEC0;
    case 772u: goto L_08B5AEDC;
    case 773u: goto L_08B5AEE8;
    case 774u: goto L_08B5AEF0;
    case 775u: goto L_08B5AEF8;
    case 776u: goto L_08B5AF2C;
    case 777u: goto L_08B5AF40;
    case 778u: goto L_08B5AF48;
    case 779u: goto L_08B5AF6C;
    case 780u: goto L_08B5AF94;
    case 781u: goto L_08B5AFA4;
    case 782u: goto L_08B5AFA8;
    case 783u: goto L_08B5AFCC;
    case 784u: goto L_08B5AFD4;
    case 785u: goto L_08B5AFF4;
    case 786u: goto L_08B5AFFC;
    case 787u: goto L_08B5B008;
    case 788u: goto L_08B5B014;
    case 789u: goto L_08B5B01C;
    case 790u: goto L_08B5B028;
    case 791u: goto L_08B5B030;
    case 792u: goto L_08B5B05C;
    case 793u: goto L_08B5B064;
    case 794u: goto L_08B5B06C;
    case 795u: goto L_08B5B080;
    case 796u: goto L_08B5B088;
    case 797u: goto L_08B5B08C;
    case 798u: goto L_08B5B098;
    case 799u: goto L_08B5B0A0;
    case 800u: goto L_08B5B0A4;
    case 801u: goto L_08B5B0AC;
    case 802u: goto L_08B5B0B4;
    case 803u: goto L_08B5B0BC;
    case 804u: goto L_08B5B0D8;
    case 805u: goto L_08B5B0E4;
    case 806u: goto L_08B5B0F4;
    case 807u: goto L_08B5B108;
    case 808u: goto L_08B5B114;
    case 809u: goto L_08B5B120;
    case 810u: goto L_08B5B144;
    case 811u: goto L_08B5B150;
    case 812u: goto L_08B5B168;
    case 813u: goto L_08B5B170;
    case 814u: goto L_08B5B188;
    case 815u: goto L_08B5B19C;
    case 816u: goto L_08B5B1B4;
    case 817u: goto L_08B5B1C4;
    case 818u: goto L_08B5B1CC;
    case 819u: goto L_08B5B1EC;
    case 820u: goto L_08B5B1F4;
    case 821u: goto L_08B5B20C;
    case 822u: goto L_08B5B214;
    case 823u: goto L_08B5B22C;
    case 824u: goto L_08B5B238;
    case 825u: goto L_08B5B240;
    case 826u: goto L_08B5B248;
    case 827u: goto L_08B5B258;
    case 828u: goto L_08B5B290;
    case 829u: goto L_08B5B2B8;
    case 830u: goto L_08B5B2C0;
    case 831u: goto L_08B5B2CC;
    case 832u: goto L_08B5B2D8;
    case 833u: goto L_08B5B2E8;
    case 834u: goto L_08B5B2F4;
    case 835u: goto L_08B5B300;
    case 836u: goto L_08B5B308;
    case 837u: goto L_08B5B314;
    case 838u: goto L_08B5B320;
    case 839u: goto L_08B5B33C;
    case 840u: goto L_08B5B350;
    case 841u: goto L_08B5B358;
    case 842u: goto L_08B5B378;
    case 843u: goto L_08B5B380;
    case 844u: goto L_08B5B398;
    case 845u: goto L_08B5B3A0;
    case 846u: goto L_08B5B3B8;
    case 847u: goto L_08B5B3C4;
    case 848u: goto L_08B5B3CC;
    case 849u: goto L_08B5B3D4;
    case 850u: goto L_08B5B3E8;
    case 851u: goto L_08B5B404;
    case 852u: goto L_08B5B41C;
    case 853u: goto L_08B5B424;
    case 854u: goto L_08B5B444;
    case 855u: goto L_08B5B44C;
    case 856u: goto L_08B5B464;
    case 857u: goto L_08B5B46C;
    case 858u: goto L_08B5B484;
    case 859u: goto L_08B5B490;
    case 860u: goto L_08B5B498;
    case 861u: goto L_08B5B4A0;
    case 862u: goto L_08B5B4B4;
    case 863u: goto L_08B5B4CC;
    case 864u: goto L_08B5B4D4;
    case 865u: goto L_08B5B4DC;
    case 866u: goto L_08B5B4E0;
    case 867u: goto L_08B5B4F8;
    case 868u: goto L_08B5B500;
    case 869u: goto L_08B5B518;
    case 870u: goto L_08B5B520;
    case 871u: goto L_08B5B528;
    case 872u: goto L_08B5B530;
    case 873u: goto L_08B5B538;
    case 874u: goto L_08B5B548;
    case 875u: goto L_08B5B554;
    case 876u: goto L_08B5B55C;
    case 877u: goto L_08B5B568;
    case 878u: goto L_08B5B570;
    case 879u: goto L_08B5B594;
    case 880u: goto L_08B5B5D0;
    case 881u: goto L_08B5B5D8;
    case 882u: goto L_08B5B5E0;
    case 883u: goto L_08B5B5F0;
    case 884u: goto L_08B5B5FC;
    case 885u: goto L_08B5B628;
    case 886u: goto L_08B5B62C;
    case 887u: goto L_08B5B668;
    case 888u: goto L_08B5B6A8;
    case 889u: goto L_08B5B6D8;
    case 890u: goto L_08B5B70C;
    case 891u: goto L_08B5B73C;
    case 892u: goto L_08B5B744;
    case 893u: goto L_08B5B748;
    case 894u: goto L_08B5B758;
    case 895u: goto L_08B5B764;
    case 896u: goto L_08B5B778;
    case 897u: goto L_08B5B784;
    case 898u: goto L_08B5B788;
    case 899u: goto L_08B5B790;
    case 900u: goto L_08B5B798;
    case 901u: goto L_08B5B7B8;
    case 902u: goto L_08B5B7D8;
    case 903u: goto L_08B5B7E0;
    case 904u: goto L_08B5B7E8;
    case 905u: goto L_08B5B7F4;
    case 906u: goto L_08B5B7F8;
    case 907u: goto L_08B5B7FC;
    case 908u: goto L_08B5B804;
    case 909u: goto L_08B5B810;
    case 910u: goto L_08B5B818;
    case 911u: goto L_08B5B820;
    case 912u: goto L_08B5B830;
    case 913u: goto L_08B5B840;
    case 914u: goto L_08B5B864;
    case 915u: goto L_08B5B874;
    case 916u: goto L_08B5B894;
    case 917u: goto L_08B5B89C;
    case 918u: goto L_08B5B8A4;
    case 919u: goto L_08B5B8A8;
    case 920u: goto L_08B5B8AC;
    case 921u: goto L_08B5B8BC;
    case 922u: goto L_08B5B8C4;
    case 923u: goto L_08B5B8D4;
    case 924u: goto L_08B5B8DC;
    case 925u: goto L_08B5B8EC;
    case 926u: goto L_08B5B8FC;
    case 927u: goto L_08B5B924;
    case 928u: goto L_08B5B934;
    case 929u: goto L_08B5B958;
    case 930u: goto L_08B5B964;
    case 931u: goto L_08B5B96C;
    case 932u: goto L_08B5B97C;
    case 933u: goto L_08B5B98C;
    case 934u: goto L_08B5B998;
    case 935u: goto L_08B5B99C;
    case 936u: goto L_08B5B9A8;
    case 937u: goto L_08B5B9B0;
    case 938u: goto L_08B5B9C0;
    case 939u: goto L_08B5B9D0;
    case 940u: goto L_08B5B9F4;
    case 941u: goto L_08B5BA04;
    case 942u: goto L_08B5BA24;
    case 943u: goto L_08B5BA2C;
    case 944u: goto L_08B5BA34;
    case 945u: goto L_08B5BA40;
    case 946u: goto L_08B5BA50;
    case 947u: goto L_08B5BA5C;
    case 948u: goto L_08B5BA68;
    case 949u: goto L_08B5BA74;
    case 950u: goto L_08B5BA84;
    case 951u: goto L_08B5BA94;
    case 952u: goto L_08B5BAB8;
    case 953u: goto L_08B5BAC8;
    case 954u: goto L_08B5BAE8;
    case 955u: goto L_08B5BAF4;
    case 956u: goto L_08B5BAFC;
    case 957u: goto L_08B5BB08;
    case 958u: goto L_08B5BB18;
    case 959u: goto L_08B5BB20;
    case 960u: goto L_08B5BB30;
    case 961u: goto L_08B5BB38;
    case 962u: goto L_08B5BB40;
    case 963u: goto L_08B5BB48;
    case 964u: goto L_08B5BB58;
    case 965u: goto L_08B5BB68;
    case 966u: goto L_08B5BB8C;
    case 967u: goto L_08B5BB9C;
    case 968u: goto L_08B5BBBC;
    case 969u: goto L_08B5BBC4;
    case 970u: goto L_08B5BBCC;
    case 971u: goto L_08B5BBD4;
    case 972u: goto L_08B5BBE4;
    case 973u: goto L_08B5BBEC;
    case 974u: goto L_08B5BBFC;
    case 975u: goto L_08B5BC04;
    case 976u: goto L_08B5BC14;
    case 977u: goto L_08B5BC24;
    case 978u: goto L_08B5BC48;
    case 979u: goto L_08B5BC58;
    case 980u: goto L_08B5BC78;
    case 981u: goto L_08B5BC80;
    case 982u: goto L_08B5BC88;
    case 983u: goto L_08B5BC94;
    case 984u: goto L_08B5BCA4;
    case 985u: goto L_08B5BCAC;
    case 986u: goto L_08B5BCC0;
    case 987u: goto L_08B5BCC8;
    case 988u: goto L_08B5BCD0;
    case 989u: goto L_08B5BCE0;
    case 990u: goto L_08B5BCF0;
    case 991u: goto L_08B5BD14;
    case 992u: goto L_08B5BD24;
    case 993u: goto L_08B5BD44;
    case 994u: goto L_08B5BD4C;
    case 995u: goto L_08B5BD54;
    case 996u: goto L_08B5BD5C;
    case 997u: goto L_08B5BD6C;
    case 998u: goto L_08B5BD74;
    case 999u: goto L_08B5BD84;
    case 1000u: goto L_08B5BD8C;
    case 1001u: goto L_08B5BD9C;
    case 1002u: goto L_08B5BDAC;
    case 1003u: goto L_08B5BDD4;
    case 1004u: goto L_08B5BDE4;
    case 1005u: goto L_08B5BE08;
    case 1006u: goto L_08B5BE10;
    case 1007u: goto L_08B5BE18;
    case 1008u: goto L_08B5BE24;
    case 1009u: goto L_08B5BE34;
    case 1010u: goto L_08B5BE40;
    case 1011u: goto L_08B5BE48;
    case 1012u: goto L_08B5BE58;
    case 1013u: goto L_08B5BE68;
    case 1014u: goto L_08B5BE88;
    case 1015u: goto L_08B5BE98;
    case 1016u: goto L_08B5BEB0;
    case 1017u: goto L_08B5BEB8;
    case 1018u: goto L_08B5BEC0;
    case 1019u: goto L_08B5BECC;
    case 1020u: goto L_08B5BEDC;
    case 1021u: goto L_08B5BEE8;
    case 1022u: goto L_08B5BEF4;
    case 1023u: goto L_08B5BF0C;
    case 1024u: goto L_08B5BF14;
    case 1025u: goto L_08B5BF24;
    case 1026u: goto L_08B5BF34;
    case 1027u: goto L_08B5BF58;
    case 1028u: goto L_08B5BF68;
    case 1029u: goto L_08B5BF88;
    case 1030u: goto L_08B5BF90;
    case 1031u: goto L_08B5BF98;
    case 1032u: goto L_08B5BFA0;
    case 1033u: goto L_08B5BFB0;
    case 1034u: goto L_08B5BFB8;
    case 1035u: goto L_08B5BFC8;
    case 1036u: goto L_08B5BFD0;
    case 1037u: goto L_08B5BFE0;
    case 1038u: goto L_08B5BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B58004:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[2] = (ctx.gpr[13] < ctx.gpr[3] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B58024;
      }
      goto L_08B5800C;
    }
L_08B5800C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B58024;
      }
      goto L_08B58014;
    }
L_08B58014:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[13];
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5802C;
      }
      goto L_08B5801C;
    }
L_08B5801C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5802C;
      }
      goto L_08B58024;
    }
L_08B58024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5803C;
      }
      goto L_08B5802C;
    }
L_08B5802C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[10]);
    goto L_08B5803C;
L_08B5803C:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (ctx.gpr[14] & 4u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 1053u, 0x08B57FC8u>(ctx, &aot_mem); return;
      }
      goto L_08B58054;
    }
L_08B58054:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[7] = (0u | 34u);
      if (branch_taken) {
          goto L_08B58068;
      }
      goto L_08B5805C;
    }
L_08B5805C:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B58074;
      }
      goto L_08B58068;
    }
L_08B58068:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B58074;
      }
      goto L_08B58070;
    }
L_08B58070:
    ctx.gpr[3] = (0u - ctx.gpr[3]);
    goto L_08B58074;
L_08B58074:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B58088;
      }
      goto L_08B5807C;
    }
L_08B5807C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
        goto L_08B58084;
    }
    goto L_08B58084;
L_08B58084:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08B58088;
L_08B58088:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[3] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B580B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 1037u, 0x08B57EDCu>(ctx, &aot_mem) && ctx.pc == 0x08B580B0u) goto L_08B580B0;
    return;
L_08B580B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B580BC:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B580F0;
      }
      goto L_08B580D4;
    }
L_08B580D4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B580F8;
      }
      goto L_08B580E0;
    }
L_08B580E0:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B580D4;
      }
      goto L_08B580F0;
    }
L_08B580F0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B580F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58100:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B5813C;
      }
      goto L_08B58114;
    }
L_08B58114:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B58144;
      }
      goto L_08B58124;
    }
L_08B58124:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B58114;
      }
      goto L_08B5813C;
    }
L_08B5813C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58144:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[9] - ctx.gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5814C:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B58178;
      }
      goto L_08B58160;
    }
L_08B58160:
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B58160;
      }
      goto L_08B58178;
    }
L_08B58178:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58180:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(14520));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08B58190;
L_08B58190:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B581E8;
      }
      goto L_08B58198;
    }
L_08B58198:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B581B0;
      }
      goto L_08B581A8;
    }
L_08B581A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B581B0;
      }
      goto L_08B581B0;
    }
L_08B581B0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[9] & 1u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B581D0;
      }
      goto L_08B581C8;
    }
L_08B581C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B581D0;
      }
      goto L_08B581D0;
    }
L_08B581D0:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B581EC;
      }
      goto L_08B581D8;
    }
L_08B581D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B58190;
      }
      goto L_08B581E8;
    }
L_08B581E8:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    goto L_08B581EC;
L_08B581EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B58210;
      }
      goto L_08B58208;
    }
L_08B58208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B58210;
      }
      goto L_08B58210;
    }
L_08B58210:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B58230;
      }
      goto L_08B58224;
    }
L_08B58224:
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58230:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58238:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58258;
      }
      goto L_08B58248;
    }
L_08B58248:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58248;
      }
      goto L_08B58258;
    }
L_08B58258:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B5828C;
      }
      goto L_08B58270;
    }
L_08B58270:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B58270;
      }
      goto L_08B5828C;
    }
L_08B5828C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58294:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08B582A0;
L_08B582A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B582BC;
      }
      goto L_08B582A8;
    }
L_08B582A8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B582BC;
      }
      goto L_08B582B0;
    }
L_08B582B0:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B582A0;
      }
      goto L_08B582BC;
    }
L_08B582BC:
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[2] = (0u | 0u);
        goto L_08B582C4;
    }
    goto L_08B582C4;
L_08B582C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B582CC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08B582D0;
L_08B582D0:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B582F4;
    }
    goto L_08B582D8;
L_08B582D8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B582F4;
    }
    goto L_08B582E4;
L_08B582E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B582D0;
      }
      goto L_08B582F4;
    }
L_08B582F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58300:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B58310u);
    // nop
    goto L_08B582CC;
L_08B58310:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5831C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B58358;
      }
      goto L_08B5833C;
    }
L_08B5833C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B5833C;
      }
      goto L_08B58358;
    }
L_08B58358:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58360:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B583A0;
      }
      goto L_08B5836C;
    }
L_08B5836C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    goto L_08B58370;
L_08B58370:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08B58394;
    }
    goto L_08B5837C;
L_08B5837C:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B583A0;
      }
      goto L_08B58384;
    }
L_08B58384:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5837C;
      }
      goto L_08B58390;
    }
L_08B58390:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08B58394;
L_08B58394:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B58370;
      }
      goto L_08B583A0;
    }
L_08B583A0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B583A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(113) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B58950;
      }
      goto L_08B583C0;
    }
L_08B583C0:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27176)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B583D8:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28752));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B583EC:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28740));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58400:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28712));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58414:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28696));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58428:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28672));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5843C:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28660));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58450:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28632));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58464:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28612));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58478:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28592));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5848C:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28576));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B584A0:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28564));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B584B4:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28544));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B584C8:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28524));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B584DC:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28504));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B584F0:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28492));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58504:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28468));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58518:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28444));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5852C:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28432));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58540:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28412));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58554:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28396));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58568:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28380));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5857C:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28364));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58590:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28344));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B585A4:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28312));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B585B8:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28292));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B585CC:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28268));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B585E0:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28252));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B585F4:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28236));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58608:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28212));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5861C:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28196));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58630:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28172));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58644:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28156));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58658:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28144));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5866C:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28128));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58680:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28108));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58694:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28080));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B586A8:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28060));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B586BC:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28048));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B586D0:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28040));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B586E4:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28024));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B586F8:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-28000));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5870C:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27980));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58720:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27948));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58734:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27936));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58748:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27916));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5875C:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27892));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58770:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27876));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58784:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27860));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58798:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27840));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B587AC:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27824));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B587C0:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27804));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B587D4:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27792));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B587E8:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27752));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B587FC:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27712));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58810:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27680));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58824:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27616));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58838:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27576));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5884C:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27548));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58860:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27532));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58874:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27512));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58888:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27484));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5889C:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27460));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B588B0:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27432));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B588C4:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27384));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B588D8:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27352));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B588EC:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27320));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58900:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27296));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58914:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27260));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58928:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27240));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5893C:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27216));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58950:
    ctx.gpr[31] = (0x08B58958u);
    // nop
    goto L_08B59F44;
L_08B58958:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B58968;
      }
      goto L_08B58960;
    }
L_08B58960:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-27180));
    goto L_08B58968;
L_08B58968:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58974:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B58990;
      }
      goto L_08B58980;
    }
L_08B58980:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08B58984;
L_08B58984:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08B58984;
    }
    goto L_08B58990;
L_08B58990:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58998:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B589F0;
      }
      goto L_08B589A4;
    }
L_08B589A4:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(14520));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08B589B4;
L_08B589B4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B589E0;
      }
      goto L_08B589C4;
    }
L_08B589C4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B589DC;
      }
      goto L_08B589D4;
    }
L_08B589D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B589DC;
      }
      goto L_08B589DC;
    }
L_08B589DC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B589E0;
L_08B589E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B589B4;
      }
      goto L_08B589F0;
    }
L_08B589F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B589F8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B58A10;
      }
      goto L_08B58A00;
    }
L_08B58A00:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14520));
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58A18;
      }
      goto L_08B58A10;
    }
L_08B58A10:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58A18:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B58A94;
      }
      goto L_08B58A24;
    }
L_08B58A24:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B58A44;
      }
      goto L_08B58A3C;
    }
L_08B58A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[11] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B58A48;
      }
      goto L_08B58A44;
    }
L_08B58A44:
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    goto L_08B58A48;
L_08B58A48:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08B58A64;
      }
      goto L_08B58A5C;
    }
L_08B58A5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B58A64;
      }
      goto L_08B58A64;
    }
L_08B58A64:
    if (ctx.gpr[10] != ctx.gpr[8]) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08B58A98;
    }
    goto L_08B58A6C;
L_08B58A6C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08B58A98;
    }
    goto L_08B58A74;
L_08B58A74:
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08B58A98;
    }
    goto L_08B58A7C;
L_08B58A7C:
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08B58A98;
    }
    goto L_08B58A84;
L_08B58A84:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B58A18;
      }
      goto L_08B58A94;
    }
L_08B58A94:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08B58A98;
L_08B58A98:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B58ABC;
      }
      goto L_08B58AB4;
    }
L_08B58AB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B58ABC;
      }
      goto L_08B58ABC;
    }
L_08B58ABC:
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B58ADC;
      }
      goto L_08B58AD0;
    }
L_08B58AD0:
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58ADC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58AE4:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B58B04;
      }
      goto L_08B58AF4;
    }
L_08B58AF4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08B58AF8;
L_08B58AF8:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08B58AF8;
    }
    goto L_08B58B04;
L_08B58B04:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B58B34;
      }
      goto L_08B58B10;
    }
L_08B58B10:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58B34;
      }
      goto L_08B58B24;
    }
L_08B58B24:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B58B04;
      }
      goto L_08B58B2C;
    }
L_08B58B2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B58B04;
      }
      goto L_08B58B34;
    }
L_08B58B34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58B3C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B58B4C;
      }
      goto L_08B58B44;
    }
L_08B58B44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B58B54;
      }
      goto L_08B58B4C;
    }
L_08B58B4C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58B54:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B58B90;
      }
      goto L_08B58B60;
    }
L_08B58B60:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[7] != ctx.gpr[9]) {
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B58B94;
    }
    goto L_08B58B70;
L_08B58B70:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B58B94;
    }
    goto L_08B58B78;
L_08B58B78:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B58B94;
    }
    goto L_08B58B80;
L_08B58B80:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B58B54;
      }
      goto L_08B58B90;
    }
L_08B58B90:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B58B94;
L_08B58B94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58BA0:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B58BD4;
      }
      goto L_08B58BB0;
    }
L_08B58BB0:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    goto L_08B58BB4;
L_08B58BB4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B58BD4;
      }
      goto L_08B58BCC;
    }
L_08B58BCC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
        goto L_08B58BB4;
    }
    goto L_08B58BD4;
L_08B58BD4:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B58BF8;
      }
      goto L_08B58BE0;
    }
L_08B58BE0:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B58BE0;
      }
      goto L_08B58BF8;
    }
L_08B58BF8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58C00:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B58C14;
      }
      goto L_08B58C0C;
    }
L_08B58C0C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58C14:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08B58C3C;
    }
    goto L_08B58C20;
L_08B58C20:
    if (ctx.gpr[7] == ctx.gpr[6]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
        goto L_08B58C4C;
    }
    goto L_08B58C28;
L_08B58C28:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B58C20;
      }
      goto L_08B58C38;
    }
L_08B58C38:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08B58C3C;
L_08B58C3C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
        goto L_08B58C14;
    }
    goto L_08B58C48;
L_08B58C48:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    goto L_08B58C4C;
L_08B58C4C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08B58C54;
    }
    goto L_08B58C54;
L_08B58C54:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58C5C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B58C80;
      }
      goto L_08B58C68;
    }
L_08B58C68:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (0u | 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
        goto L_08B58C78;
    }
    goto L_08B58C78;
L_08B58C78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58C80:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08B58C84;
L_08B58C84:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B58CA4;
      }
      goto L_08B58C8C;
    }
L_08B58C8C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58CAC;
      }
      goto L_08B58C98;
    }
L_08B58C98:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B58C84;
      }
      goto L_08B58CA4;
    }
L_08B58CA4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58CAC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B58C80;
      }
      goto L_08B58CBC;
    }
L_08B58CBC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58CC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[9]);
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[11]);
    ctx.gpr[9] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16444)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16440)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[8]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    goto L_08B58D50;
L_08B58D50:
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
        goto L_08B58DA0;
    }
    goto L_08B58D5C;
L_08B58D5C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26720)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B58D74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    goto L_08B58D78;
L_08B58D78:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
        goto L_08B58DA0;
    }
    goto L_08B58D88;
L_08B58D88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B59D7C;
      }
      goto L_08B58D90;
    }
L_08B58D90:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B58D50;
      }
      goto L_08B58D9C;
    }
L_08B58D9C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    goto L_08B58DA0;
L_08B58DA0:
    ctx.gpr[7] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08B58DDC;
      }
      goto L_08B58DAC;
    }
L_08B58DAC:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[12] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B58DCC;
      }
      goto L_08B58DBC;
    }
L_08B58DBC:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08B58DC0;
L_08B58DC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] == ctx.gpr[7]) {
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
        goto L_08B58DC0;
    }
    goto L_08B58DCC;
L_08B58DCC:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08B59D80;
    }
    goto L_08B58DD8;
L_08B58DD8:
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    goto L_08B58DDC;
L_08B58DDC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 48 ? 1u : 0u);
    goto L_08B58DF0;
L_08B58DF0:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B58E58;
      }
      goto L_08B58DFC;
    }
L_08B58DFC:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 58 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (0u | 46u);
      if (branch_taken) {
          goto L_08B58E5C;
      }
      goto L_08B58E08;
    }
L_08B58E08:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B58E2C;
      }
      goto L_08B58E14;
    }
L_08B58E14:
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_08B58E44;
      }
      goto L_08B58E2C;
    }
L_08B58E2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_08B58E44;
      }
      goto L_08B58E34;
    }
L_08B58E34:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    goto L_08B58E44;
L_08B58E44:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B58DF0;
      }
      goto L_08B58E58;
    }
L_08B58E58:
    ctx.gpr[9] = (0u | 46u);
    goto L_08B58E5C;
L_08B58E5C:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B58F8C;
      }
      goto L_08B58E64;
    }
L_08B58E64:
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B58EC0;
      }
      goto L_08B58E78;
    }
L_08B58E78:
    if (ctx.gpr[8] != ctx.gpr[7]) {
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 49 ? 1u : 0u);
        goto L_08B58E9C;
    }
    goto L_08B58E80;
L_08B58E80:
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58E80;
      }
      goto L_08B58E98;
    }
L_08B58E98:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 49 ? 1u : 0u);
    goto L_08B58E9C;
L_08B58E9C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (0u | 101u);
      if (branch_taken) {
          goto L_08B58F90;
      }
      goto L_08B58EA4;
    }
L_08B58EA4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 58 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 101u);
      if (branch_taken) {
          goto L_08B58F90;
      }
      goto L_08B58EB0;
    }
L_08B58EB0:
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B58ED8;
      }
      goto L_08B58EC0;
    }
L_08B58EC0:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (0u | 101u);
      if (branch_taken) {
          goto L_08B58F90;
      }
      goto L_08B58ECC;
    }
L_08B58ECC:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 58 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 101u);
      if (branch_taken) {
          goto L_08B58F90;
      }
      goto L_08B58ED8;
    }
L_08B58ED8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58F7C;
      }
      goto L_08B58EE4;
    }
L_08B58EE4:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58F3C;
      }
      goto L_08B58EF8;
    }
L_08B58EF8:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    goto L_08B58EFC;
L_08B58EFC:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58F18;
      }
      goto L_08B58F08;
    }
L_08B58F08:
    ctx.gpr[9] = (ctx.gpr[19] << 3u);
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B58F2C;
      }
      goto L_08B58F18;
    }
L_08B58F18:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[18]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_08B58F2C;
      }
      goto L_08B58F24;
    }
L_08B58F24:
    ctx.gpr[9] = (ctx.gpr[16] + ctx.gpr[9]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[9]);
    goto L_08B58F2C;
L_08B58F2C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B58EFC;
      }
      goto L_08B58F3C;
    }
L_08B58F3C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B58F5C;
      }
      goto L_08B58F48;
    }
L_08B58F48:
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B58F78;
      }
      goto L_08B58F5C;
    }
L_08B58F5C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B58F7C;
      }
      goto L_08B58F68;
    }
L_08B58F68:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[8]);
    goto L_08B58F78;
L_08B58F78:
    ctx.gpr[6] = (0u | 0u);
    goto L_08B58F7C;
L_08B58F7C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B58EC0;
      }
      goto L_08B58F8C;
    }
L_08B58F8C:
    ctx.gpr[7] = (0u | 101u);
    goto L_08B58F90;
L_08B58F90:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08B58FA4;
      }
      goto L_08B58F98;
    }
L_08B58F98:
    ctx.gpr[7] = (0u | 69u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B590BC;
      }
      goto L_08B58FA4;
    }
L_08B58FA4:
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[12]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
        goto L_08B58FBC;
    }
    goto L_08B58FB4;
L_08B58FB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B59D7C;
      }
      goto L_08B58FBC;
    }
L_08B58FBC:
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 44 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_08B58FE8;
      }
      goto L_08B58FD4;
    }
L_08B58FD4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 43 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B59008;
      }
      goto L_08B58FE0;
    }
L_08B58FE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58FFC;
      }
      goto L_08B58FE8;
    }
L_08B58FE8:
    ctx.gpr[7] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B59008;
      }
      goto L_08B58FF4;
    }
L_08B58FF4:
    ctx.gpr[3] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08B58FFC;
L_08B58FFC:
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 48 ? 1u : 0u);
    goto L_08B59008;
L_08B59008:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B590B8;
      }
      goto L_08B59010;
    }
L_08B59010:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 48u);
      if (branch_taken) {
          goto L_08B590B8;
      }
      goto L_08B59018;
    }
L_08B59018:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 49 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5903C;
      }
      goto L_08B59020;
    }
L_08B59020:
    ctx.gpr[7] = (0u | 48u);
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08B59028;
L_08B59028:
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] == ctx.gpr[7]) {
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
        goto L_08B59028;
    }
    goto L_08B59038;
L_08B59038:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 49 ? 1u : 0u);
    goto L_08B5903C;
L_08B5903C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B590B0;
      }
      goto L_08B59044;
    }
L_08B59044:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08B590B0;
      }
      goto L_08B5904C;
    }
L_08B5904C:
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08B59054;
L_08B59054:
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B59088;
      }
      goto L_08B59068;
    }
L_08B59068:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[10] << 3u);
      if (branch_taken) {
          goto L_08B59088;
      }
      goto L_08B59070;
    }
L_08B59070:
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B59054;
      }
      goto L_08B59088;
    }
L_08B59088:
    ctx.gpr[4] = (ctx.gpr[9] - ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B590A0;
      }
      goto L_08B59098;
    }
L_08B59098:
    ctx.gpr[10] = (153u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-27009));
    goto L_08B590A0;
L_08B590A0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B590BC;
      }
      goto L_08B590A8;
    }
L_08B590A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u - ctx.gpr[10]);
      if (branch_taken) {
          goto L_08B590BC;
      }
      goto L_08B590B0;
    }
L_08B590B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08B590BC;
      }
      goto L_08B590B8;
    }
L_08B590B8:
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    goto L_08B590BC;
L_08B590BC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[30] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B590D8;
      }
      goto L_08B590C4;
    }
L_08B590C4:
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[12]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08B59D80;
    }
    goto L_08B590D0;
L_08B590D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B59D7C;
      }
      goto L_08B590D8;
    }
L_08B590D8:
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
        goto L_08B590E4;
    }
    goto L_08B590E4;
L_08B590E4:
    ctx.gpr[17] = (0u | 16u);
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
        goto L_08B590F0;
    }
    goto L_08B590F0;
L_08B590F0:
    ctx.gpr[31] = (0x08B590F8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 351u, 0x08B553F8u>(ctx, &aot_mem) && ctx.pc == 0x08B590F8u) goto L_08B590F8;
    return;
L_08B590F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B59168;
      }
      goto L_08B59108;
    }
L_08B59108:
    ctx.gpr[5] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-72)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08B59134u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B59134u) goto L_08B59134;
    return;
L_08B59134:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B59144u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 351u, 0x08B553F8u>(ctx, &aot_mem) && ctx.pc == 0x08B59144u) goto L_08B59144;
    return;
L_08B59144:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59158u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B59158u) goto L_08B59158;
    return;
L_08B59158:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_08B59168;
L_08B59168:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B59284;
      }
      goto L_08B59174;
    }
L_08B59174:
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08B59D80;
    }
    goto L_08B5917C;
L_08B5917C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < -22 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B59244;
      }
      goto L_08B59184;
    }
L_08B59184:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 15u);
      if (branch_taken) {
          goto L_08B591D0;
      }
      goto L_08B59190;
    }
L_08B59190:
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[30] << 3u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B591C4u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B591C4u) goto L_08B591C4;
    return;
L_08B591C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B59D7C;
      }
      goto L_08B591D0;
    }
L_08B591D0:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B59288;
      }
      goto L_08B591E4;
    }
L_08B591E4:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(16992));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[30] - ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B59214u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B59214u) goto L_08B59214;
    return;
L_08B59214:
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59238u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B59238u) goto L_08B59238;
    return;
L_08B59238:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B59D7C;
      }
      goto L_08B59244;
    }
L_08B59244:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B59288;
      }
      goto L_08B5924C;
    }
L_08B5924C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-8));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B59278u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem) && ctx.pc == 0x08B59278u) goto L_08B59278;
    return;
L_08B59278:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B59D7C;
      }
      goto L_08B59284;
    }
L_08B59284:
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    goto L_08B59288;
L_08B59288:
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08B593E8;
      }
      goto L_08B59294;
    }
L_08B59294:
    ctx.gpr[4] = (ctx.gpr[17] & 15u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[17] & ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B592DC;
      }
      goto L_08B592A0;
    }
L_08B592A0:
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B592D4u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B592D4u) goto L_08B592D4;
    return;
L_08B592D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_08B592DC;
L_08B592DC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 309 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5957C;
      }
      goto L_08B592E4;
    }
L_08B592E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 4u));
      if (branch_taken) {
          goto L_08B59320;
      }
      goto L_08B592EC;
    }
L_08B592EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08B592F0;
L_08B592F0:
    ctx.gpr[5] = (0u | 34u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16956)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16952)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B59D3C;
      }
      goto L_08B59314;
    }
L_08B59314:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08B59D80;
      }
      goto L_08B5931C;
    }
L_08B5931C:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 4u));
    goto L_08B59320;
L_08B59320:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5957C;
      }
      goto L_08B59328;
    }
L_08B59328:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(17192));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (848u << 16u);
      if (branch_taken) {
          goto L_08B59378;
      }
      goto L_08B59338;
    }
L_08B59338:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08B59340;
L_08B59340:
    ctx.gpr[6] = (ctx.gpr[16] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
        goto L_08B59364;
    }
    goto L_08B5934C;
L_08B5934C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B59358u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B59358u) goto L_08B59358;
    return;
L_08B59358:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    goto L_08B59364;
L_08B59364:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B59340;
      }
      goto L_08B59370;
    }
L_08B59370:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08B59378;
L_08B59378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08B59398u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B59398u) goto L_08B59398;
    return;
L_08B59398:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (32752u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (31904u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (31888u << 16u);
      if (branch_taken) {
          goto L_08B592EC;
      }
      goto L_08B593BC;
    }
L_08B593BC:
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B593E0;
      }
      goto L_08B593C8;
    }
L_08B593C8:
    ctx.gpr[4] = (32752u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5957C;
      }
      goto L_08B593E0;
    }
L_08B593E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5957C;
      }
      goto L_08B593E8;
    }
L_08B593E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[16] = (0u - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B5957C;
      }
      goto L_08B593F0;
    }
L_08B593F0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[17] = (ctx.gpr[16] & 15u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5943C;
      }
      goto L_08B59400;
    }
L_08B59400:
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B59434u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem) && ctx.pc == 0x08B59434u) goto L_08B59434;
    return;
L_08B59434:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_08B5943C;
L_08B5943C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 4u));
      if (branch_taken) {
          goto L_08B5957C;
      }
      goto L_08B59444;
    }
L_08B59444:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59544;
      }
      goto L_08B59450;
    }
L_08B59450:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (2234u << 16u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(17232));
      if (branch_taken) {
          goto L_08B594A0;
      }
      goto L_08B59468;
    }
L_08B59468:
    ctx.gpr[6] = (ctx.gpr[16] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
        goto L_08B5948C;
    }
    goto L_08B59474;
L_08B59474:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B59480u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B59480u) goto L_08B59480;
    return;
L_08B59480:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    goto L_08B5948C;
L_08B5948C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B59468;
      }
      goto L_08B59498;
    }
L_08B59498:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08B594A0;
L_08B594A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B594BCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B594BCu) goto L_08B594BC;
    return;
L_08B594BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16444)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16440)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B594DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B594DCu) goto L_08B594DC;
    return;
L_08B594DC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08B59580;
    }
    goto L_08B594E4;
L_08B594E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16452)));
    ctx.gpr[31] = (0x08B594FCu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16448)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B594FCu) goto L_08B594FC;
    return;
L_08B594FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B59518u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B59518u) goto L_08B59518;
    return;
L_08B59518:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16444)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16440)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59538u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B59538u) goto L_08B59538;
    return;
L_08B59538:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08B59574;
      }
      goto L_08B59540;
    }
L_08B59540:
    ctx.gpr[4] = (2234u << 16u);
    goto L_08B59544;
L_08B59544:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16444)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16440)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[7] = (0u | 34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B59D3C;
      }
      goto L_08B59568;
    }
L_08B59568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08B59D80;
      }
      goto L_08B59570;
    }
L_08B59570:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B59574;
L_08B59574:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08B5957C;
L_08B5957C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08B59580;
L_08B59580:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B59598u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 749u, 0x08B5F634u>(ctx, &aot_mem) && ctx.pc == 0x08B59598u) goto L_08B59598;
    return;
L_08B59598:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u - ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    goto L_08B595C0;
L_08B595C0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B595CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 726u, 0x08B5F43Cu>(ctx, &aot_mem) && ctx.pc == 0x08B595CCu) goto L_08B595CC;
    return;
L_08B595CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x08B595ECu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B595ECu) goto L_08B595EC;
    return;
L_08B595EC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08B59604u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 13u, 0x08B6012Cu>(ctx, &aot_mem) && ctx.pc == 0x08B59604u) goto L_08B59604;
    return;
L_08B59604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B59614u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 793u, 0x08B5F894u>(ctx, &aot_mem) && ctx.pc == 0x08B59614u) goto L_08B59614;
    return;
L_08B59614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08B59648;
      }
      goto L_08B59634;
    }
L_08B59634:
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B59658;
      }
      goto L_08B59648;
    }
L_08B59648:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08B59658;
L_08B59658:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
        goto L_08B59668;
    }
    goto L_08B59660;
L_08B59660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B59668;
      }
      goto L_08B59668;
    }
L_08B59668:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < -1022 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B59684;
      }
      goto L_08B5967C;
    }
L_08B5967C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1075));
      if (branch_taken) {
          goto L_08B5968C;
      }
      goto L_08B59684;
    }
L_08B59684:
    ctx.gpr[4] = (0u | 54u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    goto L_08B5968C;
L_08B5968C:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_08B596A4;
    }
    goto L_08B596A4;
L_08B596A4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_08B596B0;
    }
    goto L_08B596B0;
L_08B596B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B596C4;
      }
      goto L_08B596B8;
    }
L_08B596B8:
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    goto L_08B596C4;
L_08B596C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B596FC;
      }
      goto L_08B596CC;
    }
L_08B596CC:
    ctx.gpr[31] = (0x08B596D4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 818u, 0x08B5FADCu>(ctx, &aot_mem) && ctx.pc == 0x08B596D4u) goto L_08B596D4;
    return;
L_08B596D4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08B596ECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 795u, 0x08B5F8D0u>(ctx, &aot_mem) && ctx.pc == 0x08B596ECu) goto L_08B596EC;
    return;
L_08B596EC:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B596FCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem) && ctx.pc == 0x08B596FCu) goto L_08B596FC;
    return;
L_08B596FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08B59718;
      }
      goto L_08B59704;
    }
L_08B59704:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08B59714u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 835u, 0x08B5FBF0u>(ctx, &aot_mem) && ctx.pc == 0x08B59714u) goto L_08B59714;
    return;
L_08B59714:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_08B59718;
L_08B59718:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B59730;
      }
      goto L_08B59720;
    }
L_08B59720:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B5972Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 818u, 0x08B5FADCu>(ctx, &aot_mem) && ctx.pc == 0x08B5972Cu) goto L_08B5972C;
    return;
L_08B5972C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_08B59730;
L_08B59730:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B59748;
      }
      goto L_08B59738;
    }
L_08B59738:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B59744u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 835u, 0x08B5FBF0u>(ctx, &aot_mem) && ctx.pc == 0x08B59744u) goto L_08B59744;
    return;
L_08B59744:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_08B59748;
L_08B59748:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B59760;
      }
      goto L_08B59750;
    }
L_08B59750:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5975Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 835u, 0x08B5FBF0u>(ctx, &aot_mem) && ctx.pc == 0x08B5975Cu) goto L_08B5975C;
    return;
L_08B5975C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08B59760;
L_08B59760:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B59778u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 857u, 0x08B5FDACu>(ctx, &aot_mem) && ctx.pc == 0x08B59778u) goto L_08B59778;
    return;
L_08B59778:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B59794u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 848u, 0x08B5FD24u>(ctx, &aot_mem) && ctx.pc == 0x08B59794u) goto L_08B59794;
    return;
L_08B59794:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B59800;
      }
      goto L_08B597A0;
    }
L_08B597A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B59D3C;
      }
      goto L_08B597AC;
    }
L_08B597AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08B59D40;
    }
    goto L_08B597B8;
L_08B597B8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[21] & ctx.gpr[4]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08B59D40;
    }
    goto L_08B597D0;
L_08B597D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B597E0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 835u, 0x08B5FBF0u>(ctx, &aot_mem) && ctx.pc == 0x08B597E0u) goto L_08B597E0;
    return;
L_08B597E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B597F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 848u, 0x08B5FD24u>(ctx, &aot_mem) && ctx.pc == 0x08B597F0u) goto L_08B597F0;
    return;
L_08B597F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.gpr[4] = (32752u << 16u);
      if (branch_taken) {
          goto L_08B59868;
      }
      goto L_08B597F8;
    }
L_08B597F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08B59D40;
      }
      goto L_08B59800;
    }
L_08B59800:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B59930;
      }
      goto L_08B59808;
    }
L_08B59808:
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B59854;
      }
      goto L_08B5981C;
    }
L_08B5981C:
    ctx.gpr[6] = (16u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08B59890;
      }
      goto L_08B5982C;
    }
L_08B5982C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08B59890;
      }
      goto L_08B59838;
    }
L_08B59838:
    ctx.gpr[4] = (32752u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] & ctx.gpr[4]);
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_08B59D3C;
      }
      goto L_08B59854;
    }
L_08B59854:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08B59890;
      }
      goto L_08B5985C;
    }
L_08B5985C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08B59890;
      }
      goto L_08B59864;
    }
L_08B59864:
    ctx.gpr[4] = (32752u << 16u);
    goto L_08B59868;
L_08B59868:
    ctx.gpr[4] = (ctx.gpr[21] & ctx.gpr[4]);
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B59D3C;
      }
      goto L_08B59890;
    }
L_08B59890:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08B59D40;
    }
    goto L_08B59898;
L_08B59898:
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08B598D4;
    }
    goto L_08B598A0;
L_08B598A0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B598B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 873u, 0x08B5FF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B598B4u) goto L_08B598B4;
    return;
L_08B598B4:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B598C8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B598C8u) goto L_08B598C8;
    return;
L_08B598C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B59D3C;
      }
      goto L_08B598D4;
    }
L_08B598D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16444)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16440)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B598F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 873u, 0x08B5FF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B598F0u) goto L_08B598F0;
    return;
L_08B598F0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59904u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B59904u) goto L_08B59904;
    return;
L_08B59904:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B59920u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B59920u) goto L_08B59920;
    return;
L_08B59920:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59544;
      }
      goto L_08B59928;
    }
L_08B59928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08B59D40;
      }
      goto L_08B59930;
    }
L_08B59930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08B5993Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 29u, 0x08B6026Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5993Cu) goto L_08B5993C;
    return;
L_08B5993C:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16452)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16448)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5995Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5995Cu) goto L_08B5995C;
    return;
L_08B5995C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.gpr[5] = (32752u << 16u);
      if (branch_taken) {
          goto L_08B59A40;
      }
      goto L_08B59964;
    }
L_08B59964:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59984;
      }
      goto L_08B5996C;
    }
L_08B5996C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16460)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16456)));
    ctx.gpr[20] = (ctx.gpr[21] & ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B59A90;
      }
      goto L_08B59984;
    }
L_08B59984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08B599A8;
      }
      goto L_08B59990;
    }
L_08B59990:
    ctx.gpr[6] = (16u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[21] & ctx.gpr[6]);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (2234u << 16u);
        goto L_08B599D8;
    }
    goto L_08B599A4;
L_08B599A4:
    ctx.gpr[6] = (0u | 1u);
    goto L_08B599A8;
L_08B599A8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B599BC;
      }
      goto L_08B599B0;
    }
L_08B599B0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59544;
      }
      goto L_08B599B8;
    }
L_08B599B8:
    ctx.gpr[4] = (2234u << 16u);
    goto L_08B599BC;
L_08B599BC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16460)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16456)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16468)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16464)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[21] & ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B59A90;
      }
      goto L_08B599D8;
    }
L_08B599D8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16460)));
    ctx.gpr[20] = (32752u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16456)));
    ctx.gpr[20] = (ctx.gpr[21] & ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B599F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B599F4u) goto L_08B599F4;
    return;
L_08B599F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59A0C;
      }
      goto L_08B599FC;
    }
L_08B599FC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16476)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16472)));
      if (branch_taken) {
          goto L_08B59A28;
      }
      goto L_08B59A0C;
    }
L_08B59A0C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16476)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16472)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B59A20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B59A20u) goto L_08B59A20;
    return;
L_08B59A20:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08B59A28;
L_08B59A28:
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B59A34u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 510u, 0x08B62778u>(ctx, &aot_mem) && ctx.pc == 0x08B59A34u) goto L_08B59A34;
    return;
L_08B59A34:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B59A90;
      }
      goto L_08B59A40;
    }
L_08B59A40:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16476)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16472)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B59A58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B59A58u) goto L_08B59A58;
    return;
L_08B59A58:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (32752u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[20] = (ctx.gpr[21] & ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B59A88;
      }
      goto L_08B59A74;
    }
L_08B59A74:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B59A80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 510u, 0x08B62778u>(ctx, &aot_mem) && ctx.pc == 0x08B59A80u) goto L_08B59A80;
    return;
L_08B59A80:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08B59A88;
L_08B59A88:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08B59A90;
L_08B59A90:
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (32736u << 16u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    ctx.gpr[4] = (832u << 16u);
      if (branch_taken) {
          goto L_08B59B6C;
      }
      goto L_08B59AA0;
    }
L_08B59AA0:
    ctx.gpr[4] = (848u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B59AD0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 873u, 0x08B5FF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B59AD0u) goto L_08B59AD0;
    return;
L_08B59AD0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59AE4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B59AE4u) goto L_08B59AE4;
    return;
L_08B59AE4:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59AF8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B59AF8u) goto L_08B59AF8;
    return;
L_08B59AF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (32752u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] & ctx.gpr[4]);
    ctx.gpr[5] = (31904u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (848u << 16u);
      if (branch_taken) {
          goto L_08B59B58;
      }
      goto L_08B59B1C;
    }
L_08B59B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (32752u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (32752u << 16u);
      if (branch_taken) {
          goto L_08B59B44;
      }
      goto L_08B59B30;
    }
L_08B59B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08B592F0;
    }
    goto L_08B59B40;
L_08B59B40:
    ctx.gpr[5] = (32752u << 16u);
    goto L_08B59B44;
L_08B59B44:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B59CEC;
      }
      goto L_08B59B58;
    }
L_08B59B58:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (32752u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B59C2C;
      }
      goto L_08B59B6C;
    }
L_08B59B6C:
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59BDC;
      }
      goto L_08B59B78;
    }
L_08B59B78:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16460)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16456)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B59B8Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B59B8Cu) goto L_08B59B8C;
    return;
L_08B59B8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59BDC;
      }
      goto L_08B59B94;
    }
L_08B59B94:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16476)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16472)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B59BA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B59BA8u) goto L_08B59BA8;
    return;
L_08B59BA8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59BB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 496u, 0x08B626A4u>(ctx, &aot_mem) && ctx.pc == 0x08B59BB4u) goto L_08B59BB4;
    return;
L_08B59BB4:
    ctx.gpr[31] = (0x08B59BBCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem) && ctx.pc == 0x08B59BBCu) goto L_08B59BBC;
    return;
L_08B59BBC:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B59BDC;
      }
      goto L_08B59BC8;
    }
L_08B59BC8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B59BD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 510u, 0x08B62778u>(ctx, &aot_mem) && ctx.pc == 0x08B59BD4u) goto L_08B59BD4;
    return;
L_08B59BD4:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08B59BDC;
L_08B59BDC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B59BF0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 873u, 0x08B5FF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B59BF0u) goto L_08B59BF0;
    return;
L_08B59BF0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59C04u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B59C04u) goto L_08B59C04;
    return;
L_08B59C04:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59C18u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B59C18u) goto L_08B59C18;
    return;
L_08B59C18:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (32752u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] & ctx.gpr[4]);
    goto L_08B59C2C;
L_08B59C2C:
    if (ctx.gpr[22] != ctx.gpr[4]) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08B59CF0;
    }
    goto L_08B59C34;
L_08B59C34:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B59C40u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 496u, 0x08B626A4u>(ctx, &aot_mem) && ctx.pc == 0x08B59C40u) goto L_08B59C40;
    return;
L_08B59C40:
    ctx.gpr[31] = (0x08B59C48u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem) && ctx.pc == 0x08B59C48u) goto L_08B59C48;
    return;
L_08B59C48:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B59C5Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B59C5Cu) goto L_08B59C5C;
    return;
L_08B59C5C:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B59C88;
      }
      goto L_08B59C68;
    }
L_08B59C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59C8C;
      }
      goto L_08B59C74;
    }
L_08B59C74:
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[21] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59CD0;
      }
      goto L_08B59C88;
    }
L_08B59C88:
    ctx.gpr[4] = (2234u << 16u);
    goto L_08B59C8C;
L_08B59C8C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16484)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16480)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B59CA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B59CA0u) goto L_08B59CA0;
    return;
L_08B59CA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59D3C;
      }
      goto L_08B59CA8;
    }
L_08B59CA8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16492)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16488)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B59CBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B59CBCu) goto L_08B59CBC;
    return;
L_08B59CBC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08B59D40;
    }
    goto L_08B59CC4;
L_08B59CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08B59CF0;
      }
      goto L_08B59CCC;
    }
L_08B59CCC:
    ctx.gpr[4] = (2234u << 16u);
    goto L_08B59CD0;
L_08B59CD0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16500)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16496)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B59CE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B59CE4u) goto L_08B59CE4;
    return;
L_08B59CE4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08B59D40;
    }
    goto L_08B59CEC;
L_08B59CEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08B59CF0;
L_08B59CF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08B59CFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem) && ctx.pc == 0x08B59CFCu) goto L_08B59CFC;
    return;
L_08B59CFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08B59D08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem) && ctx.pc == 0x08B59D08u) goto L_08B59D08;
    return;
L_08B59D08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08B59D14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem) && ctx.pc == 0x08B59D14u) goto L_08B59D14;
    return;
L_08B59D14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08B59D20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem) && ctx.pc == 0x08B59D20u) goto L_08B59D20;
    return;
L_08B59D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B595C0;
      }
      goto L_08B59D3C;
    }
L_08B59D3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08B59D40;
L_08B59D40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08B59D4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem) && ctx.pc == 0x08B59D4Cu) goto L_08B59D4C;
    return;
L_08B59D4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08B59D58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem) && ctx.pc == 0x08B59D58u) goto L_08B59D58;
    return;
L_08B59D58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08B59D64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem) && ctx.pc == 0x08B59D64u) goto L_08B59D64;
    return;
L_08B59D64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08B59D70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem) && ctx.pc == 0x08B59D70u) goto L_08B59D70;
    return;
L_08B59D70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08B59D7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem) && ctx.pc == 0x08B59D7Cu) goto L_08B59D7C;
    return;
L_08B59D7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    goto L_08B59D80;
L_08B59D80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
        goto L_08B59D90;
    }
    goto L_08B59D90;
L_08B59D90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
        goto L_08B59DAC;
    }
    goto L_08B59D9C;
L_08B59D9C:
    ctx.gpr[31] = (0x08B59DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 510u, 0x08B62778u>(ctx, &aot_mem) && ctx.pc == 0x08B59DA4u) goto L_08B59DA4;
    return;
L_08B59DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B59DB0;
      }
      goto L_08B59DAC;
    }
L_08B59DAC:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_08B59DB0;
L_08B59DB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B59DE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B59DFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    goto L_08B58CC4;
L_08B59DFC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B59E08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B59E20u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(92));
    goto L_08B59E2C;
L_08B59E20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B59E2C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B59E40;
      }
      goto L_08B59E34;
    }
L_08B59E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B59E48;
      }
      goto L_08B59E40;
    }
L_08B59E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B59E50;
      }
      goto L_08B59E48;
    }
L_08B59E48:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B59E50:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B59E80;
      }
      goto L_08B59E68;
    }
L_08B59E68:
    if (ctx.gpr[11] == ctx.gpr[9]) {
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08B59E50;
    }
    goto L_08B59E70;
L_08B59E70:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B59E68;
      }
      goto L_08B59E80;
    }
L_08B59E80:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[2] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B59E90;
      }
      goto L_08B59E88;
    }
L_08B59E88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B59E9C;
      }
      goto L_08B59E90;
    }
L_08B59E90:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B59E9C:
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    goto L_08B59EB0;
L_08B59EB0:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B59ED4;
      }
      goto L_08B59EB8;
    }
L_08B59EB8:
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
        goto L_08B59ECC;
    }
    goto L_08B59EC0;
L_08B59EC0:
    ctx.gpr[4] = (0u | 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B59ECC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B59ED4:
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
        goto L_08B59EB0;
    }
    goto L_08B59EDC;
L_08B59EDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B59E9C;
      }
      goto L_08B59EE4;
    }
L_08B59EE4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B59F3C;
      }
      goto L_08B59EF0;
    }
L_08B59EF0:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(14520));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08B59F00;
L_08B59F00:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 2u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B59F2C;
      }
      goto L_08B59F10;
    }
L_08B59F10:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 2u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B59F28;
      }
      goto L_08B59F20;
    }
L_08B59F20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_08B59F28;
      }
      goto L_08B59F28;
    }
L_08B59F28:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B59F2C;
L_08B59F2C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B59F00;
      }
      goto L_08B59F3C;
    }
L_08B59F3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B59F44:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B59F4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B59FA0;
      }
      goto L_08B59F54;
    }
L_08B59F54:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 53 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B59FA0;
      }
      goto L_08B59F68;
    }
L_08B59F68:
    ctx.gpr[9] = (0u | 48u);
    ctx.gpr[6] = (0u | 57u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[10]);
    goto L_08B59F74;
L_08B59F74:
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) <= 0;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B59F94;
      }
      goto L_08B59F8C;
    }
L_08B59F8C:
    if (ctx.gpr[7] == ctx.gpr[6]) {
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[10]);
        goto L_08B59F74;
    }
    goto L_08B59F94;
L_08B59F94:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B59FA8;
      }
      goto L_08B59F9C;
    }
L_08B59F9C:
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B59FA0;
L_08B59FA0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B59FA8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B59FB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B59FD0;
      }
      goto L_08B59FBC;
    }
L_08B59FBC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08B59FC0;
L_08B59FC0:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_08B59FC0;
    }
    goto L_08B59FD0;
L_08B59FD0:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5A014;
      }
      goto L_08B59FE8;
    }
L_08B59FE8:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_08B59FE8;
      }
      goto L_08B5A014;
    }
L_08B5A014:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5A01C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B5A044;
      }
      goto L_08B5A030;
    }
L_08B5A030:
    ctx.gpr[8] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B5A044;
      }
      goto L_08B5A03C;
    }
L_08B5A03C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5A044;
      }
      goto L_08B5A044;
    }
L_08B5A044:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16504));
    goto L_08B5A050;
L_08B5A050:
    { const std::uint32_t dividend = ctx.gpr[9]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[9]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[9] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B5A050;
      }
      goto L_08B5A084;
    }
L_08B5A084:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5A0A0;
      }
      goto L_08B5A08C;
    }
L_08B5A08C:
    ctx.gpr[4] = (0u | 45u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[5]);
    goto L_08B5A0A0;
L_08B5A0A0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08B5A0ACu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B59FB0;
L_08B5A0AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5A0B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[7] << 24u);
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (16u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (ctx.gpr[7] >> 20u);
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[12] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[11] & 2048u);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[11] = (ctx.gpr[11] & 2047u);
    ctx.gpr[2] = (0u | 2047u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(16640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[2];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08B5A19C;
      }
      goto L_08B5A13C;
    }
L_08B5A13C:
    ctx.gpr[4] = (ctx.gpr[7] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B5A184;
      }
      goto L_08B5A148;
    }
L_08B5A148:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B5A16C;
      }
      goto L_08B5A150;
    }
L_08B5A150:
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5A164u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26536));
    goto L_08B5831C;
L_08B5A164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5A7E4;
      }
      goto L_08B5A16C;
    }
L_08B5A16C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5A17Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26528));
    goto L_08B5831C;
L_08B5A17C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5A7E4;
      }
      goto L_08B5A184;
    }
L_08B5A184:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5A194u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26524));
    goto L_08B5831C;
L_08B5A194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5A7E4;
      }
      goto L_08B5A19C;
    }
L_08B5A19C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[12]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16548)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16544)));
    ctx.gpr[20] = (ctx.gpr[12] | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A1C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5A1C0u) goto L_08B5A1C0;
    return;
L_08B5A1C0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
        goto L_08B5A204;
    }
    goto L_08B5A1C8;
L_08B5A1C8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 45u);
      if (branch_taken) {
          goto L_08B5A1DC;
      }
      goto L_08B5A1D0;
    }
L_08B5A1D0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B5A1E8;
      }
      goto L_08B5A1DC;
    }
L_08B5A1DC:
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16640), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08B5A1E8;
L_08B5A1E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A1F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 510u, 0x08B62778u>(ctx, &aot_mem) && ctx.pc == 0x08B5A1F8u) goto L_08B5A1F8;
    return;
L_08B5A1F8:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B5A208;
      }
      goto L_08B5A204;
    }
L_08B5A204:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    goto L_08B5A208;
L_08B5A208:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16556)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16552)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A220u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5A220u) goto L_08B5A220;
    return;
L_08B5A220:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B5A354;
      }
      goto L_08B5A228;
    }
L_08B5A228:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A234u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 481u, 0x08B5DFFCu>(ctx, &aot_mem) && ctx.pc == 0x08B5A234u) goto L_08B5A234;
    return;
L_08B5A234:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5A250u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5A250u) goto L_08B5A250;
    return;
L_08B5A250:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08B5A25C;
L_08B5A25C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 163 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5A30C;
      }
      goto L_08B5A268;
    }
L_08B5A268:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16564)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16560)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A290u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 515u, 0x08B5E254u>(ctx, &aot_mem) && ctx.pc == 0x08B5A290u) goto L_08B5A290;
    return;
L_08B5A290:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5A29Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 496u, 0x08B626A4u>(ctx, &aot_mem) && ctx.pc == 0x08B5A29Cu) goto L_08B5A29C;
    return;
L_08B5A29C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08B5A2B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem) && ctx.pc == 0x08B5A2B4u) goto L_08B5A2B4;
    return;
L_08B5A2B4:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5A2C8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5A2C8u) goto L_08B5A2C8;
    return;
L_08B5A2C8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5A2DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem) && ctx.pc == 0x08B5A2DCu) goto L_08B5A2DC;
    return;
L_08B5A2DC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16556)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16552)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5A2FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5A2FCu) goto L_08B5A2FC;
    return;
L_08B5A2FC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08B5A25C;
      }
      goto L_08B5A308;
    }
L_08B5A308:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    goto L_08B5A30C;
L_08B5A30C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5A354;
      }
      goto L_08B5A320;
    }
L_08B5A320:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08B5A324;
L_08B5A324:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08B5A324;
    }
    goto L_08B5A354;
L_08B5A354:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08B5A45C;
      }
      goto L_08B5A35C;
    }
L_08B5A35C:
    ctx.gpr[4] = (0u | 102u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5A448;
      }
      goto L_08B5A368;
    }
L_08B5A368:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16548)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16544)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A37Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5A37Cu) goto L_08B5A37C;
    return;
L_08B5A37C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5A408;
      }
      goto L_08B5A384;
    }
L_08B5A384:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16564)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16560)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5A3A4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5A3A4u) goto L_08B5A3A4;
    return;
L_08B5A3A4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08B5A3B0;
L_08B5A3B0:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16556)));
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B5A3C8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16552)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5A3C8u) goto L_08B5A3C8;
    return;
L_08B5A3C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5A400;
      }
      goto L_08B5A3D0;
    }
L_08B5A3D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < -1020 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5A400;
      }
      goto L_08B5A3DC;
    }
L_08B5A3DC:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5A3F4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5A3F4u) goto L_08B5A3F4;
    return;
L_08B5A3F4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B5A3B0;
      }
      goto L_08B5A400;
    }
L_08B5A400:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2234u << 16u);
    goto L_08B5A408;
L_08B5A408:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16556)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16552)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A41Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5A41Cu) goto L_08B5A41C;
    return;
L_08B5A41C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5A45C;
      }
      goto L_08B5A424;
    }
L_08B5A424:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16564)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16560)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A43Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem) && ctx.pc == 0x08B5A43Cu) goto L_08B5A43C;
    return;
L_08B5A43C:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B5A45C;
      }
      goto L_08B5A448;
    }
L_08B5A448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B5A45C;
L_08B5A45C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16564)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16560)));
    ctx.gpr[30] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A47Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5A47Cu) goto L_08B5A47C;
    return;
L_08B5A47C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B5A4B0;
      }
      goto L_08B5A48C;
    }
L_08B5A48C:
    ctx.gpr[5] = (0u | 102u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08B5A4AC;
      }
      goto L_08B5A498;
    }
L_08B5A498:
    ctx.gpr[30] = (0u | 1u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_08B5A4A4;
    }
    goto L_08B5A4A4;
L_08B5A4A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[20] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_08B5A4B0;
      }
      goto L_08B5A4AC;
    }
L_08B5A4AC:
    ctx.gpr[30] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08B5A4B0;
L_08B5A4B0:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16572)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16568)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16564)));
    ctx.gpr[31] = (0x08B5A4D0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16560)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5A4D0u) goto L_08B5A4D0;
    return;
L_08B5A4D0:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_08B5A4E4;
L_08B5A4E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5A500u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 496u, 0x08B626A4u>(ctx, &aot_mem) && ctx.pc == 0x08B5A500u) goto L_08B5A500;
    return;
L_08B5A500:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B5A50Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem) && ctx.pc == 0x08B5A50Cu) goto L_08B5A50C;
    return;
L_08B5A50C:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5A520u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5A520u) goto L_08B5A520;
    return;
L_08B5A520:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B5A5EC;
      }
      goto L_08B5A53C;
    }
L_08B5A53C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A550u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5A550u) goto L_08B5A550;
    return;
L_08B5A550:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5A5F0;
      }
      goto L_08B5A558;
    }
L_08B5A558:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16556)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16552)));
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5A570u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5A570u) goto L_08B5A570;
    return;
L_08B5A570:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5A584u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5A584u) goto L_08B5A584;
    return;
L_08B5A584:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5A5F0;
      }
      goto L_08B5A58C;
    }
L_08B5A58C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16564)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16560)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5A5C0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5A5C0u) goto L_08B5A5C0;
    return;
L_08B5A5C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5A5DCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5A5DCu) goto L_08B5A5DC;
    return;
L_08B5A5DC:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5A4E4;
      }
      goto L_08B5A5EC;
    }
L_08B5A5EC:
    ctx.gpr[4] = (2234u << 16u);
    goto L_08B5A5F0;
L_08B5A5F0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16580)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16576)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A604u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5A604u) goto L_08B5A604;
    return;
L_08B5A604:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[21] = (0u | 102u);
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
        goto L_08B5A61C;
    }
    goto L_08B5A61C;
L_08B5A61C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 48u);
      if (branch_taken) {
          goto L_08B5A660;
      }
      goto L_08B5A640;
    }
L_08B5A640:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[22]);
    goto L_08B5A648;
L_08B5A648:
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08B5A648;
      }
      goto L_08B5A660;
    }
L_08B5A660:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08B5A670u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08B59F4C;
L_08B5A670:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
        goto L_08B5A690;
    }
    goto L_08B5A678;
L_08B5A678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08B5A690;
L_08B5A690:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
        goto L_08B5A6E8;
    }
    goto L_08B5A698;
L_08B5A698:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[21];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08B5A6AC;
      }
      goto L_08B5A6A0;
    }
L_08B5A6A0:
    ctx.gpr[5] = (0u | 1u);
    if (static_cast<std::int32_t>(ctx.gpr[17]) > 0) {
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
        goto L_08B5A6AC;
    }
    goto L_08B5A6AC;
L_08B5A6AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B5A6D8;
      }
      goto L_08B5A6BC;
    }
L_08B5A6BC:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_08B5A6C0;
L_08B5A6C0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-1))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B5A6C0;
      }
      goto L_08B5A6D8;
    }
L_08B5A6D8:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B5A6E8;
      }
      goto L_08B5A6E8;
    }
L_08B5A6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B5A740;
      }
      goto L_08B5A6F4;
    }
L_08B5A6F4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (0u | 48u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[5] = (0u | 46u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    goto L_08B5A70C;
L_08B5A70C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5A72C;
      }
      goto L_08B5A714;
    }
L_08B5A714:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B5A72C;
      }
      goto L_08B5A71C;
    }
L_08B5A71C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B5A70C;
      }
      goto L_08B5A72C;
    }
L_08B5A72C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B5A740;
      }
      goto L_08B5A734;
    }
L_08B5A734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08B5A740;
L_08B5A740:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B5A7DC;
      }
      goto L_08B5A74C;
    }
L_08B5A74C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5A794;
      }
      goto L_08B5A760;
    }
L_08B5A760:
    ctx.gpr[6] = (0u | 43u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
        goto L_08B5A778;
    }
    goto L_08B5A778;
L_08B5A778:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 48u);
      if (branch_taken) {
          goto L_08B5A7C4;
      }
      goto L_08B5A784;
    }
L_08B5A784:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5A7C4;
      }
      goto L_08B5A794;
    }
L_08B5A794:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[6] = (0u | 45u);
      if (branch_taken) {
          goto L_08B5A7C4;
      }
      goto L_08B5A79C;
    }
L_08B5A79C:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < -9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5A7C0;
      }
      goto L_08B5A7B0;
    }
L_08B5A7B0:
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08B5A7C0;
L_08B5A7C0:
    ctx.gpr[17] = (0u - ctx.gpr[17]);
    goto L_08B5A7C4;
L_08B5A7C4:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5A7D4u);
    ctx.gpr[6] = (0u | 10u);
    goto L_08B5A01C;
L_08B5A7D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5A7E4;
      }
      goto L_08B5A7DC;
    }
L_08B5A7DC:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_08B5A7E4;
L_08B5A7E4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_08B5A818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B5A870;
      }
      goto L_08B5A850;
    }
L_08B5A850:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2236u << 16u);
      if (branch_taken) {
          goto L_08B5A91C;
      }
      goto L_08B5A860;
    }
L_08B5A860:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16804));
    ctx.gpr[20] = (2234u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5A8C0;
      }
      goto L_08B5A870;
    }
L_08B5A870:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (2234u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16804));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16584)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5A88Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 305u, 0x08B55164u>(ctx, &aot_mem) && ctx.pc == 0x08B5A88Cu) goto L_08B5A88C;
    return;
L_08B5A88C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16584), 0u);
    ctx.gpr[4] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16588), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5A8C0:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08B5A8C4;
L_08B5A8C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16588)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16588)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16584)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16588), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16584), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5A90C;
      }
      goto L_08B5A8F0;
    }
L_08B5A8F0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5A900u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 305u, 0x08B55164u>(ctx, &aot_mem) && ctx.pc == 0x08B5A900u) goto L_08B5A900;
    return;
L_08B5A900:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16588), ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16584), 0u);
      if (branch_taken) {
          goto L_08B5A948;
      }
      goto L_08B5A90C;
    }
L_08B5A90C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B5A8C4;
      }
      goto L_08B5A91C;
    }
L_08B5A91C:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5A948:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5A974:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B5AA3C;
      }
      goto L_08B5A998;
    }
L_08B5A998:
    ctx.gpr[10] = (0u | 37u);
    goto L_08B5A99C;
L_08B5A99C:
    if (ctx.gpr[8] != ctx.gpr[10]) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08B5AA30;
    }
    goto L_08B5A9A4;
L_08B5A9A4:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08B5AA30;
    }
    goto L_08B5A9B0;
L_08B5A9B0:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < 65 ? 1u : 0u);
    goto L_08B5A9BC;
L_08B5A9BC:
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-69));
        goto L_08B5A9E0;
    }
    goto L_08B5A9C4;
L_08B5A9C4:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-69));
      if (branch_taken) {
          goto L_08B5A9E0;
      }
      goto L_08B5A9D0;
    }
L_08B5A9D0:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5A9BC;
      }
      goto L_08B5A9E0;
    }
L_08B5A9E0:
    ctx.gpr[11] = (ctx.gpr[8] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08B5AA30;
    }
    goto L_08B5A9EC;
L_08B5A9EC:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26440)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5AA04:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08B5AA20u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    goto L_08B5AA64;
L_08B5AA20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5AA2C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08B5AA30;
L_08B5AA30:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5A99C;
      }
      goto L_08B5AA3C;
    }
L_08B5AA3C:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08B5AA58u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 57u, 0x08B5C42Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5AA58u) goto L_08B5AA58;
    return;
L_08B5AA58:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5AA64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5AAA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 472u, 0x08B5DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5AAA0u) goto L_08B5AAA0;
    return;
L_08B5AAA0:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), 0u);
    ctx.gpr[5] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16592));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16608));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26500));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26520));
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26492));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26472));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[4]);
    goto L_08B5AAF4;
L_08B5AAF4:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (0u | 37u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(392));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    ctx.gpr[22] = (2234u << 16u);
    ctx.gpr[30] = (2234u << 16u);
    goto L_08B5AB0C;
L_08B5AB0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(15532)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16752)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5AB24u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 953u, 0x08B578C8u>(ctx, &aot_mem) && ctx.pc == 0x08B5AB24u) goto L_08B5AB24;
    return;
L_08B5AB24:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[18] = (ctx.gpr[17] - ctx.gpr[19]);
        goto L_08B5AB48;
    }
    goto L_08B5AB30;
L_08B5AB30:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B5AB0C;
      }
      goto L_08B5AB3C;
    }
L_08B5AB3C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[17] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B5AB48;
      }
      goto L_08B5AB48;
    }
L_08B5AB48:
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5AC04;
      }
      goto L_08B5AB54;
    }
L_08B5AB54:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[6] & 512u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5ABC8;
    }
    goto L_08B5AB64;
L_08B5AB64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5ABA0;
      }
      goto L_08B5AB74;
    }
L_08B5AB74:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5AB84u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5AB84u) goto L_08B5AB84;
    return;
L_08B5AB84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5ABF8;
      }
      goto L_08B5ABA0;
    }
L_08B5ABA0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5ABB0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5ABB0u) goto L_08B5ABB0;
    return;
L_08B5ABB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5ABF8;
      }
      goto L_08B5ABC8;
    }
L_08B5ABC8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5ABE8;
      }
      goto L_08B5ABD0;
    }
L_08B5ABD0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5ABE8;
      }
      goto L_08B5ABD8;
    }
L_08B5ABD8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B5ABE8;
L_08B5ABE8:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5ABF8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5A818;
L_08B5ABF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    goto L_08B5AC04;
L_08B5AC04:
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 12u, 0x08B5C084u>(ctx, &aot_mem); return;
    }
    goto L_08B5AC0C;
L_08B5AC0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B5AC2C;
      }
      goto L_08B5AC18;
    }
L_08B5AC18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 12u, 0x08B5C084u>(ctx, &aot_mem); return;
    }
    goto L_08B5AC28;
L_08B5AC28:
    ctx.gpr[4] = (0u | 0u);
    goto L_08B5AC2C;
L_08B5AC2C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08B5AC48;
L_08B5AC48:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    goto L_08B5AC58;
L_08B5AC58:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5B790;
      }
      goto L_08B5AC60;
    }
L_08B5AC60:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26296)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5AC78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5AC84;
    }
L_08B5AC84:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5AC90;
    }
L_08B5AC90:
    ctx.gpr[21] = (ctx.gpr[21] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5AC9C;
    }
L_08B5AC9C:
    ctx.gpr[21] = (ctx.gpr[21] | 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5ACA8;
    }
L_08B5ACA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5ACC0;
    }
L_08B5ACC0:
    ctx.gpr[30] = (0u - ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[21] | 4u);
      if (branch_taken) {
          goto L_08B5ACD4;
      }
      goto L_08B5ACCC;
    }
L_08B5ACCC:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[21] | 4u);
    goto L_08B5ACD4;
L_08B5ACD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5ACDC;
    }
L_08B5ACDC:
    ctx.gpr[4] = (0u | 43u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5ACEC;
    }
L_08B5ACEC:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B5AD24;
      }
      goto L_08B5AD00;
    }
L_08B5AD00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08B5AD1C;
    }
    goto L_08B5AD1C;
L_08B5AD1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5AD24;
    }
L_08B5AD24:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08B5AD60;
      }
      goto L_08B5AD34;
    }
L_08B5AD34:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B5AD34;
      }
      goto L_08B5AD60;
    }
L_08B5AD60:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08B5AD70;
    }
    goto L_08B5AD70;
L_08B5AD70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5AC58;
      }
      goto L_08B5AD78;
    }
L_08B5AD78:
    ctx.gpr[21] = (ctx.gpr[21] | 128u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5AD84;
    }
L_08B5AD84:
    ctx.gpr[5] = (0u | 0u);
    goto L_08B5AD88;
L_08B5AD88:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B5AD88;
      }
      goto L_08B5ADB4;
    }
L_08B5ADB4:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5AC58;
      }
      goto L_08B5ADC4;
    }
L_08B5ADC4:
    ctx.gpr[21] = (ctx.gpr[21] | 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5ADD0;
    }
L_08B5ADD0:
    ctx.gpr[21] = (ctx.gpr[21] | 64u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5ADDC;
    }
L_08B5ADDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 108u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5ADFC;
      }
      goto L_08B5ADEC;
    }
L_08B5ADEC:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5ADFC;
    }
L_08B5ADFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] | 16u);
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5AE04;
    }
L_08B5AE04:
    ctx.gpr[21] = (ctx.gpr[21] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5AE10;
    }
L_08B5AE10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[21] & 132u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[21] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5B7B8;
      }
      goto L_08B5AE48;
    }
L_08B5AE48:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] | 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16668)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16664)));
      if (branch_taken) {
          goto L_08B5AE70;
      }
      goto L_08B5AE60;
    }
L_08B5AE60:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16668)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16664)));
    goto L_08B5AE70;
L_08B5AE70:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 16u);
      if (branch_taken) {
          goto L_08B5AE98;
      }
      goto L_08B5AE78;
    }
L_08B5AE78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5AEF8;
      }
      goto L_08B5AE98;
    }
L_08B5AE98:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 64u);
      if (branch_taken) {
          goto L_08B5AEB8;
      }
      goto L_08B5AEA0;
    }
L_08B5AEA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
      if (branch_taken) {
          goto L_08B5AEF0;
      }
      goto L_08B5AEB8;
    }
L_08B5AEB8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
        goto L_08B5AEDC;
    }
    goto L_08B5AEC0;
L_08B5AEC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
      if (branch_taken) {
          goto L_08B5AEE8;
      }
      goto L_08B5AEDC;
    }
L_08B5AEDC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    goto L_08B5AEE8;
L_08B5AEE8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08B5AEF0;
L_08B5AEF0:
    ctx.gpr[11] = (ctx.gpr[7] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    goto L_08B5AEF8;
L_08B5AEF8:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16628)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16624)));
    ctx.gpr[19] = (ctx.gpr[11] | 0u);
    ctx.gpr[18] = (ctx.gpr[10] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] ^ ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5AF40;
      }
      goto L_08B5AF2C;
    }
L_08B5AF2C:
    ctx.gpr[5] = (0u - ctx.gpr[11]);
    ctx.gpr[6] = (0u | 45u);
    ctx.gpr[18] = (0u - ctx.gpr[10]);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08B5AF40;
L_08B5AF40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08B5B4E0;
      }
      goto L_08B5AF48;
    }
L_08B5AF48:
    ctx.gpr[4] = (ctx.gpr[21] & 132u);
    ctx.gpr[5] = (ctx.gpr[21] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[21] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    if (ctx.gpr[22] == ctx.gpr[6]) {
    ctx.gpr[22] = (0u | 6u);
        goto L_08B5AF6C;
    }
    goto L_08B5AF6C;
L_08B5AF6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 103u);
    if (ctx.gpr[16] == ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[7]);
        goto L_08B5AFA8;
    }
    goto L_08B5AF94;
L_08B5AF94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[7]);
    ctx.gpr[4] = (0u | 71u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B5B0A4;
      }
      goto L_08B5AFA4;
    }
L_08B5AFA4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[7]);
    goto L_08B5AFA8;
L_08B5AFA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[6]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16548)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16544)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B5AFCCu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5AFCCu) goto L_08B5AFCC;
    return;
L_08B5AFCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5B028;
      }
      goto L_08B5AFD4;
    }
L_08B5AFD4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16548)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16544)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5AFF4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5AFF4u) goto L_08B5AFF4;
    return;
L_08B5AFF4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
        goto L_08B5B014;
    }
    goto L_08B5AFFC;
L_08B5AFFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[31] = (0x08B5B008u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 510u, 0x08B62778u>(ctx, &aot_mem) && ctx.pc == 0x08B5B008u) goto L_08B5B008;
    return;
L_08B5B008:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08B5B014;
L_08B5B014:
    ctx.gpr[31] = (0x08B5B01Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 674u, 0x08B5EF84u>(ctx, &aot_mem) && ctx.pc == 0x08B5B01Cu) goto L_08B5B01C;
    return;
L_08B5B01C:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B5B030;
      }
      goto L_08B5B028;
    }
L_08B5B028:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16556)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16552)));
    goto L_08B5B030;
L_08B5B030:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[6]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16636)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16632)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (0u | 102u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B5B05Cu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5B05Cu) goto L_08B5B05C;
    return;
L_08B5B05C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[5] = (0u | 69u);
      if (branch_taken) {
          goto L_08B5B08C;
      }
      goto L_08B5B064;
    }
L_08B5B064:
    ctx.gpr[31] = (0x08B5B06Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem) && ctx.pc == 0x08B5B06Cu) goto L_08B5B06C;
    return;
L_08B5B06C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5B080u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5B080u) goto L_08B5B080;
    return;
L_08B5B080:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
        goto L_08B5B0A0;
    }
    goto L_08B5B088;
L_08B5B088:
    ctx.gpr[5] = (0u | 69u);
    goto L_08B5B08C;
L_08B5B08C:
    ctx.gpr[4] = (0u | 103u);
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[5] = (0u | 101u);
        goto L_08B5B098;
    }
    goto L_08B5B098;
L_08B5B098:
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08B5B0A0;
L_08B5B0A0:
    ctx.gpr[18] = (0u | 1u);
    goto L_08B5B0A4;
L_08B5B0A4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[7] = (ctx.gpr[16] << 24u);
      if (branch_taken) {
          goto L_08B5B0BC;
      }
      goto L_08B5B0AC;
    }
L_08B5B0AC:
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[22] = (0u | 1u);
        goto L_08B5B0B4;
    }
    goto L_08B5B0B4;
L_08B5B0B4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[16] << 24u);
    goto L_08B5B0BC;
L_08B5B0BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08B5B0D8u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_08B5A0B8;
L_08B5B0D8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B5B0E4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08B58974;
L_08B5B0E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[21] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B5B7B8;
      }
      goto L_08B5B0F4;
    }
L_08B5B0F4:
    ctx.gpr[6] = (ctx.gpr[23] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08B5B108u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 15u, 0x08B5C0D8u>(ctx, &aot_mem) && ctx.pc == 0x08B5B108u) goto L_08B5B108;
    return;
L_08B5B108:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B5B7B8;
      }
      goto L_08B5B114;
    }
L_08B5B114:
    ctx.gpr[4] = (ctx.gpr[21] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
      if (branch_taken) {
          goto L_08B5B144;
      }
      goto L_08B5B120;
    }
L_08B5B120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B5AAF4;
      }
      goto L_08B5B144;
    }
L_08B5B144:
    ctx.gpr[4] = (ctx.gpr[21] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 64u);
      if (branch_taken) {
          goto L_08B5B168;
      }
      goto L_08B5B150;
    }
L_08B5B150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5AAF4;
      }
      goto L_08B5B168;
    }
L_08B5B168:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
        goto L_08B5B188;
    }
    goto L_08B5B170;
L_08B5B170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B5AAF4;
      }
      goto L_08B5B188;
    }
L_08B5B188:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5AAF4;
      }
      goto L_08B5B19C;
    }
L_08B5B19C:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] | 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16668)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16664)));
      if (branch_taken) {
          goto L_08B5B1C4;
      }
      goto L_08B5B1B4;
    }
L_08B5B1B4:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16668)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16664)));
    goto L_08B5B1C4;
L_08B5B1C4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 16u);
      if (branch_taken) {
          goto L_08B5B1EC;
      }
      goto L_08B5B1CC;
    }
L_08B5B1CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5B248;
      }
      goto L_08B5B1EC;
    }
L_08B5B1EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 64u);
      if (branch_taken) {
          goto L_08B5B20C;
      }
      goto L_08B5B1F4;
    }
L_08B5B1F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5B240;
      }
      goto L_08B5B20C;
    }
L_08B5B20C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
        goto L_08B5B22C;
    }
    goto L_08B5B214;
L_08B5B214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08B5B238;
      }
      goto L_08B5B22C;
    }
L_08B5B22C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    goto L_08B5B238;
L_08B5B238:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5B240;
L_08B5B240:
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    goto L_08B5B248;
L_08B5B248:
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08B5B4DC;
      }
      goto L_08B5B258;
    }
L_08B5B258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[6]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16668)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[21] = (ctx.gpr[21] | 2u);
    ctx.gpr[16] = (0u | 120u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16664)));
      if (branch_taken) {
          goto L_08B5B4DC;
      }
      goto L_08B5B290;
    }
L_08B5B290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (ctx.gpr[21] & 132u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
        goto L_08B5B2B8;
    }
    goto L_08B5B2B8;
L_08B5B2B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08B5B300;
      }
      goto L_08B5B2C0;
    }
L_08B5B2C0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08B5B2CCu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08B580BC;
L_08B5B2CC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
      if (branch_taken) {
          goto L_08B5B2F4;
      }
      goto L_08B5B2D8;
    }
L_08B5B2D8:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[23]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B5B314;
      }
      goto L_08B5B2E8;
    }
L_08B5B2E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08B5B314;
      }
      goto L_08B5B2F4;
    }
L_08B5B2F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08B5B314;
      }
      goto L_08B5B300;
    }
L_08B5B300:
    ctx.gpr[31] = (0x08B5B308u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08B58974;
L_08B5B308:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    goto L_08B5B314;
L_08B5B314:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B5B7B8;
      }
      goto L_08B5B320;
    }
L_08B5B320:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] | 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16668)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16664)));
      if (branch_taken) {
          goto L_08B5B350;
      }
      goto L_08B5B33C;
    }
L_08B5B33C:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16668)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16664)));
    goto L_08B5B350;
L_08B5B350:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 16u);
      if (branch_taken) {
          goto L_08B5B378;
      }
      goto L_08B5B358;
    }
L_08B5B358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5B3D4;
      }
      goto L_08B5B378;
    }
L_08B5B378:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 64u);
      if (branch_taken) {
          goto L_08B5B398;
      }
      goto L_08B5B380;
    }
L_08B5B380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5B3CC;
      }
      goto L_08B5B398;
    }
L_08B5B398:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
        goto L_08B5B3B8;
    }
    goto L_08B5B3A0;
L_08B5B3A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08B5B3C4;
      }
      goto L_08B5B3B8;
    }
L_08B5B3B8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    goto L_08B5B3C4;
L_08B5B3C4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5B3CC;
L_08B5B3CC:
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    goto L_08B5B3D4;
L_08B5B3D4:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B5B4DC;
      }
      goto L_08B5B3E8;
    }
L_08B5B3E8:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16668)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    ctx.gpr[9] = (ctx.gpr[21] & 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16664)));
      if (branch_taken) {
          goto L_08B5B41C;
      }
      goto L_08B5B404;
    }
L_08B5B404:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16668)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    ctx.gpr[9] = (ctx.gpr[21] & 1u);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16664)));
    goto L_08B5B41C;
L_08B5B41C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 16u);
      if (branch_taken) {
          goto L_08B5B444;
      }
      goto L_08B5B424;
    }
L_08B5B424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5B4A0;
      }
      goto L_08B5B444;
    }
L_08B5B444:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 64u);
      if (branch_taken) {
          goto L_08B5B464;
      }
      goto L_08B5B44C;
    }
L_08B5B44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5B498;
      }
      goto L_08B5B464;
    }
L_08B5B464:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
        goto L_08B5B484;
    }
    goto L_08B5B46C;
L_08B5B46C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08B5B490;
      }
      goto L_08B5B484;
    }
L_08B5B484:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    goto L_08B5B490;
L_08B5B490:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5B498;
L_08B5B498:
    ctx.gpr[3] = (ctx.gpr[7] | 0u);
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    goto L_08B5B4A0;
L_08B5B4A0:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08B5B4DC;
      }
      goto L_08B5B4B4;
    }
L_08B5B4B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16628)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16624)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B5B4D4;
      }
      goto L_08B5B4CC;
    }
L_08B5B4CC:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B5B4DC;
      }
      goto L_08B5B4D4;
    }
L_08B5B4D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    ctx.gpr[21] = (ctx.gpr[21] | 2u);
    goto L_08B5B4DC;
L_08B5B4DC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_08B5B4E0;
L_08B5B4E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[22]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16628)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16624)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
      if (branch_taken) {
          goto L_08B5B500;
      }
      goto L_08B5B4F8;
    }
L_08B5B4F8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[4]);
    goto L_08B5B500;
L_08B5B500:
    ctx.gpr[4] = (ctx.gpr[21] & 132u);
    ctx.gpr[8] = (ctx.gpr[21] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B5B528;
      }
      goto L_08B5B518;
    }
L_08B5B518:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B5B528;
      }
      goto L_08B5B520;
    }
L_08B5B520:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5B744;
      }
      goto L_08B5B528;
    }
L_08B5B528:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5B554;
      }
      goto L_08B5B530;
    }
L_08B5B530:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5B570;
      }
      goto L_08B5B538;
    }
L_08B5B538:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    ctx.gpr[31] = (0x08B5B548u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08B58974;
L_08B5B548:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B5B7B8;
      }
      goto L_08B5B554;
    }
L_08B5B554:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5B5FC;
      }
      goto L_08B5B55C;
    }
L_08B5B55C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5B538;
      }
      goto L_08B5B568;
    }
L_08B5B568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B5B70C;
      }
      goto L_08B5B570;
    }
L_08B5B570:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16652)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16648)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16644)));
    ctx.gpr[5] = (ctx.gpr[21] & 1u);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16640)));
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
    goto L_08B5B594;
L_08B5B594:
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[19] & ctx.gpr[15]);
    ctx.gpr[10] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[3]);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (ctx.gpr[19] << 29u);
    ctx.gpr[18] = (ctx.gpr[18] >> 3u);
    ctx.gpr[19] = (ctx.gpr[19] >> 3u);
    ctx.gpr[18] = (ctx.gpr[1] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B5B594;
      }
      goto L_08B5B5D0;
    }
L_08B5B5D0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[7];
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B5B594;
      }
      goto L_08B5B5D8;
    }
L_08B5B5D8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
      if (branch_taken) {
          goto L_08B5B744;
      }
      goto L_08B5B5E0;
    }
L_08B5B5E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 48u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08B5B748;
    }
    goto L_08B5B5F0;
L_08B5B5F0:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B5B744;
      }
      goto L_08B5B5FC;
    }
L_08B5B5FC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16660)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16656)));
    ctx.gpr[6] = (ctx.gpr[19] ^ ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[12]);
      if (branch_taken) {
          goto L_08B5B6D8;
      }
      goto L_08B5B628;
    }
L_08B5B628:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[19]);
    goto L_08B5B62C;
L_08B5B62C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[18]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16660)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5B668u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 269u, 0x08B6159Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5B668u) goto L_08B5B668;
    return;
L_08B5B668:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16652)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16648)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5B6A8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 199u, 0x08B61028u>(ctx, &aot_mem) && ctx.pc == 0x08B5B6A8u) goto L_08B5B6A8;
    return;
L_08B5B6A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] ^ ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[19]);
        goto L_08B5B62C;
    }
    goto L_08B5B6D8;
L_08B5B6D8:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16652)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16648)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
      if (branch_taken) {
          goto L_08B5B744;
      }
      goto L_08B5B70C;
    }
L_08B5B70C:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[19] & ctx.gpr[15]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (ctx.gpr[19] << 28u);
    ctx.gpr[18] = (ctx.gpr[18] >> 4u);
    ctx.gpr[19] = (ctx.gpr[19] >> 4u);
    ctx.gpr[18] = (ctx.gpr[1] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B5B70C;
      }
      goto L_08B5B73C;
    }
L_08B5B73C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[7];
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B5B70C;
      }
      goto L_08B5B744;
    }
L_08B5B744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    goto L_08B5B748;
L_08B5B748:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
      if (branch_taken) {
          goto L_08B5B784;
      }
      goto L_08B5B758;
    }
L_08B5B758:
    ctx.gpr[4] = (ctx.gpr[21] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[23]);
      if (branch_taken) {
          goto L_08B5B788;
      }
      goto L_08B5B764;
    }
L_08B5B764:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08B5B778u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 15u, 0x08B5C0D8u>(ctx, &aot_mem) && ctx.pc == 0x08B5B778u) goto L_08B5B778;
    return;
L_08B5B778:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B5B7B8;
      }
      goto L_08B5B784;
    }
L_08B5B784:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[23]);
    goto L_08B5B788;
L_08B5B788:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B5B7B8;
      }
      goto L_08B5B790;
    }
L_08B5B790:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 11u, 0x08B5C080u>(ctx, &aot_mem); return;
      }
      goto L_08B5B798;
    }
L_08B5B798:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[21] & 132u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[21] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    goto L_08B5B7B8;
L_08B5B7B8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
        goto L_08B5B7D8;
    }
    goto L_08B5B7D8;
L_08B5B7D8:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08B5B7E8;
      }
      goto L_08B5B7E0;
    }
L_08B5B7E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5B7F8;
      }
      goto L_08B5B7E8;
    }
L_08B5B7E8:
    ctx.gpr[4] = (ctx.gpr[21] & 2u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
        goto L_08B5B7FC;
    }
    goto L_08B5B7F4;
L_08B5B7F4:
    ctx.gpr[19] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    goto L_08B5B7F8;
L_08B5B7F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    goto L_08B5B7FC;
L_08B5B7FC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08B5B99C;
      }
      goto L_08B5B804;
    }
L_08B5B804:
    ctx.gpr[18] = (ctx.gpr[30] - ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5B998;
      }
      goto L_08B5B810;
    }
L_08B5B810:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5B8D4;
      }
      goto L_08B5B818;
    }
L_08B5B818:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5B894;
    }
    goto L_08B5B820;
L_08B5B820:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5B864;
      }
      goto L_08B5B830;
    }
L_08B5B830:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[31] = (0x08B5B840u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5B840u) goto L_08B5B840;
    return;
L_08B5B840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5B8C4;
      }
      goto L_08B5B864;
    }
L_08B5B864:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5B874u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5B874u) goto L_08B5B874;
    return;
L_08B5B874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5B8C4;
      }
      goto L_08B5B894;
    }
L_08B5B894:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5B8AC;
    }
    goto L_08B5B89C;
L_08B5B89C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08B5B8A8;
      }
      goto L_08B5B8A4;
    }
L_08B5B8A4:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08B5B8A8;
L_08B5B8A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08B5B8AC;
L_08B5B8AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08B5B8BCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5A818;
L_08B5B8BC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5B8C4;
L_08B5B8C4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5B818;
      }
      goto L_08B5B8D4;
    }
L_08B5B8D4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
      if (branch_taken) {
          goto L_08B5B958;
      }
      goto L_08B5B8DC;
    }
L_08B5B8DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5B924;
      }
      goto L_08B5B8EC;
    }
L_08B5B8EC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08B5B8FCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5B8FCu) goto L_08B5B8FC;
    return;
L_08B5B8FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08B5B998;
      }
      goto L_08B5B924;
    }
L_08B5B924:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5B934u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5B934u) goto L_08B5B934;
    return;
L_08B5B934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08B5B998;
      }
      goto L_08B5B958;
    }
L_08B5B958:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5B97C;
      }
      goto L_08B5B964;
    }
L_08B5B964:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5B97C;
      }
      goto L_08B5B96C;
    }
L_08B5B96C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B5B97C;
L_08B5B97C:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5B98Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5A818;
L_08B5B98C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5B998;
L_08B5B998:
    ctx.gpr[18] = (0u | 1u);
    goto L_08B5B99C;
L_08B5B99C:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B5BA5C;
      }
      goto L_08B5B9A8;
    }
L_08B5B9A8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BA24;
    }
    goto L_08B5B9B0;
L_08B5B9B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5B9F4;
      }
      goto L_08B5B9C0;
    }
L_08B5B9C0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B5B9D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5B9D0u) goto L_08B5B9D0;
    return;
L_08B5B9D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5BB20;
      }
      goto L_08B5B9F4;
    }
L_08B5B9F4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5BA04u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BA04u) goto L_08B5BA04;
    return;
L_08B5BA04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5BB20;
      }
      goto L_08B5BA24;
    }
L_08B5BA24:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5BA40;
      }
      goto L_08B5BA2C;
    }
L_08B5BA2C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5BA40;
      }
      goto L_08B5BA34;
    }
L_08B5BA34:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B5BA40;
L_08B5BA40:
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B5BA50u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5A818;
L_08B5BA50:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5BB20;
      }
      goto L_08B5BA5C;
    }
L_08B5BA5C:
    ctx.gpr[4] = (ctx.gpr[21] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 48u);
      if (branch_taken) {
          goto L_08B5BB20;
      }
      goto L_08B5BA68;
    }
L_08B5BA68:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(389), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08B5BAE8;
      }
      goto L_08B5BA74;
    }
L_08B5BA74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5BAB8;
      }
      goto L_08B5BA84;
    }
L_08B5BA84:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08B5BA94u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BA94u) goto L_08B5BA94;
    return;
L_08B5BA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5BB20;
      }
      goto L_08B5BAB8;
    }
L_08B5BAB8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5BAC8u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BAC8u) goto L_08B5BAC8;
    return;
L_08B5BAC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5BB20;
      }
      goto L_08B5BAE8;
    }
L_08B5BAE8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5BB08;
      }
      goto L_08B5BAF4;
    }
L_08B5BAF4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5BB08;
      }
      goto L_08B5BAFC;
    }
L_08B5BAFC:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B5BB08;
L_08B5BB08:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B5BB18u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5A818;
L_08B5BB18:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5BB20;
L_08B5BB20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[7] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[30] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B5BCAC;
      }
      goto L_08B5BB30;
    }
L_08B5BB30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5BCAC;
      }
      goto L_08B5BB38;
    }
L_08B5BB38:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5BBFC;
      }
      goto L_08B5BB40;
    }
L_08B5BB40:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BBBC;
    }
    goto L_08B5BB48;
L_08B5BB48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5BB8C;
      }
      goto L_08B5BB58;
    }
L_08B5BB58:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B5BB68u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BB68u) goto L_08B5BB68;
    return;
L_08B5BB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5BBEC;
      }
      goto L_08B5BB8C;
    }
L_08B5BB8C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5BB9Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BB9Cu) goto L_08B5BB9C;
    return;
L_08B5BB9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5BBEC;
      }
      goto L_08B5BBBC;
    }
L_08B5BBBC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BBD4;
    }
    goto L_08B5BBC4;
L_08B5BBC4:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BBD4;
    }
    goto L_08B5BBCC;
L_08B5BBCC:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08B5BBD4;
L_08B5BBD4:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08B5BBE4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5A818;
L_08B5BBE4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5BBEC;
L_08B5BBEC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5BB40;
      }
      goto L_08B5BBFC;
    }
L_08B5BBFC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BC78;
    }
    goto L_08B5BC04;
L_08B5BC04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5BC48;
      }
      goto L_08B5BC14;
    }
L_08B5BC14:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B5BC24u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BC24u) goto L_08B5BC24;
    return;
L_08B5BC24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5BCAC;
      }
      goto L_08B5BC48;
    }
L_08B5BC48:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5BC58u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BC58u) goto L_08B5BC58;
    return;
L_08B5BC58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5BCAC;
      }
      goto L_08B5BC78;
    }
L_08B5BC78:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5BC94;
      }
      goto L_08B5BC80;
    }
L_08B5BC80:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5BC94;
      }
      goto L_08B5BC88;
    }
L_08B5BC88:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B5BC94;
L_08B5BC94:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5BCA4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5A818;
L_08B5BCA4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5BCAC;
L_08B5BCAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5BE40;
      }
      goto L_08B5BCC0;
    }
L_08B5BCC0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5BD84;
      }
      goto L_08B5BCC8;
    }
L_08B5BCC8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BD44;
    }
    goto L_08B5BCD0;
L_08B5BCD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5BD14;
      }
      goto L_08B5BCE0;
    }
L_08B5BCE0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B5BCF0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BCF0u) goto L_08B5BCF0;
    return;
L_08B5BCF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5BD74;
      }
      goto L_08B5BD14;
    }
L_08B5BD14:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5BD24u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BD24u) goto L_08B5BD24;
    return;
L_08B5BD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5BD74;
      }
      goto L_08B5BD44;
    }
L_08B5BD44:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BD5C;
    }
    goto L_08B5BD4C;
L_08B5BD4C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BD5C;
    }
    goto L_08B5BD54;
L_08B5BD54:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08B5BD5C;
L_08B5BD5C:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08B5BD6Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5A818;
L_08B5BD6C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5BD74;
L_08B5BD74:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5BCC8;
      }
      goto L_08B5BD84;
    }
L_08B5BD84:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BE08;
    }
    goto L_08B5BD8C;
L_08B5BD8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5BDD4;
      }
      goto L_08B5BD9C;
    }
L_08B5BD9C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B5BDACu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BDACu) goto L_08B5BDAC;
    return;
L_08B5BDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B5BE40;
      }
      goto L_08B5BDD4;
    }
L_08B5BDD4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5BDE4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BDE4u) goto L_08B5BDE4;
    return;
L_08B5BDE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B5BE40;
      }
      goto L_08B5BE08;
    }
L_08B5BE08:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B5BE24;
      }
      goto L_08B5BE10;
    }
L_08B5BE10:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B5BE24;
      }
      goto L_08B5BE18;
    }
L_08B5BE18:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08B5BE24;
L_08B5BE24:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5BE34u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5A818;
L_08B5BE34:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5BE40;
L_08B5BE40:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BEB0;
    }
    goto L_08B5BE48;
L_08B5BE48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5BE88;
      }
      goto L_08B5BE58;
    }
L_08B5BE58:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08B5BE68u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BE68u) goto L_08B5BE68;
    return;
L_08B5BE68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5BEDC;
      }
      goto L_08B5BE88;
    }
L_08B5BE88:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5BE98u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BE98u) goto L_08B5BE98;
    return;
L_08B5BE98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5BEDC;
      }
      goto L_08B5BEB0;
    }
L_08B5BEB0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5BECC;
      }
      goto L_08B5BEB8;
    }
L_08B5BEB8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5BECC;
      }
      goto L_08B5BEC0;
    }
L_08B5BEC0:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B5BECC;
L_08B5BECC:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08B5BEDCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5A818;
L_08B5BEDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 9u, 0x08B5C064u>(ctx, &aot_mem); return;
      }
      goto L_08B5BEE8;
    }
L_08B5BEE8:
    ctx.gpr[16] = (ctx.gpr[30] - ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 9u, 0x08B5C064u>(ctx, &aot_mem); return;
      }
      goto L_08B5BEF4;
    }
L_08B5BEF4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08B5BFC8;
      }
      goto L_08B5BF0C;
    }
L_08B5BF0C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BF88;
    }
    goto L_08B5BF14;
L_08B5BF14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5BF58;
      }
      goto L_08B5BF24;
    }
L_08B5BF24:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5BF34u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BF34u) goto L_08B5BF34;
    return;
L_08B5BF34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5BFB8;
      }
      goto L_08B5BF58;
    }
L_08B5BF58:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5BF68u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BF68u) goto L_08B5BF68;
    return;
L_08B5BF68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5BFB8;
      }
      goto L_08B5BF88;
    }
L_08B5BF88:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BFA0;
    }
    goto L_08B5BF90;
L_08B5BF90:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BFA0;
    }
    goto L_08B5BF98;
L_08B5BF98:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08B5BFA0;
L_08B5BFA0:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08B5BFB0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5A818;
L_08B5BFB0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5BFB8;
L_08B5BFB8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5BF0C;
      }
      goto L_08B5BFC8;
    }
L_08B5BFC8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 4u, 0x08B5C034u>(ctx, &aot_mem); return;
    }
    goto L_08B5BFD0;
L_08B5BFD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 2u, 0x08B5C00Cu>(ctx, &aot_mem); return;
      }
      goto L_08B5BFE0;
    }
L_08B5BFE0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5BFF0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5BFF0u) goto L_08B5BFF0;
    return;
L_08B5BFF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.pc = 0x08B5C000u; return;
}

void recomp_unit_0213(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0213_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_213(Runtime &runtime) {
    runtime.register_generated_unit(213u, 0x08B58000u, 16384u, &recomp_unit_0213, &recomp_unit_0213_entry);
    runtime.register_function(0x08B58004u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5800Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58014u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5801Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58024u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5802Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5803Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58054u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5805Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58068u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58070u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58074u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5807Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58084u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58088u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58090u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58100u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58114u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58124u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5813Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58144u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5814Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58160u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58178u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58180u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58190u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58198u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58208u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58210u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58224u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58230u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58238u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58248u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58258u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58270u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5828Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58294u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58300u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58310u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5831Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5833Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58358u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58360u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5836Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58370u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5837Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58384u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58390u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58394u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B583A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B583A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B583C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B583D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B583ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58400u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58414u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58428u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5843Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58450u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58464u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58478u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5848Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58504u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58518u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5852Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58540u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58554u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58568u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5857Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58590u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58608u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5861Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58630u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58644u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58658u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5866Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58680u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58694u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5870Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58720u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58734u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58748u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5875Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58770u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58784u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58798u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B587ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B587C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B587D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B587E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B587FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58810u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58824u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58838u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5884Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58860u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58874u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58888u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5889Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B588B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B588C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B588D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B588ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58900u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58914u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58928u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5893Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58950u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58958u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58960u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58968u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58974u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58980u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58984u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58990u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58998u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B589A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B589B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B589C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B589D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B589DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B589E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B589F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B589F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A10u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A18u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A24u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A3Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A44u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A5Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A64u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A6Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A74u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A7Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A84u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A94u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A98u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58AB4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58ABCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58AD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58ADCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58AE4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58AF4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58AF8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B04u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B10u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B24u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B34u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B3Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B44u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B4Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B54u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B60u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B70u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B90u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B94u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58BA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58BB0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58BB4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58BCCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58BD4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58BE0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58BF8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C0Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C14u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C28u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C38u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C3Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C4Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C54u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C5Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C68u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C84u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C8Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C98u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58CA4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58CACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58CBCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58CC4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58D50u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58D5Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58D74u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58D78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58D88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58D90u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58D9Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58DA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58DACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58DBCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58DC0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58DCCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58DD8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58DDCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58DF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58DFCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58E08u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58E14u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58E2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58E34u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58E44u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58E58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58E5Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58E64u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58E78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58E80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58E98u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58E9Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58EA4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58EB0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58EC0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58ECCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58ED8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58EE4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58EF8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58EFCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F08u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F18u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F24u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F3Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F5Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F68u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F7Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F8Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F90u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F98u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58FA4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58FB4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58FBCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58FD4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58FE0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58FE8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58FF4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58FFCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59008u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59010u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59018u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59020u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59028u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59038u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5903Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59044u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5904Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59054u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59068u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59070u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59088u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59098u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B590A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B590A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B590B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B590B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B590BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B590C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B590D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B590D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B590E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B590F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B590F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59108u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59134u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59144u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59158u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59168u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59174u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5917Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59184u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59190u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B591C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B591D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B591E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59214u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59238u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59244u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5924Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59278u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59284u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59288u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59294u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B592A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B592D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B592DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B592E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B592ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B592F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59314u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5931Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59320u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59328u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59338u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59340u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5934Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59358u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59364u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59370u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59378u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59398u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B593BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B593C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B593E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B593E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B593F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59400u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59434u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5943Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59444u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59450u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59468u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59474u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59480u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5948Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59498u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B594A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B594BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B594DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B594E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B594FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59518u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59538u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59540u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59544u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59568u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59570u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59574u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5957Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59580u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59598u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B595C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B595CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B595ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59604u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59614u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59634u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59648u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59658u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59660u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59668u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5967Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59684u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5968Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59704u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59714u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59718u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59720u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5972Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59730u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59738u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59744u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59748u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59750u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5975Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59760u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59778u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59794u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B597A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B597ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B597B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B597D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B597E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B597F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B597F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59800u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59808u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5981Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5982Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59838u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59854u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5985Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59864u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59868u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59890u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59898u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B598A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B598B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B598C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B598D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B598F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59904u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59920u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59928u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59930u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5993Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5995Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59964u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5996Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59984u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59990u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A0Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A28u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A34u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A40u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A74u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A90u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59AA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59AD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59AE4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59AF8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B1Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B30u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B40u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B44u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B6Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B8Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B94u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59BA8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59BB4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59BBCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59BC8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59BD4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59BDCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59BF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59C04u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59C18u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59C2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59C34u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59C40u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59C48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59C5Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59C68u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59C74u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59C88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59C8Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59CA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59CA8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59CBCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59CC4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59CCCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59CD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59CE4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59CECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59CF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59CFCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D08u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D14u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D3Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D40u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D4Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D64u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D70u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D7Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D90u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D9Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59DA4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59DACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59DB0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59DE0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59DFCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E08u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E34u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E40u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E50u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E68u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E70u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E90u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E9Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59EB0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59EB8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59EC0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59ECCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59ED4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59EDCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59EE4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59EF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F10u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F28u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F3Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F44u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F4Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F54u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F68u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F74u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F8Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F94u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F9Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59FA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59FA8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59FB0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59FBCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59FC0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59FD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59FE8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A014u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A01Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A030u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A03Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A044u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A050u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A084u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A08Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A0A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A0ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A0B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A13Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A148u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A150u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A164u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A16Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A17Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A184u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A194u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A19Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A1C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A1C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A1D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A1DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A1E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A1F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A204u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A208u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A220u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A228u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A234u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A250u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A25Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A268u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A290u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A29Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A2B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A2C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A2DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A2FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A308u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A30Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A320u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A324u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A354u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A35Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A368u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A37Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A384u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A3A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A3B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A3C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A3D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A3DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A3F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A400u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A408u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A41Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A424u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A43Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A448u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A45Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A47Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A48Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A498u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A4A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A4ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A4B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A4D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A4E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A500u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A50Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A520u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A53Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A550u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A558u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A570u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A584u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A58Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A5C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A5DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A5ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A5F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A604u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A61Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A640u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A648u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A660u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A670u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A678u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A690u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A698u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A6A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A6ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A6BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A6C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A6D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A6E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A6F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A70Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A714u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A71Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A72Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A734u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A740u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A74Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A760u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A778u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A784u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A794u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A79Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A7B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A7C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A7C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A7D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A7DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A7E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A818u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A850u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A860u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A870u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A88Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A900u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A90Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A91Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A948u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A974u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A998u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A99Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA04u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA30u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA3Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA64u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAF4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB0Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB24u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB30u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB3Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB54u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB64u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB74u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB84u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABB0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABC8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABD8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABE8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABF8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC04u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC0Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC18u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC28u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC60u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC84u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC90u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC9Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACA8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACC0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACCCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACD4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACDCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD1Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD24u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD34u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD60u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD70u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD84u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ADB4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ADC4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ADD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ADDCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ADECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ADFCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AE04u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AE10u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AE48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AE60u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AE70u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AE78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AE98u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AEA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AEB8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AEC0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AEDCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AEE8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AEF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AEF8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AF2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AF40u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AF48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AF6Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AF94u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AFA4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AFA8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AFCCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AFD4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AFF4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AFFCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B008u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B014u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B01Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B028u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B030u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B05Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B064u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B06Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B080u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B088u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B08Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B098u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B0A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B0A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B0ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B0B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B0BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B0D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B0E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B0F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B108u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B114u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B120u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B144u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B150u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B168u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B170u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B188u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B19Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B1B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B1C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B1CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B1ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B1F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B20Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B214u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B22Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B238u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B240u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B248u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B258u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B290u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B2B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B2C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B2CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B2D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B2E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B2F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B300u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B308u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B314u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B320u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B33Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B350u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B358u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B378u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B380u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B398u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B3A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B3B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B3C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B3CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B3D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B3E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B404u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B41Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B424u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B444u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B44Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B464u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B46Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B484u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B490u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B498u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B4A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B4B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B4CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B4D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B4DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B4E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B4F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B500u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B518u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B520u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B528u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B530u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B538u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B548u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B554u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B55Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B568u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B570u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B594u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B5D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B5D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B5E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B5F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B5FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B628u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B62Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B668u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B6A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B6D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B70Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B73Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B744u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B748u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B758u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B764u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B778u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B784u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B788u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B790u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B798u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B7B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B7D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B7E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B7E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B7F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B7F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B7FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B804u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B810u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B818u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B820u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B830u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B840u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B864u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B874u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B894u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B89Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B8A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B8A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B8ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B8BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B8C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B8D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B8DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B8ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B8FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B924u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B934u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B958u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B964u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B96Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B97Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B98Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B998u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B99Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B9A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B9B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B9C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B9D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B9F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BA04u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BA24u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BA2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BA34u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BA40u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BA50u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BA5Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BA68u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BA74u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BA84u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BA94u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BAB8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BAC8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BAE8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BAF4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BAFCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BB08u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BB18u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BB20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BB30u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BB38u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BB40u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BB48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BB58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BB68u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BB8Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BB9Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BBBCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BBC4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BBCCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BBD4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BBE4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BBECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BBFCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BC04u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BC14u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BC24u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BC48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BC58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BC78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BC80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BC88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BC94u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BCA4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BCACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BCC0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BCC8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BCD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BCE0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BCF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BD14u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BD24u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BD44u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BD4Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BD54u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BD5Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BD6Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BD74u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BD84u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BD8Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BD9Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BDACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BDD4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BDE4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BE08u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BE10u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BE18u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BE24u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BE34u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BE40u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BE48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BE58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BE68u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BE88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BE98u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BEB0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BEB8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BEC0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BECCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BEDCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BEE8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BEF4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BF0Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BF14u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BF24u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BF34u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BF58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BF68u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BF88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BF90u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BF98u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BFA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BFB0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BFB8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BFC8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BFD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BFE0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BFF0u, &recomp_unit_0213, "recomp_unit_0213");
}
} // namespace psprecomp
