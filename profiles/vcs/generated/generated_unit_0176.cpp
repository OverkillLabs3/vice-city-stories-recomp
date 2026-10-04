#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0176[4094] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 12, 0, 13, 14, 0, 15,
    0, 0, 16, 0, 17, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0,
    28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0, 35, 0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0,
    40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0,
    52, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0,
    62, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 76, 0,
    77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 81, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 87, 0, 88,
    0, 0, 89, 0, 90, 91, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 94, 95, 0, 0, 96, 0, 0, 97, 0, 98, 0, 99, 100, 0, 101, 0,
    102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 107, 108, 109, 0, 110, 0, 0, 111, 0, 0, 112, 0, 113, 114, 0, 0, 0, 0, 0, 115, 116, 0, 0, 117, 0, 0, 0, 118, 0,
    0, 119, 0, 120, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127,
    0, 128, 0, 0, 129, 0, 130, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139,
    0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 145, 0, 146, 0, 0, 147, 0, 148, 149, 0, 0, 0, 0, 0, 150,
    0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0,
    0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 178, 0, 0, 0,
    179, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0, 187, 0, 188, 0, 189, 0, 0, 190, 0, 191, 192,
    0, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 201, 0, 202, 0,
    203, 0, 204, 0, 0, 205, 0, 206, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 211, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 215,
    0, 216, 0, 217, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 222, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 0,
    227, 0, 228, 0, 229, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 0, 237, 0, 238, 0, 0, 239, 0,
    240, 0, 241, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 246, 0, 0, 247, 0, 0, 0, 0, 248, 0, 249, 0, 0, 250, 0, 251, 0,
    0, 252, 0, 253, 0, 254, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0,
    263, 0, 0, 264, 0, 265, 0, 0, 266, 0, 267, 0, 268, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 272, 0, 273, 0, 0, 274, 0, 0, 0,
    0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 0, 279, 0, 280, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 286, 0, 0,
    287, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 294, 0,
    0, 295, 0, 0, 0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 304, 0, 305,
    0, 306, 0, 307, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0, 0, 316, 0, 317, 0, 318,
    0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 331, 0,
    0, 332, 0, 0, 0, 333, 0, 334, 0, 0, 335, 0, 336, 337, 0, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 344,
    0, 345, 0, 346, 0, 0, 347, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 0, 0, 0, 355, 0, 0, 356, 0, 357, 0,
    358, 0, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0,
    374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 396,
    0, 0, 0, 0, 397, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0,
    0, 0, 0, 0, 402, 0, 403, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 409, 0, 410,
    0, 0, 411, 0, 412, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0, 421, 422, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 425, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0,
    0, 0, 0, 0, 435, 0, 436, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 442, 0, 443,
    0, 0, 444, 0, 445, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 450, 0, 0, 451, 0,
    452, 0, 0, 0, 0, 0, 453, 454, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 460, 0,
    461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 465, 0, 0, 466, 0,
    0, 0, 0, 0, 0, 467, 0, 468, 0, 469, 0, 0, 0, 0, 470, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0,
    477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 480, 0, 481, 0, 482, 483, 0, 484, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0,
    0, 0, 0, 0, 0, 491, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 496, 0, 0, 0, 0,
    0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 503, 0, 504, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 509, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 524,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0,
    530, 0, 0, 0, 0, 531, 0, 532, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 537,
    0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 541, 0, 542, 0, 0, 543, 0, 544, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0,
    547, 0, 0, 0, 548, 549, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 552, 553, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 558, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0,
    0, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0, 566, 0, 567, 0, 0, 568, 0, 569, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0,
    572, 0, 0, 573, 0, 574, 575, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 580, 0, 581, 0, 582,
    583, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 588, 0, 589, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 599,
    600, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 613, 0,
    0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 618, 0, 619, 0, 0, 0, 620, 0, 621, 0,
    0, 622, 0, 623, 0, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0, 627, 0, 628, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0,
    0, 632, 0, 0, 633, 0, 634, 0, 0, 0, 635, 0, 636, 0, 0, 637, 0, 638, 0, 0, 0, 639, 0, 640, 0, 0, 641, 0, 0, 642, 0, 0,
    0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 645, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 649, 650, 0, 0, 0, 651, 0, 652,
    0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 657, 0, 0, 658, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0,
    660, 0, 661, 0, 0, 0, 662, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 666, 667, 0, 0, 0, 668, 0, 669, 0, 0, 0, 670, 0,
    0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 676, 0, 677, 0, 0, 678, 0,
    679, 680, 0, 681, 0, 682, 0, 683, 0, 0, 0, 684, 0, 0, 685, 0, 0, 686, 0, 687, 0, 688, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0,
    0, 691, 0, 692, 0, 693, 0, 0, 0, 694, 0, 0, 695, 0, 0, 696, 0, 697, 0, 698, 0, 0, 0, 699, 0, 700, 0, 0, 701, 0, 702, 0,
    0, 703, 0, 0, 704, 0, 0, 0, 705, 0, 706, 0, 0, 707, 0, 708, 0, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 712, 0, 713, 0, 0,
    0, 714, 0, 0, 715, 0, 716, 0, 0, 717, 0, 718, 0, 0, 719, 0, 0, 0, 720, 0, 0, 721, 0, 0, 722, 0, 723, 0, 724, 0, 0, 725,
    0, 726, 0, 0, 0, 727, 0, 728, 0, 729, 0, 0, 0, 730, 0, 0, 731, 0, 0, 732, 0, 733, 0, 734, 0, 0, 0, 735, 0, 0, 736, 0,
    0, 737, 0, 738, 0, 739, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 0, 742, 0, 743, 0, 0, 744, 0, 0, 0, 0, 745, 0, 746, 0, 0,
    0, 747, 0, 0, 0, 748, 0, 0, 749, 750, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 753, 0, 754, 0, 755, 0, 0, 0, 756, 0, 0, 757,
    0, 0, 758, 0, 759, 0, 760, 0, 0, 761, 0, 762, 0, 0, 0, 763, 0, 764, 0, 0, 0, 765, 0, 766, 0, 0, 0, 767, 0, 768, 0, 0,
    0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 772, 0, 0, 773, 0, 774, 0, 775, 0, 0, 776, 0, 777, 0,
    0, 0, 778, 0, 779, 0, 0, 0, 780, 0, 781, 0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 785, 0,
    0, 0, 786, 0, 0, 787, 0, 0, 788, 0, 789, 0, 790, 0, 0, 0, 0, 0, 791, 0, 792, 0, 0, 793, 0, 794, 0, 0, 795, 796, 0, 0,
    797, 0, 798, 0, 0, 799, 0, 800, 0, 0, 801, 802, 0, 803, 0, 0, 0, 804, 0, 0, 805, 0, 0, 806, 0, 807, 0, 808, 0, 0, 0, 0,
    809, 0, 0, 810, 0, 0, 811, 0, 812, 0, 813, 0, 0, 0, 814, 0, 0, 815, 0, 816, 0, 0, 817, 0, 818, 819, 0, 0, 0, 820, 0, 0,
    821, 0, 0, 822, 0, 823, 0, 824, 0, 0, 825, 0, 0, 826, 0, 827, 828, 0, 0, 829, 0, 0, 830, 0, 831, 832, 833, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 837, 0, 838, 0, 0, 0, 839, 0, 840, 0, 0, 841, 0, 0, 842, 0, 0, 843, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 846,
    0, 0, 0, 847, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 851, 0, 0, 852, 0, 0, 853, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 856, 0,
    0, 0, 0, 0, 857, 0, 0, 0, 0, 858, 859, 860, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 0, 0, 0, 0, 0, 863, 0,
    0, 864, 0, 0, 0, 0, 0, 865, 866, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 0, 869, 0, 0, 870, 0,
    0, 0, 0, 871, 0, 872, 0, 873, 874, 0, 0, 0, 0, 0, 0, 875, 0, 876, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 878, 0, 0, 0,
    0, 0, 879, 880, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0, 0, 883, 0, 0, 884, 0, 0, 0, 885, 0, 886,
    0, 887, 888, 0, 0, 0, 0, 0, 0, 889, 0, 890, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 892, 0, 0, 0, 0, 0, 893, 894, 0, 0,
    0, 0, 0, 895, 0, 0, 0, 0, 0, 896, 0, 897, 0, 898, 0, 0, 0, 0, 0, 0, 0, 0, 0, 899, 0, 0, 0, 0, 0, 900, 0, 0,
    0, 0, 0, 901, 0, 0, 0, 0, 0, 0, 902, 0, 0, 0, 0, 0, 903, 0, 904, 0, 905, 0, 0, 0, 0, 906, 0, 907, 0, 908, 0, 0,
    0, 0, 0, 0, 0, 0, 909, 0, 0, 0, 0, 0, 0, 0, 0, 910, 0, 0, 0, 0, 0, 0, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 912, 0, 0, 913, 0, 0, 0, 0, 914, 0, 0, 0, 915, 0, 0, 0, 0, 0, 0, 916, 0, 0, 0, 0, 0, 0, 917, 0,
    0, 0, 0, 0, 918, 0, 0, 0, 919, 0, 0, 0, 0, 0, 0, 920, 0, 921, 0, 922, 0, 923, 0, 0, 0, 0, 0, 0, 924, 0, 925, 0,
    0, 0, 0, 0, 0, 0, 0, 926, 0, 0, 0, 0, 927, 0, 0, 0, 928, 0, 0, 0, 0, 0, 0, 929, 0, 930, 0, 931, 0, 0, 0, 932,
    0, 0, 0, 933, 0, 934, 0, 935, 0, 0, 936, 0, 0, 0, 0, 937, 0, 0, 0, 0, 938, 0, 0, 0, 0, 939, 0, 0, 0, 940, 0, 0,
    0, 0, 0, 0, 0, 941, 0, 0, 0, 942, 0, 943, 0, 944, 0, 945, 0, 946, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 947, 0, 0, 0,
    0, 948, 0, 0, 949, 0, 0, 0, 950, 0, 0, 0, 951, 0, 0, 0, 0, 0, 0, 0, 0, 952, 0, 0, 0, 0, 953, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 954, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 955, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 956, 0, 957, 0, 958, 0, 959, 0, 960, 0, 961, 0, 962, 0, 963, 0, 964, 0, 965, 0,
    966, 0, 967, 0, 0, 0, 968, 0, 0, 0, 969, 0, 970, 0, 0, 0, 0, 0, 0, 971, 0, 972, 0, 973, 0, 0, 0, 974, 0, 0, 975, 976,
    0, 977, 0, 978, 0, 979, 0, 0, 0, 0, 0, 0, 0, 0, 980, 0, 0, 0, 981, 0, 982, 0, 983, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 984, 0, 0, 985, 0, 0, 986, 0, 987, 0, 988, 0, 989, 0, 0, 990, 0, 991, 0, 992, 0, 993, 0, 0, 0, 994,
    0, 995, 0, 996, 0, 997, 0, 998, 0, 0, 999, 0, 0, 0, 0, 0, 0, 1000, 0, 1001, 0, 1002, 0, 0, 1003, 0, 1004, 1005, 0, 1006, 0, 0,
    0, 1007, 0, 1008, 0, 0, 0, 0, 0, 0, 0, 1009, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1010, 0, 0, 1011, 0, 1012, 0, 1013, 0,
    1014, 0, 1015, 0, 1016, 0, 1017, 0, 0, 0, 0, 0, 1018, 1019, 0, 0, 0, 0, 0, 0, 1020, 0, 1021, 0, 1022, 0, 0, 0, 0, 0, 1023, 0,
    1024, 0, 0, 1025, 0, 0, 1026, 0, 0, 1027, 0, 0, 0, 0, 1028, 0, 0, 0, 1029, 0, 0, 1030, 0, 0, 1031, 0, 0, 1032, 0, 0, 1033, 0,
    0, 0, 0, 0, 0, 1034, 0, 0, 0, 0, 1035, 0, 1036, 1037, 0, 0, 0, 1038, 0, 0, 0, 1039, 0, 1040, 0, 1041, 0, 0, 0, 0, 0, 1042,
    0, 0, 0, 1043, 0, 1044, 0, 1045, 0, 0, 0, 1046, 0, 0, 1047, 0, 1048, 0, 1049, 0, 0, 1050, 0, 1051, 0, 0, 1052, 0, 0, 0, 0, 1053,
    0, 0, 0, 1054, 0, 0, 1055, 0, 0, 1056, 0, 0, 1057, 0, 1058, 0, 1059, 0, 1060, 0, 1061, 0, 0, 1062, 0, 1063, 0, 1064, 0, 1065, 0, 0,
    0, 0, 0, 1066, 1067, 0, 1068, 0, 0, 1069, 0, 0, 1070, 0, 0, 1071, 0, 1072, 0, 0, 0, 0, 0, 1073, 0, 1074, 1075, 0, 1076, 0, 0, 1077,
    0, 1078, 0, 1079, 0, 1080, 0, 1081, 0, 1082, 1083, 0, 1084, 0, 1085, 0, 0, 0, 0, 1086, 0, 0, 1087, 1088, 0, 1089, 0, 0, 0, 0, 0, 1090,
    0, 0, 1091, 0, 0, 0, 0, 1092, 0, 0, 1093, 0, 0, 1094, 0, 1095, 0, 1096, 0, 1097, 0, 1098, 0, 0, 0, 1099, 0, 0, 1100, 1101,
};
void recomp_unit_0176_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AC4000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0176[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AC4000;
    case 2u: goto L_08AC4008;
    case 3u: goto L_08AC4010;
    case 4u: goto L_08AC4018;
    case 5u: goto L_08AC4020;
    case 6u: goto L_08AC4028;
    case 7u: goto L_08AC4030;
    case 8u: goto L_08AC4038;
    case 9u: goto L_08AC4040;
    case 10u: goto L_08AC4048;
    case 11u: goto L_08AC405C;
    case 12u: goto L_08AC4068;
    case 13u: goto L_08AC4070;
    case 14u: goto L_08AC4074;
    case 15u: goto L_08AC407C;
    case 16u: goto L_08AC4088;
    case 17u: goto L_08AC4090;
    case 18u: goto L_08AC4094;
    case 19u: goto L_08AC409C;
    case 20u: goto L_08AC40A4;
    case 21u: goto L_08AC40BC;
    case 22u: goto L_08AC40C4;
    case 23u: goto L_08AC40D8;
    case 24u: goto L_08AC40E0;
    case 25u: goto L_08AC40E8;
    case 26u: goto L_08AC40F0;
    case 27u: goto L_08AC40F8;
    case 28u: goto L_08AC4100;
    case 29u: goto L_08AC4108;
    case 30u: goto L_08AC4114;
    case 31u: goto L_08AC4128;
    case 32u: goto L_08AC4130;
    case 33u: goto L_08AC4138;
    case 34u: goto L_08AC4140;
    case 35u: goto L_08AC414C;
    case 36u: goto L_08AC4154;
    case 37u: goto L_08AC415C;
    case 38u: goto L_08AC4164;
    case 39u: goto L_08AC4178;
    case 40u: goto L_08AC4180;
    case 41u: goto L_08AC4188;
    case 42u: goto L_08AC4190;
    case 43u: goto L_08AC4198;
    case 44u: goto L_08AC41A0;
    case 45u: goto L_08AC41A8;
    case 46u: goto L_08AC41B0;
    case 47u: goto L_08AC41B8;
    case 48u: goto L_08AC41C0;
    case 49u: goto L_08AC41C8;
    case 50u: goto L_08AC41E0;
    case 51u: goto L_08AC41F8;
    case 52u: goto L_08AC4200;
    case 53u: goto L_08AC4208;
    case 54u: goto L_08AC4210;
    case 55u: goto L_08AC4218;
    case 56u: goto L_08AC422C;
    case 57u: goto L_08AC4238;
    case 58u: goto L_08AC4240;
    case 59u: goto L_08AC4258;
    case 60u: goto L_08AC4260;
    case 61u: goto L_08AC4278;
    case 62u: goto L_08AC4280;
    case 63u: goto L_08AC4298;
    case 64u: goto L_08AC42A0;
    case 65u: goto L_08AC42B4;
    case 66u: goto L_08AC42C4;
    case 67u: goto L_08AC42D0;
    case 68u: goto L_08AC42D8;
    case 69u: goto L_08AC42E4;
    case 70u: goto L_08AC42F0;
    case 71u: goto L_08AC4318;
    case 72u: goto L_08AC434C;
    case 73u: goto L_08AC4358;
    case 74u: goto L_08AC4360;
    case 75u: goto L_08AC4368;
    case 76u: goto L_08AC4378;
    case 77u: goto L_08AC4380;
    case 78u: goto L_08AC4398;
    case 79u: goto L_08AC43A8;
    case 80u: goto L_08AC43B0;
    case 81u: goto L_08AC43B4;
    case 82u: goto L_08AC43BC;
    case 83u: goto L_08AC43C8;
    case 84u: goto L_08AC43D4;
    case 85u: goto L_08AC43E0;
    case 86u: goto L_08AC43EC;
    case 87u: goto L_08AC43F4;
    case 88u: goto L_08AC43FC;
    case 89u: goto L_08AC4408;
    case 90u: goto L_08AC4410;
    case 91u: goto L_08AC4414;
    case 92u: goto L_08AC4428;
    case 93u: goto L_08AC4438;
    case 94u: goto L_08AC4440;
    case 95u: goto L_08AC4444;
    case 96u: goto L_08AC4450;
    case 97u: goto L_08AC445C;
    case 98u: goto L_08AC4464;
    case 99u: goto L_08AC446C;
    case 100u: goto L_08AC4470;
    case 101u: goto L_08AC4478;
    case 102u: goto L_08AC4480;
    case 103u: goto L_08AC4494;
    case 104u: goto L_08AC44C4;
    case 105u: goto L_08AC44D0;
    case 106u: goto L_08AC44F0;
    case 107u: goto L_08AC450C;
    case 108u: goto L_08AC4510;
    case 109u: goto L_08AC4514;
    case 110u: goto L_08AC451C;
    case 111u: goto L_08AC4528;
    case 112u: goto L_08AC4534;
    case 113u: goto L_08AC453C;
    case 114u: goto L_08AC4540;
    case 115u: goto L_08AC4558;
    case 116u: goto L_08AC455C;
    case 117u: goto L_08AC4568;
    case 118u: goto L_08AC4578;
    case 119u: goto L_08AC4584;
    case 120u: goto L_08AC458C;
    case 121u: goto L_08AC4590;
    case 122u: goto L_08AC45BC;
    case 123u: goto L_08AC45C8;
    case 124u: goto L_08AC45D4;
    case 125u: goto L_08AC45EC;
    case 126u: goto L_08AC45F4;
    case 127u: goto L_08AC45FC;
    case 128u: goto L_08AC4604;
    case 129u: goto L_08AC4610;
    case 130u: goto L_08AC4618;
    case 131u: goto L_08AC461C;
    case 132u: goto L_08AC462C;
    case 133u: goto L_08AC463C;
    case 134u: goto L_08AC4644;
    case 135u: goto L_08AC4650;
    case 136u: goto L_08AC465C;
    case 137u: goto L_08AC4668;
    case 138u: goto L_08AC4670;
    case 139u: goto L_08AC467C;
    case 140u: goto L_08AC4684;
    case 141u: goto L_08AC46A0;
    case 142u: goto L_08AC46A8;
    case 143u: goto L_08AC46B0;
    case 144u: goto L_08AC46BC;
    case 145u: goto L_08AC46C4;
    case 146u: goto L_08AC46CC;
    case 147u: goto L_08AC46D8;
    case 148u: goto L_08AC46E0;
    case 149u: goto L_08AC46E4;
    case 150u: goto L_08AC46FC;
    case 151u: goto L_08AC4704;
    case 152u: goto L_08AC4718;
    case 153u: goto L_08AC4764;
    case 154u: goto L_08AC4770;
    case 155u: goto L_08AC4778;
    case 156u: goto L_08AC478C;
    case 157u: goto L_08AC47B4;
    case 158u: goto L_08AC47D0;
    case 159u: goto L_08AC4824;
    case 160u: goto L_08AC4830;
    case 161u: goto L_08AC4838;
    case 162u: goto L_08AC483C;
    case 163u: goto L_08AC484C;
    case 164u: goto L_08AC485C;
    case 165u: goto L_08AC4864;
    case 166u: goto L_08AC486C;
    case 167u: goto L_08AC4878;
    case 168u: goto L_08AC488C;
    case 169u: goto L_08AC4894;
    case 170u: goto L_08AC489C;
    case 171u: goto L_08AC48A8;
    case 172u: goto L_08AC48B0;
    case 173u: goto L_08AC48BC;
    case 174u: goto L_08AC48C4;
    case 175u: goto L_08AC48D8;
    case 176u: goto L_08AC48E4;
    case 177u: goto L_08AC48EC;
    case 178u: goto L_08AC48F0;
    case 179u: goto L_08AC4900;
    case 180u: goto L_08AC4910;
    case 181u: goto L_08AC4918;
    case 182u: goto L_08AC4920;
    case 183u: goto L_08AC492C;
    case 184u: goto L_08AC4938;
    case 185u: goto L_08AC4940;
    case 186u: goto L_08AC494C;
    case 187u: goto L_08AC4954;
    case 188u: goto L_08AC495C;
    case 189u: goto L_08AC4964;
    case 190u: goto L_08AC4970;
    case 191u: goto L_08AC4978;
    case 192u: goto L_08AC497C;
    case 193u: goto L_08AC498C;
    case 194u: goto L_08AC499C;
    case 195u: goto L_08AC49A4;
    case 196u: goto L_08AC49AC;
    case 197u: goto L_08AC49B8;
    case 198u: goto L_08AC49D0;
    case 199u: goto L_08AC49DC;
    case 200u: goto L_08AC49E4;
    case 201u: goto L_08AC49F0;
    case 202u: goto L_08AC49F8;
    case 203u: goto L_08AC4A00;
    case 204u: goto L_08AC4A08;
    case 205u: goto L_08AC4A14;
    case 206u: goto L_08AC4A1C;
    case 207u: goto L_08AC4A20;
    case 208u: goto L_08AC4A30;
    case 209u: goto L_08AC4A40;
    case 210u: goto L_08AC4A48;
    case 211u: goto L_08AC4A50;
    case 212u: goto L_08AC4A5C;
    case 213u: goto L_08AC4A68;
    case 214u: goto L_08AC4A70;
    case 215u: goto L_08AC4A7C;
    case 216u: goto L_08AC4A84;
    case 217u: goto L_08AC4A8C;
    case 218u: goto L_08AC4A90;
    case 219u: goto L_08AC4AA0;
    case 220u: goto L_08AC4AB0;
    case 221u: goto L_08AC4AB8;
    case 222u: goto L_08AC4AC0;
    case 223u: goto L_08AC4ACC;
    case 224u: goto L_08AC4AE0;
    case 225u: goto L_08AC4AEC;
    case 226u: goto L_08AC4AF4;
    case 227u: goto L_08AC4B00;
    case 228u: goto L_08AC4B08;
    case 229u: goto L_08AC4B10;
    case 230u: goto L_08AC4B14;
    case 231u: goto L_08AC4B24;
    case 232u: goto L_08AC4B34;
    case 233u: goto L_08AC4B3C;
    case 234u: goto L_08AC4B44;
    case 235u: goto L_08AC4B50;
    case 236u: goto L_08AC4B58;
    case 237u: goto L_08AC4B64;
    case 238u: goto L_08AC4B6C;
    case 239u: goto L_08AC4B78;
    case 240u: goto L_08AC4B80;
    case 241u: goto L_08AC4B88;
    case 242u: goto L_08AC4B8C;
    case 243u: goto L_08AC4B9C;
    case 244u: goto L_08AC4BAC;
    case 245u: goto L_08AC4BB4;
    case 246u: goto L_08AC4BBC;
    case 247u: goto L_08AC4BC8;
    case 248u: goto L_08AC4BDC;
    case 249u: goto L_08AC4BE4;
    case 250u: goto L_08AC4BF0;
    case 251u: goto L_08AC4BF8;
    case 252u: goto L_08AC4C04;
    case 253u: goto L_08AC4C0C;
    case 254u: goto L_08AC4C14;
    case 255u: goto L_08AC4C18;
    case 256u: goto L_08AC4C28;
    case 257u: goto L_08AC4C38;
    case 258u: goto L_08AC4C40;
    case 259u: goto L_08AC4C48;
    case 260u: goto L_08AC4C54;
    case 261u: goto L_08AC4C68;
    case 262u: goto L_08AC4C70;
    case 263u: goto L_08AC4C80;
    case 264u: goto L_08AC4C8C;
    case 265u: goto L_08AC4C94;
    case 266u: goto L_08AC4CA0;
    case 267u: goto L_08AC4CA8;
    case 268u: goto L_08AC4CB0;
    case 269u: goto L_08AC4CB4;
    case 270u: goto L_08AC4CC4;
    case 271u: goto L_08AC4CD4;
    case 272u: goto L_08AC4CDC;
    case 273u: goto L_08AC4CE4;
    case 274u: goto L_08AC4CF0;
    case 275u: goto L_08AC4D04;
    case 276u: goto L_08AC4D0C;
    case 277u: goto L_08AC4D18;
    case 278u: goto L_08AC4D20;
    case 279u: goto L_08AC4D2C;
    case 280u: goto L_08AC4D34;
    case 281u: goto L_08AC4D38;
    case 282u: goto L_08AC4D48;
    case 283u: goto L_08AC4D58;
    case 284u: goto L_08AC4D60;
    case 285u: goto L_08AC4D68;
    case 286u: goto L_08AC4D74;
    case 287u: goto L_08AC4D80;
    case 288u: goto L_08AC4D88;
    case 289u: goto L_08AC4D90;
    case 290u: goto L_08AC4D98;
    case 291u: goto L_08AC4DAC;
    case 292u: goto L_08AC4DDC;
    case 293u: goto L_08AC4DF0;
    case 294u: goto L_08AC4DF8;
    case 295u: goto L_08AC4E04;
    case 296u: goto L_08AC4E14;
    case 297u: goto L_08AC4E1C;
    case 298u: goto L_08AC4E28;
    case 299u: goto L_08AC4E38;
    case 300u: goto L_08AC4E48;
    case 301u: goto L_08AC4E50;
    case 302u: goto L_08AC4E58;
    case 303u: goto L_08AC4E6C;
    case 304u: goto L_08AC4E74;
    case 305u: goto L_08AC4E7C;
    case 306u: goto L_08AC4E84;
    case 307u: goto L_08AC4E8C;
    case 308u: goto L_08AC4E98;
    case 309u: goto L_08AC4EA0;
    case 310u: goto L_08AC4EAC;
    case 311u: goto L_08AC4EB8;
    case 312u: goto L_08AC4EC4;
    case 313u: goto L_08AC4ECC;
    case 314u: goto L_08AC4ED8;
    case 315u: goto L_08AC4EE0;
    case 316u: goto L_08AC4EEC;
    case 317u: goto L_08AC4EF4;
    case 318u: goto L_08AC4EFC;
    case 319u: goto L_08AC4F04;
    case 320u: goto L_08AC4F0C;
    case 321u: goto L_08AC4F14;
    case 322u: goto L_08AC4F1C;
    case 323u: goto L_08AC4F24;
    case 324u: goto L_08AC4F2C;
    case 325u: goto L_08AC4F34;
    case 326u: goto L_08AC4F3C;
    case 327u: goto L_08AC4F48;
    case 328u: goto L_08AC4F54;
    case 329u: goto L_08AC4F60;
    case 330u: goto L_08AC4F70;
    case 331u: goto L_08AC4F78;
    case 332u: goto L_08AC4F84;
    case 333u: goto L_08AC4F94;
    case 334u: goto L_08AC4F9C;
    case 335u: goto L_08AC4FA8;
    case 336u: goto L_08AC4FB0;
    case 337u: goto L_08AC4FB4;
    case 338u: goto L_08AC4FC0;
    case 339u: goto L_08AC4FC8;
    case 340u: goto L_08AC4FD0;
    case 341u: goto L_08AC4FD8;
    case 342u: goto L_08AC4FE0;
    case 343u: goto L_08AC4FE8;
    case 344u: goto L_08AC4FFC;
    case 345u: goto L_08AC5004;
    case 346u: goto L_08AC500C;
    case 347u: goto L_08AC5018;
    case 348u: goto L_08AC5020;
    case 349u: goto L_08AC5028;
    case 350u: goto L_08AC5030;
    case 351u: goto L_08AC5038;
    case 352u: goto L_08AC5040;
    case 353u: goto L_08AC5048;
    case 354u: goto L_08AC5050;
    case 355u: goto L_08AC5064;
    case 356u: goto L_08AC5070;
    case 357u: goto L_08AC5078;
    case 358u: goto L_08AC5080;
    case 359u: goto L_08AC508C;
    case 360u: goto L_08AC5094;
    case 361u: goto L_08AC509C;
    case 362u: goto L_08AC50A4;
    case 363u: goto L_08AC50AC;
    case 364u: goto L_08AC50B8;
    case 365u: goto L_08AC50C0;
    case 366u: goto L_08AC50C8;
    case 367u: goto L_08AC50D0;
    case 368u: goto L_08AC50D8;
    case 369u: goto L_08AC50FC;
    case 370u: goto L_08AC5124;
    case 371u: goto L_08AC514C;
    case 372u: goto L_08AC5164;
    case 373u: goto L_08AC516C;
    case 374u: goto L_08AC5180;
    case 375u: goto L_08AC5190;
    case 376u: goto L_08AC51A0;
    case 377u: goto L_08AC51B8;
    case 378u: goto L_08AC51DC;
    case 379u: goto L_08AC5214;
    case 380u: goto L_08AC522C;
    case 381u: goto L_08AC524C;
    case 382u: goto L_08AC52A0;
    case 383u: goto L_08AC52CC;
    case 384u: goto L_08AC52F8;
    case 385u: goto L_08AC5320;
    case 386u: goto L_08AC534C;
    case 387u: goto L_08AC5378;
    case 388u: goto L_08AC53A4;
    case 389u: goto L_08AC53CC;
    case 390u: goto L_08AC53F4;
    case 391u: goto L_08AC5410;
    case 392u: goto L_08AC5438;
    case 393u: goto L_08AC5450;
    case 394u: goto L_08AC5458;
    case 395u: goto L_08AC5464;
    case 396u: goto L_08AC547C;
    case 397u: goto L_08AC5490;
    case 398u: goto L_08AC5498;
    case 399u: goto L_08AC54A0;
    case 400u: goto L_08AC54D8;
    case 401u: goto L_08AC54F8;
    case 402u: goto L_08AC5510;
    case 403u: goto L_08AC5518;
    case 404u: goto L_08AC551C;
    case 405u: goto L_08AC553C;
    case 406u: goto L_08AC5548;
    case 407u: goto L_08AC555C;
    case 408u: goto L_08AC556C;
    case 409u: goto L_08AC5574;
    case 410u: goto L_08AC557C;
    case 411u: goto L_08AC5588;
    case 412u: goto L_08AC5590;
    case 413u: goto L_08AC5594;
    case 414u: goto L_08AC55C0;
    case 415u: goto L_08AC55D0;
    case 416u: goto L_08AC55E4;
    case 417u: goto L_08AC55EC;
    case 418u: goto L_08AC5614;
    case 419u: goto L_08AC5624;
    case 420u: goto L_08AC562C;
    case 421u: goto L_08AC5640;
    case 422u: goto L_08AC5644;
    case 423u: goto L_08AC5658;
    case 424u: goto L_08AC5660;
    case 425u: goto L_08AC5674;
    case 426u: goto L_08AC569C;
    case 427u: goto L_08AC56AC;
    case 428u: goto L_08AC56B8;
    case 429u: goto L_08AC56C8;
    case 430u: goto L_08AC56D0;
    case 431u: goto L_08AC56F0;
    case 432u: goto L_08AC5720;
    case 433u: goto L_08AC5758;
    case 434u: goto L_08AC5778;
    case 435u: goto L_08AC5790;
    case 436u: goto L_08AC5798;
    case 437u: goto L_08AC579C;
    case 438u: goto L_08AC57BC;
    case 439u: goto L_08AC57C8;
    case 440u: goto L_08AC57DC;
    case 441u: goto L_08AC57EC;
    case 442u: goto L_08AC57F4;
    case 443u: goto L_08AC57FC;
    case 444u: goto L_08AC5808;
    case 445u: goto L_08AC5810;
    case 446u: goto L_08AC5814;
    case 447u: goto L_08AC5840;
    case 448u: goto L_08AC5850;
    case 449u: goto L_08AC5864;
    case 450u: goto L_08AC586C;
    case 451u: goto L_08AC5878;
    case 452u: goto L_08AC5880;
    case 453u: goto L_08AC5898;
    case 454u: goto L_08AC589C;
    case 455u: goto L_08AC58B0;
    case 456u: goto L_08AC58B8;
    case 457u: goto L_08AC58CC;
    case 458u: goto L_08AC58DC;
    case 459u: goto L_08AC58E4;
    case 460u: goto L_08AC58F8;
    case 461u: goto L_08AC5900;
    case 462u: goto L_08AC5920;
    case 463u: goto L_08AC5950;
    case 464u: goto L_08AC595C;
    case 465u: goto L_08AC596C;
    case 466u: goto L_08AC5978;
    case 467u: goto L_08AC5994;
    case 468u: goto L_08AC599C;
    case 469u: goto L_08AC59A4;
    case 470u: goto L_08AC59B8;
    case 471u: goto L_08AC59BC;
    case 472u: goto L_08AC59D4;
    case 473u: goto L_08AC59E8;
    case 474u: goto L_08AC5A10;
    case 475u: goto L_08AC5A30;
    case 476u: goto L_08AC5A6C;
    case 477u: goto L_08AC5A80;
    case 478u: goto L_08AC5A9C;
    case 479u: goto L_08AC5AA8;
    case 480u: goto L_08AC5AB0;
    case 481u: goto L_08AC5AB8;
    case 482u: goto L_08AC5AC0;
    case 483u: goto L_08AC5AC4;
    case 484u: goto L_08AC5ACC;
    case 485u: goto L_08AC5AD4;
    case 486u: goto L_08AC5AE8;
    case 487u: goto L_08AC5B1C;
    case 488u: goto L_08AC5B34;
    case 489u: goto L_08AC5B64;
    case 490u: goto L_08AC5B78;
    case 491u: goto L_08AC5B94;
    case 492u: goto L_08AC5B98;
    case 493u: goto L_08AC5BC0;
    case 494u: goto L_08AC5BD8;
    case 495u: goto L_08AC5BE4;
    case 496u: goto L_08AC5BEC;
    case 497u: goto L_08AC5C04;
    case 498u: goto L_08AC5C24;
    case 499u: goto L_08AC5C2C;
    case 500u: goto L_08AC5C34;
    case 501u: goto L_08AC5C3C;
    case 502u: goto L_08AC5C44;
    case 503u: goto L_08AC5C48;
    case 504u: goto L_08AC5C50;
    case 505u: goto L_08AC5C5C;
    case 506u: goto L_08AC5C64;
    case 507u: goto L_08AC5C90;
    case 508u: goto L_08AC5CA8;
    case 509u: goto L_08AC5CB0;
    case 510u: goto L_08AC5CB8;
    case 511u: goto L_08AC5CC8;
    case 512u: goto L_08AC5CE0;
    case 513u: goto L_08AC5CE8;
    case 514u: goto L_08AC5D2C;
    case 515u: goto L_08AC5D34;
    case 516u: goto L_08AC5D44;
    case 517u: goto L_08AC5DA0;
    case 518u: goto L_08AC5DB0;
    case 519u: goto L_08AC5DDC;
    case 520u: goto L_08AC5DF8;
    case 521u: goto L_08AC5E38;
    case 522u: goto L_08AC5E58;
    case 523u: goto L_08AC5E74;
    case 524u: goto L_08AC5E7C;
    case 525u: goto L_08AC5EAC;
    case 526u: goto L_08AC5EB0;
    case 527u: goto L_08AC5EC4;
    case 528u: goto L_08AC5EF0;
    case 529u: goto L_08AC5EF8;
    case 530u: goto L_08AC5F00;
    case 531u: goto L_08AC5F14;
    case 532u: goto L_08AC5F1C;
    case 533u: goto L_08AC5F28;
    case 534u: goto L_08AC5F30;
    case 535u: goto L_08AC5F60;
    case 536u: goto L_08AC5F70;
    case 537u: goto L_08AC5F7C;
    case 538u: goto L_08AC5F84;
    case 539u: goto L_08AC5F98;
    case 540u: goto L_08AC5FA8;
    case 541u: goto L_08AC5FB4;
    case 542u: goto L_08AC5FBC;
    case 543u: goto L_08AC5FC8;
    case 544u: goto L_08AC5FD0;
    case 545u: goto L_08AC5FE4;
    case 546u: goto L_08AC5FEC;
    case 547u: goto L_08AC6000;
    case 548u: goto L_08AC6010;
    case 549u: goto L_08AC6014;
    case 550u: goto L_08AC6024;
    case 551u: goto L_08AC602C;
    case 552u: goto L_08AC6040;
    case 553u: goto L_08AC6044;
    case 554u: goto L_08AC6068;
    case 555u: goto L_08AC60C4;
    case 556u: goto L_08AC60D8;
    case 557u: goto L_08AC60F4;
    case 558u: goto L_08AC60F8;
    case 559u: goto L_08AC6120;
    case 560u: goto L_08AC6134;
    case 561u: goto L_08AC6144;
    case 562u: goto L_08AC614C;
    case 563u: goto L_08AC6170;
    case 564u: goto L_08AC6194;
    case 565u: goto L_08AC61A4;
    case 566u: goto L_08AC61AC;
    case 567u: goto L_08AC61B4;
    case 568u: goto L_08AC61C0;
    case 569u: goto L_08AC61C8;
    case 570u: goto L_08AC61CC;
    case 571u: goto L_08AC61E0;
    case 572u: goto L_08AC6200;
    case 573u: goto L_08AC620C;
    case 574u: goto L_08AC6214;
    case 575u: goto L_08AC6218;
    case 576u: goto L_08AC6224;
    case 577u: goto L_08AC6238;
    case 578u: goto L_08AC6258;
    case 579u: goto L_08AC6264;
    case 580u: goto L_08AC626C;
    case 581u: goto L_08AC6274;
    case 582u: goto L_08AC627C;
    case 583u: goto L_08AC6280;
    case 584u: goto L_08AC628C;
    case 585u: goto L_08AC62A0;
    case 586u: goto L_08AC62B8;
    case 587u: goto L_08AC62C0;
    case 588u: goto L_08AC6304;
    case 589u: goto L_08AC630C;
    case 590u: goto L_08AC631C;
    case 591u: goto L_08AC632C;
    case 592u: goto L_08AC6350;
    case 593u: goto L_08AC6358;
    case 594u: goto L_08AC63A8;
    case 595u: goto L_08AC63B0;
    case 596u: goto L_08AC63DC;
    case 597u: goto L_08AC63E8;
    case 598u: goto L_08AC63F4;
    case 599u: goto L_08AC63FC;
    case 600u: goto L_08AC6400;
    case 601u: goto L_08AC6404;
    case 602u: goto L_08AC6410;
    case 603u: goto L_08AC643C;
    case 604u: goto L_08AC6458;
    case 605u: goto L_08AC646C;
    case 606u: goto L_08AC64AC;
    case 607u: goto L_08AC64B4;
    case 608u: goto L_08AC64C8;
    case 609u: goto L_08AC64D4;
    case 610u: goto L_08AC64E0;
    case 611u: goto L_08AC64E8;
    case 612u: goto L_08AC64F0;
    case 613u: goto L_08AC64F8;
    case 614u: goto L_08AC6504;
    case 615u: goto L_08AC6528;
    case 616u: goto L_08AC653C;
    case 617u: goto L_08AC654C;
    case 618u: goto L_08AC6558;
    case 619u: goto L_08AC6560;
    case 620u: goto L_08AC6570;
    case 621u: goto L_08AC6578;
    case 622u: goto L_08AC6584;
    case 623u: goto L_08AC658C;
    case 624u: goto L_08AC659C;
    case 625u: goto L_08AC65A8;
    case 626u: goto L_08AC65B4;
    case 627u: goto L_08AC65BC;
    case 628u: goto L_08AC65C4;
    case 629u: goto L_08AC65D8;
    case 630u: goto L_08AC65E8;
    case 631u: goto L_08AC65F8;
    case 632u: goto L_08AC6604;
    case 633u: goto L_08AC6610;
    case 634u: goto L_08AC6618;
    case 635u: goto L_08AC6628;
    case 636u: goto L_08AC6630;
    case 637u: goto L_08AC663C;
    case 638u: goto L_08AC6644;
    case 639u: goto L_08AC6654;
    case 640u: goto L_08AC665C;
    case 641u: goto L_08AC6668;
    case 642u: goto L_08AC6674;
    case 643u: goto L_08AC6694;
    case 644u: goto L_08AC669C;
    case 645u: goto L_08AC66AC;
    case 646u: goto L_08AC66B4;
    case 647u: goto L_08AC66C4;
    case 648u: goto L_08AC66D4;
    case 649u: goto L_08AC66E0;
    case 650u: goto L_08AC66E4;
    case 651u: goto L_08AC66F4;
    case 652u: goto L_08AC66FC;
    case 653u: goto L_08AC670C;
    case 654u: goto L_08AC671C;
    case 655u: goto L_08AC6734;
    case 656u: goto L_08AC6740;
    case 657u: goto L_08AC6748;
    case 658u: goto L_08AC6754;
    case 659u: goto L_08AC6760;
    case 660u: goto L_08AC6780;
    case 661u: goto L_08AC6788;
    case 662u: goto L_08AC6798;
    case 663u: goto L_08AC67A0;
    case 664u: goto L_08AC67B0;
    case 665u: goto L_08AC67C0;
    case 666u: goto L_08AC67CC;
    case 667u: goto L_08AC67D0;
    case 668u: goto L_08AC67E0;
    case 669u: goto L_08AC67E8;
    case 670u: goto L_08AC67F8;
    case 671u: goto L_08AC6808;
    case 672u: goto L_08AC6820;
    case 673u: goto L_08AC6838;
    case 674u: goto L_08AC6848;
    case 675u: goto L_08AC6854;
    case 676u: goto L_08AC6864;
    case 677u: goto L_08AC686C;
    case 678u: goto L_08AC6878;
    case 679u: goto L_08AC6880;
    case 680u: goto L_08AC6884;
    case 681u: goto L_08AC688C;
    case 682u: goto L_08AC6894;
    case 683u: goto L_08AC689C;
    case 684u: goto L_08AC68AC;
    case 685u: goto L_08AC68B8;
    case 686u: goto L_08AC68C4;
    case 687u: goto L_08AC68CC;
    case 688u: goto L_08AC68D4;
    case 689u: goto L_08AC68E4;
    case 690u: goto L_08AC68F4;
    case 691u: goto L_08AC6904;
    case 692u: goto L_08AC690C;
    case 693u: goto L_08AC6914;
    case 694u: goto L_08AC6924;
    case 695u: goto L_08AC6930;
    case 696u: goto L_08AC693C;
    case 697u: goto L_08AC6944;
    case 698u: goto L_08AC694C;
    case 699u: goto L_08AC695C;
    case 700u: goto L_08AC6964;
    case 701u: goto L_08AC6970;
    case 702u: goto L_08AC6978;
    case 703u: goto L_08AC6984;
    case 704u: goto L_08AC6990;
    case 705u: goto L_08AC69A0;
    case 706u: goto L_08AC69A8;
    case 707u: goto L_08AC69B4;
    case 708u: goto L_08AC69BC;
    case 709u: goto L_08AC69CC;
    case 710u: goto L_08AC69D8;
    case 711u: goto L_08AC69E4;
    case 712u: goto L_08AC69EC;
    case 713u: goto L_08AC69F4;
    case 714u: goto L_08AC6A04;
    case 715u: goto L_08AC6A10;
    case 716u: goto L_08AC6A18;
    case 717u: goto L_08AC6A24;
    case 718u: goto L_08AC6A2C;
    case 719u: goto L_08AC6A38;
    case 720u: goto L_08AC6A48;
    case 721u: goto L_08AC6A54;
    case 722u: goto L_08AC6A60;
    case 723u: goto L_08AC6A68;
    case 724u: goto L_08AC6A70;
    case 725u: goto L_08AC6A7C;
    case 726u: goto L_08AC6A84;
    case 727u: goto L_08AC6A94;
    case 728u: goto L_08AC6A9C;
    case 729u: goto L_08AC6AA4;
    case 730u: goto L_08AC6AB4;
    case 731u: goto L_08AC6AC0;
    case 732u: goto L_08AC6ACC;
    case 733u: goto L_08AC6AD4;
    case 734u: goto L_08AC6ADC;
    case 735u: goto L_08AC6AEC;
    case 736u: goto L_08AC6AF8;
    case 737u: goto L_08AC6B04;
    case 738u: goto L_08AC6B0C;
    case 739u: goto L_08AC6B14;
    case 740u: goto L_08AC6B24;
    case 741u: goto L_08AC6B34;
    case 742u: goto L_08AC6B44;
    case 743u: goto L_08AC6B4C;
    case 744u: goto L_08AC6B58;
    case 745u: goto L_08AC6B6C;
    case 746u: goto L_08AC6B74;
    case 747u: goto L_08AC6B84;
    case 748u: goto L_08AC6B94;
    case 749u: goto L_08AC6BA0;
    case 750u: goto L_08AC6BA4;
    case 751u: goto L_08AC6BB4;
    case 752u: goto L_08AC6BCC;
    case 753u: goto L_08AC6BD0;
    case 754u: goto L_08AC6BD8;
    case 755u: goto L_08AC6BE0;
    case 756u: goto L_08AC6BF0;
    case 757u: goto L_08AC6BFC;
    case 758u: goto L_08AC6C08;
    case 759u: goto L_08AC6C10;
    case 760u: goto L_08AC6C18;
    case 761u: goto L_08AC6C24;
    case 762u: goto L_08AC6C2C;
    case 763u: goto L_08AC6C3C;
    case 764u: goto L_08AC6C44;
    case 765u: goto L_08AC6C54;
    case 766u: goto L_08AC6C5C;
    case 767u: goto L_08AC6C6C;
    case 768u: goto L_08AC6C74;
    case 769u: goto L_08AC6C8C;
    case 770u: goto L_08AC6CAC;
    case 771u: goto L_08AC6CBC;
    case 772u: goto L_08AC6CC8;
    case 773u: goto L_08AC6CD4;
    case 774u: goto L_08AC6CDC;
    case 775u: goto L_08AC6CE4;
    case 776u: goto L_08AC6CF0;
    case 777u: goto L_08AC6CF8;
    case 778u: goto L_08AC6D08;
    case 779u: goto L_08AC6D10;
    case 780u: goto L_08AC6D20;
    case 781u: goto L_08AC6D28;
    case 782u: goto L_08AC6D38;
    case 783u: goto L_08AC6D40;
    case 784u: goto L_08AC6D58;
    case 785u: goto L_08AC6D78;
    case 786u: goto L_08AC6D88;
    case 787u: goto L_08AC6D94;
    case 788u: goto L_08AC6DA0;
    case 789u: goto L_08AC6DA8;
    case 790u: goto L_08AC6DB0;
    case 791u: goto L_08AC6DC8;
    case 792u: goto L_08AC6DD0;
    case 793u: goto L_08AC6DDC;
    case 794u: goto L_08AC6DE4;
    case 795u: goto L_08AC6DF0;
    case 796u: goto L_08AC6DF4;
    case 797u: goto L_08AC6E00;
    case 798u: goto L_08AC6E08;
    case 799u: goto L_08AC6E14;
    case 800u: goto L_08AC6E1C;
    case 801u: goto L_08AC6E28;
    case 802u: goto L_08AC6E2C;
    case 803u: goto L_08AC6E34;
    case 804u: goto L_08AC6E44;
    case 805u: goto L_08AC6E50;
    case 806u: goto L_08AC6E5C;
    case 807u: goto L_08AC6E64;
    case 808u: goto L_08AC6E6C;
    case 809u: goto L_08AC6E80;
    case 810u: goto L_08AC6E8C;
    case 811u: goto L_08AC6E98;
    case 812u: goto L_08AC6EA0;
    case 813u: goto L_08AC6EA8;
    case 814u: goto L_08AC6EB8;
    case 815u: goto L_08AC6EC4;
    case 816u: goto L_08AC6ECC;
    case 817u: goto L_08AC6ED8;
    case 818u: goto L_08AC6EE0;
    case 819u: goto L_08AC6EE4;
    case 820u: goto L_08AC6EF4;
    case 821u: goto L_08AC6F00;
    case 822u: goto L_08AC6F0C;
    case 823u: goto L_08AC6F14;
    case 824u: goto L_08AC6F1C;
    case 825u: goto L_08AC6F28;
    case 826u: goto L_08AC6F34;
    case 827u: goto L_08AC6F3C;
    case 828u: goto L_08AC6F40;
    case 829u: goto L_08AC6F4C;
    case 830u: goto L_08AC6F58;
    case 831u: goto L_08AC6F60;
    case 832u: goto L_08AC6F64;
    case 833u: goto L_08AC6F68;
    case 834u: goto L_08AC6FA0;
    case 835u: goto L_08AC6FC8;
    case 836u: goto L_08AC6FD4;
    case 837u: goto L_08AC7008;
    case 838u: goto L_08AC7010;
    case 839u: goto L_08AC7020;
    case 840u: goto L_08AC7028;
    case 841u: goto L_08AC7034;
    case 842u: goto L_08AC7040;
    case 843u: goto L_08AC704C;
    case 844u: goto L_08AC705C;
    case 845u: goto L_08AC706C;
    case 846u: goto L_08AC707C;
    case 847u: goto L_08AC708C;
    case 848u: goto L_08AC70A0;
    case 849u: goto L_08AC70D4;
    case 850u: goto L_08AC70EC;
    case 851u: goto L_08AC7114;
    case 852u: goto L_08AC7120;
    case 853u: goto L_08AC712C;
    case 854u: goto L_08AC7140;
    case 855u: goto L_08AC7164;
    case 856u: goto L_08AC7178;
    case 857u: goto L_08AC7190;
    case 858u: goto L_08AC71A4;
    case 859u: goto L_08AC71A8;
    case 860u: goto L_08AC71AC;
    case 861u: goto L_08AC71D0;
    case 862u: goto L_08AC71D8;
    case 863u: goto L_08AC71F8;
    case 864u: goto L_08AC7204;
    case 865u: goto L_08AC721C;
    case 866u: goto L_08AC7220;
    case 867u: goto L_08AC7238;
    case 868u: goto L_08AC7260;
    case 869u: goto L_08AC726C;
    case 870u: goto L_08AC7278;
    case 871u: goto L_08AC728C;
    case 872u: goto L_08AC7294;
    case 873u: goto L_08AC729C;
    case 874u: goto L_08AC72A0;
    case 875u: goto L_08AC72BC;
    case 876u: goto L_08AC72C4;
    case 877u: goto L_08AC72E4;
    case 878u: goto L_08AC72F0;
    case 879u: goto L_08AC7308;
    case 880u: goto L_08AC730C;
    case 881u: goto L_08AC7324;
    case 882u: goto L_08AC734C;
    case 883u: goto L_08AC7358;
    case 884u: goto L_08AC7364;
    case 885u: goto L_08AC7374;
    case 886u: goto L_08AC737C;
    case 887u: goto L_08AC7384;
    case 888u: goto L_08AC7388;
    case 889u: goto L_08AC73A4;
    case 890u: goto L_08AC73AC;
    case 891u: goto L_08AC73CC;
    case 892u: goto L_08AC73D8;
    case 893u: goto L_08AC73F0;
    case 894u: goto L_08AC73F4;
    case 895u: goto L_08AC740C;
    case 896u: goto L_08AC7424;
    case 897u: goto L_08AC742C;
    case 898u: goto L_08AC7434;
    case 899u: goto L_08AC745C;
    case 900u: goto L_08AC7474;
    case 901u: goto L_08AC748C;
    case 902u: goto L_08AC74A8;
    case 903u: goto L_08AC74C0;
    case 904u: goto L_08AC74C8;
    case 905u: goto L_08AC74D0;
    case 906u: goto L_08AC74E4;
    case 907u: goto L_08AC74EC;
    case 908u: goto L_08AC74F4;
    case 909u: goto L_08AC7518;
    case 910u: goto L_08AC753C;
    case 911u: goto L_08AC7564;
    case 912u: goto L_08AC7590;
    case 913u: goto L_08AC759C;
    case 914u: goto L_08AC75B0;
    case 915u: goto L_08AC75C0;
    case 916u: goto L_08AC75DC;
    case 917u: goto L_08AC75F8;
    case 918u: goto L_08AC7610;
    case 919u: goto L_08AC7620;
    case 920u: goto L_08AC763C;
    case 921u: goto L_08AC7644;
    case 922u: goto L_08AC764C;
    case 923u: goto L_08AC7654;
    case 924u: goto L_08AC7670;
    case 925u: goto L_08AC7678;
    case 926u: goto L_08AC769C;
    case 927u: goto L_08AC76B0;
    case 928u: goto L_08AC76C0;
    case 929u: goto L_08AC76DC;
    case 930u: goto L_08AC76E4;
    case 931u: goto L_08AC76EC;
    case 932u: goto L_08AC76FC;
    case 933u: goto L_08AC770C;
    case 934u: goto L_08AC7714;
    case 935u: goto L_08AC771C;
    case 936u: goto L_08AC7728;
    case 937u: goto L_08AC773C;
    case 938u: goto L_08AC7750;
    case 939u: goto L_08AC7764;
    case 940u: goto L_08AC7774;
    case 941u: goto L_08AC7794;
    case 942u: goto L_08AC77A4;
    case 943u: goto L_08AC77AC;
    case 944u: goto L_08AC77B4;
    case 945u: goto L_08AC77BC;
    case 946u: goto L_08AC77C4;
    case 947u: goto L_08AC77F0;
    case 948u: goto L_08AC7804;
    case 949u: goto L_08AC7810;
    case 950u: goto L_08AC7820;
    case 951u: goto L_08AC7830;
    case 952u: goto L_08AC7854;
    case 953u: goto L_08AC7868;
    case 954u: goto L_08AC78A8;
    case 955u: goto L_08AC78EC;
    case 956u: goto L_08AC7930;
    case 957u: goto L_08AC7938;
    case 958u: goto L_08AC7940;
    case 959u: goto L_08AC7948;
    case 960u: goto L_08AC7950;
    case 961u: goto L_08AC7958;
    case 962u: goto L_08AC7960;
    case 963u: goto L_08AC7968;
    case 964u: goto L_08AC7970;
    case 965u: goto L_08AC7978;
    case 966u: goto L_08AC7980;
    case 967u: goto L_08AC7988;
    case 968u: goto L_08AC7998;
    case 969u: goto L_08AC79A8;
    case 970u: goto L_08AC79B0;
    case 971u: goto L_08AC79CC;
    case 972u: goto L_08AC79D4;
    case 973u: goto L_08AC79DC;
    case 974u: goto L_08AC79EC;
    case 975u: goto L_08AC79F8;
    case 976u: goto L_08AC79FC;
    case 977u: goto L_08AC7A04;
    case 978u: goto L_08AC7A0C;
    case 979u: goto L_08AC7A14;
    case 980u: goto L_08AC7A38;
    case 981u: goto L_08AC7A48;
    case 982u: goto L_08AC7A50;
    case 983u: goto L_08AC7A58;
    case 984u: goto L_08AC7A98;
    case 985u: goto L_08AC7AA4;
    case 986u: goto L_08AC7AB0;
    case 987u: goto L_08AC7AB8;
    case 988u: goto L_08AC7AC0;
    case 989u: goto L_08AC7AC8;
    case 990u: goto L_08AC7AD4;
    case 991u: goto L_08AC7ADC;
    case 992u: goto L_08AC7AE4;
    case 993u: goto L_08AC7AEC;
    case 994u: goto L_08AC7AFC;
    case 995u: goto L_08AC7B04;
    case 996u: goto L_08AC7B0C;
    case 997u: goto L_08AC7B14;
    case 998u: goto L_08AC7B1C;
    case 999u: goto L_08AC7B28;
    case 1000u: goto L_08AC7B44;
    case 1001u: goto L_08AC7B4C;
    case 1002u: goto L_08AC7B54;
    case 1003u: goto L_08AC7B60;
    case 1004u: goto L_08AC7B68;
    case 1005u: goto L_08AC7B6C;
    case 1006u: goto L_08AC7B74;
    case 1007u: goto L_08AC7B84;
    case 1008u: goto L_08AC7B8C;
    case 1009u: goto L_08AC7BAC;
    case 1010u: goto L_08AC7BDC;
    case 1011u: goto L_08AC7BE8;
    case 1012u: goto L_08AC7BF0;
    case 1013u: goto L_08AC7BF8;
    case 1014u: goto L_08AC7C00;
    case 1015u: goto L_08AC7C08;
    case 1016u: goto L_08AC7C10;
    case 1017u: goto L_08AC7C18;
    case 1018u: goto L_08AC7C30;
    case 1019u: goto L_08AC7C34;
    case 1020u: goto L_08AC7C50;
    case 1021u: goto L_08AC7C58;
    case 1022u: goto L_08AC7C60;
    case 1023u: goto L_08AC7C78;
    case 1024u: goto L_08AC7C80;
    case 1025u: goto L_08AC7C8C;
    case 1026u: goto L_08AC7C98;
    case 1027u: goto L_08AC7CA4;
    case 1028u: goto L_08AC7CB8;
    case 1029u: goto L_08AC7CC8;
    case 1030u: goto L_08AC7CD4;
    case 1031u: goto L_08AC7CE0;
    case 1032u: goto L_08AC7CEC;
    case 1033u: goto L_08AC7CF8;
    case 1034u: goto L_08AC7D14;
    case 1035u: goto L_08AC7D28;
    case 1036u: goto L_08AC7D30;
    case 1037u: goto L_08AC7D34;
    case 1038u: goto L_08AC7D44;
    case 1039u: goto L_08AC7D54;
    case 1040u: goto L_08AC7D5C;
    case 1041u: goto L_08AC7D64;
    case 1042u: goto L_08AC7D7C;
    case 1043u: goto L_08AC7D8C;
    case 1044u: goto L_08AC7D94;
    case 1045u: goto L_08AC7D9C;
    case 1046u: goto L_08AC7DAC;
    case 1047u: goto L_08AC7DB8;
    case 1048u: goto L_08AC7DC0;
    case 1049u: goto L_08AC7DC8;
    case 1050u: goto L_08AC7DD4;
    case 1051u: goto L_08AC7DDC;
    case 1052u: goto L_08AC7DE8;
    case 1053u: goto L_08AC7DFC;
    case 1054u: goto L_08AC7E0C;
    case 1055u: goto L_08AC7E18;
    case 1056u: goto L_08AC7E24;
    case 1057u: goto L_08AC7E30;
    case 1058u: goto L_08AC7E38;
    case 1059u: goto L_08AC7E40;
    case 1060u: goto L_08AC7E48;
    case 1061u: goto L_08AC7E50;
    case 1062u: goto L_08AC7E5C;
    case 1063u: goto L_08AC7E64;
    case 1064u: goto L_08AC7E6C;
    case 1065u: goto L_08AC7E74;
    case 1066u: goto L_08AC7E8C;
    case 1067u: goto L_08AC7E90;
    case 1068u: goto L_08AC7E98;
    case 1069u: goto L_08AC7EA4;
    case 1070u: goto L_08AC7EB0;
    case 1071u: goto L_08AC7EBC;
    case 1072u: goto L_08AC7EC4;
    case 1073u: goto L_08AC7EDC;
    case 1074u: goto L_08AC7EE4;
    case 1075u: goto L_08AC7EE8;
    case 1076u: goto L_08AC7EF0;
    case 1077u: goto L_08AC7EFC;
    case 1078u: goto L_08AC7F04;
    case 1079u: goto L_08AC7F0C;
    case 1080u: goto L_08AC7F14;
    case 1081u: goto L_08AC7F1C;
    case 1082u: goto L_08AC7F24;
    case 1083u: goto L_08AC7F28;
    case 1084u: goto L_08AC7F30;
    case 1085u: goto L_08AC7F38;
    case 1086u: goto L_08AC7F4C;
    case 1087u: goto L_08AC7F58;
    case 1088u: goto L_08AC7F5C;
    case 1089u: goto L_08AC7F64;
    case 1090u: goto L_08AC7F7C;
    case 1091u: goto L_08AC7F88;
    case 1092u: goto L_08AC7F9C;
    case 1093u: goto L_08AC7FA8;
    case 1094u: goto L_08AC7FB4;
    case 1095u: goto L_08AC7FBC;
    case 1096u: goto L_08AC7FC4;
    case 1097u: goto L_08AC7FCC;
    case 1098u: goto L_08AC7FD4;
    case 1099u: goto L_08AC7FE4;
    case 1100u: goto L_08AC7FF0;
    case 1101u: goto L_08AC7FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AC4000:
    ctx.gpr[31] = (0x08AC4008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 536u, 0x08AD31CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4008u) goto L_08AC4008;
    return;
L_08AC4008:
    ctx.gpr[31] = (0x08AC4010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 528u, 0x08AD312Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4010u) goto L_08AC4010;
    return;
L_08AC4010:
    ctx.gpr[31] = (0x08AC4018u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08AC4018u) goto L_08AC4018;
    return;
L_08AC4018:
    ctx.gpr[31] = (0x08AC4020u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08AC4020u) goto L_08AC4020;
    return;
L_08AC4020:
    ctx.gpr[31] = (0x08AC4028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 144u, 0x08AB4B00u>(ctx, &aot_mem) && ctx.pc == 0x08AC4028u) goto L_08AC4028;
    return;
L_08AC4028:
    ctx.gpr[31] = (0x08AC4030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 969u, 0x0897FE60u>(ctx, &aot_mem) && ctx.pc == 0x08AC4030u) goto L_08AC4030;
    return;
L_08AC4030:
    ctx.gpr[31] = (0x08AC4038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 532u, 0x08AD317Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4038u) goto L_08AC4038;
    return;
L_08AC4038:
    ctx.gpr[31] = (0x08AC4040u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08AC4040u) goto L_08AC4040;
    return;
L_08AC4040:
    ctx.gpr[31] = (0x08AC4048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 335u, 0x08A79BACu>(ctx, &aot_mem) && ctx.pc == 0x08AC4048u) goto L_08AC4048;
    return;
L_08AC4048:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC405Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC405Cu) goto L_08AC405C;
    return;
L_08AC405C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4074;
      }
      goto L_08AC4068;
    }
L_08AC4068:
    ctx.gpr[31] = (0x08AC4070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08AC4070u) goto L_08AC4070;
    return;
L_08AC4070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AC4074;
L_08AC4074:
    ctx.gpr[31] = (0x08AC407Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 284u, 0x0880CF70u>(ctx, &aot_mem) && ctx.pc == 0x08AC407Cu) goto L_08AC407C;
    return;
L_08AC407C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4094;
      }
      goto L_08AC4088;
    }
L_08AC4088:
    ctx.gpr[31] = (0x08AC4090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08AC4090u) goto L_08AC4090;
    return;
L_08AC4090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AC4094;
L_08AC4094:
    ctx.gpr[31] = (0x08AC409Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 34u, 0x088101B8u>(ctx, &aot_mem) && ctx.pc == 0x08AC409Cu) goto L_08AC409C;
    return;
L_08AC409C:
    ctx.gpr[31] = (0x08AC40A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 121u, 0x08A40AFCu>(ctx, &aot_mem) && ctx.pc == 0x08AC40A4u) goto L_08AC40A4;
    return;
L_08AC40A4:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AC40BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14028));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC40BCu) goto L_08AC40BC;
    return;
L_08AC40BC:
    ctx.gpr[31] = (0x08AC40C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 607u, 0x08B22EB0u>(ctx, &aot_mem) && ctx.pc == 0x08AC40C4u) goto L_08AC40C4;
    return;
L_08AC40C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC40D8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC40D8u) goto L_08AC40D8;
    return;
L_08AC40D8:
    ctx.gpr[31] = (0x08AC40E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 741u, 0x089C7248u>(ctx, &aot_mem) && ctx.pc == 0x08AC40E0u) goto L_08AC40E0;
    return;
L_08AC40E0:
    ctx.gpr[31] = (0x08AC40E8u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7800), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 304u, 0x08A96074u>(ctx, &aot_mem) && ctx.pc == 0x08AC40E8u) goto L_08AC40E8;
    return;
L_08AC40E8:
    ctx.gpr[31] = (0x08AC40F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 595u, 0x08A17928u>(ctx, &aot_mem) && ctx.pc == 0x08AC40F0u) goto L_08AC40F0;
    return;
L_08AC40F0:
    ctx.gpr[31] = (0x08AC40F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 2u, 0x08B20004u>(ctx, &aot_mem) && ctx.pc == 0x08AC40F8u) goto L_08AC40F8;
    return;
L_08AC40F8:
    ctx.gpr[31] = (0x08AC4100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 558u, 0x089CF18Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4100u) goto L_08AC4100;
    return;
L_08AC4100:
    ctx.gpr[31] = (0x08AC4108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 503u, 0x0882766Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4108u) goto L_08AC4108;
    return;
L_08AC4108:
    ctx.gpr[4] = (2246u << 16u);
    ctx.gpr[31] = (0x08AC4114u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23472));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 160u, 0x089F4F70u>(ctx, &aot_mem) && ctx.pc == 0x08AC4114u) goto L_08AC4114;
    return;
L_08AC4114:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-952));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC4128u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4128u) goto L_08AC4128;
    return;
L_08AC4128:
    ctx.gpr[31] = (0x08AC4130u);
    ctx.gpr[4] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 224u, 0x08941918u>(ctx, &aot_mem) && ctx.pc == 0x08AC4130u) goto L_08AC4130;
    return;
L_08AC4130:
    ctx.gpr[31] = (0x08AC4138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 358u, 0x08991788u>(ctx, &aot_mem) && ctx.pc == 0x08AC4138u) goto L_08AC4138;
    return;
L_08AC4138:
    ctx.gpr[31] = (0x08AC4140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 258u, 0x0896CE30u>(ctx, &aot_mem) && ctx.pc == 0x08AC4140u) goto L_08AC4140;
    return;
L_08AC4140:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC415C;
      }
      goto L_08AC414C;
    }
L_08AC414C:
    ctx.gpr[31] = (0x08AC4154u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 260u, 0x088690ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC4154u) goto L_08AC4154;
    return;
L_08AC4154:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4211), static_cast<std::uint8_t>(0u));
    goto L_08AC415C;
L_08AC415C:
    ctx.gpr[31] = (0x08AC4164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 495u, 0x08A87458u>(ctx, &aot_mem) && ctx.pc == 0x08AC4164u) goto L_08AC4164;
    return;
L_08AC4164:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC4178u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4178u) goto L_08AC4178;
    return;
L_08AC4178:
    ctx.gpr[31] = (0x08AC4180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 287u, 0x089EDEE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC4180u) goto L_08AC4180;
    return;
L_08AC4180:
    ctx.gpr[31] = (0x08AC4188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 858u, 0x0896FD74u>(ctx, &aot_mem) && ctx.pc == 0x08AC4188u) goto L_08AC4188;
    return;
L_08AC4188:
    ctx.gpr[31] = (0x08AC4190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 64u, 0x0895CA94u>(ctx, &aot_mem) && ctx.pc == 0x08AC4190u) goto L_08AC4190;
    return;
L_08AC4190:
    ctx.gpr[31] = (0x08AC4198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 318u, 0x08A35524u>(ctx, &aot_mem) && ctx.pc == 0x08AC4198u) goto L_08AC4198;
    return;
L_08AC4198:
    ctx.gpr[31] = (0x08AC41A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 47u, 0x08A906D0u>(ctx, &aot_mem) && ctx.pc == 0x08AC41A0u) goto L_08AC41A0;
    return;
L_08AC41A0:
    ctx.gpr[31] = (0x08AC41A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 235u, 0x0888CCD4u>(ctx, &aot_mem) && ctx.pc == 0x08AC41A8u) goto L_08AC41A8;
    return;
L_08AC41A8:
    ctx.gpr[31] = (0x08AC41B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 582u, 0x088ABC44u>(ctx, &aot_mem) && ctx.pc == 0x08AC41B0u) goto L_08AC41B0;
    return;
L_08AC41B0:
    ctx.gpr[31] = (0x08AC41B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 815u, 0x0893F9B8u>(ctx, &aot_mem) && ctx.pc == 0x08AC41B8u) goto L_08AC41B8;
    return;
L_08AC41B8:
    ctx.gpr[31] = (0x08AC41C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 308u, 0x08A8606Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC41C0u) goto L_08AC41C0;
    return;
L_08AC41C0:
    ctx.gpr[31] = (0x08AC41C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 528u, 0x0886A6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AC41C8u) goto L_08AC41C8;
    return;
L_08AC41C8:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AC41E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14052));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC41E0u) goto L_08AC41E0;
    return;
L_08AC41E0:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AC41F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14080));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC41F8u) goto L_08AC41F8;
    return;
L_08AC41F8:
    ctx.gpr[31] = (0x08AC4200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 374u, 0x089FD8A0u>(ctx, &aot_mem) && ctx.pc == 0x08AC4200u) goto L_08AC4200;
    return;
L_08AC4200:
    ctx.gpr[31] = (0x08AC4208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 905u, 0x0897F7FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4208u) goto L_08AC4208;
    return;
L_08AC4208:
    ctx.gpr[31] = (0x08AC4210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 155u, 0x08990B60u>(ctx, &aot_mem) && ctx.pc == 0x08AC4210u) goto L_08AC4210;
    return;
L_08AC4210:
    ctx.gpr[31] = (0x08AC4218u);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-936));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 329u, 0x089353A0u>(ctx, &aot_mem) && ctx.pc == 0x08AC4218u) goto L_08AC4218;
    return;
L_08AC4218:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC422Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC422Cu) goto L_08AC422C;
    return;
L_08AC422C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC42A0;
      }
      goto L_08AC4238;
    }
L_08AC4238:
    ctx.gpr[31] = (0x08AC4240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 615u, 0x088634DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4240u) goto L_08AC4240;
    return;
L_08AC4240:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AC4258u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14108));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4258u) goto L_08AC4258;
    return;
L_08AC4258:
    ctx.gpr[31] = (0x08AC4260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 356u, 0x088697ECu>(ctx, &aot_mem) && ctx.pc == 0x08AC4260u) goto L_08AC4260;
    return;
L_08AC4260:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AC4278u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14132));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4278u) goto L_08AC4278;
    return;
L_08AC4278:
    ctx.gpr[31] = (0x08AC4280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 316u, 0x08A225A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC4280u) goto L_08AC4280;
    return;
L_08AC4280:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AC4298u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14152));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4298u) goto L_08AC4298;
    return;
L_08AC4298:
    ctx.gpr[31] = (0x08AC42A0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 585u, 0x08AD3558u>(ctx, &aot_mem) && ctx.pc == 0x08AC42A0u) goto L_08AC42A0;
    return;
L_08AC42A0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-920));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC42B4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC42B4u) goto L_08AC42B4;
    return;
L_08AC42B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC42C4u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7856), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AC42C4u) goto L_08AC42C4;
    return;
L_08AC42C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC42D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 941u, 0x0898BA34u>(ctx, &aot_mem) && ctx.pc == 0x08AC42D0u) goto L_08AC42D0;
    return;
L_08AC42D0:
    ctx.gpr[31] = (0x08AC42D8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AC42D8u) goto L_08AC42D8;
    return;
L_08AC42D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC42E4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 941u, 0x0898BA34u>(ctx, &aot_mem) && ctx.pc == 0x08AC42E4u) goto L_08AC42E4;
    return;
L_08AC42E4:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08AC42F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC42F0u) goto L_08AC42F0;
    return;
L_08AC42F0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08AC4318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(29232));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC43B4;
      }
      goto L_08AC434C;
    }
L_08AC434C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4380;
      }
      goto L_08AC4358;
    }
L_08AC4358:
    ctx.gpr[31] = (0x08AC4360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 615u, 0x088634DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4360u) goto L_08AC4360;
    return;
L_08AC4360:
    ctx.gpr[31] = (0x08AC4368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 356u, 0x088697ECu>(ctx, &aot_mem) && ctx.pc == 0x08AC4368u) goto L_08AC4368;
    return;
L_08AC4368:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[31] = (0x08AC4378u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 316u, 0x08A225A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC4378u) goto L_08AC4378;
    return;
L_08AC4378:
    ctx.gpr[31] = (0x08AC4380u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 585u, 0x08AD3558u>(ctx, &aot_mem) && ctx.pc == 0x08AC4380u) goto L_08AC4380;
    return;
L_08AC4380:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26341), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC43B0;
      }
      goto L_08AC4398;
    }
L_08AC4398:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[31] = (0x08AC43A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 316u, 0x08A225A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC43A8u) goto L_08AC43A8;
    return;
L_08AC43A8:
    ctx.gpr[31] = (0x08AC43B0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 585u, 0x08AD3558u>(ctx, &aot_mem) && ctx.pc == 0x08AC43B0u) goto L_08AC43B0;
    return;
L_08AC43B0:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4211), static_cast<std::uint8_t>(0u));
    goto L_08AC43B4;
L_08AC43B4:
    ctx.gpr[31] = (0x08AC43BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 829u, 0x0898B448u>(ctx, &aot_mem) && ctx.pc == 0x08AC43BCu) goto L_08AC43BC;
    return;
L_08AC43BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AC43E0;
      }
      goto L_08AC43C8;
    }
L_08AC43C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC43E0;
      }
      goto L_08AC43D4;
    }
L_08AC43D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC43E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem) && ctx.pc == 0x08AC43E0u) goto L_08AC43E0;
    return;
L_08AC43E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC43F4;
      }
      goto L_08AC43EC;
    }
L_08AC43EC:
    ctx.gpr[31] = (0x08AC43F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem) && ctx.pc == 0x08AC43F4u) goto L_08AC43F4;
    return;
L_08AC43F4:
    ctx.gpr[31] = (0x08AC43FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 100u, 0x0884C998u>(ctx, &aot_mem) && ctx.pc == 0x08AC43FCu) goto L_08AC43FC;
    return;
L_08AC43FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
        goto L_08AC4414;
    }
    goto L_08AC4408;
L_08AC4408:
    ctx.gpr[31] = (0x08AC4410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4410u) goto L_08AC4410;
    return;
L_08AC4410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08AC4414;
L_08AC4414:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7376)));
        goto L_08AC4470;
    }
    goto L_08AC4428;
L_08AC4428:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2268)));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AC4444;
      }
      goto L_08AC4438;
    }
L_08AC4438:
    ctx.gpr[31] = (0x08AC4440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 212u, 0x08AB50BCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4440u) goto L_08AC4440;
    return;
L_08AC4440:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2268), static_cast<std::uint8_t>(0u));
    goto L_08AC4444;
L_08AC4444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4464;
      }
      goto L_08AC4450;
    }
L_08AC4450:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[17]);
    ctx.gpr[31] = (0x08AC445Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC445Cu) goto L_08AC445C;
    return;
L_08AC445C:
    ctx.gpr[31] = (0x08AC4464u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC4464u) goto L_08AC4464;
    return;
L_08AC4464:
    ctx.gpr[31] = (0x08AC446Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 450u, 0x0882E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC446Cu) goto L_08AC446C;
    return;
L_08AC446C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7376)));
    goto L_08AC4470;
L_08AC4470:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC44C4;
      }
      goto L_08AC4478;
    }
L_08AC4478:
    ctx.gpr[31] = (0x08AC4480u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7376), ctx.gpr[17]);
    ctx.pc = 0x08B73514u;
    return;
L_08AC4480:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AC4494u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_08AC4494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AC44C4;
L_08AC44C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4D90;
      }
      goto L_08AC44D0;
    }
L_08AC44D0:
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC4510;
      }
      goto L_08AC44F0;
    }
L_08AC44F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC4514;
      }
      goto L_08AC450C;
    }
L_08AC450C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AC4510;
L_08AC4510:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC4514;
L_08AC4514:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC455C;
      }
      goto L_08AC451C;
    }
L_08AC451C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC455C;
      }
      goto L_08AC4528;
    }
L_08AC4528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC4540;
    }
    goto L_08AC4534;
L_08AC4534:
    ctx.gpr[31] = (0x08AC453Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC453Cu) goto L_08AC453C;
    return;
L_08AC453C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC4540;
L_08AC4540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC455C;
      }
      goto L_08AC4558;
    }
L_08AC4558:
    ctx.gpr[18] = (0u | 1u);
    goto L_08AC455C;
L_08AC455C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC45C8;
      }
      goto L_08AC4568;
    }
L_08AC4568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC45C8;
      }
      goto L_08AC4578;
    }
L_08AC4578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08AC4590;
    }
    goto L_08AC4584;
L_08AC4584:
    ctx.gpr[31] = (0x08AC458Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC458Cu) goto L_08AC458C;
    return;
L_08AC458C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08AC4590;
L_08AC4590:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC45C8;
      }
      goto L_08AC45BC;
    }
L_08AC45BC:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AC4604;
      }
      goto L_08AC45C8;
    }
L_08AC45C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4604;
      }
      goto L_08AC45D4;
    }
L_08AC45D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4604;
      }
      goto L_08AC45EC;
    }
L_08AC45EC:
    ctx.gpr[31] = (0x08AC45F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 111u, 0x08ADC5E0u>(ctx, &aot_mem) && ctx.pc == 0x08AC45F4u) goto L_08AC45F4;
    return;
L_08AC45F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4604;
      }
      goto L_08AC45FC;
    }
L_08AC45FC:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08AC4604;
L_08AC4604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC461C;
    }
    goto L_08AC4610;
L_08AC4610:
    ctx.gpr[31] = (0x08AC4618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4618u) goto L_08AC4618;
    return;
L_08AC4618:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC461C;
L_08AC461C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC463C;
      }
      goto L_08AC462C;
    }
L_08AC462C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC4644;
      }
      goto L_08AC463C;
    }
L_08AC463C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC4644;
L_08AC4644:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4670;
      }
      goto L_08AC4650;
    }
L_08AC4650:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4670;
      }
      goto L_08AC465C;
    }
L_08AC465C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC4684;
      }
      goto L_08AC4668;
    }
L_08AC4668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC46A8;
      }
      goto L_08AC4670;
    }
L_08AC4670:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC467Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 867u, 0x08AC36FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC467Cu) goto L_08AC467C;
    return;
L_08AC467C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC50D8;
      }
      goto L_08AC4684;
    }
L_08AC4684:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC46A8;
      }
      goto L_08AC46A0;
    }
L_08AC46A0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC46A8;
L_08AC46A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC48D8;
      }
      goto L_08AC46B0;
    }
L_08AC46B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC46C4;
      }
      goto L_08AC46BC;
    }
L_08AC46BC:
    ctx.gpr[31] = (0x08AC46C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC46C4u) goto L_08AC46C4;
    return;
L_08AC46C4:
    ctx.gpr[31] = (0x08AC46CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 730u, 0x08A53CC4u>(ctx, &aot_mem) && ctx.pc == 0x08AC46CCu) goto L_08AC46CC;
    return;
L_08AC46CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC46E4;
    }
    goto L_08AC46D8;
L_08AC46D8:
    ctx.gpr[31] = (0x08AC46E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC46E0u) goto L_08AC46E0;
    return;
L_08AC46E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC46E4;
L_08AC46E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC47B4;
      }
      goto L_08AC46FC;
    }
L_08AC46FC:
    ctx.gpr[31] = (0x08AC4704u);
    // nop
    ctx.pc = 0x08B73514u;
    return;
L_08AC4704:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AC4718u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_08AC4718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (13702u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 14269u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7380)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AC4770;
      }
      goto L_08AC4764;
    }
L_08AC4764:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AC4770u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 867u, 0x08AC36FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4770u) goto L_08AC4770;
    return;
L_08AC4770:
    ctx.gpr[31] = (0x08AC4778u);
    // nop
    ctx.pc = 0x08B73514u;
    return;
L_08AC4778:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AC478Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_08AC478C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AC50D8;
      }
      goto L_08AC47B4;
    }
L_08AC47B4:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-908));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC47D0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC47D0u) goto L_08AC47D0;
    return;
L_08AC47D0:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AC4824u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 14u, 0x08AE00C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC4824u) goto L_08AC4824;
    return;
L_08AC4824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC483C;
    }
    goto L_08AC4830;
L_08AC4830:
    ctx.gpr[31] = (0x08AC4838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4838u) goto L_08AC4838;
    return;
L_08AC4838:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC483C;
L_08AC483C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC485C;
      }
      goto L_08AC484C;
    }
L_08AC484C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC4864;
      }
      goto L_08AC485C;
    }
L_08AC485C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC4864;
L_08AC4864:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC48B0;
      }
      goto L_08AC486C;
    }
L_08AC486C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC48B0;
      }
      goto L_08AC4878;
    }
L_08AC4878:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC488Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC488Cu) goto L_08AC488C;
    return;
L_08AC488C:
    ctx.gpr[31] = (0x08AC4894u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 889u, 0x08ADBA40u>(ctx, &aot_mem) && ctx.pc == 0x08AC4894u) goto L_08AC4894;
    return;
L_08AC4894:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC48C4;
      }
      goto L_08AC489C;
    }
L_08AC489C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC48A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 867u, 0x08AC36FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC48A8u) goto L_08AC48A8;
    return;
L_08AC48A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC50D8;
      }
      goto L_08AC48B0;
    }
L_08AC48B0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC48BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 867u, 0x08AC36FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC48BCu) goto L_08AC48BC;
    return;
L_08AC48BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC50D8;
      }
      goto L_08AC48C4;
    }
L_08AC48C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC48D8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC48D8u) goto L_08AC48D8;
    return;
L_08AC48D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC48F0;
    }
    goto L_08AC48E4;
L_08AC48E4:
    ctx.gpr[31] = (0x08AC48ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC48ECu) goto L_08AC48EC;
    return;
L_08AC48EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC48F0;
L_08AC48F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC4910;
      }
      goto L_08AC4900;
    }
L_08AC4900:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC4918;
      }
      goto L_08AC4910;
    }
L_08AC4910:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC4918;
L_08AC4918:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4940;
      }
      goto L_08AC4920;
    }
L_08AC4920:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4940;
      }
      goto L_08AC492C;
    }
L_08AC492C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4954;
      }
      goto L_08AC4938;
    }
L_08AC4938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4D88;
      }
      goto L_08AC4940;
    }
L_08AC4940:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC494Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 867u, 0x08AC36FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC494Cu) goto L_08AC494C;
    return;
L_08AC494C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC50D8;
      }
      goto L_08AC4954;
    }
L_08AC4954:
    ctx.gpr[31] = (0x08AC495Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 945u, 0x08ADBDFCu>(ctx, &aot_mem) && ctx.pc == 0x08AC495Cu) goto L_08AC495C;
    return;
L_08AC495C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4D20;
      }
      goto L_08AC4964;
    }
L_08AC4964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC497C;
    }
    goto L_08AC4970;
L_08AC4970:
    ctx.gpr[31] = (0x08AC4978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4978u) goto L_08AC4978;
    return;
L_08AC4978:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC497C;
L_08AC497C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC499C;
      }
      goto L_08AC498C;
    }
L_08AC498C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC49A4;
      }
      goto L_08AC499C;
    }
L_08AC499C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC49A4;
L_08AC49A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC49E4;
      }
      goto L_08AC49AC;
    }
L_08AC49AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC49E4;
      }
      goto L_08AC49B8;
    }
L_08AC49B8:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-908));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC49D0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC49D0u) goto L_08AC49D0;
    return;
L_08AC49D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC49F8;
      }
      goto L_08AC49DC;
    }
L_08AC49DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4A00;
      }
      goto L_08AC49E4;
    }
L_08AC49E4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC49F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 867u, 0x08AC36FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC49F0u) goto L_08AC49F0;
    return;
L_08AC49F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC50D8;
      }
      goto L_08AC49F8;
    }
L_08AC49F8:
    ctx.gpr[31] = (0x08AC4A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC4A00u) goto L_08AC4A00;
    return;
L_08AC4A00:
    ctx.gpr[31] = (0x08AC4A08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 573u, 0x089BAB28u>(ctx, &aot_mem) && ctx.pc == 0x08AC4A08u) goto L_08AC4A08;
    return;
L_08AC4A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC4A20;
    }
    goto L_08AC4A14;
L_08AC4A14:
    ctx.gpr[31] = (0x08AC4A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4A1Cu) goto L_08AC4A1C;
    return;
L_08AC4A1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC4A20;
L_08AC4A20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC4A40;
      }
      goto L_08AC4A30;
    }
L_08AC4A30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC4A48;
      }
      goto L_08AC4A40;
    }
L_08AC4A40:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC4A48;
L_08AC4A48:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4A70;
      }
      goto L_08AC4A50;
    }
L_08AC4A50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4A70;
      }
      goto L_08AC4A5C;
    }
L_08AC4A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4A84;
      }
      goto L_08AC4A68;
    }
L_08AC4A68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
      if (branch_taken) {
          goto L_08AC4A90;
      }
      goto L_08AC4A70;
    }
L_08AC4A70:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC4A7Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 867u, 0x08AC36FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4A7Cu) goto L_08AC4A7C;
    return;
L_08AC4A7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC50D8;
      }
      goto L_08AC4A84;
    }
L_08AC4A84:
    ctx.gpr[31] = (0x08AC4A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4A8Cu) goto L_08AC4A8C;
    return;
L_08AC4A8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC4A90;
L_08AC4A90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC4AB0;
      }
      goto L_08AC4AA0;
    }
L_08AC4AA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC4AB8;
      }
      goto L_08AC4AB0;
    }
L_08AC4AB0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC4AB8;
L_08AC4AB8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4AF4;
      }
      goto L_08AC4AC0;
    }
L_08AC4AC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4AF4;
      }
      goto L_08AC4ACC;
    }
L_08AC4ACC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC4AE0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4AE0u) goto L_08AC4AE0;
    return;
L_08AC4AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4B08;
      }
      goto L_08AC4AEC;
    }
L_08AC4AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
      if (branch_taken) {
          goto L_08AC4B14;
      }
      goto L_08AC4AF4;
    }
L_08AC4AF4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC4B00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 867u, 0x08AC36FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4B00u) goto L_08AC4B00;
    return;
L_08AC4B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC50D8;
      }
      goto L_08AC4B08;
    }
L_08AC4B08:
    ctx.gpr[31] = (0x08AC4B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4B10u) goto L_08AC4B10;
    return;
L_08AC4B10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC4B14;
L_08AC4B14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC4B34;
      }
      goto L_08AC4B24;
    }
L_08AC4B24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC4B3C;
      }
      goto L_08AC4B34;
    }
L_08AC4B34:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC4B3C;
L_08AC4B3C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4B6C;
      }
      goto L_08AC4B44;
    }
L_08AC4B44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4B6C;
      }
      goto L_08AC4B50;
    }
L_08AC4B50:
    ctx.gpr[31] = (0x08AC4B58u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 260u, 0x088690ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC4B58u) goto L_08AC4B58;
    return;
L_08AC4B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4B80;
      }
      goto L_08AC4B64;
    }
L_08AC4B64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
      if (branch_taken) {
          goto L_08AC4B8C;
      }
      goto L_08AC4B6C;
    }
L_08AC4B6C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC4B78u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 867u, 0x08AC36FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4B78u) goto L_08AC4B78;
    return;
L_08AC4B78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC50D8;
      }
      goto L_08AC4B80;
    }
L_08AC4B80:
    ctx.gpr[31] = (0x08AC4B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4B88u) goto L_08AC4B88;
    return;
L_08AC4B88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC4B8C;
L_08AC4B8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC4BAC;
      }
      goto L_08AC4B9C;
    }
L_08AC4B9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC4BB4;
      }
      goto L_08AC4BAC;
    }
L_08AC4BAC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC4BB4;
L_08AC4BB4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4BF8;
      }
      goto L_08AC4BBC;
    }
L_08AC4BBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4BF8;
      }
      goto L_08AC4BC8;
    }
L_08AC4BC8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC4BDCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4BDCu) goto L_08AC4BDC;
    return;
L_08AC4BDC:
    ctx.gpr[31] = (0x08AC4BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 356u, 0x088697ECu>(ctx, &aot_mem) && ctx.pc == 0x08AC4BE4u) goto L_08AC4BE4;
    return;
L_08AC4BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4C0C;
      }
      goto L_08AC4BF0;
    }
L_08AC4BF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
      if (branch_taken) {
          goto L_08AC4C18;
      }
      goto L_08AC4BF8;
    }
L_08AC4BF8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC4C04u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 867u, 0x08AC36FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4C04u) goto L_08AC4C04;
    return;
L_08AC4C04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC50D8;
      }
      goto L_08AC4C0C;
    }
L_08AC4C0C:
    ctx.gpr[31] = (0x08AC4C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4C14u) goto L_08AC4C14;
    return;
L_08AC4C14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC4C18;
L_08AC4C18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC4C38;
      }
      goto L_08AC4C28;
    }
L_08AC4C28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC4C40;
      }
      goto L_08AC4C38;
    }
L_08AC4C38:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC4C40;
L_08AC4C40:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4C94;
      }
      goto L_08AC4C48;
    }
L_08AC4C48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4C94;
      }
      goto L_08AC4C54;
    }
L_08AC4C54:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC4C68u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4C68u) goto L_08AC4C68;
    return;
L_08AC4C68:
    ctx.gpr[31] = (0x08AC4C70u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 347u, 0x08ADD460u>(ctx, &aot_mem) && ctx.pc == 0x08AC4C70u) goto L_08AC4C70;
    return;
L_08AC4C70:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[31] = (0x08AC4C80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 585u, 0x08AD3558u>(ctx, &aot_mem) && ctx.pc == 0x08AC4C80u) goto L_08AC4C80;
    return;
L_08AC4C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4CA8;
      }
      goto L_08AC4C8C;
    }
L_08AC4C8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
      if (branch_taken) {
          goto L_08AC4CB4;
      }
      goto L_08AC4C94;
    }
L_08AC4C94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC4CA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 867u, 0x08AC36FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4CA0u) goto L_08AC4CA0;
    return;
L_08AC4CA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC50D8;
      }
      goto L_08AC4CA8;
    }
L_08AC4CA8:
    ctx.gpr[31] = (0x08AC4CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4CB0u) goto L_08AC4CB0;
    return;
L_08AC4CB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC4CB4;
L_08AC4CB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC4CD4;
      }
      goto L_08AC4CC4;
    }
L_08AC4CC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC4CDC;
      }
      goto L_08AC4CD4;
    }
L_08AC4CD4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC4CDC;
L_08AC4CDC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4D0C;
      }
      goto L_08AC4CE4;
    }
L_08AC4CE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4D0C;
      }
      goto L_08AC4CF0;
    }
L_08AC4CF0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC4D04u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4D04u) goto L_08AC4D04;
    return;
L_08AC4D04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4D88;
      }
      goto L_08AC4D0C;
    }
L_08AC4D0C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC4D18u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 867u, 0x08AC36FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4D18u) goto L_08AC4D18;
    return;
L_08AC4D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC50D8;
      }
      goto L_08AC4D20;
    }
L_08AC4D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC4D38;
    }
    goto L_08AC4D2C;
L_08AC4D2C:
    ctx.gpr[31] = (0x08AC4D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4D34u) goto L_08AC4D34;
    return;
L_08AC4D34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC4D38;
L_08AC4D38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC4D58;
      }
      goto L_08AC4D48;
    }
L_08AC4D48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC4D60;
      }
      goto L_08AC4D58;
    }
L_08AC4D58:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC4D60;
L_08AC4D60:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4D74;
      }
      goto L_08AC4D68;
    }
L_08AC4D68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4D80;
      }
      goto L_08AC4D74;
    }
L_08AC4D74:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC4D80u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 867u, 0x08AC36FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4D80u) goto L_08AC4D80;
    return;
L_08AC4D80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC50D8;
      }
      goto L_08AC4D88;
    }
L_08AC4D88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4DDC;
      }
      goto L_08AC4D90;
    }
L_08AC4D90:
    ctx.gpr[31] = (0x08AC4D98u);
    // nop
    ctx.pc = 0x08B73514u;
    return;
L_08AC4D98:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AC4DACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_08AC4DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AC4DDC;
L_08AC4DDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4E38;
      }
      goto L_08AC4DF0;
    }
L_08AC4DF0:
    ctx.gpr[31] = (0x08AC4DF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 300u, 0x08A8D970u>(ctx, &aot_mem) && ctx.pc == 0x08AC4DF8u) goto L_08AC4DF8;
    return;
L_08AC4DF8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AC4E04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B73434u;
    return;
L_08AC4E04:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x08AC4E14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B7352Cu;
    return;
L_08AC4E14:
    ctx.gpr[31] = (0x08AC4E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 594u, 0x08AD35D0u>(ctx, &aot_mem) && ctx.pc == 0x08AC4E1Cu) goto L_08AC4E1C;
    return;
L_08AC4E1C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08AC4E28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B73434u;
    return;
L_08AC4E28:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x08AC4E38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B7352Cu;
    return;
L_08AC4E38:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11240), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4E50;
      }
      goto L_08AC4E48;
    }
L_08AC4E48:
    ctx.gpr[31] = (0x08AC4E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4E50u) goto L_08AC4E50;
    return;
L_08AC4E50:
    ctx.gpr[31] = (0x08AC4E58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 27u, 0x089EC260u>(ctx, &aot_mem) && ctx.pc == 0x08AC4E58u) goto L_08AC4E58;
    return;
L_08AC4E58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8360)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC50D8;
      }
      goto L_08AC4E6C;
    }
L_08AC4E6C:
    ctx.gpr[31] = (0x08AC4E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 36u, 0x08AF431Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4E74u) goto L_08AC4E74;
    return;
L_08AC4E74:
    ctx.gpr[31] = (0x08AC4E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 154u, 0x08990B58u>(ctx, &aot_mem) && ctx.pc == 0x08AC4E7Cu) goto L_08AC4E7C;
    return;
L_08AC4E7C:
    ctx.gpr[31] = (0x08AC4E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 156u, 0x08990B68u>(ctx, &aot_mem) && ctx.pc == 0x08AC4E84u) goto L_08AC4E84;
    return;
L_08AC4E84:
    ctx.gpr[31] = (0x08AC4E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 836u, 0x0898B490u>(ctx, &aot_mem) && ctx.pc == 0x08AC4E8Cu) goto L_08AC4E8C;
    return;
L_08AC4E8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4182)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4EA0;
      }
      goto L_08AC4E98;
    }
L_08AC4E98:
    ctx.gpr[31] = (0x08AC4EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 229u, 0x089419D0u>(ctx, &aot_mem) && ctx.pc == 0x08AC4EA0u) goto L_08AC4EA0;
    return;
L_08AC4EA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4EB8;
      }
      goto L_08AC4EAC;
    }
L_08AC4EAC:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08AC4EB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 353u, 0x08ADD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4EB8u) goto L_08AC4EB8;
    return;
L_08AC4EB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4ECC;
      }
      goto L_08AC4EC4;
    }
L_08AC4EC4:
    ctx.gpr[31] = (0x08AC4ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 19u, 0x08AFC6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4ECCu) goto L_08AC4ECC;
    return;
L_08AC4ECC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4EE0;
      }
      goto L_08AC4ED8;
    }
L_08AC4ED8:
    ctx.gpr[31] = (0x08AC4EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 356u, 0x088697ECu>(ctx, &aot_mem) && ctx.pc == 0x08AC4EE0u) goto L_08AC4EE0;
    return;
L_08AC4EE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4F2C;
      }
      goto L_08AC4EEC;
    }
L_08AC4EEC:
    ctx.gpr[31] = (0x08AC4EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 163u, 0x0895D350u>(ctx, &aot_mem) && ctx.pc == 0x08AC4EF4u) goto L_08AC4EF4;
    return;
L_08AC4EF4:
    ctx.gpr[31] = (0x08AC4EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 51u, 0x08AB0444u>(ctx, &aot_mem) && ctx.pc == 0x08AC4EFCu) goto L_08AC4EFC;
    return;
L_08AC4EFC:
    ctx.gpr[31] = (0x08AC4F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 707u, 0x089FFDB0u>(ctx, &aot_mem) && ctx.pc == 0x08AC4F04u) goto L_08AC4F04;
    return;
L_08AC4F04:
    ctx.gpr[31] = (0x08AC4F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 211u, 0x089F112Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4F0Cu) goto L_08AC4F0C;
    return;
L_08AC4F0C:
    ctx.gpr[31] = (0x08AC4F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 319u, 0x08A3552Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4F14u) goto L_08AC4F14;
    return;
L_08AC4F14:
    ctx.gpr[31] = (0x08AC4F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 12u, 0x08B200E4u>(ctx, &aot_mem) && ctx.pc == 0x08AC4F1Cu) goto L_08AC4F1C;
    return;
L_08AC4F1C:
    ctx.gpr[31] = (0x08AC4F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 561u, 0x089CF1D8u>(ctx, &aot_mem) && ctx.pc == 0x08AC4F24u) goto L_08AC4F24;
    return;
L_08AC4F24:
    ctx.gpr[31] = (0x08AC4F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 508u, 0x08827730u>(ctx, &aot_mem) && ctx.pc == 0x08AC4F2Cu) goto L_08AC4F2C;
    return;
L_08AC4F2C:
    ctx.gpr[31] = (0x08AC4F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 972u, 0x0897FECCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4F34u) goto L_08AC4F34;
    return;
L_08AC4F34:
    ctx.gpr[31] = (0x08AC4F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 215u, 0x08900F14u>(ctx, &aot_mem) && ctx.pc == 0x08AC4F3Cu) goto L_08AC4F3C;
    return;
L_08AC4F3C:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[31] = (0x08AC4F48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14864));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 27u, 0x089D0224u>(ctx, &aot_mem) && ctx.pc == 0x08AC4F48u) goto L_08AC4F48;
    return;
L_08AC4F48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4F94;
      }
      goto L_08AC4F54;
    }
L_08AC4F54:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08AC4F60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B73434u;
    return;
L_08AC4F60:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[31] = (0x08AC4F70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B7352Cu;
    return;
L_08AC4F70:
    ctx.gpr[31] = (0x08AC4F78u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 742u, 0x089C72B8u>(ctx, &aot_mem) && ctx.pc == 0x08AC4F78u) goto L_08AC4F78;
    return;
L_08AC4F78:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08AC4F84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B73434u;
    return;
L_08AC4F84:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08AC4F94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B7352Cu;
    return;
L_08AC4F94:
    ctx.gpr[31] = (0x08AC4F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 126u, 0x08A40B38u>(ctx, &aot_mem) && ctx.pc == 0x08AC4F9Cu) goto L_08AC4F9C;
    return;
L_08AC4F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
        goto L_08AC4FB4;
    }
    goto L_08AC4FA8;
L_08AC4FA8:
    ctx.gpr[31] = (0x08AC4FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4FB0u) goto L_08AC4FB0;
    return;
L_08AC4FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08AC4FB4;
L_08AC4FB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4FC8;
      }
      goto L_08AC4FC0;
    }
L_08AC4FC0:
    ctx.gpr[31] = (0x08AC4FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 324u, 0x08AED518u>(ctx, &aot_mem) && ctx.pc == 0x08AC4FC8u) goto L_08AC4FC8;
    return;
L_08AC4FC8:
    ctx.gpr[31] = (0x08AC4FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 2u, 0x08970014u>(ctx, &aot_mem) && ctx.pc == 0x08AC4FD0u) goto L_08AC4FD0;
    return;
L_08AC4FD0:
    ctx.gpr[31] = (0x08AC4FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 245u, 0x0888CD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4FD8u) goto L_08AC4FD8;
    return;
L_08AC4FD8:
    ctx.gpr[31] = (0x08AC4FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 98u, 0x0895CDA4u>(ctx, &aot_mem) && ctx.pc == 0x08AC4FE0u) goto L_08AC4FE0;
    return;
L_08AC4FE0:
    ctx.gpr[31] = (0x08AC4FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 327u, 0x08A861FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4FE8u) goto L_08AC4FE8;
    return;
L_08AC4FE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5004;
      }
      goto L_08AC4FFC;
    }
L_08AC4FFC:
    ctx.gpr[31] = (0x08AC5004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 804u, 0x089538D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC5004u) goto L_08AC5004;
    return;
L_08AC5004:
    ctx.gpr[31] = (0x08AC500Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 93u, 0x08898CA4u>(ctx, &aot_mem) && ctx.pc == 0x08AC500Cu) goto L_08AC500C;
    return;
L_08AC500C:
    ctx.gpr[4] = (2280u << 16u);
    ctx.gpr[31] = (0x08AC5018u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2352));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 168u, 0x08B20E40u>(ctx, &aot_mem) && ctx.pc == 0x08AC5018u) goto L_08AC5018;
    return;
L_08AC5018:
    ctx.gpr[31] = (0x08AC5020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 523u, 0x088F286Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC5020u) goto L_08AC5020;
    return;
L_08AC5020:
    ctx.gpr[31] = (0x08AC5028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 270u, 0x0896CF34u>(ctx, &aot_mem) && ctx.pc == 0x08AC5028u) goto L_08AC5028;
    return;
L_08AC5028:
    ctx.gpr[31] = (0x08AC5030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 65u, 0x08A90850u>(ctx, &aot_mem) && ctx.pc == 0x08AC5030u) goto L_08AC5030;
    return;
L_08AC5030:
    ctx.gpr[31] = (0x08AC5038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 602u, 0x088ABDC4u>(ctx, &aot_mem) && ctx.pc == 0x08AC5038u) goto L_08AC5038;
    return;
L_08AC5038:
    ctx.gpr[31] = (0x08AC5040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 818u, 0x0893F9E0u>(ctx, &aot_mem) && ctx.pc == 0x08AC5040u) goto L_08AC5040;
    return;
L_08AC5040:
    ctx.gpr[31] = (0x08AC5048u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 340u, 0x088DE140u>(ctx, &aot_mem) && ctx.pc == 0x08AC5048u) goto L_08AC5048;
    return;
L_08AC5048:
    ctx.gpr[31] = (0x08AC5050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 433u, 0x08AAE3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC5050u) goto L_08AC5050;
    return;
L_08AC5050:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4212)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5070;
      }
      goto L_08AC5064;
    }
L_08AC5064:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08AC5070u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 316u, 0x08A225A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC5070u) goto L_08AC5070;
    return;
L_08AC5070:
    ctx.gpr[31] = (0x08AC5078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 537u, 0x0896740Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC5078u) goto L_08AC5078;
    return;
L_08AC5078:
    ctx.gpr[31] = (0x08AC5080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 582u, 0x0886AA64u>(ctx, &aot_mem) && ctx.pc == 0x08AC5080u) goto L_08AC5080;
    return;
L_08AC5080:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC50B8;
      }
      goto L_08AC508C;
    }
L_08AC508C:
    ctx.gpr[31] = (0x08AC5094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 325u, 0x08981470u>(ctx, &aot_mem) && ctx.pc == 0x08AC5094u) goto L_08AC5094;
    return;
L_08AC5094:
    ctx.gpr[31] = (0x08AC509Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 280u, 0x08981124u>(ctx, &aot_mem) && ctx.pc == 0x08AC509Cu) goto L_08AC509C;
    return;
L_08AC509C:
    ctx.gpr[31] = (0x08AC50A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 462u, 0x08A97168u>(ctx, &aot_mem) && ctx.pc == 0x08AC50A4u) goto L_08AC50A4;
    return;
L_08AC50A4:
    ctx.gpr[31] = (0x08AC50ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 470u, 0x08A971F0u>(ctx, &aot_mem) && ctx.pc == 0x08AC50ACu) goto L_08AC50AC;
    return;
L_08AC50AC:
    ctx.gpr[4] = (2246u << 16u);
    ctx.gpr[31] = (0x08AC50B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23472));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 198u, 0x089F5314u>(ctx, &aot_mem) && ctx.pc == 0x08AC50B8u) goto L_08AC50B8;
    return;
L_08AC50B8:
    ctx.gpr[31] = (0x08AC50C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 298u, 0x08B411BCu>(ctx, &aot_mem) && ctx.pc == 0x08AC50C0u) goto L_08AC50C0;
    return;
L_08AC50C0:
    ctx.gpr[31] = (0x08AC50C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 616u, 0x08B22F60u>(ctx, &aot_mem) && ctx.pc == 0x08AC50C8u) goto L_08AC50C8;
    return;
L_08AC50C8:
    ctx.gpr[31] = (0x08AC50D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 321u, 0x08B412D8u>(ctx, &aot_mem) && ctx.pc == 0x08AC50D0u) goto L_08AC50D0;
    return;
L_08AC50D0:
    ctx.gpr[31] = (0x08AC50D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 338u, 0x08B4142Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC50D8u) goto L_08AC50D8;
    return;
L_08AC50D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC50FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC516C;
      }
      goto L_08AC514C;
    }
L_08AC514C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC5180;
      }
      goto L_08AC5164;
    }
L_08AC5164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC51B8;
      }
      goto L_08AC516C;
    }
L_08AC516C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC53F4;
      }
      goto L_08AC5180;
    }
L_08AC5180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC51A0;
      }
      goto L_08AC5190;
    }
L_08AC5190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2192), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC51B8;
      }
      goto L_08AC51A0;
    }
L_08AC51A0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2192), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC53F4;
      }
      goto L_08AC51B8;
    }
L_08AC51B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16000u << 16u);
    ctx.gpr[31] = (0x08AC51DCu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08AC51DCu) goto L_08AC51DC;
    return;
L_08AC51DC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(680)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AC53CC;
      }
      goto L_08AC5214;
    }
L_08AC5214:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14240)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC522C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_08AC524C;
L_08AC524C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC53F4;
      }
      goto L_08AC52A0;
    }
L_08AC52A0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC524C;
      }
      goto L_08AC52CC;
    }
L_08AC52CC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC524C;
      }
      goto L_08AC52F8;
    }
L_08AC52F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC524C;
      }
      goto L_08AC5320;
    }
L_08AC5320:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC524C;
      }
      goto L_08AC534C;
    }
L_08AC534C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC524C;
      }
      goto L_08AC5378;
    }
L_08AC5378:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC524C;
      }
      goto L_08AC53A4;
    }
L_08AC53A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC524C;
      }
      goto L_08AC53CC;
    }
L_08AC53CC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC524C;
      }
      goto L_08AC53F4;
    }
L_08AC53F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5410:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(680)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5458;
      }
      goto L_08AC5438;
    }
L_08AC5438:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14272)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5464;
      }
      goto L_08AC5458;
    }
L_08AC5458:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AC5464u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14200));
    goto L_08AC50FC;
L_08AC5464:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(680), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC547C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5490:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5498:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC54A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC56F0;
      }
      goto L_08AC54D8;
    }
L_08AC54D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AC5510;
      }
      goto L_08AC54F8;
    }
L_08AC54F8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC551C;
      }
      goto L_08AC5510;
    }
L_08AC5510:
    ctx.gpr[31] = (0x08AC5518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 365u, 0x08B658A0u>(ctx, &aot_mem) && ctx.pc == 0x08AC5518u) goto L_08AC5518;
    return;
L_08AC5518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AC551C;
L_08AC551C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AC5674;
    }
    goto L_08AC553C;
L_08AC553C:
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AC555C;
      }
      goto L_08AC5548;
    }
L_08AC5548:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC556C;
      }
      goto L_08AC555C;
    }
L_08AC555C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08AC556C;
L_08AC556C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC5594;
      }
      goto L_08AC5574;
    }
L_08AC5574:
    ctx.gpr[31] = (0x08AC557Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08AC557Cu) goto L_08AC557C;
    return;
L_08AC557C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5594;
      }
      goto L_08AC5588;
    }
L_08AC5588:
    ctx.gpr[31] = (0x08AC5590u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08AC5590u) goto L_08AC5590;
    return;
L_08AC5590:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AC5594;
L_08AC5594:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AC55C0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AC6458;
L_08AC55C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC55EC;
      }
      goto L_08AC55D0;
    }
L_08AC55D0:
    ctx.gpr[20] = (ctx.gpr[23] - ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AC55E4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC55E4u) goto L_08AC55E4;
    return;
L_08AC55E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AC55EC;
      }
      goto L_08AC55EC;
    }
L_08AC55EC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[23] = (ctx.gpr[20] | 0u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC5614u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AC6458;
L_08AC5614:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[22];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC562C;
      }
      goto L_08AC5624;
    }
L_08AC5624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AC5644;
      }
      goto L_08AC562C;
    }
L_08AC562C:
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AC5640u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC5640u) goto L_08AC5640;
    return;
L_08AC5640:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    goto L_08AC5644;
L_08AC5644:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5660;
      }
      goto L_08AC5658;
    }
L_08AC5658:
    ctx.gpr[31] = (0x08AC5660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC5660u) goto L_08AC5660;
    return;
L_08AC5660:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC56F0;
      }
      goto L_08AC5674;
    }
L_08AC5674:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08AC569Cu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AC6458;
L_08AC569C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[21];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC56B8;
      }
      goto L_08AC56AC;
    }
L_08AC56AC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AC56D0;
      }
      goto L_08AC56B8;
    }
L_08AC56B8:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AC56C8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC56C8u) goto L_08AC56C8;
    return;
L_08AC56C8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    goto L_08AC56D0;
L_08AC56D0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AC56F0;
L_08AC56F0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08AC5720:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC5920;
      }
      goto L_08AC5758;
    }
L_08AC5758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AC5790;
      }
      goto L_08AC5778;
    }
L_08AC5778:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC579C;
      }
      goto L_08AC5790;
    }
L_08AC5790:
    ctx.gpr[31] = (0x08AC5798u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 365u, 0x08B658A0u>(ctx, &aot_mem) && ctx.pc == 0x08AC5798u) goto L_08AC5798;
    return;
L_08AC5798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AC579C;
L_08AC579C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC58CC;
      }
      goto L_08AC57BC;
    }
L_08AC57BC:
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AC57DC;
      }
      goto L_08AC57C8;
    }
L_08AC57C8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC57EC;
      }
      goto L_08AC57DC;
    }
L_08AC57DC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08AC57EC;
L_08AC57EC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC5814;
      }
      goto L_08AC57F4;
    }
L_08AC57F4:
    ctx.gpr[31] = (0x08AC57FCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08AC57FCu) goto L_08AC57FC;
    return;
L_08AC57FC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5814;
      }
      goto L_08AC5808;
    }
L_08AC5808:
    ctx.gpr[31] = (0x08AC5810u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08AC5810u) goto L_08AC5810;
    return;
L_08AC5810:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AC5814;
L_08AC5814:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AC5840u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AC6458;
L_08AC5840:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC586C;
      }
      goto L_08AC5850;
    }
L_08AC5850:
    ctx.gpr[20] = (ctx.gpr[23] - ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AC5864u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC5864u) goto L_08AC5864;
    return;
L_08AC5864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AC586C;
      }
      goto L_08AC586C;
    }
L_08AC586C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AC5880;
      }
      goto L_08AC5878;
    }
L_08AC5878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AC589C;
      }
      goto L_08AC5880;
    }
L_08AC5880:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AC5898u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC5898u) goto L_08AC5898;
    return;
L_08AC5898:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    goto L_08AC589C;
L_08AC589C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC58B8;
      }
      goto L_08AC58B0;
    }
L_08AC58B0:
    ctx.gpr[31] = (0x08AC58B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC58B8u) goto L_08AC58B8;
    return;
L_08AC58B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC5920;
      }
      goto L_08AC58CC;
    }
L_08AC58CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC58E4;
      }
      goto L_08AC58DC;
    }
L_08AC58DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AC5900;
      }
      goto L_08AC58E4;
    }
L_08AC58E4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AC58F8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC58F8u) goto L_08AC58F8;
    return;
L_08AC58F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_08AC5900;
L_08AC5900:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AC5920;
L_08AC5920:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5950:
    ctx.gpr[2] = (2220u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(22864));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC595C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC596Cu);
    // nop
    goto L_08AC5950;
L_08AC596C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5978:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC5994u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08AC5950;
L_08AC5994:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08AC59BC;
    }
    goto L_08AC599C;
L_08AC599C:
    ctx.gpr[31] = (0x08AC59A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x08980688u>(ctx, &aot_mem) && ctx.pc == 0x08AC59A4u) goto L_08AC59A4;
    return;
L_08AC59A4:
    ctx.gpr[4] = (ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC59BC;
      }
      goto L_08AC59B8;
    }
L_08AC59B8:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AC59BC;
L_08AC59BC:
    ctx.gpr[2] = (ctx.gpr[17] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC59D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC59E8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 120u, 0x089806DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC59E8u) goto L_08AC59E8;
    return;
L_08AC59E8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32744));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-868));
    ctx.gpr[31] = (0x08AC5A10u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08AC5A10u) goto L_08AC5A10;
    return;
L_08AC5A10:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AC5A30u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC5A30u) goto L_08AC5A30;
    return;
L_08AC5A30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-896)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-892)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[7] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x08AC5A6Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(21628));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC5A6Cu) goto L_08AC5A6C;
    return;
L_08AC5A6C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5A80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC5AD4;
      }
      goto L_08AC5A9C;
    }
L_08AC5A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AC5AC0;
      }
      goto L_08AC5AA8;
    }
L_08AC5AA8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08AC5AC4;
    }
    goto L_08AC5AB0;
L_08AC5AB0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08AC5AC4;
    }
    goto L_08AC5AB8;
L_08AC5AB8:
    ctx.gpr[31] = (0x08AC5AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC5AC0u) goto L_08AC5AC0;
    return;
L_08AC5AC0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08AC5AC4;
L_08AC5AC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5AD4;
      }
      goto L_08AC5ACC;
    }
L_08AC5ACC:
    ctx.gpr[31] = (0x08AC5AD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC5AD4u) goto L_08AC5AD4;
    return;
L_08AC5AD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5AE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC5C64;
      }
      goto L_08AC5B1C;
    }
L_08AC5B1C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32744));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    goto L_08AC5B34;
L_08AC5B34:
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC5BC0;
      }
      goto L_08AC5B64;
    }
L_08AC5B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
        goto L_08AC5B98;
    }
    goto L_08AC5B78;
L_08AC5B78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AC5B94u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC5B94u) goto L_08AC5B94;
    return;
L_08AC5B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    goto L_08AC5B98;
L_08AC5B98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AC5B64;
      }
      goto L_08AC5BC0;
    }
L_08AC5BC0:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AC5BEC;
      }
      goto L_08AC5BD8;
    }
L_08AC5BD8:
    ctx.gpr[21] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08AC5BE4u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC5BE4u) goto L_08AC5BE4;
    return;
L_08AC5BE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AC5BEC;
      }
      goto L_08AC5BEC;
    }
L_08AC5BEC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AC5B34;
      }
      goto L_08AC5C04;
    }
L_08AC5C04:
    ctx.gpr[7] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AC5C24u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(23168));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem) && ctx.pc == 0x08AC5C24u) goto L_08AC5C24;
    return;
L_08AC5C24:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC5C48;
      }
      goto L_08AC5C2C;
    }
L_08AC5C2C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08AC5C44;
      }
      goto L_08AC5C34;
    }
L_08AC5C34:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_08AC5C48;
    }
    goto L_08AC5C3C;
L_08AC5C3C:
    ctx.gpr[31] = (0x08AC5C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC5C44u) goto L_08AC5C44;
    return;
L_08AC5C44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC5C48;
L_08AC5C48:
    ctx.gpr[31] = (0x08AC5C50u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 122u, 0x08980740u>(ctx, &aot_mem) && ctx.pc == 0x08AC5C50u) goto L_08AC5C50;
    return;
L_08AC5C50:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5C64;
      }
      goto L_08AC5C5C;
    }
L_08AC5C5C:
    ctx.gpr[31] = (0x08AC5C64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC5C64u) goto L_08AC5C64;
    return;
L_08AC5C64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5C90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC5CB8;
      }
      goto L_08AC5CA8;
    }
L_08AC5CA8:
    ctx.gpr[31] = (0x08AC5CB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC62A0;
L_08AC5CB0:
    ctx.gpr[31] = (0x08AC5CB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC632C;
L_08AC5CB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5CC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC5D34;
      }
      goto L_08AC5CE0;
    }
L_08AC5CE0:
    ctx.gpr[31] = (0x08AC5CE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC62A0;
L_08AC5CE8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(5)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(6)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x08AC5D2Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC5D2Cu) goto L_08AC5D2C;
    return;
L_08AC5D2C:
    ctx.gpr[31] = (0x08AC5D34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC632C;
L_08AC5D34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5D44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC5DDC;
      }
      goto L_08AC5DA0;
    }
L_08AC5DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08AC5DB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 82u, 0x08A00640u>(ctx, &aot_mem) && ctx.pc == 0x08AC5DB0u) goto L_08AC5DB0;
    return;
L_08AC5DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AC5DA0;
      }
      goto L_08AC5DDC;
    }
L_08AC5DDC:
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
L_08AC5DF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC5E38u);
    ctx.gpr[4] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AC5E38u) goto L_08AC5E38;
    return;
L_08AC5E38:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC5E7C;
      }
      goto L_08AC5E58;
    }
L_08AC5E58:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC5E74u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 66u, 0x08A00548u>(ctx, &aot_mem) && ctx.pc == 0x08AC5E74u) goto L_08AC5E74;
    return;
L_08AC5E74:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AC5E7C;
L_08AC5E7C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AC5F00;
      }
      goto L_08AC5EAC;
    }
L_08AC5EAC:
    ctx.gpr[7] = (0u | 0u);
    goto L_08AC5EB0;
L_08AC5EB0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AC5EF8;
      }
      goto L_08AC5EC4;
    }
L_08AC5EC4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AC5EB0;
      }
      goto L_08AC5EF0;
    }
L_08AC5EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5F00;
      }
      goto L_08AC5EF8;
    }
L_08AC5EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AC6044;
      }
      goto L_08AC5F00;
    }
L_08AC5F00:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC5F30;
      }
      goto L_08AC5F14;
    }
L_08AC5F14:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AC5F28;
      }
      goto L_08AC5F1C;
    }
L_08AC5F1C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08AC5F28;
L_08AC5F28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC6040;
      }
      goto L_08AC5F30;
    }
L_08AC5F30:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC5F70;
      }
      goto L_08AC5F60;
    }
L_08AC5F60:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AC5F7C;
      }
      goto L_08AC5F70;
    }
L_08AC5F70:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_08AC5F7C;
L_08AC5F7C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC5FBC;
      }
      goto L_08AC5F84;
    }
L_08AC5F84:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AC5F98u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08AC5F98u) goto L_08AC5F98;
    return;
L_08AC5F98:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AC5FBC;
      }
      goto L_08AC5FA8;
    }
L_08AC5FA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC5FB4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08AC5FB4u) goto L_08AC5FB4;
    return;
L_08AC5FB4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AC5FBC;
L_08AC5FBC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC5FD0;
      }
      goto L_08AC5FC8;
    }
L_08AC5FC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AC5FEC;
      }
      goto L_08AC5FD0;
    }
L_08AC5FD0:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AC5FE4u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC5FE4u) goto L_08AC5FE4;
    return;
L_08AC5FE4:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AC5FEC;
L_08AC5FEC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
        goto L_08AC6014;
    }
    goto L_08AC6000;
L_08AC6000:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AC6000;
      }
      goto L_08AC6010;
    }
L_08AC6010:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    goto L_08AC6014;
L_08AC6014:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC602C;
      }
      goto L_08AC6024;
    }
L_08AC6024:
    ctx.gpr[31] = (0x08AC602Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC602Cu) goto L_08AC602C;
    return;
L_08AC602C:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AC6040;
L_08AC6040:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    goto L_08AC6044;
L_08AC6044:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC6068:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC6120;
      }
      goto L_08AC60C4;
    }
L_08AC60C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08AC60F8;
    }
    goto L_08AC60D8;
L_08AC60D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AC60F4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC60F4u) goto L_08AC60F4;
    return;
L_08AC60F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08AC60F8;
L_08AC60F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AC60C4;
      }
      goto L_08AC6120;
    }
L_08AC6120:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AC614C;
      }
      goto L_08AC6134;
    }
L_08AC6134:
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AC6144u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC6144u) goto L_08AC6144;
    return;
L_08AC6144:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AC614C;
      }
      goto L_08AC614C;
    }
L_08AC614C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
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
L_08AC6170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC61AC;
      }
      goto L_08AC6194;
    }
L_08AC6194:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC61A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC61A4u) goto L_08AC61A4;
    return;
L_08AC61A4:
    ctx.gpr[31] = (0x08AC61ACu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-888));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC61ACu) goto L_08AC61AC;
    return;
L_08AC61AC:
    ctx.gpr[31] = (0x08AC61B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 601u, 0x0882E950u>(ctx, &aot_mem) && ctx.pc == 0x08AC61B4u) goto L_08AC61B4;
    return;
L_08AC61B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AC61C8;
      }
      goto L_08AC61C0;
    }
L_08AC61C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC61CC;
      }
      goto L_08AC61C8;
    }
L_08AC61C8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AC61CC;
L_08AC61CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC61E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC6224;
      }
      goto L_08AC6200;
    }
L_08AC6200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AC6218;
    }
    goto L_08AC620C;
L_08AC620C:
    ctx.gpr[31] = (0x08AC6214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AC6214u) goto L_08AC6214;
    return;
L_08AC6214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AC6218;
L_08AC6218:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08AC6224u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 601u, 0x089C6B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6224u) goto L_08AC6224;
    return;
L_08AC6224:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC6238:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC626C;
      }
      goto L_08AC6258;
    }
L_08AC6258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6274;
      }
      goto L_08AC6264;
    }
L_08AC6264:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
      if (branch_taken) {
          goto L_08AC6280;
      }
      goto L_08AC626C;
    }
L_08AC626C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AC628C;
      }
      goto L_08AC6274;
    }
L_08AC6274:
    ctx.gpr[31] = (0x08AC627Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AC627Cu) goto L_08AC627C;
    return;
L_08AC627C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AC6280;
L_08AC6280:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08AC628Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 544u, 0x089C68C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC628Cu) goto L_08AC628C;
    return;
L_08AC628C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC62A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC62B8u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x08AC62B8u) goto L_08AC62B8;
    return;
L_08AC62B8:
    ctx.gpr[31] = (0x08AC62C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC62C0u) goto L_08AC62C0;
    return;
L_08AC62C0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(5)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(6)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x08AC6304u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC6304u) goto L_08AC6304;
    return;
L_08AC6304:
    ctx.gpr[31] = (0x08AC630Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem) && ctx.pc == 0x08AC630Cu) goto L_08AC630C;
    return;
L_08AC630C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AC631Cu);
    ctx.gpr[4] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x08AC631Cu) goto L_08AC631C;
    return;
L_08AC631C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC632C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC6350u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x08AC6350u) goto L_08AC6350;
    return;
L_08AC6350:
    ctx.gpr[31] = (0x08AC6358u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x08AC6358u) goto L_08AC6358;
    return;
L_08AC6358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x08AC63A8u);
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x08AC63A8u) goto L_08AC63A8;
    return;
L_08AC63A8:
    ctx.gpr[31] = (0x08AC63B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 63u, 0x08B0C4CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC63B0u) goto L_08AC63B0;
    return;
L_08AC63B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC6404;
      }
      goto L_08AC63DC;
    }
L_08AC63DC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AC63E8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AC63E8u) goto L_08AC63E8;
    return;
L_08AC63E8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6400;
      }
      goto L_08AC63F4;
    }
L_08AC63F4:
    ctx.gpr[31] = (0x08AC63FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC63FCu) goto L_08AC63FC;
    return;
L_08AC63FC:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AC6400;
L_08AC6400:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08AC6404;
L_08AC6404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08AC6410u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AC6410u) goto L_08AC6410;
    return;
L_08AC6410:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AC643Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem) && ctx.pc == 0x08AC643Cu) goto L_08AC643C;
    return;
L_08AC643C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC6458:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC646C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC64ACu);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 165u, 0x08980A34u>(ctx, &aot_mem) && ctx.pc == 0x08AC64ACu) goto L_08AC64AC;
    return;
L_08AC64AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC64E8;
      }
      goto L_08AC64B4;
    }
L_08AC64B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 142u);
    ctx.gpr[31] = (0x08AC64C8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC64C8u) goto L_08AC64C8;
    return;
L_08AC64C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC64D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC64D4u) goto L_08AC64D4;
    return;
L_08AC64D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC64F0;
      }
      goto L_08AC64E0;
    }
L_08AC64E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC64F8;
      }
      goto L_08AC64E8;
    }
L_08AC64E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC6F68;
      }
      goto L_08AC64F0;
    }
L_08AC64F0:
    ctx.gpr[31] = (0x08AC64F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC64F8u) goto L_08AC64F8;
    return;
L_08AC64F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AC68D4;
      }
      goto L_08AC6504;
    }
L_08AC6504:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-868));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-856));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-852));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    goto L_08AC6528;
L_08AC6528:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 178u);
    ctx.gpr[31] = (0x08AC653Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC653Cu) goto L_08AC653C;
    return;
L_08AC653C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08AC654Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC654Cu) goto L_08AC654C;
    return;
L_08AC654C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC6560;
      }
      goto L_08AC6558;
    }
L_08AC6558:
    ctx.gpr[31] = (0x08AC6560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6560u) goto L_08AC6560;
    return;
L_08AC6560:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AC6570u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08AC6570u) goto L_08AC6570;
    return;
L_08AC6570:
    ctx.gpr[31] = (0x08AC6578u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 481u, 0x08AF6838u>(ctx, &aot_mem) && ctx.pc == 0x08AC6578u) goto L_08AC6578;
    return;
L_08AC6578:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC658C;
      }
      goto L_08AC6584;
    }
L_08AC6584:
    ctx.gpr[31] = (0x08AC658Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC658Cu) goto L_08AC658C;
    return;
L_08AC658C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 143u);
    ctx.gpr[31] = (0x08AC659Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC659Cu) goto L_08AC659C;
    return;
L_08AC659C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08AC65A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC65A8u) goto L_08AC65A8;
    return;
L_08AC65A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC65BC;
      }
      goto L_08AC65B4;
    }
L_08AC65B4:
    ctx.gpr[31] = (0x08AC65BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC65BCu) goto L_08AC65BC;
    return;
L_08AC65BC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC689C;
      }
      goto L_08AC65C4;
    }
L_08AC65C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(25));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AC65D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08AC65D8u) goto L_08AC65D8;
    return;
L_08AC65D8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC65E8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08AC65E8u) goto L_08AC65E8;
    return;
L_08AC65E8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 171u);
    ctx.gpr[31] = (0x08AC65F8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC65F8u) goto L_08AC65F8;
    return;
L_08AC65F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08AC6604u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6604u) goto L_08AC6604;
    return;
L_08AC6604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC6618;
      }
      goto L_08AC6610;
    }
L_08AC6610:
    ctx.gpr[31] = (0x08AC6618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6618u) goto L_08AC6618;
    return;
L_08AC6618:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC6628u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08AC6628u) goto L_08AC6628;
    return;
L_08AC6628:
    ctx.gpr[31] = (0x08AC6630u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 539u, 0x08AF6B04u>(ctx, &aot_mem) && ctx.pc == 0x08AC6630u) goto L_08AC6630;
    return;
L_08AC6630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC6644;
      }
      goto L_08AC663C;
    }
L_08AC663C:
    ctx.gpr[31] = (0x08AC6644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6644u) goto L_08AC6644;
    return;
L_08AC6644:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC6654u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6654u) goto L_08AC6654;
    return;
L_08AC6654:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6734;
      }
      goto L_08AC665C;
    }
L_08AC665C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (0x08AC6668u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6668u) goto L_08AC6668;
    return;
L_08AC6668:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC6674u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AC6674u) goto L_08AC6674;
    return;
L_08AC6674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
        goto L_08AC66F4;
    }
    goto L_08AC6694;
L_08AC6694:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC66B4;
      }
      goto L_08AC669C;
    }
L_08AC669C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC66ACu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC66ACu) goto L_08AC66AC;
    return;
L_08AC66AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08AC66B4;
L_08AC66B4:
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AC6734;
      }
      goto L_08AC66C4;
    }
L_08AC66C4:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC66E4;
      }
      goto L_08AC66D4;
    }
L_08AC66D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC66E0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC66E0u) goto L_08AC66E0;
    return;
L_08AC66E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08AC66E4;
L_08AC66E4:
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC6734;
      }
      goto L_08AC66F4;
    }
L_08AC66F4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[6]);
        goto L_08AC671C;
    }
    goto L_08AC66FC;
L_08AC66FC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AC670Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC670Cu) goto L_08AC670C;
    return;
L_08AC670C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[6]);
    goto L_08AC671C;
L_08AC671C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(181));
    ctx.gpr[31] = (0x08AC6734u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AC5720;
L_08AC6734:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AC6740u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6740u) goto L_08AC6740;
    return;
L_08AC6740:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6820;
      }
      goto L_08AC6748;
    }
L_08AC6748:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AC6754u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6754u) goto L_08AC6754;
    return;
L_08AC6754:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC6760u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AC6760u) goto L_08AC6760;
    return;
L_08AC6760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
        goto L_08AC67E0;
    }
    goto L_08AC6780;
L_08AC6780:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC67A0;
      }
      goto L_08AC6788;
    }
L_08AC6788:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC6798u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC6798u) goto L_08AC6798;
    return;
L_08AC6798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08AC67A0;
L_08AC67A0:
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AC6820;
      }
      goto L_08AC67B0;
    }
L_08AC67B0:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC67D0;
      }
      goto L_08AC67C0;
    }
L_08AC67C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC67CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC67CCu) goto L_08AC67CC;
    return;
L_08AC67CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08AC67D0;
L_08AC67D0:
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC6820;
      }
      goto L_08AC67E0;
    }
L_08AC67E0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[6]);
        goto L_08AC6808;
    }
    goto L_08AC67E8;
L_08AC67E8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AC67F8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC67F8u) goto L_08AC67F8;
    return;
L_08AC67F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[6]);
    goto L_08AC6808;
L_08AC6808:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(182), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(183));
    ctx.gpr[31] = (0x08AC6820u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AC5720;
L_08AC6820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AC6838u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    goto L_08AC5DF8;
L_08AC6838:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 143u);
    ctx.gpr[31] = (0x08AC6848u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6848u) goto L_08AC6848;
    return;
L_08AC6848:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08AC6854u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 113u, 0x08984650u>(ctx, &aot_mem) && ctx.pc == 0x08AC6854u) goto L_08AC6854;
    return;
L_08AC6854:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
      if (branch_taken) {
          goto L_08AC686C;
      }
      goto L_08AC6864;
    }
L_08AC6864:
    ctx.gpr[31] = (0x08AC686Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC686Cu) goto L_08AC686C;
    return;
L_08AC686C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_08AC6884;
    }
    goto L_08AC6878;
L_08AC6878:
    ctx.gpr[31] = (0x08AC6880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6880u) goto L_08AC6880;
    return;
L_08AC6880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08AC6884;
L_08AC6884:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6894;
      }
      goto L_08AC688C;
    }
L_08AC688C:
    ctx.gpr[31] = (0x08AC6894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6894u) goto L_08AC6894;
    return;
L_08AC6894:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC65C4;
      }
      goto L_08AC689C;
    }
L_08AC689C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 142u);
    ctx.gpr[31] = (0x08AC68ACu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC68ACu) goto L_08AC68AC;
    return;
L_08AC68AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08AC68B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 113u, 0x08984650u>(ctx, &aot_mem) && ctx.pc == 0x08AC68B8u) goto L_08AC68B8;
    return;
L_08AC68B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC68CC;
      }
      goto L_08AC68C4;
    }
L_08AC68C4:
    ctx.gpr[31] = (0x08AC68CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC68CCu) goto L_08AC68CC;
    return;
L_08AC68CC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AC6528;
      }
      goto L_08AC68D4;
    }
L_08AC68D4:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 144u);
    ctx.gpr[31] = (0x08AC68E4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC68E4u) goto L_08AC68E4;
    return;
L_08AC68E4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC68F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC68F4u) goto L_08AC68F4;
    return;
L_08AC68F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_08AC690C;
      }
      goto L_08AC6904;
    }
L_08AC6904:
    ctx.gpr[31] = (0x08AC690Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC690Cu) goto L_08AC690C;
    return;
L_08AC690C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC69BC;
      }
      goto L_08AC6914;
    }
L_08AC6914:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (0u | 171u);
    ctx.gpr[31] = (0x08AC6924u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6924u) goto L_08AC6924;
    return;
L_08AC6924:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x08AC6930u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6930u) goto L_08AC6930;
    return;
L_08AC6930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC6944;
      }
      goto L_08AC693C;
    }
L_08AC693C:
    ctx.gpr[31] = (0x08AC6944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6944u) goto L_08AC6944;
    return;
L_08AC6944:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6978;
      }
      goto L_08AC694C;
    }
L_08AC694C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x08AC695Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08AC695Cu) goto L_08AC695C;
    return;
L_08AC695C:
    ctx.gpr[31] = (0x08AC6964u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 701u, 0x08AF72ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC6964u) goto L_08AC6964;
    return;
L_08AC6964:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC6978;
      }
      goto L_08AC6970;
    }
L_08AC6970:
    ctx.gpr[31] = (0x08AC6978u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6978u) goto L_08AC6978;
    return;
L_08AC6978:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-848));
    ctx.gpr[31] = (0x08AC6984u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6984u) goto L_08AC6984;
    return;
L_08AC6984:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC69BC;
      }
      goto L_08AC6990;
    }
L_08AC6990:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x08AC69A0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08AC69A0u) goto L_08AC69A0;
    return;
L_08AC69A0:
    ctx.gpr[31] = (0x08AC69A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 815u, 0x08AF7800u>(ctx, &aot_mem) && ctx.pc == 0x08AC69A8u) goto L_08AC69A8;
    return;
L_08AC69A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC69BC;
      }
      goto L_08AC69B4;
    }
L_08AC69B4:
    ctx.gpr[31] = (0x08AC69BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC69BCu) goto L_08AC69BC;
    return;
L_08AC69BC:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 145u);
    ctx.gpr[31] = (0x08AC69CCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC69CCu) goto L_08AC69CC;
    return;
L_08AC69CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC69D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC69D8u) goto L_08AC69D8;
    return;
L_08AC69D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC69EC;
      }
      goto L_08AC69E4;
    }
L_08AC69E4:
    ctx.gpr[31] = (0x08AC69ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC69ECu) goto L_08AC69EC;
    return;
L_08AC69EC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6A38;
      }
      goto L_08AC69F4;
    }
L_08AC69F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[5] = (0u | 171u);
    ctx.gpr[31] = (0x08AC6A04u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6A04u) goto L_08AC6A04;
    return;
L_08AC6A04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x08AC6A10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6A10u) goto L_08AC6A10;
    return;
L_08AC6A10:
    ctx.gpr[31] = (0x08AC6A18u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC6A18u) goto L_08AC6A18;
    return;
L_08AC6A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC6A2C;
      }
      goto L_08AC6A24;
    }
L_08AC6A24:
    ctx.gpr[31] = (0x08AC6A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6A2Cu) goto L_08AC6A2C;
    return;
L_08AC6A2C:
    ctx.gpr[4] = (0u < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AC6A38;
L_08AC6A38:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 146u);
    ctx.gpr[31] = (0x08AC6A48u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6A48u) goto L_08AC6A48;
    return;
L_08AC6A48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC6A54u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC6A54u) goto L_08AC6A54;
    return;
L_08AC6A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC6A68;
      }
      goto L_08AC6A60;
    }
L_08AC6A60:
    ctx.gpr[31] = (0x08AC6A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6A68u) goto L_08AC6A68;
    return;
L_08AC6A68:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6AA4;
      }
      goto L_08AC6A70;
    }
L_08AC6A70:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-840));
    ctx.gpr[31] = (0x08AC6A7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6A7Cu) goto L_08AC6A7C;
    return;
L_08AC6A7C:
    ctx.gpr[31] = (0x08AC6A84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC6A84u) goto L_08AC6A84;
    return;
L_08AC6A84:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-836));
    ctx.gpr[31] = (0x08AC6A94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6A94u) goto L_08AC6A94;
    return;
L_08AC6A94:
    ctx.gpr[31] = (0x08AC6A9Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC6A9Cu) goto L_08AC6A9C;
    return;
L_08AC6A9C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_08AC6AA4;
L_08AC6AA4:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 147u);
    ctx.gpr[31] = (0x08AC6AB4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6AB4u) goto L_08AC6AB4;
    return;
L_08AC6AB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC6AC0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC6AC0u) goto L_08AC6AC0;
    return;
L_08AC6AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC6AD4;
      }
      goto L_08AC6ACC;
    }
L_08AC6ACC:
    ctx.gpr[31] = (0x08AC6AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6AD4u) goto L_08AC6AD4;
    return;
L_08AC6AD4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6BE0;
      }
      goto L_08AC6ADC;
    }
L_08AC6ADC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[5] = (0u | 171u);
    ctx.gpr[31] = (0x08AC6AECu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6AECu) goto L_08AC6AEC;
    return;
L_08AC6AEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x08AC6AF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6AF8u) goto L_08AC6AF8;
    return;
L_08AC6AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC6B0C;
      }
      goto L_08AC6B04;
    }
L_08AC6B04:
    ctx.gpr[31] = (0x08AC6B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6B0Cu) goto L_08AC6B0C;
    return;
L_08AC6B0C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6BE0;
      }
      goto L_08AC6B14;
    }
L_08AC6B14:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08AC6B24u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08AC6B24u) goto L_08AC6B24;
    return;
L_08AC6B24:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(52));
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_08AC6BD0;
    }
    goto L_08AC6B34;
L_08AC6B34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(0u));
    goto L_08AC6B44;
L_08AC6B44:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC6B6C;
      }
      goto L_08AC6B4C;
    }
L_08AC6B4C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AC6B6C;
      }
      goto L_08AC6B58;
    }
L_08AC6B58:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC6B44;
      }
      goto L_08AC6B6C;
    }
L_08AC6B6C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC6BB4;
      }
      goto L_08AC6B74;
    }
L_08AC6B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (ctx.gpr[16] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_08AC6BD0;
    }
    goto L_08AC6B84;
L_08AC6B84:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC6BA4;
      }
      goto L_08AC6B94;
    }
L_08AC6B94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC6BA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC6BA0u) goto L_08AC6BA0;
    return;
L_08AC6BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    goto L_08AC6BA4;
L_08AC6BA4:
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC6BCC;
      }
      goto L_08AC6BB4;
    }
L_08AC6BB4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(185), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(186), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(186));
    ctx.gpr[31] = (0x08AC6BCCu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_08AC54A0;
L_08AC6BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_08AC6BD0;
L_08AC6BD0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6BE0;
      }
      goto L_08AC6BD8;
    }
L_08AC6BD8:
    ctx.gpr[31] = (0x08AC6BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6BE0u) goto L_08AC6BE0;
    return;
L_08AC6BE0:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 148u);
    ctx.gpr[31] = (0x08AC6BF0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6BF0u) goto L_08AC6BF0;
    return;
L_08AC6BF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC6BFCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC6BFCu) goto L_08AC6BFC;
    return;
L_08AC6BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC6C10;
      }
      goto L_08AC6C08;
    }
L_08AC6C08:
    ctx.gpr[31] = (0x08AC6C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6C10u) goto L_08AC6C10;
    return;
L_08AC6C10:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6CAC;
      }
      goto L_08AC6C18;
    }
L_08AC6C18:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-832));
    ctx.gpr[31] = (0x08AC6C24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6C24u) goto L_08AC6C24;
    return;
L_08AC6C24:
    ctx.gpr[31] = (0x08AC6C2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC6C2Cu) goto L_08AC6C2C;
    return;
L_08AC6C2C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-828));
    ctx.gpr[31] = (0x08AC6C3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6C3Cu) goto L_08AC6C3C;
    return;
L_08AC6C3C:
    ctx.gpr[31] = (0x08AC6C44u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC6C44u) goto L_08AC6C44;
    return;
L_08AC6C44:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-824));
    ctx.gpr[31] = (0x08AC6C54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6C54u) goto L_08AC6C54;
    return;
L_08AC6C54:
    ctx.gpr[31] = (0x08AC6C5Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC6C5Cu) goto L_08AC6C5C;
    return;
L_08AC6C5C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-820));
    ctx.gpr[31] = (0x08AC6C6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6C6Cu) goto L_08AC6C6C;
    return;
L_08AC6C6C:
    ctx.gpr[31] = (0x08AC6C74u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC6C74u) goto L_08AC6C74;
    return;
L_08AC6C74:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    ctx.gpr[6] = (ctx.gpr[18] & 255u);
    ctx.gpr[7] = (ctx.gpr[21] & 255u);
    ctx.gpr[31] = (0x08AC6C8Cu);
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6C8Cu) goto L_08AC6C8C;
    return;
L_08AC6C8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(149)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(150)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(151)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AC6CAC;
L_08AC6CAC:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 149u);
    ctx.gpr[31] = (0x08AC6CBCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6CBCu) goto L_08AC6CBC;
    return;
L_08AC6CBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC6CC8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC6CC8u) goto L_08AC6CC8;
    return;
L_08AC6CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC6CDC;
      }
      goto L_08AC6CD4;
    }
L_08AC6CD4:
    ctx.gpr[31] = (0x08AC6CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6CDCu) goto L_08AC6CDC;
    return;
L_08AC6CDC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6D78;
      }
      goto L_08AC6CE4;
    }
L_08AC6CE4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-832));
    ctx.gpr[31] = (0x08AC6CF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6CF0u) goto L_08AC6CF0;
    return;
L_08AC6CF0:
    ctx.gpr[31] = (0x08AC6CF8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC6CF8u) goto L_08AC6CF8;
    return;
L_08AC6CF8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-828));
    ctx.gpr[31] = (0x08AC6D08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6D08u) goto L_08AC6D08;
    return;
L_08AC6D08:
    ctx.gpr[31] = (0x08AC6D10u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC6D10u) goto L_08AC6D10;
    return;
L_08AC6D10:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-824));
    ctx.gpr[31] = (0x08AC6D20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6D20u) goto L_08AC6D20;
    return;
L_08AC6D20:
    ctx.gpr[31] = (0x08AC6D28u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC6D28u) goto L_08AC6D28;
    return;
L_08AC6D28:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-820));
    ctx.gpr[31] = (0x08AC6D38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6D38u) goto L_08AC6D38;
    return;
L_08AC6D38:
    ctx.gpr[31] = (0x08AC6D40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC6D40u) goto L_08AC6D40;
    return;
L_08AC6D40:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    ctx.gpr[6] = (ctx.gpr[18] & 255u);
    ctx.gpr[7] = (ctx.gpr[21] & 255u);
    ctx.gpr[31] = (0x08AC6D58u);
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6D58u) goto L_08AC6D58;
    return;
L_08AC6D58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(153)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(154)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(155)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AC6D78;
L_08AC6D78:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 150u);
    ctx.gpr[31] = (0x08AC6D88u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6D88u) goto L_08AC6D88;
    return;
L_08AC6D88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC6D94u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC6D94u) goto L_08AC6D94;
    return;
L_08AC6D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC6DA8;
      }
      goto L_08AC6DA0;
    }
L_08AC6DA0:
    ctx.gpr[31] = (0x08AC6DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6DA8u) goto L_08AC6DA8;
    return;
L_08AC6DA8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6E34;
      }
      goto L_08AC6DB0;
    }
L_08AC6DB0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-896)));
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-816));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-892)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC6DC8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6DC8u) goto L_08AC6DC8;
    return;
L_08AC6DC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-812));
      if (branch_taken) {
          goto L_08AC6DF4;
      }
      goto L_08AC6DD0;
    }
L_08AC6DD0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC6DDCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6DDCu) goto L_08AC6DDC;
    return;
L_08AC6DDC:
    ctx.gpr[31] = (0x08AC6DE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 935u, 0x08B577CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC6DE4u) goto L_08AC6DE4;
    return;
L_08AC6DE4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AC6DF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x08AC6DF0u) goto L_08AC6DF0;
    return;
L_08AC6DF0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC6DF4;
L_08AC6DF4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC6E00u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6E00u) goto L_08AC6E00;
    return;
L_08AC6E00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6E2C;
      }
      goto L_08AC6E08;
    }
L_08AC6E08:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC6E14u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6E14u) goto L_08AC6E14;
    return;
L_08AC6E14:
    ctx.gpr[31] = (0x08AC6E1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 935u, 0x08B577CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC6E1Cu) goto L_08AC6E1C;
    return;
L_08AC6E1C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AC6E28u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x08AC6E28u) goto L_08AC6E28;
    return;
L_08AC6E28:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC6E2C;
L_08AC6E2C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08AC6E34;
L_08AC6E34:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 151u);
    ctx.gpr[31] = (0x08AC6E44u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6E44u) goto L_08AC6E44;
    return;
L_08AC6E44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC6E50u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC6E50u) goto L_08AC6E50;
    return;
L_08AC6E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC6E64;
      }
      goto L_08AC6E5C;
    }
L_08AC6E5C:
    ctx.gpr[31] = (0x08AC6E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6E64u) goto L_08AC6E64;
    return;
L_08AC6E64:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6EE4;
      }
      goto L_08AC6E6C;
    }
L_08AC6E6C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.gpr[5] = (0u | 171u);
    ctx.gpr[31] = (0x08AC6E80u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6E80u) goto L_08AC6E80;
    return;
L_08AC6E80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x08AC6E8Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6E8Cu) goto L_08AC6E8C;
    return;
L_08AC6E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AC6EA0;
      }
      goto L_08AC6E98;
    }
L_08AC6E98:
    ctx.gpr[31] = (0x08AC6EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6EA0u) goto L_08AC6EA0;
    return;
L_08AC6EA0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6EE0;
      }
      goto L_08AC6EA8;
    }
L_08AC6EA8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (0u | 171u);
    ctx.gpr[31] = (0x08AC6EB8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6EB8u) goto L_08AC6EB8;
    return;
L_08AC6EB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (0x08AC6EC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6EC4u) goto L_08AC6EC4;
    return;
L_08AC6EC4:
    ctx.gpr[31] = (0x08AC6ECCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC6ECCu) goto L_08AC6ECC;
    return;
L_08AC6ECC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] & 65535u);
      if (branch_taken) {
          goto L_08AC6EE0;
      }
      goto L_08AC6ED8;
    }
L_08AC6ED8:
    ctx.gpr[31] = (0x08AC6EE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6EE0u) goto L_08AC6EE0;
    return;
L_08AC6EE0:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[16]));
    goto L_08AC6EE4;
L_08AC6EE4:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 152u);
    ctx.gpr[31] = (0x08AC6EF4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6EF4u) goto L_08AC6EF4;
    return;
L_08AC6EF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC6F00u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC6F00u) goto L_08AC6F00;
    return;
L_08AC6F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC6F14;
      }
      goto L_08AC6F0C;
    }
L_08AC6F0C:
    ctx.gpr[31] = (0x08AC6F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC6F14u) goto L_08AC6F14;
    return;
L_08AC6F14:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6F64;
      }
      goto L_08AC6F1C;
    }
L_08AC6F1C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-808));
    ctx.gpr[31] = (0x08AC6F28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6F28u) goto L_08AC6F28;
    return;
L_08AC6F28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6F40;
      }
      goto L_08AC6F34;
    }
L_08AC6F34:
    ctx.gpr[31] = (0x08AC6F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC6F3Cu) goto L_08AC6F3C;
    return;
L_08AC6F3C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    goto L_08AC6F40;
L_08AC6F40:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-796));
    ctx.gpr[31] = (0x08AC6F4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC6F4Cu) goto L_08AC6F4C;
    return;
L_08AC6F4C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6F64;
      }
      goto L_08AC6F58;
    }
L_08AC6F58:
    ctx.gpr[31] = (0x08AC6F60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC6F60u) goto L_08AC6F60;
    return;
L_08AC6F60:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    goto L_08AC6F64;
L_08AC6F64:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AC6F68;
L_08AC6F68:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC6FA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC6FC8u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC6FC8u) goto L_08AC6FC8;
    return;
L_08AC6FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08AC6FD4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08AC6FD4u) goto L_08AC6FD4;
    return;
L_08AC6FD4:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(472)));
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(468)));
      if (branch_taken) {
          goto L_08AC7010;
      }
      goto L_08AC7008;
    }
L_08AC7008:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08AC7010;
L_08AC7010:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AC7028;
      }
      goto L_08AC7020;
    }
L_08AC7020:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08AC7028;
L_08AC7028:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7040;
      }
      goto L_08AC7034;
    }
L_08AC7034:
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(472), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC704C;
      }
      goto L_08AC7040;
    }
L_08AC7040:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(472), ctx.gpr[5]);
    goto L_08AC704C;
L_08AC704C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[17]) || std::isnan(ctx.fpr[12])) && ctx.fpr[17] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16384u << 16u);
      if (branch_taken) {
          goto L_08AC70A0;
      }
      goto L_08AC705C;
    }
L_08AC705C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[12])) && ctx.fpr[15] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16384u << 16u);
      if (branch_taken) {
          goto L_08AC70A0;
      }
      goto L_08AC706C;
    }
L_08AC706C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16384u << 16u);
      if (branch_taken) {
          goto L_08AC70A0;
      }
      goto L_08AC707C;
    }
L_08AC707C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16384u << 16u);
      if (branch_taken) {
          goto L_08AC70A0;
      }
      goto L_08AC708C;
    }
L_08AC708C:
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC70D4;
      }
      goto L_08AC70A0;
    }
L_08AC70A0:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(2212), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(2216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(2220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AC70D4;
L_08AC70D4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC70EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7114u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7114u) goto L_08AC7114;
    return;
L_08AC7114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08AC7120u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08AC7120u) goto L_08AC7120;
    return;
L_08AC7120:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC71AC;
      }
      goto L_08AC712C;
    }
L_08AC712C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.gpr[7] = (16384u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC71AC;
      }
      goto L_08AC7140;
    }
L_08AC7140:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(2220));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2212));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC71A4;
      }
      goto L_08AC7164;
    }
L_08AC7164:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08AC71A8;
    }
    goto L_08AC7178;
L_08AC7178:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08AC71A8;
    }
    goto L_08AC7190;
L_08AC7190:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AC71A8;
      }
      goto L_08AC71A4;
    }
L_08AC71A4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AC71A8;
L_08AC71A8:
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    goto L_08AC71AC;
L_08AC71AC:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AC71D8;
      }
      goto L_08AC71D0;
    }
L_08AC71D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AC7220;
      }
      goto L_08AC71D8;
    }
L_08AC71D8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AC7204;
      }
      goto L_08AC71F8;
    }
L_08AC71F8:
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC7220;
      }
      goto L_08AC7204;
    }
L_08AC7204:
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7220;
      }
      goto L_08AC721C;
    }
L_08AC721C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AC7220;
L_08AC7220:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7238:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7260u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7260u) goto L_08AC7260;
    return;
L_08AC7260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08AC726Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08AC726Cu) goto L_08AC726C;
    return;
L_08AC726C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC729C;
      }
      goto L_08AC7278;
    }
L_08AC7278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7294;
      }
      goto L_08AC728C;
    }
L_08AC728C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC72A0;
      }
      goto L_08AC7294;
    }
L_08AC7294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC72A0;
      }
      goto L_08AC729C;
    }
L_08AC729C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AC72A0;
L_08AC72A0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AC72C4;
      }
      goto L_08AC72BC;
    }
L_08AC72BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC730C;
      }
      goto L_08AC72C4;
    }
L_08AC72C4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AC72F0;
      }
      goto L_08AC72E4;
    }
L_08AC72E4:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC730C;
      }
      goto L_08AC72F0;
    }
L_08AC72F0:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC730C;
      }
      goto L_08AC7308;
    }
L_08AC7308:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AC730C;
L_08AC730C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7324:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC734Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC734Cu) goto L_08AC734C;
    return;
L_08AC734C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08AC7358u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08AC7358u) goto L_08AC7358;
    return;
L_08AC7358:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7384;
      }
      goto L_08AC7364;
    }
L_08AC7364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC737C;
      }
      goto L_08AC7374;
    }
L_08AC7374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC7388;
      }
      goto L_08AC737C;
    }
L_08AC737C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC7388;
      }
      goto L_08AC7384;
    }
L_08AC7384:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AC7388;
L_08AC7388:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AC73AC;
      }
      goto L_08AC73A4;
    }
L_08AC73A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC73F4;
      }
      goto L_08AC73AC;
    }
L_08AC73AC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AC73D8;
      }
      goto L_08AC73CC;
    }
L_08AC73CC:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC73F4;
      }
      goto L_08AC73D8;
    }
L_08AC73D8:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC73F4;
      }
      goto L_08AC73F0;
    }
L_08AC73F0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AC73F4;
L_08AC73F4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC740C:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AC742C;
      }
      goto L_08AC7424;
    }
L_08AC7424:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08AC742C;
      }
      goto L_08AC742C;
    }
L_08AC742C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7434:
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
L_08AC745C:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
L_08AC7474:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
L_08AC748C:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
L_08AC74A8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC74C8;
      }
      goto L_08AC74C0;
    }
L_08AC74C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC74C8;
      }
      goto L_08AC74C8;
    }
L_08AC74C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC74D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC74EC;
      }
      goto L_08AC74E4;
    }
L_08AC74E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC74EC;
      }
      goto L_08AC74EC;
    }
L_08AC74EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC74F4:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7518:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC753C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7564:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7590:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC759C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC75B0:
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
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC75C0:
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
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC75DC:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC75F8:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7610:
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
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7620:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC763C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7644:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC764C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7654:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7670:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7678:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[31] = (0x08AC769Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08AC769Cu) goto L_08AC769C;
    return;
L_08AC769C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AC76B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08AC76B0u) goto L_08AC76B0;
    return;
L_08AC76B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC76C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC76DC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC76E4:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC76EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC76FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC770C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7714:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC771C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 4u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC773C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 6u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 14u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (ctx.gpr[4] & 14u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] >> 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7774:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & 31u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (ctx.gpr[4] & 496u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] >> 4u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC77A4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC77AC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC77B4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC77BC:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC77C4:
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC77F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7804u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08AC7804u) goto L_08AC7804;
    return;
L_08AC7804:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7810:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AC7820u) goto L_08AC7820;
    return;
L_08AC7820:
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7830:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7854u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AC7854u) goto L_08AC7854;
    return;
L_08AC7854:
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AC7868u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7868u) goto L_08AC7868;
    return;
L_08AC7868:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC78A8:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
L_08AC78EC:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
L_08AC7930:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7938:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7940:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7948:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7950:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7958:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(149))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7960:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7968:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7970:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7978:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7980:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(680), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7988:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] << 6u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7998:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[2] = (ctx.gpr[4] & 4u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC79A8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC79B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1396));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC79CC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2076)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC79D4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC79DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC79F8;
      }
      goto L_08AC79EC;
    }
L_08AC79EC:
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AC79FC;
      }
      goto L_08AC79F8;
    }
L_08AC79F8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08AC79FC;
L_08AC79FC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7A04:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2244)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7A0C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7A14:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(460)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7A38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[2] = (ctx.gpr[4] & 256u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7A48:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2196)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7A50:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2196), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7A58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] << 16u);
    ctx.gpr[18] = (ctx.gpr[7] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[6] = (0u | 57u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC7AB8;
      }
      goto L_08AC7A98;
    }
L_08AC7A98:
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC7AB8;
      }
      goto L_08AC7AA4;
    }
L_08AC7AA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AC7AC0;
      }
      goto L_08AC7AB0;
    }
L_08AC7AB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7AC8;
      }
      goto L_08AC7AB8;
    }
L_08AC7AB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7B8C;
      }
      goto L_08AC7AC0;
    }
L_08AC7AC0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7ADC;
      }
      goto L_08AC7AC8;
    }
L_08AC7AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[20] = (0u | 30u);
      if (branch_taken) {
          goto L_08AC7AE4;
      }
      goto L_08AC7AD4;
    }
L_08AC7AD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7B14;
      }
      goto L_08AC7ADC;
    }
L_08AC7ADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7B8C;
      }
      goto L_08AC7AE4;
    }
L_08AC7AE4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AC7B14;
      }
      goto L_08AC7AEC;
    }
L_08AC7AEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AC7AFCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 8u, 0x08AC805Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7AFCu) goto L_08AC7AFC;
    return;
L_08AC7AFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7B0C;
      }
      goto L_08AC7B04;
    }
L_08AC7B04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7B14;
      }
      goto L_08AC7B0C;
    }
L_08AC7B0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7B8C;
      }
      goto L_08AC7B14;
    }
L_08AC7B14:
    ctx.gpr[31] = (0x08AC7B1Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem) && ctx.pc == 0x08AC7B1Cu) goto L_08AC7B1C;
    return;
L_08AC7B1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC7B28u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AC7F30;
L_08AC7B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC7B44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC7EF0;
L_08AC7B44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7B54;
      }
      goto L_08AC7B4C;
    }
L_08AC7B4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AC7B6C;
      }
      goto L_08AC7B54;
    }
L_08AC7B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AC7B68;
      }
      goto L_08AC7B60;
    }
L_08AC7B60:
    ctx.gpr[31] = (0x08AC7B68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC7DFC;
L_08AC7B68:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2196), ctx.gpr[16]);
    goto L_08AC7B6C;
L_08AC7B6C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AC7B8C;
      }
      goto L_08AC7B74;
    }
L_08AC7B74:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AC7B84u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 52u, 0x08A08808u>(ctx, &aot_mem) && ctx.pc == 0x08AC7B84u) goto L_08AC7B84;
    return;
L_08AC7B84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7B8C;
      }
      goto L_08AC7B8C;
    }
L_08AC7B8C:
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
L_08AC7BAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (0u | 39u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AC7C10;
      }
      goto L_08AC7BDC;
    }
L_08AC7BDC:
    ctx.gpr[4] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 43u);
      if (branch_taken) {
          goto L_08AC7C10;
      }
      goto L_08AC7BE8;
    }
L_08AC7BE8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 44u);
      if (branch_taken) {
          goto L_08AC7C10;
      }
      goto L_08AC7BF0;
    }
L_08AC7BF0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 45u);
      if (branch_taken) {
          goto L_08AC7C10;
      }
      goto L_08AC7BF8;
    }
L_08AC7BF8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 53u);
      if (branch_taken) {
          goto L_08AC7C10;
      }
      goto L_08AC7C00;
    }
L_08AC7C00:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC7C10;
      }
      goto L_08AC7C08;
    }
L_08AC7C08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7C34;
      }
      goto L_08AC7C10;
    }
L_08AC7C10:
    ctx.gpr[31] = (0x08AC7C18u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem) && ctx.pc == 0x08AC7C18u) goto L_08AC7C18;
    return;
L_08AC7C18:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC7C30u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem) && ctx.pc == 0x08AC7C30u) goto L_08AC7C30;
    return;
L_08AC7C30:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AC7C34;
L_08AC7C34:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7C50:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7C58:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1156)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7C60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7C78u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08AC7C78u) goto L_08AC7C78;
    return;
L_08AC7C78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (0u | 55u);
      if (branch_taken) {
          goto L_08AC7C8C;
      }
      goto L_08AC7C80;
    }
L_08AC7C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AC7DDC;
      }
      goto L_08AC7C8C;
    }
L_08AC7C8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7CB8;
      }
      goto L_08AC7C98;
    }
L_08AC7C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7CB8;
      }
      goto L_08AC7CA4;
    }
L_08AC7CA4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(616));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AC7CB8;
L_08AC7CB8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2196), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC7CC8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 840u, 0x0890FC94u>(ctx, &aot_mem) && ctx.pc == 0x08AC7CC8u) goto L_08AC7CC8;
    return;
L_08AC7CC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC7CD4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 188u, 0x08910AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AC7CD4u) goto L_08AC7CD4;
    return;
L_08AC7CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AC7DC0;
      }
      goto L_08AC7CE0;
    }
L_08AC7CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7DC0;
      }
      goto L_08AC7CEC;
    }
L_08AC7CEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AC7DAC;
      }
      goto L_08AC7CF8;
    }
L_08AC7CF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
        goto L_08AC7D34;
    }
    goto L_08AC7D14;
L_08AC7D14:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC7D28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 563u, 0x088E3DD8u>(ctx, &aot_mem) && ctx.pc == 0x08AC7D28u) goto L_08AC7D28;
    return;
L_08AC7D28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08AC7D44;
      }
      goto L_08AC7D30;
    }
L_08AC7D30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    goto L_08AC7D34;
L_08AC7D34:
    ctx.gpr[6] = (64u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7D7C;
      }
      goto L_08AC7D44;
    }
L_08AC7D44:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC7D54u);
    ctx.gpr[5] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08AC7D54u) goto L_08AC7D54;
    return;
L_08AC7D54:
    ctx.gpr[31] = (0x08AC7D5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7D5Cu) goto L_08AC7D5C;
    return;
L_08AC7D5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7DAC;
      }
      goto L_08AC7D64;
    }
L_08AC7D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC7DAC;
      }
      goto L_08AC7D7C;
    }
L_08AC7D7C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC7D8Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08AC7D8Cu) goto L_08AC7D8C;
    return;
L_08AC7D8C:
    ctx.gpr[31] = (0x08AC7D94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7D94u) goto L_08AC7D94;
    return;
L_08AC7D94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7DAC;
      }
      goto L_08AC7D9C;
    }
L_08AC7D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_08AC7DAC;
L_08AC7DAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC7DB8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x08AC7DB8u) goto L_08AC7DB8;
    return;
L_08AC7DB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7DE8;
      }
      goto L_08AC7DC0;
    }
L_08AC7DC0:
    ctx.gpr[31] = (0x08AC7DC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7DC8u) goto L_08AC7DC8;
    return;
L_08AC7DC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC7DD4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08AC7DD4u) goto L_08AC7DD4;
    return;
L_08AC7DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7DE8;
      }
      goto L_08AC7DDC;
    }
L_08AC7DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    goto L_08AC7DE8;
L_08AC7DE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7DFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC7E90;
      }
      goto L_08AC7E0C;
    }
L_08AC7E0C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 26 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AC7E48;
      }
      goto L_08AC7E18;
    }
L_08AC7E18:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AC7E38;
      }
      goto L_08AC7E24;
    }
L_08AC7E24:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7E8C;
      }
      goto L_08AC7E30;
    }
L_08AC7E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7E90;
      }
      goto L_08AC7E38;
    }
L_08AC7E38:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7E30;
      }
      goto L_08AC7E40;
    }
L_08AC7E40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7E8C;
      }
      goto L_08AC7E48;
    }
L_08AC7E48:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 39 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AC7E64;
      }
      goto L_08AC7E50;
    }
L_08AC7E50:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7E30;
      }
      goto L_08AC7E5C;
    }
L_08AC7E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7E8C;
      }
      goto L_08AC7E64;
    }
L_08AC7E64:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 54 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AC7E8C;
      }
      goto L_08AC7E6C;
    }
L_08AC7E6C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-39));
      if (branch_taken) {
          goto L_08AC7E8C;
      }
      goto L_08AC7E74;
    }
L_08AC7E74:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14336)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7E8C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(640), ctx.gpr[5]);
    goto L_08AC7E90;
L_08AC7E90:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7E98:
    ctx.gpr[7] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2196)));
      if (branch_taken) {
          goto L_08AC7EB0;
      }
      goto L_08AC7EA4;
    }
L_08AC7EA4:
    ctx.gpr[7] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AC7EE4;
      }
      goto L_08AC7EB0;
    }
L_08AC7EB0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 54 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AC7EE4;
      }
      goto L_08AC7EBC;
    }
L_08AC7EBC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_08AC7EE4;
      }
      goto L_08AC7EC4;
    }
L_08AC7EC4:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14400)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7EE8;
      }
      goto L_08AC7EE4;
    }
L_08AC7EE4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(640), ctx.gpr[6]);
    goto L_08AC7EE8;
L_08AC7EE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7EF0:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 29u);
      if (branch_taken) {
          goto L_08AC7F1C;
      }
      goto L_08AC7EFC;
    }
L_08AC7EFC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 18u);
      if (branch_taken) {
          goto L_08AC7F1C;
      }
      goto L_08AC7F04;
    }
L_08AC7F04:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 17u);
      if (branch_taken) {
          goto L_08AC7F1C;
      }
      goto L_08AC7F0C;
    }
L_08AC7F0C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 38u);
      if (branch_taken) {
          goto L_08AC7F1C;
      }
      goto L_08AC7F14;
    }
L_08AC7F14:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC7F24;
      }
      goto L_08AC7F1C;
    }
L_08AC7F1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC7F28;
      }
      goto L_08AC7F24;
    }
L_08AC7F24:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AC7F28;
L_08AC7F28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7F30:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7F58;
      }
      goto L_08AC7F38;
    }
L_08AC7F38:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1756)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7F5C;
      }
      goto L_08AC7F4C;
    }
L_08AC7F4C:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1756), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC7F5C;
      }
      goto L_08AC7F58;
    }
L_08AC7F58:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1756), 0u);
    goto L_08AC7F5C;
L_08AC7F5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7F64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC7F9C;
      }
      goto L_08AC7F7C;
    }
L_08AC7F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7F9C;
      }
      goto L_08AC7F88;
    }
L_08AC7F88:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(616));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AC7F9C;
L_08AC7F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7FBC;
      }
      goto L_08AC7FA8;
    }
L_08AC7FA8:
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_08AC7FC4;
      }
      goto L_08AC7FB4;
    }
L_08AC7FB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7FF4;
      }
      goto L_08AC7FBC;
    }
L_08AC7FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 6u, 0x08AC8044u>(ctx, &aot_mem); return;
      }
      goto L_08AC7FC4;
    }
L_08AC7FC4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 17u);
      if (branch_taken) {
          goto L_08AC7FF4;
      }
      goto L_08AC7FCC;
    }
L_08AC7FCC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC7FF4;
      }
      goto L_08AC7FD4;
    }
L_08AC7FD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AC7FF4;
      }
      goto L_08AC7FE4;
    }
L_08AC7FE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC7FF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 840u, 0x0890FC94u>(ctx, &aot_mem) && ctx.pc == 0x08AC7FF0u) goto L_08AC7FF0;
    return;
L_08AC7FF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    goto L_08AC7FF4;
L_08AC7FF4:
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 4u, 0x08AC8028u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 1u, 0x08AC8000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0176(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0176_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_176(Runtime &runtime) {
    runtime.register_generated_unit(176u, 0x08AC4000u, 16384u, &recomp_unit_0176, &recomp_unit_0176_entry);
    runtime.register_function(0x08AC4000u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4008u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4010u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4018u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4020u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4028u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4030u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4038u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4040u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4048u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC405Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4068u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4070u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4074u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC407Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4088u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4090u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4094u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC409Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC40A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC40BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC40C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC40D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC40E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC40E8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC40F0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC40F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4100u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4108u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4114u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4128u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4130u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4138u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4140u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC414Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4154u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC415Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4164u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4178u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4180u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4188u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4190u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4198u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC41A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC41A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC41B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC41B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC41C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC41C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC41E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC41F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4200u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4208u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4210u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4218u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC422Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4238u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4240u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4258u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4260u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4278u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4280u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4298u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC42A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC42B4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC42C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC42D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC42D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC42E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC42F0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4318u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC434Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4358u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4360u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4368u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4378u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4380u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4398u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC43A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC43B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC43B4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC43BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC43C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC43D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC43E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC43ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC43F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC43FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4408u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4410u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4414u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4428u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4438u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4440u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4444u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4450u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC445Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4464u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC446Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4470u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4478u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4480u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4494u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC44C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC44D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC44F0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC450Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4510u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4514u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC451Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4528u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4534u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC453Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4540u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4558u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC455Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4568u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4578u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4584u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC458Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4590u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC45BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC45C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC45D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC45ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC45F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC45FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4604u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4610u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4618u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC461Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC462Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC463Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4644u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4650u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC465Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4668u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4670u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC467Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4684u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC46A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC46A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC46B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC46BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC46C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC46CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC46D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC46E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC46E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC46FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4704u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4718u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4764u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4770u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4778u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC478Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC47B4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC47D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4824u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4830u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4838u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC483Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC484Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC485Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4864u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC486Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4878u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC488Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4894u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC489Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC48A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC48B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC48BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC48C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC48D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC48E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC48ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC48F0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4900u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4910u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4918u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4920u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC492Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4938u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4940u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC494Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4954u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC495Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4964u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4970u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4978u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC497Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC498Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC499Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC49A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC49ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC49B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC49D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC49DCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC49E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC49F0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC49F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A00u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A08u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A1Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A20u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A30u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A40u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A48u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A50u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A5Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A68u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A70u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A7Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A90u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4AA0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4AB0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4AB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4AC0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4ACCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4AE0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4AECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4AF4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B00u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B08u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B10u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B24u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B3Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B44u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B50u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B58u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B64u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B6Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B78u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B80u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B88u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B9Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4BACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4BB4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4BBCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4BC8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4BDCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4BE4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4BF0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4BF8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C04u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C0Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C18u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C28u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C38u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C40u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C48u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C54u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C68u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C70u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C80u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C94u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4CA0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4CA8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4CB0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4CB4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4CC4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4CD4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4CDCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4CE4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4CF0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D04u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D0Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D18u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D20u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D2Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D38u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D48u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D58u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D60u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D68u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D74u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D80u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D88u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D90u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D98u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4DACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4DDCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4DF0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4DF8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E04u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E1Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E28u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E38u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E48u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E50u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E58u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E6Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E74u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E7Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E98u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4EA0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4EACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4EB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4EC4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4ECCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4ED8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4EE0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4EECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4EF4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4EFCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F04u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F0Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F1Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F24u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F2Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F3Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F48u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F54u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F60u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F70u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F78u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F94u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F9Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4FA8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4FB0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4FB4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4FC0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4FC8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4FD0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4FD8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4FE0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4FE8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4FFCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5004u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC500Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5018u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5020u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5028u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5030u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5038u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5040u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5048u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5050u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5064u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5070u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5078u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5080u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC508Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5094u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC509Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC50A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC50ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC50B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC50C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC50C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC50D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC50D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC50FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5124u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC514Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5164u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC516Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5180u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5190u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC51A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC51B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC51DCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5214u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC522Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC524Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC52A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC52CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC52F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5320u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC534Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5378u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC53A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC53CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC53F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5410u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5438u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5450u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5458u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5464u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC547Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5490u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5498u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC54A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC54D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC54F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5510u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5518u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC551Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC553Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5548u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC555Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC556Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5574u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC557Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5588u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5590u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5594u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC55C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC55D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC55E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC55ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5614u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5624u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC562Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5640u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5644u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5658u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5660u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5674u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC569Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC56ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC56B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC56C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC56D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC56F0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5720u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5758u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5778u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5790u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5798u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC579Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC57BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC57C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC57DCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC57ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC57F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC57FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5808u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5810u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5814u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5840u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5850u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5864u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC586Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5878u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5880u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5898u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC589Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC58B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC58B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC58CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC58DCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC58E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC58F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5900u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5920u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5950u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC595Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC596Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5978u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5994u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC599Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC59A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC59B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC59BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC59D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC59E8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5A10u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5A30u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5A6Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5A80u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5A9Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5AA8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5AB0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5AB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5AC0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5AC4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5ACCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5AD4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5AE8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5B1Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5B34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5B64u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5B78u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5B94u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5B98u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5BC0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5BD8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5BE4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5BECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C04u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C24u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C2Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C3Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C44u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C48u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C50u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C5Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C64u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C90u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5CA8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5CB0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5CB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5CC8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5CE0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5CE8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5D2Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5D34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5D44u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5DA0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5DB0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5DDCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5DF8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5E38u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5E58u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5E74u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5E7Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5EACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5EB0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5EC4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5EF0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5EF8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5F00u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5F14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5F1Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5F28u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5F30u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5F60u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5F70u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5F7Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5F84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5F98u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5FA8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5FB4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5FBCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5FC8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5FD0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5FE4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5FECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6000u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6010u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6014u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6024u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC602Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6040u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6044u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6068u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC60C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC60D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC60F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC60F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6120u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6134u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6144u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC614Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6170u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6194u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC61A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC61ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC61B4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC61C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC61C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC61CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC61E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6200u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC620Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6214u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6218u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6224u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6238u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6258u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6264u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC626Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6274u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC627Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6280u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC628Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC62A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC62B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC62C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6304u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC630Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC631Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC632Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6350u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6358u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC63A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC63B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC63DCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC63E8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC63F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC63FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6400u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6404u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6410u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC643Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6458u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC646Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC64ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC64B4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC64C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC64D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC64E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC64E8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC64F0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC64F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6504u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6528u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC653Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC654Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6558u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6560u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6570u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6578u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6584u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC658Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC659Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC65A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC65B4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC65BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC65C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC65D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC65E8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC65F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6604u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6610u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6618u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6628u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6630u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC663Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6644u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6654u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC665Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6668u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6674u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6694u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC669Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC66ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC66B4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC66C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC66D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC66E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC66E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC66F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC66FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC670Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC671Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6734u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6740u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6748u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6754u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6760u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6780u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6788u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6798u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC67A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC67B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC67C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC67CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC67D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC67E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC67E8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC67F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6808u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6820u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6838u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6848u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6854u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6864u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC686Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6878u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6880u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6884u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC688Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6894u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC689Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC68ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC68B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC68C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC68CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC68D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC68E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC68F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6904u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC690Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6914u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6924u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6930u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC693Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6944u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC694Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC695Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6964u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6970u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6978u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6984u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6990u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC69A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC69A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC69B4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC69BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC69CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC69D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC69E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC69ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC69F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A04u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A10u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A18u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A24u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A2Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A38u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A48u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A54u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A60u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A68u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A70u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A7Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A94u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A9Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6AA4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6AB4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6AC0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6ACCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6AD4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6ADCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6AECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6AF8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B04u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B0Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B24u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B44u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B4Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B58u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B6Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B74u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B94u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6BA0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6BA4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6BB4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6BCCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6BD0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6BD8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6BE0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6BF0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6BFCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C08u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C10u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C18u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C24u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C2Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C3Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C44u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C54u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C5Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C6Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C74u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6CACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6CBCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6CC8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6CD4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6CDCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6CE4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6CF0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6CF8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D08u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D10u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D20u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D28u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D38u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D40u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D58u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D78u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D88u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D94u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6DA0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6DA8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6DB0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6DC8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6DD0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6DDCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6DE4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6DF0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6DF4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E00u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E08u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E1Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E28u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E2Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E44u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E50u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E5Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E64u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E6Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E80u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E98u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6EA0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6EA8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6EB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6EC4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6ECCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6ED8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6EE0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6EE4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6EF4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F00u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F0Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F1Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F28u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F3Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F40u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F4Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F58u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F60u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F64u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F68u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6FA0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6FC8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6FD4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7008u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7010u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7020u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7028u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7034u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7040u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC704Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC705Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC706Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC707Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC708Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC70A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC70D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC70ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7114u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7120u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC712Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7140u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7164u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7178u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7190u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC71A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC71A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC71ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC71D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC71D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC71F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7204u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC721Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7220u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7238u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7260u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC726Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7278u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC728Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7294u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC729Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC72A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC72BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC72C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC72E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC72F0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7308u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC730Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7324u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC734Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7358u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7364u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7374u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC737Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7384u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7388u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC73A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC73ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC73CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC73D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC73F0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC73F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC740Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7424u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC742Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7434u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC745Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7474u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC748Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC74A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC74C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC74C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC74D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC74E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC74ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC74F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7518u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC753Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7564u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7590u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC759Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC75B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC75C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC75DCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC75F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7610u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7620u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC763Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7644u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC764Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7654u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7670u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7678u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC769Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC76B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC76C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC76DCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC76E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC76ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC76FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC770Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7714u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC771Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7728u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC773Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7750u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7764u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7774u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7794u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC77A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC77ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC77B4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC77BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC77C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC77F0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7804u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7810u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7820u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7830u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7854u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7868u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC78A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC78ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7930u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7938u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7940u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7948u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7950u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7958u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7960u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7968u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7970u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7978u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7980u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7988u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7998u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC79A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC79B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC79CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC79D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC79DCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC79ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC79F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC79FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7A04u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7A0Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7A14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7A38u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7A48u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7A50u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7A58u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7A98u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7AA4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7AB0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7AB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7AC0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7AC8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7AD4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7ADCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7AE4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7AECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7AFCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B04u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B0Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B1Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B28u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B44u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B4Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B54u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B60u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B68u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B6Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B74u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7BACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7BDCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7BE8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7BF0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7BF8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C00u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C08u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C10u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C18u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C30u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C50u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C58u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C60u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C78u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C80u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C98u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7CA4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7CB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7CC8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7CD4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7CE0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7CECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7CF8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D28u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D30u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D44u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D54u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D5Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D64u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D7Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D94u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D9Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7DACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7DB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7DC0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7DC8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7DD4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7DDCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7DE8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7DFCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E0Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E18u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E24u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E30u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E38u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E40u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E48u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E50u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E5Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E64u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E6Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E74u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E90u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E98u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7EA4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7EB0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7EBCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7EC4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7EDCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7EE4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7EE8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7EF0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7EFCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F04u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F0Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F1Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F24u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F28u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F30u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F38u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F4Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F58u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F5Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F64u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F7Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F88u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F9Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7FA8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7FB4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7FBCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7FC4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7FCCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7FD4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7FE4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7FF0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7FF4u, &recomp_unit_0176, "recomp_unit_0176");
}
} // namespace psprecomp
