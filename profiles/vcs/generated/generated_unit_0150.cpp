#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0150[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0,
    8, 0, 0, 9, 0, 10, 0, 0, 11, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18,
    0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 28, 29, 0, 0, 30, 0,
    31, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 56, 0,
    57, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0,
    0, 0, 0, 66, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    79, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0,
    0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0,
    0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0,
    115, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 121, 0, 122, 0, 0, 123, 0, 124, 0, 0, 125, 126, 0, 0,
    127, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 0, 135, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 149, 0, 150,
    0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160,
    0, 161, 0, 0, 162, 0, 0, 163, 0, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 170,
    0, 171, 172, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    188, 189, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203,
    0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0,
    0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 223, 224, 0, 225, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230,
    0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 246,
    0, 247, 0, 248, 0, 249, 0, 250, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0,
    257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0,
    264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 282, 0, 283, 0,
    0, 284, 0, 0, 285, 0, 286, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0,
    299, 0, 0, 0, 300, 0, 0, 301, 0, 302, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 306, 0, 307, 0, 308, 0, 0, 309, 310, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0,
    0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0,
    322, 0, 0, 323, 0, 0, 324, 0, 325, 0, 326, 0, 0, 327, 0, 328, 329, 0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 340, 341,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 0, 348, 0,
    349, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 358,
    0, 0, 359, 0, 360, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 371, 0, 0, 372, 0, 373, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 0,
    0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 382, 0, 0, 383, 0, 384, 0, 385, 0, 0, 386, 0, 0,
    387, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 393, 394, 0, 0, 0, 0, 0, 0,
    0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0,
    401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 404, 405, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 415, 0, 0, 416, 0, 0,
    417, 0, 418, 419, 0, 0, 420, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 423, 0, 424, 0, 425, 0, 426, 0, 0, 0, 427, 0, 428, 0, 429,
    0, 430, 0, 0, 431, 0, 432, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 438, 0, 439, 0,
    0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 444, 445, 0, 0, 0, 0, 446, 0, 0,
    0, 447, 0, 0, 448, 0, 449, 0, 0, 0, 450, 0, 451, 0, 0, 452, 0, 0, 453, 0, 454, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 0,
    0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0,
    466, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0,
    0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 477, 478, 0, 0, 0, 0,
    0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 484, 0, 485, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 491,
    0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 499, 0,
    0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 504, 0, 505, 0, 506, 0, 0, 0, 0, 507, 0, 0,
    508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 512, 0, 513, 0, 514, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0,
    0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0,
    0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 527, 0, 528, 0, 529, 0, 0,
    0, 530, 0, 0, 531, 0, 532, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0,
    0, 543, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 0, 552,
    0, 553, 0, 554, 0, 0, 555, 0, 0, 0, 556, 0, 0, 557, 0, 558, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562,
    0, 563, 0, 0, 564, 0, 565, 0, 0, 566, 0, 0, 0, 567, 0, 568, 0, 0, 569, 0, 570, 0, 571, 0, 572, 0, 573, 574, 0, 0, 0, 575,
    0, 576, 0, 0, 0, 0, 577, 0, 0, 578, 579, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 582, 0, 0, 583, 0, 0, 584, 0, 0, 0, 585, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589,
    0, 0, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 597,
    0, 0, 598, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 601, 0, 0, 602, 0, 603, 0, 604, 0, 0, 605, 0, 0, 0, 606, 0, 0, 607, 0,
    608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 615, 0, 0, 616, 0, 617, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 620, 0,
    0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 623, 0, 0, 624, 0, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0,
    0, 0, 628, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 638, 0, 0, 0, 0, 639, 0,
    640, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 643, 0, 0, 644, 0, 645, 0, 0, 646, 0, 0, 0, 647, 0, 648, 0, 0, 649, 0, 650, 0,
    651, 0, 652, 0, 653, 654, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 657, 0, 0, 658, 659, 0, 0, 0, 0, 0, 0, 660, 0, 0, 661, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 663, 0, 0, 664, 0, 0, 665, 0, 0, 666, 0, 667,
    0, 668, 0, 669, 0, 670, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0, 0,
    0, 0, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 0, 0, 680, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 682,
    0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 692, 0, 0, 693, 0, 0, 694, 0, 0, 0, 0, 695,
    0, 0, 0, 0, 696, 0, 0, 697, 0, 0, 698, 0, 0, 699, 0, 0, 700, 0, 0, 701, 0, 0, 702, 0, 0, 0, 703, 0, 0, 704, 0, 705,
    0, 706, 0, 0, 707, 0, 0, 0, 708, 0, 0, 709, 0, 710, 0, 0, 0, 711, 0, 712, 0, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 715,
    0, 0, 716, 0, 717, 0, 0, 718, 0, 0, 0, 719, 0, 720, 0, 0, 721, 0, 722, 0, 723, 0, 724, 0, 725, 726, 0, 0, 0, 727, 0, 728,
    0, 0, 0, 0, 729, 0, 0, 730, 731, 0, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 734, 0, 0, 735, 0, 0, 736, 0, 0, 0, 737, 0, 0, 738, 739, 0, 740, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 742,
    0, 0, 0, 0, 0, 743, 0, 744, 0, 0, 745, 0, 0, 746, 747, 0, 748, 0, 749, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 752, 0, 0,
    0, 0, 753, 0, 0, 0, 754, 0, 0, 755, 0, 756, 0, 0, 0, 0, 757, 0, 758, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 763, 0, 0, 764, 765, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 0,
    0, 0, 768, 0, 769, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 773, 0, 0, 774, 0, 0, 0, 0, 775,
    0, 0, 776, 0, 777, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0, 0, 0, 780, 0, 781, 0, 0, 0, 782, 0, 0, 0, 0, 783, 0, 0,
    784, 0, 785, 0, 0, 0, 0, 0, 786, 0, 0, 787, 0, 0, 0, 0, 0, 0, 788, 0, 0, 789, 0, 0, 790, 0, 0, 791, 0, 0, 0, 0,
    792, 0, 0, 0, 0, 793, 0, 0, 0, 794, 0, 0, 0, 795, 0, 0, 796, 0, 0, 0, 0, 797, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0,
    799, 0, 0, 0, 800, 0, 0, 801, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 806, 0, 807, 0, 808, 0, 809, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0,
    0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 813, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 817, 0,
    0, 0, 818, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0,
    0, 0, 825, 0, 826, 827, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 835, 0, 0, 0,
    836, 837, 0, 838, 0, 839, 0, 840, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 843, 0, 0, 0, 0, 844, 845, 0, 0, 846, 0, 0,
    0, 847, 0, 0, 0, 0, 848, 849, 0, 0, 850, 0, 0, 0, 851, 0, 0, 0, 0, 852, 0, 0, 0, 853, 0, 854, 0, 0, 0, 855, 0, 0,
    0, 0, 856, 857, 0, 0, 858, 0, 0, 0, 859, 0, 0, 0, 0, 860, 861, 0, 0, 862, 0, 0, 863, 0, 864, 0, 865, 0, 866, 0, 0, 0,
    867, 0, 0, 868, 0, 0, 869, 0, 870, 871, 0, 872, 0, 0, 873, 874, 0, 875, 0, 876, 0, 877, 0, 878, 0, 0, 0, 0, 0, 0, 879, 0,
    880, 0, 0, 881, 0, 882, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 0, 0, 885, 0, 886, 0, 0, 0, 0, 0,
    0, 887, 0, 0, 0, 888, 0, 0, 889, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 892, 0, 0, 0, 0, 0, 0, 0, 893, 0,
    894, 0, 0, 0, 0, 895, 0, 896, 0, 897, 0, 0, 898, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 899, 0, 0, 900, 0, 0, 0, 901, 0,
    0, 902, 0, 0, 903, 0, 0, 904, 0, 0, 0, 905, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 907, 908, 0, 0, 0, 0, 909, 0, 0,
    910, 0, 0, 0, 0, 0, 0, 0, 0, 0, 911, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 913, 0, 0, 0, 0, 0, 0,
    0, 0, 914, 0, 0, 0, 0, 0, 915, 0, 0, 0, 0, 0, 0, 0, 916, 0, 0, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 918, 0, 919, 0, 0, 920, 0, 0, 921, 0, 0, 0, 0, 0, 0, 0, 922, 0, 0, 0, 0, 0, 0, 0, 923, 0, 924, 925, 0, 926,
    0, 0, 0, 927, 0, 0, 0, 0, 928, 0, 929, 0, 930, 0, 931, 0, 0, 0, 932, 0, 933, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 934, 0, 0, 0, 0, 0, 0, 0, 0, 0, 935, 0, 936, 0, 937, 0, 0, 0, 938, 0, 939, 0, 940, 0, 941, 0, 0, 942, 0, 0,
    0, 0, 0, 0, 943, 0, 0, 0, 0, 0, 944, 0, 945, 0, 0, 0, 0, 0, 946, 0, 0, 0, 947, 948, 0, 949, 0, 0, 0, 950, 0, 951,
    0, 0, 952, 0, 953, 0, 954, 0, 955, 0, 956, 0, 0, 0, 957, 0, 0, 0, 958, 0, 959, 0, 0, 960, 0, 961, 0, 962, 0, 963, 0, 964,
    0, 0, 0, 0, 0, 0, 965, 0, 966, 0, 967, 0, 968, 0, 0, 0, 969, 0, 0, 970, 0, 0, 0, 0, 0, 0, 0, 0, 971, 0, 0, 0,
    0, 972, 0, 0, 0, 973, 0, 974, 0, 975, 0, 976, 0, 977, 0, 0, 0, 0, 0, 0, 0, 978, 0, 979, 0, 0, 0, 0, 0, 0, 0, 980,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 981, 0, 0, 0, 982, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 983, 0,
    0, 0, 0, 984, 0, 985, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 986, 0, 0, 0, 987, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 988, 0, 0, 0, 0, 989, 990, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 991, 0, 992, 0, 0, 0, 993, 0, 0, 0, 0,
    994, 0, 0, 0, 0, 0, 0, 995, 0, 0, 996, 0, 0, 0, 0, 0, 997, 0, 0, 998, 0, 0, 0, 0, 0, 999, 0, 0, 1000, 0, 1001, 0,
    0, 1002, 0, 0, 0, 0, 1003, 0, 0, 0, 0, 1004, 0, 1005, 0, 0, 1006, 0, 1007, 0, 1008, 0, 0, 0, 0, 0, 0, 1009, 0, 1010, 0, 1011,
    0, 0, 0, 1012, 0, 1013, 0, 1014, 0, 0, 0, 1015, 0, 0, 0, 0, 0, 1016, 1017, 0, 0, 1018, 0, 0, 0, 1019, 0, 0, 0, 1020, 0, 1021,
    0, 0, 1022, 0, 0, 0, 0, 0, 0, 0, 1023, 0, 1024, 0, 0, 0, 0, 0, 1025, 1026, 0, 0, 0, 1027, 0, 1028, 0, 0, 0, 0, 0, 0,
    0, 0, 1029, 0, 0, 0, 1030, 0, 0, 1031, 0, 0, 0, 1032, 0, 0, 0, 1033, 0, 0, 0, 1034, 0, 0, 0, 0, 0, 0, 0, 1035,
};
void recomp_unit_0150_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A5C004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0150[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A5C004;
    case 2u: goto L_08A5C030;
    case 3u: goto L_08A5C038;
    case 4u: goto L_08A5C040;
    case 5u: goto L_08A5C048;
    case 6u: goto L_08A5C068;
    case 7u: goto L_08A5C074;
    case 8u: goto L_08A5C084;
    case 9u: goto L_08A5C090;
    case 10u: goto L_08A5C098;
    case 11u: goto L_08A5C0A4;
    case 12u: goto L_08A5C0AC;
    case 13u: goto L_08A5C0B8;
    case 14u: goto L_08A5C0C0;
    case 15u: goto L_08A5C0C8;
    case 16u: goto L_08A5C0E4;
    case 17u: goto L_08A5C0F4;
    case 18u: goto L_08A5C100;
    case 19u: goto L_08A5C108;
    case 20u: goto L_08A5C114;
    case 21u: goto L_08A5C120;
    case 22u: goto L_08A5C12C;
    case 23u: goto L_08A5C134;
    case 24u: goto L_08A5C140;
    case 25u: goto L_08A5C148;
    case 26u: goto L_08A5C150;
    case 27u: goto L_08A5C160;
    case 28u: goto L_08A5C16C;
    case 29u: goto L_08A5C170;
    case 30u: goto L_08A5C17C;
    case 31u: goto L_08A5C184;
    case 32u: goto L_08A5C188;
    case 33u: goto L_08A5C1B0;
    case 34u: goto L_08A5C1BC;
    case 35u: goto L_08A5C1CC;
    case 36u: goto L_08A5C1D8;
    case 37u: goto L_08A5C1E0;
    case 38u: goto L_08A5C1E8;
    case 39u: goto L_08A5C1F0;
    case 40u: goto L_08A5C20C;
    case 41u: goto L_08A5C21C;
    case 42u: goto L_08A5C228;
    case 43u: goto L_08A5C230;
    case 44u: goto L_08A5C23C;
    case 45u: goto L_08A5C248;
    case 46u: goto L_08A5C254;
    case 47u: goto L_08A5C260;
    case 48u: goto L_08A5C27C;
    case 49u: goto L_08A5C290;
    case 50u: goto L_08A5C29C;
    case 51u: goto L_08A5C2A8;
    case 52u: goto L_08A5C2B4;
    case 53u: goto L_08A5C2DC;
    case 54u: goto L_08A5C2E4;
    case 55u: goto L_08A5C2F4;
    case 56u: goto L_08A5C2FC;
    case 57u: goto L_08A5C304;
    case 58u: goto L_08A5C320;
    case 59u: goto L_08A5C328;
    case 60u: goto L_08A5C330;
    case 61u: goto L_08A5C348;
    case 62u: goto L_08A5C354;
    case 63u: goto L_08A5C35C;
    case 64u: goto L_08A5C36C;
    case 65u: goto L_08A5C37C;
    case 66u: goto L_08A5C390;
    case 67u: goto L_08A5C3A0;
    case 68u: goto L_08A5C3A8;
    case 69u: goto L_08A5C3C0;
    case 70u: goto L_08A5C3D4;
    case 71u: goto L_08A5C3E8;
    case 72u: goto L_08A5C3FC;
    case 73u: goto L_08A5C410;
    case 74u: goto L_08A5C418;
    case 75u: goto L_08A5C42C;
    case 76u: goto L_08A5C44C;
    case 77u: goto L_08A5C458;
    case 78u: goto L_08A5C474;
    case 79u: goto L_08A5C484;
    case 80u: goto L_08A5C490;
    case 81u: goto L_08A5C4A4;
    case 82u: goto L_08A5C4B8;
    case 83u: goto L_08A5C4C4;
    case 84u: goto L_08A5C4D8;
    case 85u: goto L_08A5C4FC;
    case 86u: goto L_08A5C508;
    case 87u: goto L_08A5C528;
    case 88u: goto L_08A5C544;
    case 89u: goto L_08A5C548;
    case 90u: goto L_08A5C590;
    case 91u: goto L_08A5C59C;
    case 92u: goto L_08A5C5A8;
    case 93u: goto L_08A5C5B4;
    case 94u: goto L_08A5C5E8;
    case 95u: goto L_08A5C5F8;
    case 96u: goto L_08A5C608;
    case 97u: goto L_08A5C618;
    case 98u: goto L_08A5C624;
    case 99u: goto L_08A5C630;
    case 100u: goto L_08A5C644;
    case 101u: goto L_08A5C654;
    case 102u: goto L_08A5C664;
    case 103u: goto L_08A5C66C;
    case 104u: goto L_08A5C67C;
    case 105u: goto L_08A5C68C;
    case 106u: goto L_08A5C698;
    case 107u: goto L_08A5C6A0;
    case 108u: goto L_08A5C6B4;
    case 109u: goto L_08A5C6C4;
    case 110u: goto L_08A5C6D0;
    case 111u: goto L_08A5C6E0;
    case 112u: goto L_08A5C6E8;
    case 113u: goto L_08A5C6F0;
    case 114u: goto L_08A5C6F8;
    case 115u: goto L_08A5C704;
    case 116u: goto L_08A5C70C;
    case 117u: goto L_08A5C714;
    case 118u: goto L_08A5C724;
    case 119u: goto L_08A5C738;
    case 120u: goto L_08A5C744;
    case 121u: goto L_08A5C74C;
    case 122u: goto L_08A5C754;
    case 123u: goto L_08A5C760;
    case 124u: goto L_08A5C768;
    case 125u: goto L_08A5C774;
    case 126u: goto L_08A5C778;
    case 127u: goto L_08A5C784;
    case 128u: goto L_08A5C79C;
    case 129u: goto L_08A5C7A4;
    case 130u: goto L_08A5C7B8;
    case 131u: goto L_08A5C7C0;
    case 132u: goto L_08A5C7D4;
    case 133u: goto L_08A5C7DC;
    case 134u: goto L_08A5C7F0;
    case 135u: goto L_08A5C80C;
    case 136u: goto L_08A5C810;
    case 137u: goto L_08A5C818;
    case 138u: goto L_08A5C824;
    case 139u: goto L_08A5C84C;
    case 140u: goto L_08A5C86C;
    case 141u: goto L_08A5C880;
    case 142u: goto L_08A5C894;
    case 143u: goto L_08A5C8B0;
    case 144u: goto L_08A5C8BC;
    case 145u: goto L_08A5C8CC;
    case 146u: goto L_08A5C8DC;
    case 147u: goto L_08A5C8E8;
    case 148u: goto L_08A5C8F0;
    case 149u: goto L_08A5C8F8;
    case 150u: goto L_08A5C900;
    case 151u: goto L_08A5C914;
    case 152u: goto L_08A5C91C;
    case 153u: goto L_08A5C924;
    case 154u: goto L_08A5C92C;
    case 155u: goto L_08A5C93C;
    case 156u: goto L_08A5C944;
    case 157u: goto L_08A5C954;
    case 158u: goto L_08A5C95C;
    case 159u: goto L_08A5C978;
    case 160u: goto L_08A5C980;
    case 161u: goto L_08A5C988;
    case 162u: goto L_08A5C994;
    case 163u: goto L_08A5C9A0;
    case 164u: goto L_08A5C9A8;
    case 165u: goto L_08A5C9B0;
    case 166u: goto L_08A5C9C0;
    case 167u: goto L_08A5C9C8;
    case 168u: goto L_08A5C9E0;
    case 169u: goto L_08A5C9F4;
    case 170u: goto L_08A5CA00;
    case 171u: goto L_08A5CA08;
    case 172u: goto L_08A5CA0C;
    case 173u: goto L_08A5CA14;
    case 174u: goto L_08A5CA20;
    case 175u: goto L_08A5CA38;
    case 176u: goto L_08A5CA40;
    case 177u: goto L_08A5CA48;
    case 178u: goto L_08A5CA58;
    case 179u: goto L_08A5CA60;
    case 180u: goto L_08A5CA6C;
    case 181u: goto L_08A5CA74;
    case 182u: goto L_08A5CA9C;
    case 183u: goto L_08A5CAA4;
    case 184u: goto L_08A5CAD4;
    case 185u: goto L_08A5CADC;
    case 186u: goto L_08A5CAE4;
    case 187u: goto L_08A5CAF4;
    case 188u: goto L_08A5CB04;
    case 189u: goto L_08A5CB08;
    case 190u: goto L_08A5CB14;
    case 191u: goto L_08A5CB1C;
    case 192u: goto L_08A5CB28;
    case 193u: goto L_08A5CB34;
    case 194u: goto L_08A5CB40;
    case 195u: goto L_08A5CB4C;
    case 196u: goto L_08A5CB54;
    case 197u: goto L_08A5CB88;
    case 198u: goto L_08A5CBA4;
    case 199u: goto L_08A5CBB0;
    case 200u: goto L_08A5CBC8;
    case 201u: goto L_08A5CBD4;
    case 202u: goto L_08A5CBE4;
    case 203u: goto L_08A5CC00;
    case 204u: goto L_08A5CC08;
    case 205u: goto L_08A5CC20;
    case 206u: goto L_08A5CC30;
    case 207u: goto L_08A5CC40;
    case 208u: goto L_08A5CC4C;
    case 209u: goto L_08A5CC70;
    case 210u: goto L_08A5CC7C;
    case 211u: goto L_08A5CC8C;
    case 212u: goto L_08A5CCA0;
    case 213u: goto L_08A5CCC0;
    case 214u: goto L_08A5CCD0;
    case 215u: goto L_08A5CD08;
    case 216u: goto L_08A5CD18;
    case 217u: goto L_08A5CD24;
    case 218u: goto L_08A5CD30;
    case 219u: goto L_08A5CD3C;
    case 220u: goto L_08A5CD48;
    case 221u: goto L_08A5CD54;
    case 222u: goto L_08A5CD8C;
    case 223u: goto L_08A5CDA4;
    case 224u: goto L_08A5CDA8;
    case 225u: goto L_08A5CDB0;
    case 226u: goto L_08A5CDB8;
    case 227u: goto L_08A5CDC4;
    case 228u: goto L_08A5CDD0;
    case 229u: goto L_08A5CDE8;
    case 230u: goto L_08A5CE00;
    case 231u: goto L_08A5CE08;
    case 232u: goto L_08A5CE14;
    case 233u: goto L_08A5CE20;
    case 234u: goto L_08A5CE2C;
    case 235u: goto L_08A5CE34;
    case 236u: goto L_08A5CE44;
    case 237u: goto L_08A5CE54;
    case 238u: goto L_08A5CE5C;
    case 239u: goto L_08A5CE70;
    case 240u: goto L_08A5CE90;
    case 241u: goto L_08A5CE98;
    case 242u: goto L_08A5CEB4;
    case 243u: goto L_08A5CED4;
    case 244u: goto L_08A5CEDC;
    case 245u: goto L_08A5CEF4;
    case 246u: goto L_08A5CF00;
    case 247u: goto L_08A5CF08;
    case 248u: goto L_08A5CF10;
    case 249u: goto L_08A5CF18;
    case 250u: goto L_08A5CF20;
    case 251u: goto L_08A5CF2C;
    case 252u: goto L_08A5CF38;
    case 253u: goto L_08A5CF40;
    case 254u: goto L_08A5CF58;
    case 255u: goto L_08A5CF60;
    case 256u: goto L_08A5CF7C;
    case 257u: goto L_08A5CF84;
    case 258u: goto L_08A5CFA0;
    case 259u: goto L_08A5CFBC;
    case 260u: goto L_08A5CFCC;
    case 261u: goto L_08A5CFD4;
    case 262u: goto L_08A5CFE0;
    case 263u: goto L_08A5CFEC;
    case 264u: goto L_08A5D004;
    case 265u: goto L_08A5D00C;
    case 266u: goto L_08A5D030;
    case 267u: goto L_08A5D040;
    case 268u: goto L_08A5D04C;
    case 269u: goto L_08A5D058;
    case 270u: goto L_08A5D060;
    case 271u: goto L_08A5D06C;
    case 272u: goto L_08A5D07C;
    case 273u: goto L_08A5D0B0;
    case 274u: goto L_08A5D0D0;
    case 275u: goto L_08A5D0DC;
    case 276u: goto L_08A5D0E8;
    case 277u: goto L_08A5D0F0;
    case 278u: goto L_08A5D12C;
    case 279u: goto L_08A5D150;
    case 280u: goto L_08A5D15C;
    case 281u: goto L_08A5D16C;
    case 282u: goto L_08A5D174;
    case 283u: goto L_08A5D17C;
    case 284u: goto L_08A5D188;
    case 285u: goto L_08A5D194;
    case 286u: goto L_08A5D19C;
    case 287u: goto L_08A5D1A0;
    case 288u: goto L_08A5D1A8;
    case 289u: goto L_08A5D1DC;
    case 290u: goto L_08A5D1E4;
    case 291u: goto L_08A5D1FC;
    case 292u: goto L_08A5D218;
    case 293u: goto L_08A5D228;
    case 294u: goto L_08A5D234;
    case 295u: goto L_08A5D244;
    case 296u: goto L_08A5D250;
    case 297u: goto L_08A5D264;
    case 298u: goto L_08A5D274;
    case 299u: goto L_08A5D284;
    case 300u: goto L_08A5D294;
    case 301u: goto L_08A5D2A0;
    case 302u: goto L_08A5D2A8;
    case 303u: goto L_08A5D2B0;
    case 304u: goto L_08A5D2C4;
    case 305u: goto L_08A5D2F8;
    case 306u: goto L_08A5D310;
    case 307u: goto L_08A5D318;
    case 308u: goto L_08A5D320;
    case 309u: goto L_08A5D32C;
    case 310u: goto L_08A5D330;
    case 311u: goto L_08A5D338;
    case 312u: goto L_08A5D34C;
    case 313u: goto L_08A5D35C;
    case 314u: goto L_08A5D36C;
    case 315u: goto L_08A5D390;
    case 316u: goto L_08A5D39C;
    case 317u: goto L_08A5D3A4;
    case 318u: goto L_08A5D3C4;
    case 319u: goto L_08A5D3CC;
    case 320u: goto L_08A5D3E0;
    case 321u: goto L_08A5D3EC;
    case 322u: goto L_08A5D404;
    case 323u: goto L_08A5D410;
    case 324u: goto L_08A5D41C;
    case 325u: goto L_08A5D424;
    case 326u: goto L_08A5D42C;
    case 327u: goto L_08A5D438;
    case 328u: goto L_08A5D440;
    case 329u: goto L_08A5D444;
    case 330u: goto L_08A5D44C;
    case 331u: goto L_08A5D458;
    case 332u: goto L_08A5D468;
    case 333u: goto L_08A5D474;
    case 334u: goto L_08A5D494;
    case 335u: goto L_08A5D4A0;
    case 336u: goto L_08A5D4BC;
    case 337u: goto L_08A5D4C8;
    case 338u: goto L_08A5D4DC;
    case 339u: goto L_08A5D4F0;
    case 340u: goto L_08A5D4FC;
    case 341u: goto L_08A5D500;
    case 342u: goto L_08A5D514;
    case 343u: goto L_08A5D52C;
    case 344u: goto L_08A5D544;
    case 345u: goto L_08A5D55C;
    case 346u: goto L_08A5D564;
    case 347u: goto L_08A5D570;
    case 348u: goto L_08A5D57C;
    case 349u: goto L_08A5D584;
    case 350u: goto L_08A5D58C;
    case 351u: goto L_08A5D598;
    case 352u: goto L_08A5D5A4;
    case 353u: goto L_08A5D5B8;
    case 354u: goto L_08A5D5C8;
    case 355u: goto L_08A5D5D4;
    case 356u: goto L_08A5D5EC;
    case 357u: goto L_08A5D5F4;
    case 358u: goto L_08A5D600;
    case 359u: goto L_08A5D60C;
    case 360u: goto L_08A5D614;
    case 361u: goto L_08A5D61C;
    case 362u: goto L_08A5D628;
    case 363u: goto L_08A5D634;
    case 364u: goto L_08A5D648;
    case 365u: goto L_08A5D658;
    case 366u: goto L_08A5D664;
    case 367u: goto L_08A5D67C;
    case 368u: goto L_08A5D694;
    case 369u: goto L_08A5D6AC;
    case 370u: goto L_08A5D6B4;
    case 371u: goto L_08A5D6C0;
    case 372u: goto L_08A5D6CC;
    case 373u: goto L_08A5D6D4;
    case 374u: goto L_08A5D6DC;
    case 375u: goto L_08A5D6E8;
    case 376u: goto L_08A5D6F4;
    case 377u: goto L_08A5D708;
    case 378u: goto L_08A5D718;
    case 379u: goto L_08A5D724;
    case 380u: goto L_08A5D73C;
    case 381u: goto L_08A5D744;
    case 382u: goto L_08A5D750;
    case 383u: goto L_08A5D75C;
    case 384u: goto L_08A5D764;
    case 385u: goto L_08A5D76C;
    case 386u: goto L_08A5D778;
    case 387u: goto L_08A5D784;
    case 388u: goto L_08A5D798;
    case 389u: goto L_08A5D7A8;
    case 390u: goto L_08A5D7B4;
    case 391u: goto L_08A5D7CC;
    case 392u: goto L_08A5D7D4;
    case 393u: goto L_08A5D7E4;
    case 394u: goto L_08A5D7E8;
    case 395u: goto L_08A5D808;
    case 396u: goto L_08A5D810;
    case 397u: goto L_08A5D838;
    case 398u: goto L_08A5D84C;
    case 399u: goto L_08A5D868;
    case 400u: goto L_08A5D878;
    case 401u: goto L_08A5D884;
    case 402u: goto L_08A5D890;
    case 403u: goto L_08A5D8A0;
    case 404u: goto L_08A5D8AC;
    case 405u: goto L_08A5D8B0;
    case 406u: goto L_08A5D8CC;
    case 407u: goto L_08A5D8D4;
    case 408u: goto L_08A5D8E0;
    case 409u: goto L_08A5D8EC;
    case 410u: goto L_08A5D924;
    case 411u: goto L_08A5D934;
    case 412u: goto L_08A5D940;
    case 413u: goto L_08A5D95C;
    case 414u: goto L_08A5D964;
    case 415u: goto L_08A5D96C;
    case 416u: goto L_08A5D978;
    case 417u: goto L_08A5D984;
    case 418u: goto L_08A5D98C;
    case 419u: goto L_08A5D990;
    case 420u: goto L_08A5D99C;
    case 421u: goto L_08A5D9A8;
    case 422u: goto L_08A5D9B0;
    case 423u: goto L_08A5D9C8;
    case 424u: goto L_08A5D9D0;
    case 425u: goto L_08A5D9D8;
    case 426u: goto L_08A5D9E0;
    case 427u: goto L_08A5D9F0;
    case 428u: goto L_08A5D9F8;
    case 429u: goto L_08A5DA00;
    case 430u: goto L_08A5DA08;
    case 431u: goto L_08A5DA14;
    case 432u: goto L_08A5DA1C;
    case 433u: goto L_08A5DA24;
    case 434u: goto L_08A5DA30;
    case 435u: goto L_08A5DA48;
    case 436u: goto L_08A5DA5C;
    case 437u: goto L_08A5DA64;
    case 438u: goto L_08A5DA74;
    case 439u: goto L_08A5DA7C;
    case 440u: goto L_08A5DA9C;
    case 441u: goto L_08A5DAB4;
    case 442u: goto L_08A5DABC;
    case 443u: goto L_08A5DAC4;
    case 444u: goto L_08A5DAE0;
    case 445u: goto L_08A5DAE4;
    case 446u: goto L_08A5DAF8;
    case 447u: goto L_08A5DB08;
    case 448u: goto L_08A5DB14;
    case 449u: goto L_08A5DB1C;
    case 450u: goto L_08A5DB2C;
    case 451u: goto L_08A5DB34;
    case 452u: goto L_08A5DB40;
    case 453u: goto L_08A5DB4C;
    case 454u: goto L_08A5DB54;
    case 455u: goto L_08A5DB5C;
    case 456u: goto L_08A5DB68;
    case 457u: goto L_08A5DB74;
    case 458u: goto L_08A5DB88;
    case 459u: goto L_08A5DB94;
    case 460u: goto L_08A5DBB0;
    case 461u: goto L_08A5DBC0;
    case 462u: goto L_08A5DBC8;
    case 463u: goto L_08A5DBD4;
    case 464u: goto L_08A5DBEC;
    case 465u: goto L_08A5DBFC;
    case 466u: goto L_08A5DC04;
    case 467u: goto L_08A5DC1C;
    case 468u: goto L_08A5DC28;
    case 469u: goto L_08A5DC40;
    case 470u: goto L_08A5DC50;
    case 471u: goto L_08A5DC58;
    case 472u: goto L_08A5DC74;
    case 473u: goto L_08A5DC88;
    case 474u: goto L_08A5DCBC;
    case 475u: goto L_08A5DCC8;
    case 476u: goto L_08A5DCE0;
    case 477u: goto L_08A5DCEC;
    case 478u: goto L_08A5DCF0;
    case 479u: goto L_08A5DD08;
    case 480u: goto L_08A5DD1C;
    case 481u: goto L_08A5DD48;
    case 482u: goto L_08A5DD54;
    case 483u: goto L_08A5DD5C;
    case 484u: goto L_08A5DD88;
    case 485u: goto L_08A5DD90;
    case 486u: goto L_08A5DDA0;
    case 487u: goto L_08A5DDB0;
    case 488u: goto L_08A5DDD0;
    case 489u: goto L_08A5DDDC;
    case 490u: goto L_08A5DDF8;
    case 491u: goto L_08A5DE00;
    case 492u: goto L_08A5DE08;
    case 493u: goto L_08A5DE24;
    case 494u: goto L_08A5DE2C;
    case 495u: goto L_08A5DE34;
    case 496u: goto L_08A5DE44;
    case 497u: goto L_08A5DE5C;
    case 498u: goto L_08A5DE70;
    case 499u: goto L_08A5DE7C;
    case 500u: goto L_08A5DE8C;
    case 501u: goto L_08A5DEA4;
    case 502u: goto L_08A5DEBC;
    case 503u: goto L_08A5DED0;
    case 504u: goto L_08A5DED4;
    case 505u: goto L_08A5DEDC;
    case 506u: goto L_08A5DEE4;
    case 507u: goto L_08A5DEF8;
    case 508u: goto L_08A5DF04;
    case 509u: goto L_08A5DF0C;
    case 510u: goto L_08A5DF30;
    case 511u: goto L_08A5DF38;
    case 512u: goto L_08A5DF44;
    case 513u: goto L_08A5DF4C;
    case 514u: goto L_08A5DF54;
    case 515u: goto L_08A5DF60;
    case 516u: goto L_08A5DF70;
    case 517u: goto L_08A5DF94;
    case 518u: goto L_08A5DFA0;
    case 519u: goto L_08A5DFAC;
    case 520u: goto L_08A5DFE4;
    case 521u: goto L_08A5DFFC;
    case 522u: goto L_08A5E014;
    case 523u: goto L_08A5E028;
    case 524u: goto L_08A5E03C;
    case 525u: goto L_08A5E054;
    case 526u: goto L_08A5E05C;
    case 527u: goto L_08A5E068;
    case 528u: goto L_08A5E070;
    case 529u: goto L_08A5E078;
    case 530u: goto L_08A5E088;
    case 531u: goto L_08A5E094;
    case 532u: goto L_08A5E09C;
    case 533u: goto L_08A5E0A8;
    case 534u: goto L_08A5E0B0;
    case 535u: goto L_08A5E0C8;
    case 536u: goto L_08A5E0DC;
    case 537u: goto L_08A5E0F0;
    case 538u: goto L_08A5E138;
    case 539u: goto L_08A5E14C;
    case 540u: goto L_08A5E154;
    case 541u: goto L_08A5E164;
    case 542u: goto L_08A5E170;
    case 543u: goto L_08A5E188;
    case 544u: goto L_08A5E19C;
    case 545u: goto L_08A5E1A8;
    case 546u: goto L_08A5E1B4;
    case 547u: goto L_08A5E1C0;
    case 548u: goto L_08A5E1CC;
    case 549u: goto L_08A5E1D8;
    case 550u: goto L_08A5E1E4;
    case 551u: goto L_08A5E1F4;
    case 552u: goto L_08A5E200;
    case 553u: goto L_08A5E208;
    case 554u: goto L_08A5E210;
    case 555u: goto L_08A5E21C;
    case 556u: goto L_08A5E22C;
    case 557u: goto L_08A5E238;
    case 558u: goto L_08A5E240;
    case 559u: goto L_08A5E250;
    case 560u: goto L_08A5E258;
    case 561u: goto L_08A5E278;
    case 562u: goto L_08A5E280;
    case 563u: goto L_08A5E288;
    case 564u: goto L_08A5E294;
    case 565u: goto L_08A5E29C;
    case 566u: goto L_08A5E2A8;
    case 567u: goto L_08A5E2B8;
    case 568u: goto L_08A5E2C0;
    case 569u: goto L_08A5E2CC;
    case 570u: goto L_08A5E2D4;
    case 571u: goto L_08A5E2DC;
    case 572u: goto L_08A5E2E4;
    case 573u: goto L_08A5E2EC;
    case 574u: goto L_08A5E2F0;
    case 575u: goto L_08A5E300;
    case 576u: goto L_08A5E308;
    case 577u: goto L_08A5E31C;
    case 578u: goto L_08A5E328;
    case 579u: goto L_08A5E32C;
    case 580u: goto L_08A5E348;
    case 581u: goto L_08A5E354;
    case 582u: goto L_08A5E398;
    case 583u: goto L_08A5E3A4;
    case 584u: goto L_08A5E3B0;
    case 585u: goto L_08A5E3C0;
    case 586u: goto L_08A5E3CC;
    case 587u: goto L_08A5E3D4;
    case 588u: goto L_08A5E3E0;
    case 589u: goto L_08A5E400;
    case 590u: goto L_08A5E414;
    case 591u: goto L_08A5E428;
    case 592u: goto L_08A5E438;
    case 593u: goto L_08A5E444;
    case 594u: goto L_08A5E450;
    case 595u: goto L_08A5E45C;
    case 596u: goto L_08A5E474;
    case 597u: goto L_08A5E480;
    case 598u: goto L_08A5E48C;
    case 599u: goto L_08A5E49C;
    case 600u: goto L_08A5E4A8;
    case 601u: goto L_08A5E4B8;
    case 602u: goto L_08A5E4C4;
    case 603u: goto L_08A5E4CC;
    case 604u: goto L_08A5E4D4;
    case 605u: goto L_08A5E4E0;
    case 606u: goto L_08A5E4F0;
    case 607u: goto L_08A5E4FC;
    case 608u: goto L_08A5E504;
    case 609u: goto L_08A5E50C;
    case 610u: goto L_08A5E514;
    case 611u: goto L_08A5E51C;
    case 612u: goto L_08A5E524;
    case 613u: goto L_08A5E52C;
    case 614u: goto L_08A5E534;
    case 615u: goto L_08A5E53C;
    case 616u: goto L_08A5E548;
    case 617u: goto L_08A5E550;
    case 618u: goto L_08A5E558;
    case 619u: goto L_08A5E560;
    case 620u: goto L_08A5E57C;
    case 621u: goto L_08A5E59C;
    case 622u: goto L_08A5E5A8;
    case 623u: goto L_08A5E5B4;
    case 624u: goto L_08A5E5C0;
    case 625u: goto L_08A5E5C8;
    case 626u: goto L_08A5E5D4;
    case 627u: goto L_08A5E5FC;
    case 628u: goto L_08A5E60C;
    case 629u: goto L_08A5E61C;
    case 630u: goto L_08A5E624;
    case 631u: goto L_08A5E644;
    case 632u: goto L_08A5E660;
    case 633u: goto L_08A5E698;
    case 634u: goto L_08A5E6A8;
    case 635u: goto L_08A5E6B8;
    case 636u: goto L_08A5E6D0;
    case 637u: goto L_08A5E6E4;
    case 638u: goto L_08A5E6E8;
    case 639u: goto L_08A5E6FC;
    case 640u: goto L_08A5E704;
    case 641u: goto L_08A5E720;
    case 642u: goto L_08A5E728;
    case 643u: goto L_08A5E730;
    case 644u: goto L_08A5E73C;
    case 645u: goto L_08A5E744;
    case 646u: goto L_08A5E750;
    case 647u: goto L_08A5E760;
    case 648u: goto L_08A5E768;
    case 649u: goto L_08A5E774;
    case 650u: goto L_08A5E77C;
    case 651u: goto L_08A5E784;
    case 652u: goto L_08A5E78C;
    case 653u: goto L_08A5E794;
    case 654u: goto L_08A5E798;
    case 655u: goto L_08A5E7A8;
    case 656u: goto L_08A5E7B0;
    case 657u: goto L_08A5E7C4;
    case 658u: goto L_08A5E7D0;
    case 659u: goto L_08A5E7D4;
    case 660u: goto L_08A5E7F0;
    case 661u: goto L_08A5E7FC;
    case 662u: goto L_08A5E848;
    case 663u: goto L_08A5E854;
    case 664u: goto L_08A5E860;
    case 665u: goto L_08A5E86C;
    case 666u: goto L_08A5E878;
    case 667u: goto L_08A5E880;
    case 668u: goto L_08A5E888;
    case 669u: goto L_08A5E890;
    case 670u: goto L_08A5E898;
    case 671u: goto L_08A5E8A4;
    case 672u: goto L_08A5E8B4;
    case 673u: goto L_08A5E8C4;
    case 674u: goto L_08A5E8E0;
    case 675u: goto L_08A5E8F8;
    case 676u: goto L_08A5E914;
    case 677u: goto L_08A5E928;
    case 678u: goto L_08A5E938;
    case 679u: goto L_08A5E944;
    case 680u: goto L_08A5E954;
    case 681u: goto L_08A5E95C;
    case 682u: goto L_08A5E980;
    case 683u: goto L_08A5E988;
    case 684u: goto L_08A5E9A4;
    case 685u: goto L_08A5E9AC;
    case 686u: goto L_08A5E9C4;
    case 687u: goto L_08A5E9D0;
    case 688u: goto L_08A5E9E4;
    case 689u: goto L_08A5E9F8;
    case 690u: goto L_08A5EA3C;
    case 691u: goto L_08A5EA50;
    case 692u: goto L_08A5EA54;
    case 693u: goto L_08A5EA60;
    case 694u: goto L_08A5EA6C;
    case 695u: goto L_08A5EA80;
    case 696u: goto L_08A5EA94;
    case 697u: goto L_08A5EAA0;
    case 698u: goto L_08A5EAAC;
    case 699u: goto L_08A5EAB8;
    case 700u: goto L_08A5EAC4;
    case 701u: goto L_08A5EAD0;
    case 702u: goto L_08A5EADC;
    case 703u: goto L_08A5EAEC;
    case 704u: goto L_08A5EAF8;
    case 705u: goto L_08A5EB00;
    case 706u: goto L_08A5EB08;
    case 707u: goto L_08A5EB14;
    case 708u: goto L_08A5EB24;
    case 709u: goto L_08A5EB30;
    case 710u: goto L_08A5EB38;
    case 711u: goto L_08A5EB48;
    case 712u: goto L_08A5EB50;
    case 713u: goto L_08A5EB70;
    case 714u: goto L_08A5EB78;
    case 715u: goto L_08A5EB80;
    case 716u: goto L_08A5EB8C;
    case 717u: goto L_08A5EB94;
    case 718u: goto L_08A5EBA0;
    case 719u: goto L_08A5EBB0;
    case 720u: goto L_08A5EBB8;
    case 721u: goto L_08A5EBC4;
    case 722u: goto L_08A5EBCC;
    case 723u: goto L_08A5EBD4;
    case 724u: goto L_08A5EBDC;
    case 725u: goto L_08A5EBE4;
    case 726u: goto L_08A5EBE8;
    case 727u: goto L_08A5EBF8;
    case 728u: goto L_08A5EC00;
    case 729u: goto L_08A5EC14;
    case 730u: goto L_08A5EC20;
    case 731u: goto L_08A5EC24;
    case 732u: goto L_08A5EC40;
    case 733u: goto L_08A5EC4C;
    case 734u: goto L_08A5EC90;
    case 735u: goto L_08A5EC9C;
    case 736u: goto L_08A5ECA8;
    case 737u: goto L_08A5ECB8;
    case 738u: goto L_08A5ECC4;
    case 739u: goto L_08A5ECC8;
    case 740u: goto L_08A5ECD0;
    case 741u: goto L_08A5ECF0;
    case 742u: goto L_08A5ED00;
    case 743u: goto L_08A5ED18;
    case 744u: goto L_08A5ED20;
    case 745u: goto L_08A5ED2C;
    case 746u: goto L_08A5ED38;
    case 747u: goto L_08A5ED3C;
    case 748u: goto L_08A5ED44;
    case 749u: goto L_08A5ED4C;
    case 750u: goto L_08A5ED5C;
    case 751u: goto L_08A5ED68;
    case 752u: goto L_08A5ED78;
    case 753u: goto L_08A5ED8C;
    case 754u: goto L_08A5ED9C;
    case 755u: goto L_08A5EDA8;
    case 756u: goto L_08A5EDB0;
    case 757u: goto L_08A5EDC4;
    case 758u: goto L_08A5EDCC;
    case 759u: goto L_08A5EDDC;
    case 760u: goto L_08A5EE18;
    case 761u: goto L_08A5EE28;
    case 762u: goto L_08A5EE38;
    case 763u: goto L_08A5EE44;
    case 764u: goto L_08A5EE50;
    case 765u: goto L_08A5EE54;
    case 766u: goto L_08A5EE64;
    case 767u: goto L_08A5EE74;
    case 768u: goto L_08A5EE8C;
    case 769u: goto L_08A5EE94;
    case 770u: goto L_08A5EEA8;
    case 771u: goto L_08A5EEC4;
    case 772u: goto L_08A5EED8;
    case 773u: goto L_08A5EEE0;
    case 774u: goto L_08A5EEEC;
    case 775u: goto L_08A5EF00;
    case 776u: goto L_08A5EF0C;
    case 777u: goto L_08A5EF14;
    case 778u: goto L_08A5EF24;
    case 779u: goto L_08A5EF38;
    case 780u: goto L_08A5EF4C;
    case 781u: goto L_08A5EF54;
    case 782u: goto L_08A5EF64;
    case 783u: goto L_08A5EF78;
    case 784u: goto L_08A5EF84;
    case 785u: goto L_08A5EF8C;
    case 786u: goto L_08A5EFA4;
    case 787u: goto L_08A5EFB0;
    case 788u: goto L_08A5EFCC;
    case 789u: goto L_08A5EFD8;
    case 790u: goto L_08A5EFE4;
    case 791u: goto L_08A5EFF0;
    case 792u: goto L_08A5F004;
    case 793u: goto L_08A5F018;
    case 794u: goto L_08A5F028;
    case 795u: goto L_08A5F038;
    case 796u: goto L_08A5F044;
    case 797u: goto L_08A5F058;
    case 798u: goto L_08A5F060;
    case 799u: goto L_08A5F084;
    case 800u: goto L_08A5F094;
    case 801u: goto L_08A5F0A0;
    case 802u: goto L_08A5F0AC;
    case 803u: goto L_08A5F0D0;
    case 804u: goto L_08A5F0E8;
    case 805u: goto L_08A5F110;
    case 806u: goto L_08A5F12C;
    case 807u: goto L_08A5F134;
    case 808u: goto L_08A5F13C;
    case 809u: goto L_08A5F144;
    case 810u: goto L_08A5F154;
    case 811u: goto L_08A5F17C;
    case 812u: goto L_08A5F194;
    case 813u: goto L_08A5F1AC;
    case 814u: goto L_08A5F1BC;
    case 815u: goto L_08A5F1C8;
    case 816u: goto L_08A5F1EC;
    case 817u: goto L_08A5F1FC;
    case 818u: goto L_08A5F20C;
    case 819u: goto L_08A5F214;
    case 820u: goto L_08A5F22C;
    case 821u: goto L_08A5F23C;
    case 822u: goto L_08A5F248;
    case 823u: goto L_08A5F26C;
    case 824u: goto L_08A5F27C;
    case 825u: goto L_08A5F28C;
    case 826u: goto L_08A5F294;
    case 827u: goto L_08A5F298;
    case 828u: goto L_08A5F2A0;
    case 829u: goto L_08A5F2C8;
    case 830u: goto L_08A5F2D8;
    case 831u: goto L_08A5F314;
    case 832u: goto L_08A5F324;
    case 833u: goto L_08A5F344;
    case 834u: goto L_08A5F360;
    case 835u: goto L_08A5F374;
    case 836u: goto L_08A5F384;
    case 837u: goto L_08A5F388;
    case 838u: goto L_08A5F390;
    case 839u: goto L_08A5F398;
    case 840u: goto L_08A5F3A0;
    case 841u: goto L_08A5F3A8;
    case 842u: goto L_08A5F3C4;
    case 843u: goto L_08A5F3D4;
    case 844u: goto L_08A5F3E8;
    case 845u: goto L_08A5F3EC;
    case 846u: goto L_08A5F3F8;
    case 847u: goto L_08A5F408;
    case 848u: goto L_08A5F41C;
    case 849u: goto L_08A5F420;
    case 850u: goto L_08A5F42C;
    case 851u: goto L_08A5F43C;
    case 852u: goto L_08A5F450;
    case 853u: goto L_08A5F460;
    case 854u: goto L_08A5F468;
    case 855u: goto L_08A5F478;
    case 856u: goto L_08A5F48C;
    case 857u: goto L_08A5F490;
    case 858u: goto L_08A5F49C;
    case 859u: goto L_08A5F4AC;
    case 860u: goto L_08A5F4C0;
    case 861u: goto L_08A5F4C4;
    case 862u: goto L_08A5F4D0;
    case 863u: goto L_08A5F4DC;
    case 864u: goto L_08A5F4E4;
    case 865u: goto L_08A5F4EC;
    case 866u: goto L_08A5F4F4;
    case 867u: goto L_08A5F504;
    case 868u: goto L_08A5F510;
    case 869u: goto L_08A5F51C;
    case 870u: goto L_08A5F524;
    case 871u: goto L_08A5F528;
    case 872u: goto L_08A5F530;
    case 873u: goto L_08A5F53C;
    case 874u: goto L_08A5F540;
    case 875u: goto L_08A5F548;
    case 876u: goto L_08A5F550;
    case 877u: goto L_08A5F558;
    case 878u: goto L_08A5F560;
    case 879u: goto L_08A5F57C;
    case 880u: goto L_08A5F584;
    case 881u: goto L_08A5F590;
    case 882u: goto L_08A5F598;
    case 883u: goto L_08A5F5A4;
    case 884u: goto L_08A5F5C4;
    case 885u: goto L_08A5F5E4;
    case 886u: goto L_08A5F5EC;
    case 887u: goto L_08A5F608;
    case 888u: goto L_08A5F618;
    case 889u: goto L_08A5F624;
    case 890u: goto L_08A5F62C;
    case 891u: goto L_08A5F650;
    case 892u: goto L_08A5F65C;
    case 893u: goto L_08A5F67C;
    case 894u: goto L_08A5F684;
    case 895u: goto L_08A5F698;
    case 896u: goto L_08A5F6A0;
    case 897u: goto L_08A5F6A8;
    case 898u: goto L_08A5F6B4;
    case 899u: goto L_08A5F6E0;
    case 900u: goto L_08A5F6EC;
    case 901u: goto L_08A5F6FC;
    case 902u: goto L_08A5F708;
    case 903u: goto L_08A5F714;
    case 904u: goto L_08A5F720;
    case 905u: goto L_08A5F730;
    case 906u: goto L_08A5F73C;
    case 907u: goto L_08A5F760;
    case 908u: goto L_08A5F764;
    case 909u: goto L_08A5F778;
    case 910u: goto L_08A5F784;
    case 911u: goto L_08A5F7AC;
    case 912u: goto L_08A5F7C0;
    case 913u: goto L_08A5F7E8;
    case 914u: goto L_08A5F80C;
    case 915u: goto L_08A5F824;
    case 916u: goto L_08A5F844;
    case 917u: goto L_08A5F864;
    case 918u: goto L_08A5F88C;
    case 919u: goto L_08A5F894;
    case 920u: goto L_08A5F8A0;
    case 921u: goto L_08A5F8AC;
    case 922u: goto L_08A5F8CC;
    case 923u: goto L_08A5F8EC;
    case 924u: goto L_08A5F8F4;
    case 925u: goto L_08A5F8F8;
    case 926u: goto L_08A5F900;
    case 927u: goto L_08A5F910;
    case 928u: goto L_08A5F924;
    case 929u: goto L_08A5F92C;
    case 930u: goto L_08A5F934;
    case 931u: goto L_08A5F93C;
    case 932u: goto L_08A5F94C;
    case 933u: goto L_08A5F954;
    case 934u: goto L_08A5F98C;
    case 935u: goto L_08A5F9B4;
    case 936u: goto L_08A5F9BC;
    case 937u: goto L_08A5F9C4;
    case 938u: goto L_08A5F9D4;
    case 939u: goto L_08A5F9DC;
    case 940u: goto L_08A5F9E4;
    case 941u: goto L_08A5F9EC;
    case 942u: goto L_08A5F9F8;
    case 943u: goto L_08A5FA14;
    case 944u: goto L_08A5FA2C;
    case 945u: goto L_08A5FA34;
    case 946u: goto L_08A5FA4C;
    case 947u: goto L_08A5FA5C;
    case 948u: goto L_08A5FA60;
    case 949u: goto L_08A5FA68;
    case 950u: goto L_08A5FA78;
    case 951u: goto L_08A5FA80;
    case 952u: goto L_08A5FA8C;
    case 953u: goto L_08A5FA94;
    case 954u: goto L_08A5FA9C;
    case 955u: goto L_08A5FAA4;
    case 956u: goto L_08A5FAAC;
    case 957u: goto L_08A5FABC;
    case 958u: goto L_08A5FACC;
    case 959u: goto L_08A5FAD4;
    case 960u: goto L_08A5FAE0;
    case 961u: goto L_08A5FAE8;
    case 962u: goto L_08A5FAF0;
    case 963u: goto L_08A5FAF8;
    case 964u: goto L_08A5FB00;
    case 965u: goto L_08A5FB1C;
    case 966u: goto L_08A5FB24;
    case 967u: goto L_08A5FB2C;
    case 968u: goto L_08A5FB34;
    case 969u: goto L_08A5FB44;
    case 970u: goto L_08A5FB50;
    case 971u: goto L_08A5FB74;
    case 972u: goto L_08A5FB88;
    case 973u: goto L_08A5FB98;
    case 974u: goto L_08A5FBA0;
    case 975u: goto L_08A5FBA8;
    case 976u: goto L_08A5FBB0;
    case 977u: goto L_08A5FBB8;
    case 978u: goto L_08A5FBD8;
    case 979u: goto L_08A5FBE0;
    case 980u: goto L_08A5FC00;
    case 981u: goto L_08A5FC3C;
    case 982u: goto L_08A5FC4C;
    case 983u: goto L_08A5FC7C;
    case 984u: goto L_08A5FC90;
    case 985u: goto L_08A5FC98;
    case 986u: goto L_08A5FCD4;
    case 987u: goto L_08A5FCE4;
    case 988u: goto L_08A5FD14;
    case 989u: goto L_08A5FD28;
    case 990u: goto L_08A5FD2C;
    case 991u: goto L_08A5FD58;
    case 992u: goto L_08A5FD60;
    case 993u: goto L_08A5FD70;
    case 994u: goto L_08A5FD84;
    case 995u: goto L_08A5FDA0;
    case 996u: goto L_08A5FDAC;
    case 997u: goto L_08A5FDC4;
    case 998u: goto L_08A5FDD0;
    case 999u: goto L_08A5FDE8;
    case 1000u: goto L_08A5FDF4;
    case 1001u: goto L_08A5FDFC;
    case 1002u: goto L_08A5FE08;
    case 1003u: goto L_08A5FE1C;
    case 1004u: goto L_08A5FE30;
    case 1005u: goto L_08A5FE38;
    case 1006u: goto L_08A5FE44;
    case 1007u: goto L_08A5FE4C;
    case 1008u: goto L_08A5FE54;
    case 1009u: goto L_08A5FE70;
    case 1010u: goto L_08A5FE78;
    case 1011u: goto L_08A5FE80;
    case 1012u: goto L_08A5FE90;
    case 1013u: goto L_08A5FE98;
    case 1014u: goto L_08A5FEA0;
    case 1015u: goto L_08A5FEB0;
    case 1016u: goto L_08A5FEC8;
    case 1017u: goto L_08A5FECC;
    case 1018u: goto L_08A5FED8;
    case 1019u: goto L_08A5FEE8;
    case 1020u: goto L_08A5FEF8;
    case 1021u: goto L_08A5FF00;
    case 1022u: goto L_08A5FF0C;
    case 1023u: goto L_08A5FF2C;
    case 1024u: goto L_08A5FF34;
    case 1025u: goto L_08A5FF4C;
    case 1026u: goto L_08A5FF50;
    case 1027u: goto L_08A5FF60;
    case 1028u: goto L_08A5FF68;
    case 1029u: goto L_08A5FF8C;
    case 1030u: goto L_08A5FF9C;
    case 1031u: goto L_08A5FFA8;
    case 1032u: goto L_08A5FFB8;
    case 1033u: goto L_08A5FFC8;
    case 1034u: goto L_08A5FFD8;
    case 1035u: goto L_08A5FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A5C004:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(617))))));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[21]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 65u, 0x08A604A8u>(ctx, &aot_mem); return;
      }
      goto L_08A5C030;
    }
L_08A5C030:
    ctx.gpr[31] = (0x08A5C038u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 658u, 0x08B0EBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C038u) goto L_08A5C038;
    return;
L_08A5C038:
    ctx.gpr[31] = (0x08A5C040u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 442u, 0x08B461ACu>(ctx, &aot_mem) && ctx.pc == 0x08A5C040u) goto L_08A5C040;
    return;
L_08A5C040:
    ctx.gpr[31] = (0x08A5C048u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 163u, 0x08A58A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C048u) goto L_08A5C048;
    return;
L_08A5C048:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5C098;
      }
      goto L_08A5C068;
    }
L_08A5C068:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C074u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 113u, 0x08A587CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C074u) goto L_08A5C074;
    return;
L_08A5C074:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C084u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 115u, 0x08A587DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C084u) goto L_08A5C084;
    return;
L_08A5C084:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C090u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x08A5C090u) goto L_08A5C090;
    return;
L_08A5C090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C0A4;
      }
      goto L_08A5C098;
    }
L_08A5C098:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5C0A4;
L_08A5C0A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C2E4;
      }
      goto L_08A5C0AC;
    }
L_08A5C0AC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C0B8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 115u, 0x08A587DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C0B8u) goto L_08A5C0B8;
    return;
L_08A5C0B8:
    ctx.gpr[31] = (0x08A5C0C0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C0C0u) goto L_08A5C0C0;
    return;
L_08A5C0C0:
    ctx.gpr[31] = (0x08A5C0C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 14u, 0x08A58150u>(ctx, &aot_mem) && ctx.pc == 0x08A5C0C8u) goto L_08A5C0C8;
    return;
L_08A5C0C8:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5C0F4;
      }
      goto L_08A5C0E4;
    }
L_08A5C0E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C108;
      }
      goto L_08A5C0F4;
    }
L_08A5C0F4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C100u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x08A5C100u) goto L_08A5C100;
    return;
L_08A5C100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C114;
      }
      goto L_08A5C108;
    }
L_08A5C108:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C114u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x08A5C114u) goto L_08A5C114;
    return;
L_08A5C114:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C120u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 113u, 0x08A587CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C120u) goto L_08A5C120;
    return;
L_08A5C120:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(700), 0u);
    ctx.gpr[31] = (0x08A5C12Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 116u, 0x08A587E4u>(ctx, &aot_mem) && ctx.pc == 0x08A5C12Cu) goto L_08A5C12C;
    return;
L_08A5C12C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
        goto L_08A5C170;
    }
    goto L_08A5C134;
L_08A5C134:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(565)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08A5C150;
      }
      goto L_08A5C140;
    }
L_08A5C140:
    ctx.gpr[31] = (0x08A5C148u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C148u) goto L_08A5C148;
    return;
L_08A5C148:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
        goto L_08A5C170;
    }
    goto L_08A5C150;
L_08A5C150:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
        goto L_08A5C170;
    }
    goto L_08A5C160;
L_08A5C160:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(620))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5C184;
      }
      goto L_08A5C16C;
    }
L_08A5C16C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    goto L_08A5C170;
L_08A5C170:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C184;
      }
      goto L_08A5C17C;
    }
L_08A5C17C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5C188;
      }
      goto L_08A5C184;
    }
L_08A5C184:
    ctx.gpr[19] = (0u | 0u);
    goto L_08A5C188;
L_08A5C188:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1528), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1532), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C1D8;
      }
      goto L_08A5C1B0;
    }
L_08A5C1B0:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C1BCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 113u, 0x08A587CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C1BCu) goto L_08A5C1BC;
    return;
L_08A5C1BC:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C1CCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 115u, 0x08A587DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C1CCu) goto L_08A5C1CC;
    return;
L_08A5C1CC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C1D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x08A5C1D8u) goto L_08A5C1D8;
    return;
L_08A5C1D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C2E4;
      }
      goto L_08A5C1E0;
    }
L_08A5C1E0:
    ctx.gpr[31] = (0x08A5C1E8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C1E8u) goto L_08A5C1E8;
    return;
L_08A5C1E8:
    ctx.gpr[31] = (0x08A5C1F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 14u, 0x08A58150u>(ctx, &aot_mem) && ctx.pc == 0x08A5C1F0u) goto L_08A5C1F0;
    return;
L_08A5C1F0:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5C230;
      }
      goto L_08A5C20C;
    }
L_08A5C20C:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C21Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 115u, 0x08A587DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C21Cu) goto L_08A5C21C;
    return;
L_08A5C21C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C228u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x08A5C228u) goto L_08A5C228;
    return;
L_08A5C228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C248;
      }
      goto L_08A5C230;
    }
L_08A5C230:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C23Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 115u, 0x08A587DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C23Cu) goto L_08A5C23C;
    return;
L_08A5C23C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C248u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x08A5C248u) goto L_08A5C248;
    return;
L_08A5C248:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C254u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 112u, 0x08A587C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5C254u) goto L_08A5C254;
    return;
L_08A5C254:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C260u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 113u, 0x08A587CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C260u) goto L_08A5C260;
    return;
L_08A5C260:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(700), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A5C2E4;
      }
      goto L_08A5C27C;
    }
L_08A5C27C:
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C290u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 115u, 0x08A587DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C290u) goto L_08A5C290;
    return;
L_08A5C290:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C29Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x08A5C29Cu) goto L_08A5C29C;
    return;
L_08A5C29C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C2A8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 112u, 0x08A587C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5C2A8u) goto L_08A5C2A8;
    return;
L_08A5C2A8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C2B4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 113u, 0x08A587CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C2B4u) goto L_08A5C2B4;
    return;
L_08A5C2B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(700), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1528), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C2DCu);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1532), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 367u, 0x08A42004u>(ctx, &aot_mem) && ctx.pc == 0x08A5C2DCu) goto L_08A5C2DC;
    return;
L_08A5C2DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1380), 0u);
      if (branch_taken) {
          goto L_08A5C2E4;
      }
      goto L_08A5C2E4;
    }
L_08A5C2E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C354;
      }
      goto L_08A5C2F4;
    }
L_08A5C2F4:
    ctx.gpr[31] = (0x08A5C2FCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem) && ctx.pc == 0x08A5C2FCu) goto L_08A5C2FC;
    return;
L_08A5C2FC:
    ctx.gpr[31] = (0x08A5C304u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C304u) goto L_08A5C304;
    return;
L_08A5C304:
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5C348;
      }
      goto L_08A5C320;
    }
L_08A5C320:
    ctx.gpr[31] = (0x08A5C328u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C328u) goto L_08A5C328;
    return;
L_08A5C328:
    ctx.gpr[31] = (0x08A5C330u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C330u) goto L_08A5C330;
    return;
L_08A5C330:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5C354;
      }
      goto L_08A5C348;
    }
L_08A5C348:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5C354;
L_08A5C354:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C37C;
      }
      goto L_08A5C35C;
    }
L_08A5C35C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C37C;
      }
      goto L_08A5C36C;
    }
L_08A5C36C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C70C;
      }
      goto L_08A5C37C;
    }
L_08A5C37C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5880)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(10000));
    ctx.gpr[31] = (0x08A5C390u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 11u, 0x08A580FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C390u) goto L_08A5C390;
    return;
L_08A5C390:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A5C3A0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 898u, 0x08A57EBCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C3A0u) goto L_08A5C3A0;
    return;
L_08A5C3A0:
    ctx.gpr[31] = (0x08A5C3A8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5C3A8u) goto L_08A5C3A8;
    return;
L_08A5C3A8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5C544;
      }
      goto L_08A5C3C0;
    }
L_08A5C3C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1248)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5C490;
      }
      goto L_08A5C3D4;
    }
L_08A5C3D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5C490;
      }
      goto L_08A5C3E8;
    }
L_08A5C3E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1256)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5876)));
      if (branch_taken) {
          goto L_08A5C410;
      }
      goto L_08A5C3FC;
    }
L_08A5C3FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1260)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5C484;
      }
      goto L_08A5C410;
    }
L_08A5C410:
    ctx.gpr[31] = (0x08A5C418u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C418u) goto L_08A5C418;
    return;
L_08A5C418:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5C484;
      }
      goto L_08A5C42C;
    }
L_08A5C42C:
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A5C44Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C44Cu) goto L_08A5C44C;
    return;
L_08A5C44C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A5C458u);
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C458u) goto L_08A5C458;
    return;
L_08A5C458:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(276));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[31] = (0x08A5C474u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C474u) goto L_08A5C474;
    return;
L_08A5C474:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A5C544;
      }
      goto L_08A5C484;
    }
L_08A5C484:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5872)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A5C544;
      }
      goto L_08A5C490;
    }
L_08A5C490:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1256)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2109), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_08A5C548;
    }
    goto L_08A5C4A4;
L_08A5C4A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1260)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2109), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_08A5C548;
    }
    goto L_08A5C4B8;
L_08A5C4B8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5876)));
    ctx.gpr[31] = (0x08A5C4C4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C4C4u) goto L_08A5C4C4;
    return;
L_08A5C4C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08A5C544;
      }
      goto L_08A5C4D8;
    }
L_08A5C4D8:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2112), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A5C4FCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C4FCu) goto L_08A5C4FC;
    return;
L_08A5C4FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A5C508u);
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C508u) goto L_08A5C508;
    return;
L_08A5C508:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(284));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.gpr[31] = (0x08A5C528u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C528u) goto L_08A5C528;
    return;
L_08A5C528:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2112)));
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5C544;
L_08A5C544:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2109), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_08A5C548;
L_08A5C548:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5868)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[13] = ctx.fpr[20] / ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08A5C590u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C590u) goto L_08A5C590;
    return;
L_08A5C590:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A5C59Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 7u, 0x08A58090u>(ctx, &aot_mem) && ctx.pc == 0x08A5C59Cu) goto L_08A5C59C;
    return;
L_08A5C59C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A5C5A8u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C5A8u) goto L_08A5C5A8;
    return;
L_08A5C5A8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5C5B4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 7u, 0x08A58090u>(ctx, &aot_mem) && ctx.pc == 0x08A5C5B4u) goto L_08A5C5B4;
    return;
L_08A5C5B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C5E8u);
    ctx.fpr[22] = ctx.fpr[15] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 34u, 0x08A582A4u>(ctx, &aot_mem) && ctx.pc == 0x08A5C5E8u) goto L_08A5C5E8;
    return;
L_08A5C5E8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A5C5F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem) && ctx.pc == 0x08A5C5F8u) goto L_08A5C5F8;
    return;
L_08A5C5F8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A5C608u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 905u, 0x08A57F80u>(ctx, &aot_mem) && ctx.pc == 0x08A5C608u) goto L_08A5C608;
    return;
L_08A5C608:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5C618u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 905u, 0x08A57F80u>(ctx, &aot_mem) && ctx.pc == 0x08A5C618u) goto L_08A5C618;
    return;
L_08A5C618:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5C624u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5C624u) goto L_08A5C624;
    return;
L_08A5C624:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x08A5C630u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem) && ctx.pc == 0x08A5C630u) goto L_08A5C630;
    return;
L_08A5C630:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C644u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C644u) goto L_08A5C644;
    return;
L_08A5C644:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A5C654u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem) && ctx.pc == 0x08A5C654u) goto L_08A5C654;
    return;
L_08A5C654:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5C664u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem) && ctx.pc == 0x08A5C664u) goto L_08A5C664;
    return;
L_08A5C664:
    ctx.gpr[31] = (0x08A5C66Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 34u, 0x08A582A4u>(ctx, &aot_mem) && ctx.pc == 0x08A5C66Cu) goto L_08A5C66C;
    return;
L_08A5C66C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5C67Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 905u, 0x08A57F80u>(ctx, &aot_mem) && ctx.pc == 0x08A5C67Cu) goto L_08A5C67C;
    return;
L_08A5C67C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A5C68Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 905u, 0x08A57F80u>(ctx, &aot_mem) && ctx.pc == 0x08A5C68Cu) goto L_08A5C68C;
    return;
L_08A5C68C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5C698u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5C698u) goto L_08A5C698;
    return;
L_08A5C698:
    ctx.gpr[31] = (0x08A5C6A0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C6A0u) goto L_08A5C6A0;
    return;
L_08A5C6A0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C6B4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C6B4u) goto L_08A5C6B4;
    return;
L_08A5C6B4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A5C6C4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem) && ctx.pc == 0x08A5C6C4u) goto L_08A5C6C4;
    return;
L_08A5C6C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5C6D0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5C6D0u) goto L_08A5C6D0;
    return;
L_08A5C6D0:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5C6E0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem) && ctx.pc == 0x08A5C6E0u) goto L_08A5C6E0;
    return;
L_08A5C6E0:
    ctx.gpr[31] = (0x08A5C6E8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5C6E8u) goto L_08A5C6E8;
    return;
L_08A5C6E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2109)));
      if (branch_taken) {
          goto L_08A5C704;
      }
      goto L_08A5C6F0;
    }
L_08A5C6F0:
    ctx.gpr[31] = (0x08A5C6F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 99u, 0x08A58748u>(ctx, &aot_mem) && ctx.pc == 0x08A5C6F8u) goto L_08A5C6F8;
    return;
L_08A5C6F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5C704u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5C704u) goto L_08A5C704;
    return;
L_08A5C704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C738;
      }
      goto L_08A5C70C;
    }
L_08A5C70C:
    ctx.gpr[31] = (0x08A5C714u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 99u, 0x08A58748u>(ctx, &aot_mem) && ctx.pc == 0x08A5C714u) goto L_08A5C714;
    return;
L_08A5C714:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x08A5C724u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 99u, 0x08A58748u>(ctx, &aot_mem) && ctx.pc == 0x08A5C724u) goto L_08A5C724;
    return;
L_08A5C724:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5C738;
L_08A5C738:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C744u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 63u, 0x08A58468u>(ctx, &aot_mem) && ctx.pc == 0x08A5C744u) goto L_08A5C744;
    return;
L_08A5C744:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CA0C;
      }
      goto L_08A5C74C;
    }
L_08A5C74C:
    ctx.gpr[31] = (0x08A5C754u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5C754u) goto L_08A5C754;
    return;
L_08A5C754:
    ctx.gpr[4] = (0u | 4u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
        goto L_08A5C778;
    }
    goto L_08A5C760;
L_08A5C760:
    ctx.gpr[31] = (0x08A5C768u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5C768u) goto L_08A5C768;
    return;
L_08A5C768:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5CA0C;
      }
      goto L_08A5C774;
    }
L_08A5C774:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    goto L_08A5C778;
L_08A5C778:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CA0C;
      }
      goto L_08A5C784;
    }
L_08A5C784:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_08A5C810;
      }
      goto L_08A5C79C;
    }
L_08A5C79C:
    ctx.gpr[31] = (0x08A5C7A4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C7A4u) goto L_08A5C7A4;
    return;
L_08A5C7A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5C810;
      }
      goto L_08A5C7B8;
    }
L_08A5C7B8:
    ctx.gpr[31] = (0x08A5C7C0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C7C0u) goto L_08A5C7C0;
    return;
L_08A5C7C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5C810;
      }
      goto L_08A5C7D4;
    }
L_08A5C7D4:
    ctx.gpr[31] = (0x08A5C7DCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C7DCu) goto L_08A5C7DC;
    return;
L_08A5C7DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5C810;
      }
      goto L_08A5C7F0;
    }
L_08A5C7F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1244)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5C810;
      }
      goto L_08A5C80C;
    }
L_08A5C80C:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A5C810;
L_08A5C810:
    ctx.gpr[31] = (0x08A5C818u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5C818u) goto L_08A5C818;
    return;
L_08A5C818:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (15172u << 16u);
      if (branch_taken) {
          goto L_08A5C84C;
      }
      goto L_08A5C824;
    }
L_08A5C824:
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
          goto L_08A5C86C;
      }
      goto L_08A5C84C;
    }
L_08A5C84C:
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (14955u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60923u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A5C86C;
L_08A5C86C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2116), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2109), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[30] = (ctx.gpr[23] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08A5C880u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C880u) goto L_08A5C880;
    return;
L_08A5C880:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08A5C894u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem) && ctx.pc == 0x08A5C894u) goto L_08A5C894;
    return;
L_08A5C894:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A5C8B0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 906u, 0x08A57F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C8B0u) goto L_08A5C8B0;
    return;
L_08A5C8B0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A5C8BCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5C8BCu) goto L_08A5C8BC;
    return;
L_08A5C8BC:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A5C8CCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem) && ctx.pc == 0x08A5C8CCu) goto L_08A5C8CC;
    return;
L_08A5C8CC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A5C8DCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 906u, 0x08A57F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C8DCu) goto L_08A5C8DC;
    return;
L_08A5C8DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5C8E8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5C8E8u) goto L_08A5C8E8;
    return;
L_08A5C8E8:
    ctx.gpr[31] = (0x08A5C8F0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 14u, 0x08A58150u>(ctx, &aot_mem) && ctx.pc == 0x08A5C8F0u) goto L_08A5C8F0;
    return;
L_08A5C8F0:
    ctx.gpr[31] = (0x08A5C8F8u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C8F8u) goto L_08A5C8F8;
    return;
L_08A5C8F8:
    ctx.gpr[31] = (0x08A5C900u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 5u, 0x08A5807Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C900u) goto L_08A5C900;
    return;
L_08A5C900:
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2109)));
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2116)));
      if (branch_taken) {
          goto L_08A5C954;
      }
      goto L_08A5C914;
    }
L_08A5C914:
    ctx.gpr[31] = (0x08A5C91Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 14u, 0x08A58150u>(ctx, &aot_mem) && ctx.pc == 0x08A5C91Cu) goto L_08A5C91C;
    return;
L_08A5C91C:
    ctx.gpr[31] = (0x08A5C924u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C924u) goto L_08A5C924;
    return;
L_08A5C924:
    ctx.gpr[31] = (0x08A5C92Cu);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 5u, 0x08A5807Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C92Cu) goto L_08A5C92C;
    return;
L_08A5C92C:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5C954;
      }
      goto L_08A5C93C;
    }
L_08A5C93C:
    ctx.gpr[31] = (0x08A5C944u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 87u, 0x08A586D8u>(ctx, &aot_mem) && ctx.pc == 0x08A5C944u) goto L_08A5C944;
    return;
L_08A5C944:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5C95C;
      }
      goto L_08A5C954;
    }
L_08A5C954:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CA08;
      }
      goto L_08A5C95C;
    }
L_08A5C95C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(309)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(309)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C980;
      }
      goto L_08A5C978;
    }
L_08A5C978:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CA0C;
      }
      goto L_08A5C980;
    }
L_08A5C980:
    ctx.gpr[31] = (0x08A5C988u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 40u, 0x08A582FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C988u) goto L_08A5C988;
    return;
L_08A5C988:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A5C994u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 40u, 0x08A582FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C994u) goto L_08A5C994;
    return;
L_08A5C994:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A5C9A0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 487u, 0x08B42144u>(ctx, &aot_mem) && ctx.pc == 0x08A5C9A0u) goto L_08A5C9A0;
    return;
L_08A5C9A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CA0C;
      }
      goto L_08A5C9A8;
    }
L_08A5C9A8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C9C0;
      }
      goto L_08A5C9B0;
    }
L_08A5C9B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(309)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C9C8;
      }
      goto L_08A5C9C0;
    }
L_08A5C9C0:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5C9C8;
L_08A5C9C8:
    ctx.gpr[20] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08A5C9E0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C9E0u) goto L_08A5C9E0;
    return;
L_08A5C9E0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08A5C9F4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5C9F4u) goto L_08A5C9F4;
    return;
L_08A5C9F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5CA00u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5CA00u) goto L_08A5CA00;
    return;
L_08A5CA00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CA0C;
      }
      goto L_08A5CA08;
    }
L_08A5CA08:
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(0u));
    goto L_08A5CA0C;
L_08A5CA0C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    goto L_08A5CA14;
L_08A5CA14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1404)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CA48;
      }
      goto L_08A5CA20;
    }
L_08A5CA20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7893)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CA48;
      }
      goto L_08A5CA38;
    }
L_08A5CA38:
    ctx.gpr[31] = (0x08A5CA40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1404)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 65u, 0x08A584A0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CA40u) goto L_08A5CA40;
    return;
L_08A5CA40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CA60;
      }
      goto L_08A5CA48;
    }
L_08A5CA48:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5CA14;
      }
      goto L_08A5CA58;
    }
L_08A5CA58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CA74;
      }
      goto L_08A5CA60;
    }
L_08A5CA60:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5CA6Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 66u, 0x08A584B0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CA6Cu) goto L_08A5CA6C;
    return;
L_08A5CA6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 65u, 0x08A604A8u>(ctx, &aot_mem); return;
      }
      goto L_08A5CA74;
    }
L_08A5CA74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2060), ctx.gpr[5]);
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-17));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 2u);
      if (branch_taken) {
          goto L_08A5CAA4;
      }
      goto L_08A5CA9C;
    }
L_08A5CA9C:
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(0u));
    goto L_08A5CAA4;
L_08A5CAA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(416));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    jump_target = ctx.gpr[10];
    ctx.gpr[31] = (0x08A5CAD4u);
    ctx.gpr[9] = (0u | 42u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5CAD4u) goto L_08A5CAD4;
    return;
L_08A5CAD4:
    ctx.gpr[31] = (0x08A5CADCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 55u, 0x08A583D8u>(ctx, &aot_mem) && ctx.pc == 0x08A5CADCu) goto L_08A5CADC;
    return;
L_08A5CADC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CAF4;
      }
      goto L_08A5CAE4;
    }
L_08A5CAE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(304))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A5CB14;
      }
      goto L_08A5CAF4;
    }
L_08A5CAF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(304))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CB08;
      }
      goto L_08A5CB04;
    }
L_08A5CB04:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A5CB08;
L_08A5CB08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(304))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5CB14;
L_08A5CB14:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2108), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08A5CCD0;
      }
      goto L_08A5CB1C;
    }
L_08A5CB1C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5CB28u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 61u, 0x08A58420u>(ctx, &aot_mem) && ctx.pc == 0x08A5CB28u) goto L_08A5CB28;
    return;
L_08A5CB28:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5CB34u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 64u, 0x08A58478u>(ctx, &aot_mem) && ctx.pc == 0x08A5CB34u) goto L_08A5CB34;
    return;
L_08A5CB34:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5CB40u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 66u, 0x08A584B0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CB40u) goto L_08A5CB40;
    return;
L_08A5CB40:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5CB4Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 67u, 0x08A584D8u>(ctx, &aot_mem) && ctx.pc == 0x08A5CB4Cu) goto L_08A5CB4C;
    return;
L_08A5CB4C:
    ctx.gpr[31] = (0x08A5CB54u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 80u, 0x08A585E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5CB54u) goto L_08A5CB54;
    return;
L_08A5CB54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (65520u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(616))))));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[16]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(617))))));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A5CB88u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 81u, 0x08A585F0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CB88u) goto L_08A5CB88;
    return;
L_08A5CB88:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(144));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5CBA4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5CBA4u) goto L_08A5CBA4;
    return;
L_08A5CBA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5CBB0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5CBB0u) goto L_08A5CBB0;
    return;
L_08A5CBB0:
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(128));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08A5CBC8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5CBC8u) goto L_08A5CBC8;
    return;
L_08A5CBC8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5CBD4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5CBD4u) goto L_08A5CBD4;
    return;
L_08A5CBD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16050u << 16u);
      if (branch_taken) {
          goto L_08A5CC20;
      }
      goto L_08A5CBE4;
    }
L_08A5CBE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1512)));
    ctx.gpr[4] = (ctx.gpr[4] | 47299u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5CC20;
      }
      goto L_08A5CC00;
    }
L_08A5CC00:
    ctx.gpr[31] = (0x08A5CC08u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1512)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CC08u) goto L_08A5CC08;
    return;
L_08A5CC08:
    ctx.gpr[4] = (15502u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5CC20;
L_08A5CC20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CCC0;
      }
      goto L_08A5CC30;
    }
L_08A5CC30:
    ctx.gpr[4] = (16248u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.gpr[31] = (0x08A5CC40u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CC40u) goto L_08A5CC40;
    return;
L_08A5CC40:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5CC4Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 7u, 0x08A58090u>(ctx, &aot_mem) && ctx.pc == 0x08A5CC4Cu) goto L_08A5CC4C;
    return;
L_08A5CC4C:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A5CC70u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem) && ctx.pc == 0x08A5CC70u) goto L_08A5CC70;
    return;
L_08A5CC70:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A5CC7Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem) && ctx.pc == 0x08A5CC7Cu) goto L_08A5CC7C;
    return;
L_08A5CC7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(356));
    ctx.gpr[31] = (0x08A5CC8Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 910u, 0x08A57FE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5CC8Cu) goto L_08A5CC8C;
    return;
L_08A5CC8C:
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1520)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A5CCA0u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 4u, 0x08A58054u>(ctx, &aot_mem) && ctx.pc == 0x08A5CCA0u) goto L_08A5CCA0;
    return;
L_08A5CCA0:
    ctx.gpr[4] = (16006u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5CCC0;
L_08A5CCC0:
    ctx.gpr[4] = (16128u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2092), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5CCD0;
    }
L_08A5CCD0:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16051u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(616))))));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(1040));
    ctx.gpr[6] = (16512u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2096), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2052), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5CE2C;
      }
      goto L_08A5CD08;
    }
L_08A5CD08:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5CD18u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem) && ctx.pc == 0x08A5CD18u) goto L_08A5CD18;
    return;
L_08A5CD18:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5CD24u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 62u, 0x08A58444u>(ctx, &aot_mem) && ctx.pc == 0x08A5CD24u) goto L_08A5CD24;
    return;
L_08A5CD24:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5CD30u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 61u, 0x08A58420u>(ctx, &aot_mem) && ctx.pc == 0x08A5CD30u) goto L_08A5CD30;
    return;
L_08A5CD30:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5CD3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 64u, 0x08A58478u>(ctx, &aot_mem) && ctx.pc == 0x08A5CD3Cu) goto L_08A5CD3C;
    return;
L_08A5CD3C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5CD48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 66u, 0x08A584B0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CD48u) goto L_08A5CD48;
    return;
L_08A5CD48:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5CD54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 67u, 0x08A584D8u>(ctx, &aot_mem) && ctx.pc == 0x08A5CD54u) goto L_08A5CD54;
    return;
L_08A5CD54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5CD8Cu);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5CD8Cu) goto L_08A5CD8C;
    return;
L_08A5CD8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5CDA4u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5CDA4u) goto L_08A5CDA4;
    return;
L_08A5CDA4:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A5CDA8;
L_08A5CDA8:
    ctx.gpr[31] = (0x08A5CDB0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 727u, 0x08A67B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5CDB0u) goto L_08A5CDB0;
    return;
L_08A5CDB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5CE08;
      }
      goto L_08A5CDB8;
    }
L_08A5CDB8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_08A5CE08;
      }
      goto L_08A5CDC4;
    }
L_08A5CDC4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5CDD0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x08A5CDD0u) goto L_08A5CDD0;
    return;
L_08A5CDD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5CDE8u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5CDE8u) goto L_08A5CDE8;
    return;
L_08A5CDE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5CE00u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5CE00u) goto L_08A5CE00;
    return;
L_08A5CE00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CDA8;
      }
      goto L_08A5CE08;
    }
L_08A5CE08:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5CE14u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 64u, 0x08A58478u>(ctx, &aot_mem) && ctx.pc == 0x08A5CE14u) goto L_08A5CE14;
    return;
L_08A5CE14:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5CE20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 62u, 0x08A58444u>(ctx, &aot_mem) && ctx.pc == 0x08A5CE20u) goto L_08A5CE20;
    return;
L_08A5CE20:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5CE2Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 24u, 0x08A5822Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5CE2Cu) goto L_08A5CE2C;
    return;
L_08A5CE2C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2092), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08A5CEF4;
      }
      goto L_08A5CE34;
    }
L_08A5CE34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CEF4;
      }
      goto L_08A5CE44;
    }
L_08A5CE44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CEF4;
      }
      goto L_08A5CE54;
    }
L_08A5CE54:
    ctx.gpr[31] = (0x08A5CE5Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem) && ctx.pc == 0x08A5CE5Cu) goto L_08A5CE5C;
    return;
L_08A5CE5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5CEB4;
      }
      goto L_08A5CE70;
    }
L_08A5CE70:
    ctx.gpr[4] = (48863u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5CEF4;
      }
      goto L_08A5CE90;
    }
L_08A5CE90:
    ctx.gpr[31] = (0x08A5CE98u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CE98u) goto L_08A5CE98;
    return;
L_08A5CE98:
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A5CEF4;
      }
      goto L_08A5CEB4;
    }
L_08A5CEB4:
    ctx.gpr[4] = (16095u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5CEF4;
      }
      goto L_08A5CED4;
    }
L_08A5CED4:
    ctx.gpr[31] = (0x08A5CEDCu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CEDCu) goto L_08A5CEDC;
    return;
L_08A5CEDC:
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5CEF4;
L_08A5CEF4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (0x08A5CF00u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5CF00u) goto L_08A5CF00;
    return;
L_08A5CF00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5CF08;
    }
L_08A5CF08:
    ctx.gpr[31] = (0x08A5CF10u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 116u, 0x08A587E4u>(ctx, &aot_mem) && ctx.pc == 0x08A5CF10u) goto L_08A5CF10;
    return;
L_08A5CF10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5CF18;
    }
L_08A5CF18:
    ctx.gpr[31] = (0x08A5CF20u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 116u, 0x08A587E4u>(ctx, &aot_mem) && ctx.pc == 0x08A5CF20u) goto L_08A5CF20;
    return;
L_08A5CF20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A5CF2Cu);
    ctx.gpr[5] = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5CF2Cu) goto L_08A5CF2C;
    return;
L_08A5CF2C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5CF38;
    }
L_08A5CF38:
    ctx.gpr[31] = (0x08A5CF40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 53u, 0x08A583C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5CF40u) goto L_08A5CF40;
    return;
L_08A5CF40:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5CF58;
    }
L_08A5CF58:
    ctx.gpr[31] = (0x08A5CF60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 54u, 0x08A583D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CF60u) goto L_08A5CF60;
    return;
L_08A5CF60:
    ctx.gpr[4] = (15733u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5CF7C;
    }
L_08A5CF7C:
    ctx.gpr[31] = (0x08A5CF84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 54u, 0x08A583D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CF84u) goto L_08A5CF84;
    return;
L_08A5CF84:
    ctx.gpr[4] = (15887u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5CFA0;
    }
L_08A5CFA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(220)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5CFBCu);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 114u, 0x08A587D4u>(ctx, &aot_mem) && ctx.pc == 0x08A5CFBCu) goto L_08A5CFBC;
    return;
L_08A5CFBC:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5CFCC;
    }
L_08A5CFCC:
    ctx.gpr[31] = (0x08A5CFD4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CFD4u) goto L_08A5CFD4;
    return;
L_08A5CFD4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5CFE0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5CFE0u) goto L_08A5CFE0;
    return;
L_08A5CFE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5CFECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem) && ctx.pc == 0x08A5CFECu) goto L_08A5CFEC;
    return;
L_08A5CFEC:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5D004;
    }
L_08A5D004:
    ctx.gpr[31] = (0x08A5D00Cu);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D00Cu) goto L_08A5D00C;
    return;
L_08A5D00C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (15363u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A5D030u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D030u) goto L_08A5D030;
    return;
L_08A5D030:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5D040u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem) && ctx.pc == 0x08A5D040u) goto L_08A5D040;
    return;
L_08A5D040:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5D04Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 82u, 0x08A58604u>(ctx, &aot_mem) && ctx.pc == 0x08A5D04Cu) goto L_08A5D04C;
    return;
L_08A5D04C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5D058;
L_08A5D058:
    ctx.gpr[31] = (0x08A5D060u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D060u) goto L_08A5D060;
    return;
L_08A5D060:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5D06Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 671u, 0x08A5B278u>(ctx, &aot_mem) && ctx.pc == 0x08A5D06Cu) goto L_08A5D06C;
    return;
L_08A5D06C:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08A5D07C;
L_08A5D07C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1316)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1216)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5D07C;
      }
      goto L_08A5D0B0;
    }
L_08A5D0B0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2109), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A5D0D0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D0D0u) goto L_08A5D0D0;
    return;
L_08A5D0D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5D0DCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D0DCu) goto L_08A5D0DC;
    return;
L_08A5D0DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5D0E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem) && ctx.pc == 0x08A5D0E8u) goto L_08A5D0E8;
    return;
L_08A5D0E8:
    ctx.gpr[31] = (0x08A5D0F0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D0F0u) goto L_08A5D0F0;
    return;
L_08A5D0F0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[5] & 65535u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(98));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    goto L_08A5D12C;
L_08A5D12C:
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[17] = (ctx.gpr[16] << 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[30];
    ctx.gpr[17] = (ctx.gpr[23] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A5D15C;
      }
      goto L_08A5D150;
    }
L_08A5D150:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A5D1E4;
      }
      goto L_08A5D15C;
    }
L_08A5D15C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5D1E4;
      }
      goto L_08A5D16C;
    }
L_08A5D16C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D17C;
      }
      goto L_08A5D174;
    }
L_08A5D174:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A5D1A0;
      }
      goto L_08A5D17C;
    }
L_08A5D17C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A5D188u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 76u, 0x08A58568u>(ctx, &aot_mem) && ctx.pc == 0x08A5D188u) goto L_08A5D188;
    return;
L_08A5D188:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D19C;
      }
      goto L_08A5D194;
    }
L_08A5D194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5D1A0;
      }
      goto L_08A5D19C;
    }
L_08A5D19C:
    ctx.gpr[19] = (0u | 0u);
    goto L_08A5D1A0;
L_08A5D1A0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D1E4;
      }
      goto L_08A5D1A8;
    }
L_08A5D1A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1316)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1216)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D1E4;
      }
      goto L_08A5D1DC;
    }
L_08A5D1DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5D1E4;
L_08A5D1E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D2B0;
      }
      goto L_08A5D1FC;
    }
L_08A5D1FC:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[17] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2120), ctx.gpr[22]);
    ctx.gpr[31] = (0x08A5D218u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1088));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 69u, 0x08A58504u>(ctx, &aot_mem) && ctx.pc == 0x08A5D218u) goto L_08A5D218;
    return;
L_08A5D218:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2116), ctx.gpr[21]);
    ctx.gpr[31] = (0x08A5D228u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D228u) goto L_08A5D228;
    return;
L_08A5D228:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5D234u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 40u, 0x08A582FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D234u) goto L_08A5D234;
    return;
L_08A5D234:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A5D244u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 903u, 0x08A57F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D244u) goto L_08A5D244;
    return;
L_08A5D244:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(528));
    ctx.gpr[31] = (0x08A5D250u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D250u) goto L_08A5D250;
    return;
L_08A5D250:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2056)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A5D264u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 45u, 0x08A58334u>(ctx, &aot_mem) && ctx.pc == 0x08A5D264u) goto L_08A5D264;
    return;
L_08A5D264:
    ctx.gpr[22] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A5D274u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 45u, 0x08A58334u>(ctx, &aot_mem) && ctx.pc == 0x08A5D274u) goto L_08A5D274;
    return;
L_08A5D274:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A5D284u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 903u, 0x08A57F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D284u) goto L_08A5D284;
    return;
L_08A5D284:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5D294u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D294u) goto L_08A5D294;
    return;
L_08A5D294:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5D2A0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D2A0u) goto L_08A5D2A0;
    return;
L_08A5D2A0:
    ctx.gpr[31] = (0x08A5D2A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D2A8u) goto L_08A5D2A8;
    return;
L_08A5D2A8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2120)));
    goto L_08A5D2B0;
L_08A5D2B0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
      if (branch_taken) {
          goto L_08A5D12C;
      }
      goto L_08A5D2C4;
    }
L_08A5D2C4:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1272), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1268), 0u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1279), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1278), static_cast<std::uint8_t>(0u));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(1088));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    goto L_08A5D2F8;
L_08A5D2F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D44C;
      }
      goto L_08A5D310;
    }
L_08A5D310:
    ctx.gpr[31] = (0x08A5D318u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 98u, 0x08A58740u>(ctx, &aot_mem) && ctx.pc == 0x08A5D318u) goto L_08A5D318;
    return;
L_08A5D318:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[30];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A5D32C;
      }
      goto L_08A5D320;
    }
L_08A5D320:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5D330;
      }
      goto L_08A5D32C;
    }
L_08A5D32C:
    ctx.fpr[20] = ctx.fpr[26] - ctx.fpr[20];
    goto L_08A5D330;
L_08A5D330:
    ctx.gpr[31] = (0x08A5D338u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D338u) goto L_08A5D338;
    return;
L_08A5D338:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D39C;
      }
      goto L_08A5D34C;
    }
L_08A5D34C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2124), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2112), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A5D35Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 96u, 0x08A58730u>(ctx, &aot_mem) && ctx.pc == 0x08A5D35Cu) goto L_08A5D35C;
    return;
L_08A5D35C:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1216)));
    ctx.gpr[31] = (0x08A5D36Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D36Cu) goto L_08A5D36C;
    return;
L_08A5D36C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5D390u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 9u, 0x08A68118u>(ctx, &aot_mem) && ctx.pc == 0x08A5D390u) goto L_08A5D390;
    return;
L_08A5D390:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2112)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2124)));
      if (branch_taken) {
          goto L_08A5D3C4;
      }
      goto L_08A5D39C;
    }
L_08A5D39C:
    ctx.gpr[31] = (0x08A5D3A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 96u, 0x08A58730u>(ctx, &aot_mem) && ctx.pc == 0x08A5D3A4u) goto L_08A5D3A4;
    return;
L_08A5D3A4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5D3C4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 1u, 0x08A68000u>(ctx, &aot_mem) && ctx.pc == 0x08A5D3C4u) goto L_08A5D3C4;
    return;
L_08A5D3C4:
    ctx.gpr[31] = (0x08A5D3CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5D3CCu) goto L_08A5D3CC;
    return;
L_08A5D3CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5D444;
      }
      goto L_08A5D3E0;
    }
L_08A5D3E0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 34 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A5D444;
      }
      goto L_08A5D3EC;
    }
L_08A5D3EC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(8296)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D404:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D41C;
      }
      goto L_08A5D410;
    }
L_08A5D410:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1268), ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1278), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08A5D424;
      }
      goto L_08A5D41C;
    }
L_08A5D41C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1272), ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1279), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_08A5D424;
L_08A5D424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D444;
      }
      goto L_08A5D42C;
    }
L_08A5D42C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D440;
      }
      goto L_08A5D438;
    }
L_08A5D438:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1268), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A5D444;
      }
      goto L_08A5D440;
    }
L_08A5D440:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1272), ctx.gpr[7]);
    goto L_08A5D444;
L_08A5D444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D474;
      }
      goto L_08A5D44C;
    }
L_08A5D44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2056)));
    ctx.gpr[31] = (0x08A5D458u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 45u, 0x08A58334u>(ctx, &aot_mem) && ctx.pc == 0x08A5D458u) goto L_08A5D458;
    return;
L_08A5D458:
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A5D468u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D468u) goto L_08A5D468;
    return;
L_08A5D468:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5D474u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D474u) goto L_08A5D474;
    return;
L_08A5D474:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5D2F8;
      }
      goto L_08A5D494;
    }
L_08A5D494:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    goto L_08A5D4A0;
L_08A5D4A0:
    ctx.gpr[18] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(464));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(528));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5D4BCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 86u, 0x08A58658u>(ctx, &aot_mem) && ctx.pc == 0x08A5D4BCu) goto L_08A5D4BC;
    return;
L_08A5D4BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5D4C8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D4C8u) goto L_08A5D4C8;
    return;
L_08A5D4C8:
    ctx.gpr[16] = (ctx.gpr[19] << 2u);
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1404)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D500;
      }
      goto L_08A5D4DC;
    }
L_08A5D4DC:
    ctx.gpr[6] = (ctx.gpr[23] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1404)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1424));
    ctx.gpr[31] = (0x08A5D4F0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 86u, 0x08A58658u>(ctx, &aot_mem) && ctx.pc == 0x08A5D4F0u) goto L_08A5D4F0;
    return;
L_08A5D4F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5D4FCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D4FCu) goto L_08A5D4FC;
    return;
L_08A5D4FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1404), 0u);
    goto L_08A5D500;
L_08A5D500:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D4A0;
      }
      goto L_08A5D514;
    }
L_08A5D514:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D544;
      }
      goto L_08A5D52C;
    }
L_08A5D52C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1220)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D664;
      }
      goto L_08A5D544;
    }
L_08A5D544:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
      if (branch_taken) {
          goto L_08A5D584;
      }
      goto L_08A5D55C;
    }
L_08A5D55C:
    ctx.gpr[31] = (0x08A5D564u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1088));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D564u) goto L_08A5D564;
    return;
L_08A5D564:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[31] = (0x08A5D570u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D570u) goto L_08A5D570;
    return;
L_08A5D570:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5D57Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D57Cu) goto L_08A5D57C;
    return;
L_08A5D57C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D5A4;
      }
      goto L_08A5D584;
    }
L_08A5D584:
    ctx.gpr[31] = (0x08A5D58Cu);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1120));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D58Cu) goto L_08A5D58C;
    return;
L_08A5D58C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[31] = (0x08A5D598u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D598u) goto L_08A5D598;
    return;
L_08A5D598:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5D5A4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D5A4u) goto L_08A5D5A4;
    return;
L_08A5D5A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D5D4;
      }
      goto L_08A5D5B8;
    }
L_08A5D5B8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5D5C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 901u, 0x08A57F20u>(ctx, &aot_mem) && ctx.pc == 0x08A5D5C8u) goto L_08A5D5C8;
    return;
L_08A5D5C8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[31] = (0x08A5D5D4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D5D4u) goto L_08A5D5D4;
    return;
L_08A5D5D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1220)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D614;
      }
      goto L_08A5D5EC;
    }
L_08A5D5EC:
    ctx.gpr[31] = (0x08A5D5F4u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1120));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D5F4u) goto L_08A5D5F4;
    return;
L_08A5D5F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[31] = (0x08A5D600u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D600u) goto L_08A5D600;
    return;
L_08A5D600:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5D60Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D60Cu) goto L_08A5D60C;
    return;
L_08A5D60C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D634;
      }
      goto L_08A5D614;
    }
L_08A5D614:
    ctx.gpr[31] = (0x08A5D61Cu);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1088));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D61Cu) goto L_08A5D61C;
    return;
L_08A5D61C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[31] = (0x08A5D628u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D628u) goto L_08A5D628;
    return;
L_08A5D628:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5D634u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D634u) goto L_08A5D634;
    return;
L_08A5D634:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D664;
      }
      goto L_08A5D648;
    }
L_08A5D648:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5D658u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 901u, 0x08A57F20u>(ctx, &aot_mem) && ctx.pc == 0x08A5D658u) goto L_08A5D658;
    return;
L_08A5D658:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[31] = (0x08A5D664u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D664u) goto L_08A5D664;
    return;
L_08A5D664:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D694;
      }
      goto L_08A5D67C;
    }
L_08A5D67C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1228)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D7B4;
      }
      goto L_08A5D694;
    }
L_08A5D694:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
      if (branch_taken) {
          goto L_08A5D6D4;
      }
      goto L_08A5D6AC;
    }
L_08A5D6AC:
    ctx.gpr[31] = (0x08A5D6B4u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1152));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D6B4u) goto L_08A5D6B4;
    return;
L_08A5D6B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[31] = (0x08A5D6C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D6C0u) goto L_08A5D6C0;
    return;
L_08A5D6C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5D6CCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D6CCu) goto L_08A5D6CC;
    return;
L_08A5D6CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D6F4;
      }
      goto L_08A5D6D4;
    }
L_08A5D6D4:
    ctx.gpr[31] = (0x08A5D6DCu);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1184));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D6DCu) goto L_08A5D6DC;
    return;
L_08A5D6DC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A5D6E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D6E8u) goto L_08A5D6E8;
    return;
L_08A5D6E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5D6F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D6F4u) goto L_08A5D6F4;
    return;
L_08A5D6F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D724;
      }
      goto L_08A5D708;
    }
L_08A5D708:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5D718u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 901u, 0x08A57F20u>(ctx, &aot_mem) && ctx.pc == 0x08A5D718u) goto L_08A5D718;
    return;
L_08A5D718:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[31] = (0x08A5D724u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D724u) goto L_08A5D724;
    return;
L_08A5D724:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1228)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D764;
      }
      goto L_08A5D73C;
    }
L_08A5D73C:
    ctx.gpr[31] = (0x08A5D744u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1184));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D744u) goto L_08A5D744;
    return;
L_08A5D744:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08A5D750u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D750u) goto L_08A5D750;
    return;
L_08A5D750:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5D75Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D75Cu) goto L_08A5D75C;
    return;
L_08A5D75C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D784;
      }
      goto L_08A5D764;
    }
L_08A5D764:
    ctx.gpr[31] = (0x08A5D76Cu);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1152));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D76Cu) goto L_08A5D76C;
    return;
L_08A5D76C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x08A5D778u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D778u) goto L_08A5D778;
    return;
L_08A5D778:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5D784u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D784u) goto L_08A5D784;
    return;
L_08A5D784:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D7B4;
      }
      goto L_08A5D798;
    }
L_08A5D798:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5D7A8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 901u, 0x08A57F20u>(ctx, &aot_mem) && ctx.pc == 0x08A5D7A8u) goto L_08A5D7A8;
    return;
L_08A5D7A8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[31] = (0x08A5D7B4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D7B4u) goto L_08A5D7B4;
    return;
L_08A5D7B4:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A5D7CCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D7CCu) goto L_08A5D7CC;
    return;
L_08A5D7CC:
    ctx.gpr[31] = (0x08A5D7D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 13u, 0x08A58134u>(ctx, &aot_mem) && ctx.pc == 0x08A5D7D4u) goto L_08A5D7D4;
    return;
L_08A5D7D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[31] = (0x08A5D7E4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(364));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 910u, 0x08A57FE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5D7E4u) goto L_08A5D7E4;
    return;
L_08A5D7E4:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A5D7E8;
L_08A5D7E8:
    ctx.gpr[16] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5D838;
      }
      goto L_08A5D808;
    }
L_08A5D808:
    ctx.gpr[31] = (0x08A5D810u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 97u, 0x08A58738u>(ctx, &aot_mem) && ctx.pc == 0x08A5D810u) goto L_08A5D810;
    return;
L_08A5D810:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(400));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(528));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(464));
    ctx.gpr[31] = (0x08A5D838u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 21u, 0x08A6828Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D838u) goto L_08A5D838;
    return;
L_08A5D838:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D7E8;
      }
      goto L_08A5D84C;
    }
L_08A5D84C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(1424));
    goto L_08A5D868;
L_08A5D868:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A5D878u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 86u, 0x08A58658u>(ctx, &aot_mem) && ctx.pc == 0x08A5D878u) goto L_08A5D878;
    return;
L_08A5D878:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5D884u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5D884u) goto L_08A5D884;
    return;
L_08A5D884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1404)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D8B0;
      }
      goto L_08A5D890;
    }
L_08A5D890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1404)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A5D8A0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 86u, 0x08A58658u>(ctx, &aot_mem) && ctx.pc == 0x08A5D8A0u) goto L_08A5D8A0;
    return;
L_08A5D8A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5D8ACu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D8ACu) goto L_08A5D8AC;
    return;
L_08A5D8AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1404), 0u);
    goto L_08A5D8B0;
L_08A5D8B0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A5D868;
      }
      goto L_08A5D8CC;
    }
L_08A5D8CC:
    ctx.gpr[31] = (0x08A5D8D4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D8D4u) goto L_08A5D8D4;
    return;
L_08A5D8D4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5D8E0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D8E0u) goto L_08A5D8E0;
    return;
L_08A5D8E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5D8ECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem) && ctx.pc == 0x08A5D8ECu) goto L_08A5D8EC;
    return;
L_08A5D8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1778)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1494)));
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(604));
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(644));
    ctx.gpr[7] = (ctx.gpr[23] + static_cast<std::uint32_t>(648));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A5D924u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 665u, 0x088DBC28u>(ctx, &aot_mem) && ctx.pc == 0x08A5D924u) goto L_08A5D924;
    return;
L_08A5D924:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(216)));
    ctx.fpr[22] = ctx.fpr[0] / ctx.fpr[22];
    ctx.gpr[31] = (0x08A5D934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D934u) goto L_08A5D934;
    return;
L_08A5D934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x08A5D940u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 92u, 0x08A58710u>(ctx, &aot_mem) && ctx.pc == 0x08A5D940u) goto L_08A5D940;
    return;
L_08A5D940:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(608)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A5D95Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5D95Cu) goto L_08A5D95C;
    return;
L_08A5D95C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D990;
      }
      goto L_08A5D964;
    }
L_08A5D964:
    ctx.gpr[31] = (0x08A5D96Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5D96Cu) goto L_08A5D96C;
    return;
L_08A5D96C:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5D990;
      }
      goto L_08A5D978;
    }
L_08A5D978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x08A5D984u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 90u, 0x08A586F0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D984u) goto L_08A5D984;
    return;
L_08A5D984:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D990;
      }
      goto L_08A5D98C;
    }
L_08A5D98C:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A5D990;
L_08A5D990:
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A5D9A8;
      }
      goto L_08A5D99C;
    }
L_08A5D99C:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2084), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A5D9C8;
      }
      goto L_08A5D9A8;
    }
L_08A5D9A8:
    ctx.gpr[31] = (0x08A5D9B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 93u, 0x08A58718u>(ctx, &aot_mem) && ctx.pc == 0x08A5D9B0u) goto L_08A5D9B0;
    return;
L_08A5D9B0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2084), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5D9C8;
L_08A5D9C8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D9D8;
      }
      goto L_08A5D9D0;
    }
L_08A5D9D0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A5D9F0;
      }
      goto L_08A5D9D8;
    }
L_08A5D9D8:
    ctx.gpr[31] = (0x08A5D9E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 93u, 0x08A58718u>(ctx, &aot_mem) && ctx.pc == 0x08A5D9E0u) goto L_08A5D9E0;
    return;
L_08A5D9E0:
    ctx.fpr[28] = ctx.fpr[20] - ctx.fpr[0];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    goto L_08A5D9F0;
L_08A5D9F0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DA00;
      }
      goto L_08A5D9F8;
    }
L_08A5D9F8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A5DA14;
      }
      goto L_08A5DA00;
    }
L_08A5DA00:
    ctx.gpr[31] = (0x08A5DA08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 95u, 0x08A58728u>(ctx, &aot_mem) && ctx.pc == 0x08A5DA08u) goto L_08A5DA08;
    return;
L_08A5DA08:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    goto L_08A5DA14;
L_08A5DA14:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_08A5DA24;
      }
      goto L_08A5DA1C;
    }
L_08A5DA1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2088), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A5DA30;
      }
      goto L_08A5DA24;
    }
L_08A5DA24:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2088), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5DA30;
L_08A5DA30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1494)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1493), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1495), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A5DA48u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1494), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5DA48u) goto L_08A5DA48;
    return;
L_08A5DA48:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5DA74;
      }
      goto L_08A5DA5C;
    }
L_08A5DA5C:
    ctx.gpr[31] = (0x08A5DA64u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5DA64u) goto L_08A5DA64;
    return;
L_08A5DA64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(640)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A5DA7C;
      }
      goto L_08A5DA74;
    }
L_08A5DA74:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5DA7C;
L_08A5DA7C:
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1124));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(1088));
    goto L_08A5DA9C;
L_08A5DA9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5DABC;
      }
      goto L_08A5DAB4;
    }
L_08A5DAB4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08A5DAE4;
      }
      goto L_08A5DABC;
    }
L_08A5DABC:
    ctx.gpr[31] = (0x08A5DAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5DAC4u) goto L_08A5DAC4;
    return;
L_08A5DAC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A5DAE0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 910u, 0x08A57FE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5DAE0u) goto L_08A5DAE0;
    return;
L_08A5DAE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A5DAE4;
L_08A5DAE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5DB74;
      }
      goto L_08A5DAF8;
    }
L_08A5DAF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1493)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[30];
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1493), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A5DB14;
      }
      goto L_08A5DB08;
    }
L_08A5DB08:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5DB1C;
      }
      goto L_08A5DB14;
    }
L_08A5DB14:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1494), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5DB1C;
L_08A5DB1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1493)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5DB54;
      }
      goto L_08A5DB2C;
    }
L_08A5DB2C:
    ctx.gpr[31] = (0x08A5DB34u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5DB34u) goto L_08A5DB34;
    return;
L_08A5DB34:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5DB40u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5DB40u) goto L_08A5DB40;
    return;
L_08A5DB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2052)));
    ctx.gpr[31] = (0x08A5DB4Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5DB4Cu) goto L_08A5DB4C;
    return;
L_08A5DB4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DB74;
      }
      goto L_08A5DB54;
    }
L_08A5DB54:
    ctx.gpr[31] = (0x08A5DB5Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5DB5Cu) goto L_08A5DB5C;
    return;
L_08A5DB5C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5DB68u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5DB68u) goto L_08A5DB68;
    return;
L_08A5DB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2052)));
    ctx.gpr[31] = (0x08A5DB74u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DB74u) goto L_08A5DB74;
    return;
L_08A5DB74:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A5DA9C;
      }
      goto L_08A5DB88;
    }
L_08A5DB88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1493)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5DC04;
      }
      goto L_08A5DB94;
    }
L_08A5DB94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1493)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(1040));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08A5DBB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 906u, 0x08A57F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5DBB0u) goto L_08A5DBB0;
    return;
L_08A5DBB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2052)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5DBC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5DBC0u) goto L_08A5DBC0;
    return;
L_08A5DBC0:
    ctx.gpr[31] = (0x08A5DBC8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 34u, 0x08A582A4u>(ctx, &aot_mem) && ctx.pc == 0x08A5DBC8u) goto L_08A5DBC8;
    return;
L_08A5DBC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DBD4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem) && ctx.pc == 0x08A5DBD4u) goto L_08A5DBD4;
    return;
L_08A5DBD4:
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5DBFC;
      }
      goto L_08A5DBEC;
    }
L_08A5DBEC:
    ctx.gpr[5] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DBFCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 16u, 0x08A58178u>(ctx, &aot_mem) && ctx.pc == 0x08A5DBFCu) goto L_08A5DBFC;
    return;
L_08A5DBFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DC28;
      }
      goto L_08A5DC04;
    }
L_08A5DC04:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A5DC1Cu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DC1Cu) goto L_08A5DC1C;
    return;
L_08A5DC1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2052)));
    ctx.gpr[31] = (0x08A5DC28u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5DC28u) goto L_08A5DC28;
    return;
L_08A5DC28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1220)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08A5DC50;
      }
      goto L_08A5DC40;
    }
L_08A5DC40:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2080), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5DC58;
      }
      goto L_08A5DC50;
    }
L_08A5DC50:
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2080), ctx.gpr[4]);
    goto L_08A5DC58;
L_08A5DC58:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2072), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2056)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DC74u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 45u, 0x08A58334u>(ctx, &aot_mem) && ctx.pc == 0x08A5DC74u) goto L_08A5DC74;
    return;
L_08A5DC74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A5DC88u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 45u, 0x08A58334u>(ctx, &aot_mem) && ctx.pc == 0x08A5DC88u) goto L_08A5DC88;
    return;
L_08A5DC88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1316)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[31] = (0x08A5DCBCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5DCBCu) goto L_08A5DCBC;
    return;
L_08A5DCBC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[31] = (0x08A5DCC8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5DCC8u) goto L_08A5DCC8;
    return;
L_08A5DCC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1228)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A5DCEC;
      }
      goto L_08A5DCE0;
    }
L_08A5DCE0:
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 64u);
      if (branch_taken) {
          goto L_08A5DCF0;
      }
      goto L_08A5DCEC;
    }
L_08A5DCEC:
    ctx.gpr[19] = (0u | 96u);
    goto L_08A5DCF0;
L_08A5DCF0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2068), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DD08u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 45u, 0x08A58334u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD08u) goto L_08A5DD08;
    return;
L_08A5DD08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A5DD1Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 45u, 0x08A58334u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD1Cu) goto L_08A5DD1C;
    return;
L_08A5DD1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1324)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[31] = (0x08A5DD48u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5DD48u) goto L_08A5DD48;
    return;
L_08A5DD48:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x08A5DD54u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD54u) goto L_08A5DD54;
    return;
L_08A5DD54:
    ctx.gpr[31] = (0x08A5DD5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 88u, 0x08A586E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD5Cu) goto L_08A5DD5C;
    return;
L_08A5DD5C:
    ctx.gpr[4] = (15235u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[4] | 4718u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A5DD88u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5DD88u) goto L_08A5DD88;
    return;
L_08A5DD88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DDF8;
      }
      goto L_08A5DD90;
    }
L_08A5DD90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DDF8;
      }
      goto L_08A5DDA0;
    }
L_08A5DDA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DDF8;
      }
      goto L_08A5DDB0;
    }
L_08A5DDB0:
    ctx.gpr[4] = (16050u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1512)));
    ctx.gpr[4] = (ctx.gpr[4] | 47299u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A5E094;
      }
      goto L_08A5DDD0;
    }
L_08A5DDD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
    ctx.gpr[31] = (0x08A5DDDCu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1512)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5DDDCu) goto L_08A5DDDC;
    return;
L_08A5DDDC:
    ctx.gpr[4] = (15574u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 30544u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A5E094;
      }
      goto L_08A5DDF8;
    }
L_08A5DDF8:
    ctx.gpr[31] = (0x08A5DE00u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE00u) goto L_08A5DE00;
    return;
L_08A5DE00:
    ctx.gpr[31] = (0x08A5DE08u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5DE08u) goto L_08A5DE08;
    return;
L_08A5DE08:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5DE8C;
      }
      goto L_08A5DE24;
    }
L_08A5DE24:
    ctx.gpr[31] = (0x08A5DE2Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE2Cu) goto L_08A5DE2C;
    return;
L_08A5DE2C:
    ctx.gpr[31] = (0x08A5DE34u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5DE34u) goto L_08A5DE34;
    return;
L_08A5DE34:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5DE8C;
      }
      goto L_08A5DE44;
    }
L_08A5DE44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5DE8C;
      }
      goto L_08A5DE5C;
    }
L_08A5DE5C:
    ctx.gpr[4] = (16245u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
    ctx.gpr[31] = (0x08A5DE70u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE70u) goto L_08A5DE70;
    return;
L_08A5DE70:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5DE7Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 7u, 0x08A58090u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE7Cu) goto L_08A5DE7C;
    return;
L_08A5DE7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1512)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A5E094;
      }
      goto L_08A5DE8C;
    }
L_08A5DE8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5E05C;
      }
      goto L_08A5DEA4;
    }
L_08A5DEA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
        goto L_08A5DED4;
    }
    goto L_08A5DEBC;
L_08A5DEBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A5E05C;
      }
      goto L_08A5DED0;
    }
L_08A5DED0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
    goto L_08A5DED4;
L_08A5DED4:
    ctx.gpr[31] = (0x08A5DEDCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5DEDCu) goto L_08A5DEDC;
    return;
L_08A5DEDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E05C;
      }
      goto L_08A5DEE4;
    }
L_08A5DEE4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DEF8u);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 71u, 0x08A58514u>(ctx, &aot_mem) && ctx.pc == 0x08A5DEF8u) goto L_08A5DEF8;
    return;
L_08A5DEF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DF04u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 72u, 0x08A5851Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5DF04u) goto L_08A5DF04;
    return;
L_08A5DF04:
    ctx.gpr[31] = (0x08A5DF0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 231u, 0x08A91E18u>(ctx, &aot_mem) && ctx.pc == 0x08A5DF0Cu) goto L_08A5DF0C;
    return;
L_08A5DF0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[19]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1088));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x08A5DF30u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5DF30u) goto L_08A5DF30;
    return;
L_08A5DF30:
    ctx.gpr[31] = (0x08A5DF38u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem) && ctx.pc == 0x08A5DF38u) goto L_08A5DF38;
    return;
L_08A5DF38:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1208));
      if (branch_taken) {
          goto L_08A5DF60;
      }
      goto L_08A5DF44;
    }
L_08A5DF44:
    ctx.gpr[31] = (0x08A5DF4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5DF4Cu) goto L_08A5DF4C;
    return;
L_08A5DF4C:
    ctx.gpr[31] = (0x08A5DF54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem) && ctx.pc == 0x08A5DF54u) goto L_08A5DF54;
    return;
L_08A5DF54:
    ctx.gpr[4] = (0u | 4u);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
        goto L_08A5DF70;
    }
    goto L_08A5DF60;
L_08A5DF60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    goto L_08A5DF70;
L_08A5DF70:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1204));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A5DF94u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem) && ctx.pc == 0x08A5DF94u) goto L_08A5DF94;
    return;
L_08A5DF94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A5DFA0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 4u, 0x08A58054u>(ctx, &aot_mem) && ctx.pc == 0x08A5DFA0u) goto L_08A5DFA0;
    return;
L_08A5DFA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x08A5DFACu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 94u, 0x08A58720u>(ctx, &aot_mem) && ctx.pc == 0x08A5DFACu) goto L_08A5DFAC;
    return;
L_08A5DFAC:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A5DFFC;
      }
      goto L_08A5DFE4;
    }
L_08A5DFE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1516)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5E028;
      }
      goto L_08A5DFFC;
    }
L_08A5DFFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5E03C;
      }
      goto L_08A5E014;
    }
L_08A5E014:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1516)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5E03C;
      }
      goto L_08A5E028;
    }
L_08A5E028:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5E03C;
L_08A5E03C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A5E054u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E054u) goto L_08A5E054;
    return;
L_08A5E054:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A5E068;
      }
      goto L_08A5E05C;
    }
L_08A5E05C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5E068;
L_08A5E068:
    ctx.gpr[31] = (0x08A5E070u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5E070u) goto L_08A5E070;
    return;
L_08A5E070:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
        goto L_08A5E088;
    }
    goto L_08A5E078;
L_08A5E078:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
    goto L_08A5E088;
L_08A5E088:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5E094;
L_08A5E094:
    ctx.gpr[31] = (0x08A5E09Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E09Cu) goto L_08A5E09C;
    return;
L_08A5E09C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[31] = (0x08A5E0A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 11u, 0x08A580FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E0A8u) goto L_08A5E0A8;
    return;
L_08A5E0A8:
    ctx.gpr[31] = (0x08A5E0B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 89u, 0x08A586E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E0B0u) goto L_08A5E0B0;
    return;
L_08A5E0B0:
    ctx.gpr[4] = (8192u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] & ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2064), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5E400;
      }
      goto L_08A5E0C8;
    }
L_08A5E0C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1248)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5E0F0;
      }
      goto L_08A5E0DC;
    }
L_08A5E0DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16243u << 16u);
      if (branch_taken) {
          goto L_08A5E3E0;
      }
      goto L_08A5E0F0;
    }
L_08A5E0F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2080)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2084)));
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1292));
    ctx.gpr[21] = (0u | 0u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1088));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1312));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(7156));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2048), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5E154;
      }
      goto L_08A5E138;
    }
L_08A5E138:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1260)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A5E154;
      }
      goto L_08A5E14C;
    }
L_08A5E14C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[21] = (ctx.gpr[30] | 0u);
    goto L_08A5E154;
L_08A5E154:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A5E164u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1512)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A5800Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E164u) goto L_08A5E164;
    return;
L_08A5E164:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1512)));
    ctx.gpr[31] = (0x08A5E170u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 3u, 0x08A58030u>(ctx, &aot_mem) && ctx.pc == 0x08A5E170u) goto L_08A5E170;
    return;
L_08A5E170:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A5E188u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E188u) goto L_08A5E188;
    return;
L_08A5E188:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5E19Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E19Cu) goto L_08A5E19C;
    return;
L_08A5E19C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5E1A8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5E1A8u) goto L_08A5E1A8;
    return;
L_08A5E1A8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1280));
    ctx.gpr[31] = (0x08A5E1B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E1B4u) goto L_08A5E1B4;
    return;
L_08A5E1B4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5E1C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E1C0u) goto L_08A5E1C0;
    return;
L_08A5E1C0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5E1CCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem) && ctx.pc == 0x08A5E1CCu) goto L_08A5E1CC;
    return;
L_08A5E1CC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A5E1D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E1D8u) goto L_08A5E1D8;
    return;
L_08A5E1D8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5E1E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E1E4u) goto L_08A5E1E4;
    return;
L_08A5E1E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5E1F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem) && ctx.pc == 0x08A5E1F4u) goto L_08A5E1F4;
    return;
L_08A5E1F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5E200u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E200u) goto L_08A5E200;
    return;
L_08A5E200:
    ctx.gpr[31] = (0x08A5E208u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E208u) goto L_08A5E208;
    return;
L_08A5E208:
    ctx.gpr[31] = (0x08A5E210u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E210u) goto L_08A5E210;
    return;
L_08A5E210:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5E21Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E21Cu) goto L_08A5E21C;
    return;
L_08A5E21C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5E22Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 896u, 0x08A57E84u>(ctx, &aot_mem) && ctx.pc == 0x08A5E22Cu) goto L_08A5E22C;
    return;
L_08A5E22C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5E238u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5E238u) goto L_08A5E238;
    return;
L_08A5E238:
    ctx.gpr[31] = (0x08A5E240u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E240u) goto L_08A5E240;
    return;
L_08A5E240:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7152), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5E250u);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 71u, 0x08A58514u>(ctx, &aot_mem) && ctx.pc == 0x08A5E250u) goto L_08A5E250;
    return;
L_08A5E250:
    ctx.gpr[31] = (0x08A5E258u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 231u, 0x08A91E18u>(ctx, &aot_mem) && ctx.pc == 0x08A5E258u) goto L_08A5E258;
    return;
L_08A5E258:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1392)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2124)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2120)));
      if (branch_taken) {
          goto L_08A5E2CC;
      }
      goto L_08A5E278;
    }
L_08A5E278:
    ctx.gpr[31] = (0x08A5E280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5E280u) goto L_08A5E280;
    return;
L_08A5E280:
    ctx.gpr[31] = (0x08A5E288u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem) && ctx.pc == 0x08A5E288u) goto L_08A5E288;
    return;
L_08A5E288:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5E2CC;
      }
      goto L_08A5E294;
    }
L_08A5E294:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A5E2B8;
    }
    goto L_08A5E29C;
L_08A5E29C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E2C0;
      }
      goto L_08A5E2A8;
    }
L_08A5E2A8:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5E2CC;
      }
      goto L_08A5E2B8;
    }
L_08A5E2B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E2CC;
      }
      goto L_08A5E2C0;
    }
L_08A5E2C0:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A5E2CC;
L_08A5E2CC:
    ctx.gpr[31] = (0x08A5E2D4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 57u, 0x08A583FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E2D4u) goto L_08A5E2D4;
    return;
L_08A5E2D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E2F0;
      }
      goto L_08A5E2DC;
    }
L_08A5E2DC:
    ctx.gpr[31] = (0x08A5E2E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5E2E4u) goto L_08A5E2E4;
    return;
L_08A5E2E4:
    ctx.gpr[31] = (0x08A5E2ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 244u, 0x08A91ED4u>(ctx, &aot_mem) && ctx.pc == 0x08A5E2ECu) goto L_08A5E2EC;
    return;
L_08A5E2EC:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A5E2F0;
L_08A5E2F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5E32C;
      }
      goto L_08A5E300;
    }
L_08A5E300:
    ctx.gpr[31] = (0x08A5E308u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A5E308u) goto L_08A5E308;
    return;
L_08A5E308:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5780)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5784)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A5E31Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E31Cu) goto L_08A5E31C;
    return;
L_08A5E31C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A5E328u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E328u) goto L_08A5E328;
    return;
L_08A5E328:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A5E32C;
L_08A5E32C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1500)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7156), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5E348u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 86u, 0x08A58658u>(ctx, &aot_mem) && ctx.pc == 0x08A5E348u) goto L_08A5E348;
    return;
L_08A5E348:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5E354u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5E354u) goto L_08A5E354;
    return;
L_08A5E354:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7152)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1076)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2048)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A5E398u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 583u, 0x08B0B04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E398u) goto L_08A5E398;
    return;
L_08A5E398:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5E3A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 597u, 0x08B02384u>(ctx, &aot_mem) && ctx.pc == 0x08A5E3A4u) goto L_08A5E3A4;
    return;
L_08A5E3A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2109)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3D4;
      }
      goto L_08A5E3B0;
    }
L_08A5E3B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7156)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
      if (branch_taken) {
          goto L_08A5E3CC;
      }
      goto L_08A5E3C0;
    }
L_08A5E3C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7156)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A5E3D4;
      }
      goto L_08A5E3CC;
    }
L_08A5E3CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7156), 0u);
    goto L_08A5E3D4;
L_08A5E3D4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A5E400;
      }
      goto L_08A5E3E0;
    }
L_08A5E3E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1292)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1284)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A5E400;
L_08A5E400:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1256)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A5E428;
      }
      goto L_08A5E414;
    }
L_08A5E414:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1260)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A5E888;
      }
      goto L_08A5E428;
    }
L_08A5E428:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1360));
    ctx.gpr[31] = (0x08A5E438u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E438u) goto L_08A5E438;
    return;
L_08A5E438:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5E444u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 11u, 0x08A580FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E444u) goto L_08A5E444;
    return;
L_08A5E444:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1376));
    ctx.gpr[31] = (0x08A5E450u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem) && ctx.pc == 0x08A5E450u) goto L_08A5E450;
    return;
L_08A5E450:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5E45Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 11u, 0x08A580FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E45Cu) goto L_08A5E45C;
    return;
L_08A5E45C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2076)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1088));
    ctx.gpr[31] = (0x08A5E474u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E474u) goto L_08A5E474;
    return;
L_08A5E474:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5E480u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E480u) goto L_08A5E480;
    return;
L_08A5E480:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5E48Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem) && ctx.pc == 0x08A5E48Cu) goto L_08A5E48C;
    return;
L_08A5E48C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    ctx.gpr[31] = (0x08A5E49Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E49Cu) goto L_08A5E49C;
    return;
L_08A5E49C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5E4A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E4A8u) goto L_08A5E4A8;
    return;
L_08A5E4A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A5E4B8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem) && ctx.pc == 0x08A5E4B8u) goto L_08A5E4B8;
    return;
L_08A5E4B8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5E4C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E4C4u) goto L_08A5E4C4;
    return;
L_08A5E4C4:
    ctx.gpr[31] = (0x08A5E4CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E4CCu) goto L_08A5E4CC;
    return;
L_08A5E4CC:
    ctx.gpr[31] = (0x08A5E4D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E4D4u) goto L_08A5E4D4;
    return;
L_08A5E4D4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5E4E0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E4E0u) goto L_08A5E4E0;
    return;
L_08A5E4E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5E4F0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 896u, 0x08A57E84u>(ctx, &aot_mem) && ctx.pc == 0x08A5E4F0u) goto L_08A5E4F0;
    return;
L_08A5E4F0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5E4FCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5E4FCu) goto L_08A5E4FC;
    return;
L_08A5E4FC:
    ctx.gpr[31] = (0x08A5E504u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E504u) goto L_08A5E504;
    return;
L_08A5E504:
    ctx.gpr[31] = (0x08A5E50Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 111u, 0x08A587B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5E50Cu) goto L_08A5E50C;
    return;
L_08A5E50C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
      if (branch_taken) {
          goto L_08A5E548;
      }
      goto L_08A5E514;
    }
L_08A5E514:
    ctx.gpr[31] = (0x08A5E51Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08A5E51Cu) goto L_08A5E51C;
    return;
L_08A5E51C:
    ctx.gpr[31] = (0x08A5E524u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 46u, 0x08A58344u>(ctx, &aot_mem) && ctx.pc == 0x08A5E524u) goto L_08A5E524;
    return;
L_08A5E524:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A5E57C;
      }
      goto L_08A5E52C;
    }
L_08A5E52C:
    ctx.gpr[31] = (0x08A5E534u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08A5E534u) goto L_08A5E534;
    return;
L_08A5E534:
    ctx.gpr[31] = (0x08A5E53Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 46u, 0x08A58344u>(ctx, &aot_mem) && ctx.pc == 0x08A5E53Cu) goto L_08A5E53C;
    return;
L_08A5E53C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5E57C;
      }
      goto L_08A5E548;
    }
L_08A5E548:
    ctx.gpr[31] = (0x08A5E550u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 111u, 0x08A587B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5E550u) goto L_08A5E550;
    return;
L_08A5E550:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E59C;
      }
      goto L_08A5E558;
    }
L_08A5E558:
    ctx.gpr[31] = (0x08A5E560u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 893u, 0x08A57E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E560u) goto L_08A5E560;
    return;
L_08A5E560:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5E59C;
      }
      goto L_08A5E57C;
    }
L_08A5E57C:
    ctx.gpr[4] = (18076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A5E6B8;
      }
      goto L_08A5E59C;
    }
L_08A5E59C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E624;
      }
      goto L_08A5E5A8;
    }
L_08A5E5A8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5E5B4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 68u, 0x08A584FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E5B4u) goto L_08A5E5B4;
    return;
L_08A5E5B4:
    ctx.gpr[4] = (0u | 179u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A5E6B8;
      }
      goto L_08A5E5C0;
    }
L_08A5E5C0:
    ctx.gpr[31] = (0x08A5E5C8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 68u, 0x08A584FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E5C8u) goto L_08A5E5C8;
    return;
L_08A5E5C8:
    ctx.gpr[4] = (0u | 178u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5E6B8;
      }
      goto L_08A5E5D4;
    }
L_08A5E5D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (47940u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1392));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5E5FCu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem) && ctx.pc == 0x08A5E5FCu) goto L_08A5E5FC;
    return;
L_08A5E5FC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5E60Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem) && ctx.pc == 0x08A5E60Cu) goto L_08A5E60C;
    return;
L_08A5E60C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[31] = (0x08A5E61Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem) && ctx.pc == 0x08A5E61Cu) goto L_08A5E61C;
    return;
L_08A5E61C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E6B8;
      }
      goto L_08A5E624;
    }
L_08A5E624:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1388)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A5E6B8;
      }
      goto L_08A5E644;
    }
L_08A5E644:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5E6B8;
      }
      goto L_08A5E660;
    }
L_08A5E660:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1388)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (47940u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1408));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A5E698u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem) && ctx.pc == 0x08A5E698u) goto L_08A5E698;
    return;
L_08A5E698:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5E6A8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem) && ctx.pc == 0x08A5E6A8u) goto L_08A5E6A8;
    return;
L_08A5E6A8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[31] = (0x08A5E6B8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem) && ctx.pc == 0x08A5E6B8u) goto L_08A5E6B8;
    return;
L_08A5E6B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7152)));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5E6E8;
      }
      goto L_08A5E6D0;
    }
L_08A5E6D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5E6E8;
      }
      goto L_08A5E6E4;
    }
L_08A5E6E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08A5E6E8;
L_08A5E6E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A5E6FCu);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 71u, 0x08A58514u>(ctx, &aot_mem) && ctx.pc == 0x08A5E6FCu) goto L_08A5E6FC;
    return;
L_08A5E6FC:
    ctx.gpr[31] = (0x08A5E704u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 231u, 0x08A91E18u>(ctx, &aot_mem) && ctx.pc == 0x08A5E704u) goto L_08A5E704;
    return;
L_08A5E704:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5E774;
      }
      goto L_08A5E720;
    }
L_08A5E720:
    ctx.gpr[31] = (0x08A5E728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5E728u) goto L_08A5E728;
    return;
L_08A5E728:
    ctx.gpr[31] = (0x08A5E730u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem) && ctx.pc == 0x08A5E730u) goto L_08A5E730;
    return;
L_08A5E730:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5E774;
      }
      goto L_08A5E73C;
    }
L_08A5E73C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A5E760;
    }
    goto L_08A5E744;
L_08A5E744:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E768;
      }
      goto L_08A5E750;
    }
L_08A5E750:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5E774;
      }
      goto L_08A5E760;
    }
L_08A5E760:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E774;
      }
      goto L_08A5E768;
    }
L_08A5E768:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A5E774;
L_08A5E774:
    ctx.gpr[31] = (0x08A5E77Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 57u, 0x08A583FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E77Cu) goto L_08A5E77C;
    return;
L_08A5E77C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E798;
      }
      goto L_08A5E784;
    }
L_08A5E784:
    ctx.gpr[31] = (0x08A5E78Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5E78Cu) goto L_08A5E78C;
    return;
L_08A5E78C:
    ctx.gpr[31] = (0x08A5E794u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 244u, 0x08A91ED4u>(ctx, &aot_mem) && ctx.pc == 0x08A5E794u) goto L_08A5E794;
    return;
L_08A5E794:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A5E798;
L_08A5E798:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1077)));
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A5E7D4;
      }
      goto L_08A5E7A8;
    }
L_08A5E7A8:
    ctx.gpr[31] = (0x08A5E7B0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A5E7B0u) goto L_08A5E7B0;
    return;
L_08A5E7B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5780)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5784)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A5E7C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E7C4u) goto L_08A5E7C4;
    return;
L_08A5E7C4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A5E7D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E7D0u) goto L_08A5E7D0;
    return;
L_08A5E7D0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A5E7D4;
L_08A5E7D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1504)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7160), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5E7F0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 86u, 0x08A58658u>(ctx, &aot_mem) && ctx.pc == 0x08A5E7F0u) goto L_08A5E7F0;
    return;
L_08A5E7F0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5E7FCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5E7FCu) goto L_08A5E7FC;
    return;
L_08A5E7FC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2088)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7152)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1077)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[3] = (ctx.gpr[28] + static_cast<std::uint32_t>(7160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[11] = (ctx.gpr[23] + static_cast<std::uint32_t>(1296));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A5E848u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 583u, 0x08B0B04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E848u) goto L_08A5E848;
    return;
L_08A5E848:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5E854u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 597u, 0x08B02384u>(ctx, &aot_mem) && ctx.pc == 0x08A5E854u) goto L_08A5E854;
    return;
L_08A5E854:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2109)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E880;
      }
      goto L_08A5E860;
    }
L_08A5E860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7160)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
      if (branch_taken) {
          goto L_08A5E878;
      }
      goto L_08A5E86C;
    }
L_08A5E86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7160)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A5E880;
      }
      goto L_08A5E878;
    }
L_08A5E878:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7160), 0u);
    goto L_08A5E880;
L_08A5E880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E938;
      }
      goto L_08A5E888;
    }
L_08A5E888:
    ctx.gpr[31] = (0x08A5E890u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 111u, 0x08A587B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5E890u) goto L_08A5E890;
    return;
L_08A5E890:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A5E8A4;
      }
      goto L_08A5E898;
    }
L_08A5E898:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_08A5E928;
      }
      goto L_08A5E8A4;
    }
L_08A5E8A4:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[28])) && ctx.fpr[22] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A5E928;
      }
      goto L_08A5E8B4;
    }
L_08A5E8B4:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A5E8F8;
      }
      goto L_08A5E8C4;
    }
L_08A5E8C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1296)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08A5E928;
      }
      goto L_08A5E8E0;
    }
L_08A5E8E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1296)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A5E928;
      }
      goto L_08A5E8F8;
    }
L_08A5E8F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1296)));
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08A5E928;
      }
      goto L_08A5E914;
    }
L_08A5E914:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1296)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5E928;
L_08A5E928:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1288)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1296)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5E938;
L_08A5E938:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E988;
      }
      goto L_08A5E944;
    }
L_08A5E944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1504)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5E988;
      }
      goto L_08A5E954;
    }
L_08A5E954:
    ctx.gpr[31] = (0x08A5E95Cu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1388)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E95Cu) goto L_08A5E95C;
    return;
L_08A5E95C:
    ctx.gpr[4] = (15107u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A5E9C4;
      }
      goto L_08A5E980;
    }
L_08A5E980:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_08A5E9C4;
      }
      goto L_08A5E988;
    }
L_08A5E988:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1388)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5E9C4;
      }
      goto L_08A5E9A4;
    }
L_08A5E9A4:
    ctx.gpr[31] = (0x08A5E9ACu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1388)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E9ACu) goto L_08A5E9AC;
    return;
L_08A5E9AC:
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5E9C4;
L_08A5E9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ECF0;
      }
      goto L_08A5E9D0;
    }
L_08A5E9D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1248)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5E9F8;
      }
      goto L_08A5E9E4;
    }
L_08A5E9E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16243u << 16u);
      if (branch_taken) {
          goto L_08A5ECD0;
      }
      goto L_08A5E9F8;
    }
L_08A5E9F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2080)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2084)));
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1292));
    ctx.gpr[20] = (0u | 0u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1088));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(7156));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1472));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2048), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1440));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1488));
      if (branch_taken) {
          goto L_08A5EA54;
      }
      goto L_08A5EA3C;
    }
L_08A5EA3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1260)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5EA54;
      }
      goto L_08A5EA50;
    }
L_08A5EA50:
    ctx.gpr[20] = (ctx.gpr[30] | 0u);
    goto L_08A5EA54;
L_08A5EA54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2128), ctx.gpr[20]);
    ctx.gpr[31] = (0x08A5EA60u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1512)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A5800Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EA60u) goto L_08A5EA60;
    return;
L_08A5EA60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1512)));
    ctx.gpr[31] = (0x08A5EA6Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 3u, 0x08A58030u>(ctx, &aot_mem) && ctx.pc == 0x08A5EA6Cu) goto L_08A5EA6C;
    return;
L_08A5EA6C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A5EA80u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5EA80u) goto L_08A5EA80;
    return;
L_08A5EA80:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1424));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5EA94u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EA94u) goto L_08A5EA94;
    return;
L_08A5EA94:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5EAA0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5EAA0u) goto L_08A5EAA0;
    return;
L_08A5EAA0:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1456));
    ctx.gpr[31] = (0x08A5EAACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EAACu) goto L_08A5EAAC;
    return;
L_08A5EAAC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5EAB8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5EAB8u) goto L_08A5EAB8;
    return;
L_08A5EAB8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5EAC4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem) && ctx.pc == 0x08A5EAC4u) goto L_08A5EAC4;
    return;
L_08A5EAC4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A5EAD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EAD0u) goto L_08A5EAD0;
    return;
L_08A5EAD0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5EADCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5EADCu) goto L_08A5EADC;
    return;
L_08A5EADC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5EAECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem) && ctx.pc == 0x08A5EAECu) goto L_08A5EAEC;
    return;
L_08A5EAEC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5EAF8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EAF8u) goto L_08A5EAF8;
    return;
L_08A5EAF8:
    ctx.gpr[31] = (0x08A5EB00u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EB00u) goto L_08A5EB00;
    return;
L_08A5EB00:
    ctx.gpr[31] = (0x08A5EB08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EB08u) goto L_08A5EB08;
    return;
L_08A5EB08:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5EB14u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5EB14u) goto L_08A5EB14;
    return;
L_08A5EB14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5EB24u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 896u, 0x08A57E84u>(ctx, &aot_mem) && ctx.pc == 0x08A5EB24u) goto L_08A5EB24;
    return;
L_08A5EB24:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5EB30u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5EB30u) goto L_08A5EB30;
    return;
L_08A5EB30:
    ctx.gpr[31] = (0x08A5EB38u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EB38u) goto L_08A5EB38;
    return;
L_08A5EB38:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7152), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5EB48u);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 71u, 0x08A58514u>(ctx, &aot_mem) && ctx.pc == 0x08A5EB48u) goto L_08A5EB48;
    return;
L_08A5EB48:
    ctx.gpr[31] = (0x08A5EB50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 231u, 0x08A91E18u>(ctx, &aot_mem) && ctx.pc == 0x08A5EB50u) goto L_08A5EB50;
    return;
L_08A5EB50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1392)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2128)));
      if (branch_taken) {
          goto L_08A5EBC4;
      }
      goto L_08A5EB70;
    }
L_08A5EB70:
    ctx.gpr[31] = (0x08A5EB78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5EB78u) goto L_08A5EB78;
    return;
L_08A5EB78:
    ctx.gpr[31] = (0x08A5EB80u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem) && ctx.pc == 0x08A5EB80u) goto L_08A5EB80;
    return;
L_08A5EB80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5EBC4;
      }
      goto L_08A5EB8C;
    }
L_08A5EB8C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A5EBB0;
    }
    goto L_08A5EB94;
L_08A5EB94:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EBB8;
      }
      goto L_08A5EBA0;
    }
L_08A5EBA0:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5EBC4;
      }
      goto L_08A5EBB0;
    }
L_08A5EBB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EBC4;
      }
      goto L_08A5EBB8;
    }
L_08A5EBB8:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A5EBC4;
L_08A5EBC4:
    ctx.gpr[31] = (0x08A5EBCCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 57u, 0x08A583FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5EBCCu) goto L_08A5EBCC;
    return;
L_08A5EBCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EBE8;
      }
      goto L_08A5EBD4;
    }
L_08A5EBD4:
    ctx.gpr[31] = (0x08A5EBDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5EBDCu) goto L_08A5EBDC;
    return;
L_08A5EBDC:
    ctx.gpr[31] = (0x08A5EBE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 244u, 0x08A91ED4u>(ctx, &aot_mem) && ctx.pc == 0x08A5EBE4u) goto L_08A5EBE4;
    return;
L_08A5EBE4:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A5EBE8;
L_08A5EBE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5EC24;
      }
      goto L_08A5EBF8;
    }
L_08A5EBF8:
    ctx.gpr[31] = (0x08A5EC00u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A5EC00u) goto L_08A5EC00;
    return;
L_08A5EC00:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5780)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5784)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A5EC14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EC14u) goto L_08A5EC14;
    return;
L_08A5EC14:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A5EC20u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EC20u) goto L_08A5EC20;
    return;
L_08A5EC20:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A5EC24;
L_08A5EC24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1500)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7156), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5EC40u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 86u, 0x08A58658u>(ctx, &aot_mem) && ctx.pc == 0x08A5EC40u) goto L_08A5EC40;
    return;
L_08A5EC40:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A5EC4Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5EC4Cu) goto L_08A5EC4C;
    return;
L_08A5EC4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7152)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1076)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2048)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A5EC90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 583u, 0x08B0B04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EC90u) goto L_08A5EC90;
    return;
L_08A5EC90:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5EC9Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 597u, 0x08B02384u>(ctx, &aot_mem) && ctx.pc == 0x08A5EC9Cu) goto L_08A5EC9C;
    return;
L_08A5EC9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2109)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ECC8;
      }
      goto L_08A5ECA8;
    }
L_08A5ECA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7156)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5ECC4;
      }
      goto L_08A5ECB8;
    }
L_08A5ECB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7156)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A5ECC8;
      }
      goto L_08A5ECC4;
    }
L_08A5ECC4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7156), 0u);
    goto L_08A5ECC8;
L_08A5ECC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ECF0;
      }
      goto L_08A5ECD0;
    }
L_08A5ECD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1292)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1284)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A5ECF0;
L_08A5ECF0:
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08A5ED00u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 116u, 0x08A587E4u>(ctx, &aot_mem) && ctx.pc == 0x08A5ED00u) goto L_08A5ED00;
    return;
L_08A5ED00:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5ED3C;
      }
      goto L_08A5ED18;
    }
L_08A5ED18:
    ctx.gpr[31] = (0x08A5ED20u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 116u, 0x08A587E4u>(ctx, &aot_mem) && ctx.pc == 0x08A5ED20u) goto L_08A5ED20;
    return;
L_08A5ED20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A5ED2Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 307u, 0x08A59578u>(ctx, &aot_mem) && ctx.pc == 0x08A5ED2Cu) goto L_08A5ED2C;
    return;
L_08A5ED2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5ED38u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5ED38u) goto L_08A5ED38;
    return;
L_08A5ED38:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08A5ED3C;
L_08A5ED3C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ED5C;
      }
      goto L_08A5ED44;
    }
L_08A5ED44:
    ctx.gpr[31] = (0x08A5ED4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 53u, 0x08A583C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5ED4Cu) goto L_08A5ED4C;
    return;
L_08A5ED4C:
    ctx.gpr[4] = (15922u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 47299u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08A5ED5C;
L_08A5ED5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2092)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ED78;
      }
      goto L_08A5ED68;
    }
L_08A5ED68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F018;
      }
      goto L_08A5ED78;
    }
L_08A5ED78:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2052)));
    ctx.gpr[16] = (ctx.gpr[23] + static_cast<std::uint32_t>(1056));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1504));
    ctx.gpr[31] = (0x08A5ED8Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5ED8Cu) goto L_08A5ED8C;
    return;
L_08A5ED8C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5ED9Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 896u, 0x08A57E84u>(ctx, &aot_mem) && ctx.pc == 0x08A5ED9Cu) goto L_08A5ED9C;
    return;
L_08A5ED9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5EDA8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5EDA8u) goto L_08A5EDA8;
    return;
L_08A5EDA8:
    ctx.gpr[31] = (0x08A5EDB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EDB0u) goto L_08A5EDB0;
    return;
L_08A5EDB0:
    ctx.gpr[5] = (15363u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1493)));
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5EE18;
      }
      goto L_08A5EDC4;
    }
L_08A5EDC4:
    ctx.gpr[31] = (0x08A5EDCCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EDCCu) goto L_08A5EDCC;
    return;
L_08A5EDCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A5EDDCu);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 94u, 0x08A58720u>(ctx, &aot_mem) && ctx.pc == 0x08A5EDDCu) goto L_08A5EDDC;
    return;
L_08A5EDDC:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = ctx.fpr[30] / ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2124)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08A5EE54;
      }
      goto L_08A5EE18;
    }
L_08A5EE18:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    ctx.gpr[31] = (0x08A5EE28u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EE28u) goto L_08A5EE28;
    return;
L_08A5EE28:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5EE38u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 903u, 0x08A57F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EE38u) goto L_08A5EE38;
    return;
L_08A5EE38:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5EE44u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5EE44u) goto L_08A5EE44;
    return;
L_08A5EE44:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5EE50u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem) && ctx.pc == 0x08A5EE50u) goto L_08A5EE50;
    return;
L_08A5EE50:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A5EE54;
L_08A5EE54:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A5EE64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EE64u) goto L_08A5EE64;
    return;
L_08A5EE64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1524), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1524));
    ctx.gpr[31] = (0x08A5EE74u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1520));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 910u, 0x08A57FE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5EE74u) goto L_08A5EE74;
    return;
L_08A5EE74:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1076)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5EF8C;
      }
      goto L_08A5EE8C;
    }
L_08A5EE8C:
    ctx.gpr[31] = (0x08A5EE94u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A5EE94u) goto L_08A5EE94;
    return;
L_08A5EE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A5EEA8u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A5EEA8u) goto L_08A5EEA8;
    return;
L_08A5EEA8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5780)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5784)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5EEC4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EEC4u) goto L_08A5EEC4;
    return;
L_08A5EEC4:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5EED8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EED8u) goto L_08A5EED8;
    return;
L_08A5EED8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5EF14;
      }
      goto L_08A5EEE0;
    }
L_08A5EEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[31] = (0x08A5EEECu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A5EEECu) goto L_08A5EEEC;
    return;
L_08A5EEEC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5EF00u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EF00u) goto L_08A5EF00;
    return;
L_08A5EF00:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A5EF0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EF0Cu) goto L_08A5EF0C;
    return;
L_08A5EF0C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A5EFD8;
      }
      goto L_08A5EF14;
    }
L_08A5EF14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A5EF24u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A5EF24u) goto L_08A5EF24;
    return;
L_08A5EF24:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5EF38u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EF38u) goto L_08A5EF38;
    return;
L_08A5EF38:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5EF4Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EF4Cu) goto L_08A5EF4C;
    return;
L_08A5EF4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A5EFD8;
      }
      goto L_08A5EF54;
    }
L_08A5EF54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A5EF64u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A5EF64u) goto L_08A5EF64;
    return;
L_08A5EF64:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5EF78u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EF78u) goto L_08A5EF78;
    return;
L_08A5EF78:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A5EF84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EF84u) goto L_08A5EF84;
    return;
L_08A5EF84:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A5EFD8;
      }
      goto L_08A5EF8C;
    }
L_08A5EF8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5EFB0;
      }
      goto L_08A5EFA4;
    }
L_08A5EFA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A5EFD8;
      }
      goto L_08A5EFB0;
    }
L_08A5EFB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5EFD8;
      }
      goto L_08A5EFCC;
    }
L_08A5EFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    goto L_08A5EFD8;
L_08A5EFD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[31] = (0x08A5EFE4u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EFE4u) goto L_08A5EFE4;
    return;
L_08A5EFE4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A5EFF0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 7u, 0x08A58090u>(ctx, &aot_mem) && ctx.pc == 0x08A5EFF0u) goto L_08A5EFF0;
    return;
L_08A5EFF0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1520)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = ctx.fpr[26] - ctx.fpr[0];
    ctx.gpr[31] = (0x08A5F004u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 4u, 0x08A58054u>(ctx, &aot_mem) && ctx.pc == 0x08A5F004u) goto L_08A5F004;
    return;
L_08A5F004:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[24];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A5F0AC;
      }
      goto L_08A5F018;
    }
L_08A5F018:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F084;
      }
      goto L_08A5F028;
    }
L_08A5F028:
    ctx.gpr[4] = (16248u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.gpr[31] = (0x08A5F038u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F038u) goto L_08A5F038;
    return;
L_08A5F038:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5F044u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 7u, 0x08A58090u>(ctx, &aot_mem) && ctx.pc == 0x08A5F044u) goto L_08A5F044;
    return;
L_08A5F044:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1520)));
    ctx.fpr[22] = ctx.fpr[26] - ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5F058u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem) && ctx.pc == 0x08A5F058u) goto L_08A5F058;
    return;
L_08A5F058:
    ctx.gpr[31] = (0x08A5F060u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 4u, 0x08A58054u>(ctx, &aot_mem) && ctx.pc == 0x08A5F060u) goto L_08A5F060;
    return;
L_08A5F060:
    ctx.gpr[4] = (16006u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[24];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A5F0AC;
      }
      goto L_08A5F084;
    }
L_08A5F084:
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[31] = (0x08A5F094u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F094u) goto L_08A5F094;
    return;
L_08A5F094:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5F0A0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 7u, 0x08A58090u>(ctx, &aot_mem) && ctx.pc == 0x08A5F0A0u) goto L_08A5F0A0;
    return;
L_08A5F0A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1520)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5F0AC;
L_08A5F0AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1520)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1216)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5F0E8;
      }
      goto L_08A5F0D0;
    }
L_08A5F0D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1220)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F294;
      }
      goto L_08A5F0E8;
    }
L_08A5F0E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(608)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15523u << 16u);
      if (branch_taken) {
          goto L_08A5F294;
      }
      goto L_08A5F110;
    }
L_08A5F110:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F294;
      }
      goto L_08A5F12C;
    }
L_08A5F12C:
    ctx.gpr[31] = (0x08A5F134u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 111u, 0x08A587B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5F134u) goto L_08A5F134;
    return;
L_08A5F134:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F294;
      }
      goto L_08A5F13C;
    }
L_08A5F13C:
    ctx.gpr[31] = (0x08A5F144u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1392)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F144u) goto L_08A5F144;
    return;
L_08A5F144:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A5F154u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F154u) goto L_08A5F154;
    return;
L_08A5F154:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1224)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
      if (branch_taken) {
          goto L_08A5F194;
      }
      goto L_08A5F17C;
    }
L_08A5F17C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1228)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F214;
      }
      goto L_08A5F194;
    }
L_08A5F194:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1568), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1552));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1576), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1576));
    ctx.gpr[31] = (0x08A5F1ACu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 910u, 0x08A57FE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5F1ACu) goto L_08A5F1AC;
    return;
L_08A5F1AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1572), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1572));
    ctx.gpr[31] = (0x08A5F1BCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1568));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F1BCu) goto L_08A5F1BC;
    return;
L_08A5F1BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[31] = (0x08A5F1C8u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A5800Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F1C8u) goto L_08A5F1C8;
    return;
L_08A5F1C8:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5F1ECu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem) && ctx.pc == 0x08A5F1ECu) goto L_08A5F1EC;
    return;
L_08A5F1EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5F1FCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem) && ctx.pc == 0x08A5F1FCu) goto L_08A5F1FC;
    return;
L_08A5F1FC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5F20Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem) && ctx.pc == 0x08A5F20Cu) goto L_08A5F20C;
    return;
L_08A5F20C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F298;
      }
      goto L_08A5F214;
    }
L_08A5F214:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1600), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1608));
    ctx.gpr[31] = (0x08A5F22Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 910u, 0x08A57FE4u>(ctx, &aot_mem) && ctx.pc == 0x08A5F22Cu) goto L_08A5F22C;
    return;
L_08A5F22C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1604), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1604));
    ctx.gpr[31] = (0x08A5F23Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1600));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F23Cu) goto L_08A5F23C;
    return;
L_08A5F23C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[31] = (0x08A5F248u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A5800Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F248u) goto L_08A5F248;
    return;
L_08A5F248:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (15333u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5F26Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem) && ctx.pc == 0x08A5F26Cu) goto L_08A5F26C;
    return;
L_08A5F26C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5F27Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem) && ctx.pc == 0x08A5F27Cu) goto L_08A5F27C;
    return;
L_08A5F27C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5F28Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem) && ctx.pc == 0x08A5F28Cu) goto L_08A5F28C;
    return;
L_08A5F28C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F298;
      }
      goto L_08A5F294;
    }
L_08A5F294:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1392), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08A5F298;
L_08A5F298:
    ctx.gpr[31] = (0x08A5F2A0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 41u, 0x08A58304u>(ctx, &aot_mem) && ctx.pc == 0x08A5F2A0u) goto L_08A5F2A0;
    return;
L_08A5F2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2056)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2080)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1216)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A5F2D8;
      }
      goto L_08A5F2C8;
    }
L_08A5F2C8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1316)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08A5F2D8;
L_08A5F2D8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[5] = (16192u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2076)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2068)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1216)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[28]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A5F324;
      }
      goto L_08A5F314;
    }
L_08A5F314:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1316)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    goto L_08A5F324;
L_08A5F324:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[28] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5F344;
L_08A5F344:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(7156)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1500), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5F344;
      }
      goto L_08A5F360;
    }
L_08A5F360:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(604)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F388;
      }
      goto L_08A5F374;
    }
L_08A5F374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1504)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5F388;
      }
      goto L_08A5F384;
    }
L_08A5F384:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1504), 0u);
    goto L_08A5F388;
L_08A5F388:
    ctx.gpr[31] = (0x08A5F390u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5F390u) goto L_08A5F390;
    return;
L_08A5F390:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F548;
      }
      goto L_08A5F398;
    }
L_08A5F398:
    ctx.gpr[31] = (0x08A5F3A0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 238u, 0x08B00E18u>(ctx, &aot_mem) && ctx.pc == 0x08A5F3A0u) goto L_08A5F3A0;
    return;
L_08A5F3A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F4E4;
      }
      goto L_08A5F3A8;
    }
L_08A5F3A8:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6640));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(166)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F468;
      }
      goto L_08A5F3C4;
    }
L_08A5F3C4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(166)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
        goto L_08A5F3E8;
    }
    goto L_08A5F3D4;
L_08A5F3D4:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5F3EC;
      }
      goto L_08A5F3E8;
    }
L_08A5F3E8:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A5F3EC;
L_08A5F3EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F460;
      }
      goto L_08A5F3F8;
    }
L_08A5F3F8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(166)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
        goto L_08A5F41C;
    }
    goto L_08A5F408;
L_08A5F408:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5F420;
      }
      goto L_08A5F41C;
    }
L_08A5F41C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A5F420;
L_08A5F420:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F460;
      }
      goto L_08A5F42C;
    }
L_08A5F42C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(700), 0u);
      if (branch_taken) {
          goto L_08A5F450;
      }
      goto L_08A5F43C;
    }
L_08A5F43C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F450;
    }
L_08A5F450:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F460;
    }
L_08A5F460:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(700), 0u);
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F468;
    }
L_08A5F468:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(166)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
        goto L_08A5F48C;
    }
    goto L_08A5F478;
L_08A5F478:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5F490;
      }
      goto L_08A5F48C;
    }
L_08A5F48C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A5F490;
L_08A5F490:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F4DC;
      }
      goto L_08A5F49C;
    }
L_08A5F49C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(166)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
        goto L_08A5F4C0;
    }
    goto L_08A5F4AC;
L_08A5F4AC:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5F4C4;
      }
      goto L_08A5F4C0;
    }
L_08A5F4C0:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A5F4C4;
L_08A5F4C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F4DC;
      }
      goto L_08A5F4D0;
    }
L_08A5F4D0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(700), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F4DC;
    }
L_08A5F4DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(700), 0u);
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F4E4;
    }
L_08A5F4E4:
    ctx.gpr[31] = (0x08A5F4ECu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 118u, 0x08A587F4u>(ctx, &aot_mem) && ctx.pc == 0x08A5F4ECu) goto L_08A5F4EC;
    return;
L_08A5F4EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F4F4;
    }
L_08A5F4F4:
    ctx.gpr[16] = (2238u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6640));
    ctx.gpr[31] = (0x08A5F504u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 319u, 0x0898CE74u>(ctx, &aot_mem) && ctx.pc == 0x08A5F504u) goto L_08A5F504;
    return;
L_08A5F504:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5F510u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 117u, 0x08A587ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5F510u) goto L_08A5F510;
    return;
L_08A5F510:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5F528;
      }
      goto L_08A5F51C;
    }
L_08A5F51C:
    ctx.gpr[31] = (0x08A5F524u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 333u, 0x0898CF00u>(ctx, &aot_mem) && ctx.pc == 0x08A5F524u) goto L_08A5F524;
    return;
L_08A5F524:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08A5F528;
L_08A5F528:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F53C;
      }
      goto L_08A5F530;
    }
L_08A5F530:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(700), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5F540;
      }
      goto L_08A5F53C;
    }
L_08A5F53C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(700), 0u);
    goto L_08A5F540;
L_08A5F540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F548;
    }
L_08A5F548:
    ctx.gpr[31] = (0x08A5F550u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 118u, 0x08A587F4u>(ctx, &aot_mem) && ctx.pc == 0x08A5F550u) goto L_08A5F550;
    return;
L_08A5F550:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F558;
    }
L_08A5F558:
    ctx.gpr[31] = (0x08A5F560u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 160u, 0x08A58A70u>(ctx, &aot_mem) && ctx.pc == 0x08A5F560u) goto L_08A5F560;
    return;
L_08A5F560:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(636)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F8F4;
      }
      goto L_08A5F57C;
    }
L_08A5F57C:
    ctx.gpr[31] = (0x08A5F584u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5F584u) goto L_08A5F584;
    return;
L_08A5F584:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5F8F4;
      }
      goto L_08A5F590;
    }
L_08A5F590:
    ctx.gpr[31] = (0x08A5F598u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 117u, 0x08A587ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5F598u) goto L_08A5F598;
    return;
L_08A5F598:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5F5EC;
      }
      goto L_08A5F5A4;
    }
L_08A5F5A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(344));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5F5C4u);
    ctx.gpr[5] = (0u | 13u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5F5C4u) goto L_08A5F5C4;
    return;
L_08A5F5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(344));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5F5E4u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5F5E4u) goto L_08A5F5E4;
    return;
L_08A5F5E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F8F8;
      }
      goto L_08A5F5EC;
    }
L_08A5F5EC:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.gpr[31] = (0x08A5F608u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5F608u) goto L_08A5F608;
    return;
L_08A5F608:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1632));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1648));
      if (branch_taken) {
          goto L_08A5F684;
      }
      goto L_08A5F618;
    }
L_08A5F618:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08A5F624u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 63u, 0x08A1C6C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F624u) goto L_08A5F624;
    return;
L_08A5F624:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F684;
      }
      goto L_08A5F62C;
    }
L_08A5F62C:
    ctx.gpr[5] = (16281u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1664));
    ctx.gpr[5] = (48844u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[31] = (0x08A5F650u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5F650u) goto L_08A5F650;
    return;
L_08A5F650:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5F65Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5F65Cu) goto L_08A5F65C;
    return;
L_08A5F65C:
    ctx.gpr[4] = (15436u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1648), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1652), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08A5F67Cu);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F67Cu) goto L_08A5F67C;
    return;
L_08A5F67C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1656), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A5F764;
      }
      goto L_08A5F684;
    }
L_08A5F684:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A5F698u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 68u, 0x08A584FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F698u) goto L_08A5F698;
    return;
L_08A5F698:
    ctx.gpr[31] = (0x08A5F6A0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 41u, 0x08A58304u>(ctx, &aot_mem) && ctx.pc == 0x08A5F6A0u) goto L_08A5F6A0;
    return;
L_08A5F6A0:
    ctx.gpr[31] = (0x08A5F6A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 106u, 0x08A5878Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F6A8u) goto L_08A5F6A8;
    return;
L_08A5F6A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5F6B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5F6B4u) goto L_08A5F6B4;
    return;
L_08A5F6B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1640)));
    ctx.gpr[4] = (15544u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1680));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A5F6E0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F6E0u) goto L_08A5F6E0;
    return;
L_08A5F6E0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A5F6ECu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem) && ctx.pc == 0x08A5F6ECu) goto L_08A5F6EC;
    return;
L_08A5F6EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A5F6FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem) && ctx.pc == 0x08A5F6FCu) goto L_08A5F6FC;
    return;
L_08A5F6FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5F708u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5F708u) goto L_08A5F708;
    return;
L_08A5F708:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08A5F714u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F714u) goto L_08A5F714;
    return;
L_08A5F714:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A5F720u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F720u) goto L_08A5F720;
    return;
L_08A5F720:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A5F730u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem) && ctx.pc == 0x08A5F730u) goto L_08A5F730;
    return;
L_08A5F730:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5F73Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F73Cu) goto L_08A5F73C;
    return;
L_08A5F73C:
    ctx.gpr[4] = (15139u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15523u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A5F760u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F760u) goto L_08A5F760;
    return;
L_08A5F760:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1656), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A5F764;
L_08A5F764:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1616));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5F778u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 899u, 0x08A57EDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F778u) goto L_08A5F778;
    return;
L_08A5F778:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5F784u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5F784u) goto L_08A5F784;
    return;
L_08A5F784:
    ctx.gpr[4] = (0u | 27u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A5F7ACu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x08A5F7ACu) goto L_08A5F7AC;
    return;
L_08A5F7AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08A5F7C0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5F7C0u) goto L_08A5F7C0;
    return;
L_08A5F7C0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (0u | 56u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A5F7E8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x08A5F7E8u) goto L_08A5F7E8;
    return;
L_08A5F7E8:
    ctx.gpr[4] = (48928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16160u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A5F80Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F80Cu) goto L_08A5F80C;
    return;
L_08A5F80C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1632)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[0];
    ctx.gpr[31] = (0x08A5F824u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1632), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F824u) goto L_08A5F824;
    return;
L_08A5F824:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1636)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[14] = ctx.fpr[13] + ctx.fpr[0];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A5F844u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F844u) goto L_08A5F844;
    return;
L_08A5F844:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1640)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[15] = ctx.fpr[14] + ctx.fpr[0];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08A5F864u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5F864u) goto L_08A5F864;
    return;
L_08A5F864:
    ctx.gpr[4] = (0u | 57u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A5F88Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x08A5F88Cu) goto L_08A5F88C;
    return;
L_08A5F88C:
    ctx.gpr[31] = (0x08A5F894u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1400)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 48u, 0x08A58354u>(ctx, &aot_mem) && ctx.pc == 0x08A5F894u) goto L_08A5F894;
    return;
L_08A5F894:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A5F8AC;
      }
      goto L_08A5F8A0;
    }
L_08A5F8A0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A5F8AC;
L_08A5F8AC:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (17820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A5F8EC;
      }
      goto L_08A5F8CC;
    }
L_08A5F8CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1488)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5F8ECu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5F8ECu) goto L_08A5F8EC;
    return;
L_08A5F8EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F8F8;
      }
      goto L_08A5F8F4;
    }
L_08A5F8F4:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1400), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08A5F8F8;
L_08A5F8F8:
    ctx.gpr[31] = (0x08A5F900u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 947u, 0x08AFFEFCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F900u) goto L_08A5F900;
    return;
L_08A5F900:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F93C;
      }
      goto L_08A5F910;
    }
L_08A5F910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5F93C;
      }
      goto L_08A5F924;
    }
L_08A5F924:
    ctx.gpr[31] = (0x08A5F92Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 238u, 0x08B00E18u>(ctx, &aot_mem) && ctx.pc == 0x08A5F92Cu) goto L_08A5F92C;
    return;
L_08A5F92C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F93C;
      }
      goto L_08A5F934;
    }
L_08A5F934:
    ctx.gpr[31] = (0x08A5F93Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 149u, 0x08B1096Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F93Cu) goto L_08A5F93C;
    return;
L_08A5F93C:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5F94Cu);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F94Cu) goto L_08A5F94C;
    return;
L_08A5F94C:
    ctx.gpr[31] = (0x08A5F954u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 14u, 0x08A58150u>(ctx, &aot_mem) && ctx.pc == 0x08A5F954u) goto L_08A5F954;
    return;
L_08A5F954:
    ctx.gpr[4] = (15651u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[22] = (0u | 19u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 25u);
    ctx.gpr[20] = (0u | 18u);
    ctx.gpr[19] = (0u | 33u);
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    ctx.gpr[16] = (ctx.gpr[23] + static_cast<std::uint32_t>(1088));
    goto L_08A5F98C;
L_08A5F98C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1232)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1216)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FA60;
      }
      goto L_08A5F9B4;
    }
L_08A5F9B4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F9C4;
      }
      goto L_08A5F9BC;
    }
L_08A5F9BC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A5FA60;
      }
      goto L_08A5F9C4;
    }
L_08A5F9C4:
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FA60;
      }
      goto L_08A5F9D4;
    }
L_08A5F9D4:
    ctx.gpr[31] = (0x08A5F9DCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5F9DCu) goto L_08A5F9DC;
    return;
L_08A5F9DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F9F8;
      }
      goto L_08A5F9E4;
    }
L_08A5F9E4:
    ctx.gpr[31] = (0x08A5F9ECu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5F9ECu) goto L_08A5F9EC;
    return;
L_08A5F9EC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5FA60;
      }
      goto L_08A5F9F8;
    }
L_08A5F9F8:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[18]);
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A5FA34;
      }
      goto L_08A5FA14;
    }
L_08A5FA14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2060)));
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08A5FA2Cu);
    ctx.gpr[6] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08A5FA2Cu) goto L_08A5FA2C;
    return;
L_08A5FA2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FA4C;
      }
      goto L_08A5FA34;
    }
L_08A5FA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2060)));
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08A5FA4Cu);
    ctx.gpr[6] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08A5FA4Cu) goto L_08A5FA4C;
    return;
L_08A5FA4C:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FA60;
      }
      goto L_08A5FA5C;
    }
L_08A5FA5C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A5FA60;
L_08A5FA60:
    ctx.gpr[31] = (0x08A5FA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5FA68u) goto L_08A5FA68;
    return;
L_08A5FA68:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5FB50;
      }
      goto L_08A5FA78;
    }
L_08A5FA78:
    ctx.gpr[31] = (0x08A5FA80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5FA80u) goto L_08A5FA80;
    return;
L_08A5FA80:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5FAAC;
      }
      goto L_08A5FA8C;
    }
L_08A5FA8C:
    ctx.gpr[31] = (0x08A5FA94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5FA94u) goto L_08A5FA94;
    return;
L_08A5FA94:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A5FAAC;
      }
      goto L_08A5FA9C;
    }
L_08A5FA9C:
    ctx.gpr[31] = (0x08A5FAA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5FAA4u) goto L_08A5FAA4;
    return;
L_08A5FAA4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A5FACC;
      }
      goto L_08A5FAAC;
    }
L_08A5FAAC:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FB50;
      }
      goto L_08A5FABC;
    }
L_08A5FABC:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5FB50;
      }
      goto L_08A5FACC;
    }
L_08A5FACC:
    ctx.gpr[31] = (0x08A5FAD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5FAD4u) goto L_08A5FAD4;
    return;
L_08A5FAD4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5FB00;
      }
      goto L_08A5FAE0;
    }
L_08A5FAE0:
    ctx.gpr[31] = (0x08A5FAE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5FAE8u) goto L_08A5FAE8;
    return;
L_08A5FAE8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A5FB00;
      }
      goto L_08A5FAF0;
    }
L_08A5FAF0:
    ctx.gpr[31] = (0x08A5FAF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5FAF8u) goto L_08A5FAF8;
    return;
L_08A5FAF8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A5FB24;
      }
      goto L_08A5FB00;
    }
L_08A5FB00:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FB50;
      }
      goto L_08A5FB1C;
    }
L_08A5FB1C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A5FB50;
      }
      goto L_08A5FB24;
    }
L_08A5FB24:
    ctx.gpr[31] = (0x08A5FB2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem) && ctx.pc == 0x08A5FB2Cu) goto L_08A5FB2C;
    return;
L_08A5FB2C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A5FB50;
      }
      goto L_08A5FB34;
    }
L_08A5FB34:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FB50;
      }
      goto L_08A5FB44;
    }
L_08A5FB44:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A5FB50;
L_08A5FB50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1216)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5F98C;
      }
      goto L_08A5FB74;
    }
L_08A5FB74:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FB98;
      }
      goto L_08A5FB88;
    }
L_08A5FB88:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(616))))));
        goto L_08A5FD2C;
    }
    goto L_08A5FB98;
L_08A5FB98:
    ctx.gpr[31] = (0x08A5FBA0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5FBA0u) goto L_08A5FBA0;
    return;
L_08A5FBA0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(616))))));
        goto L_08A5FD2C;
    }
    goto L_08A5FBA8;
L_08A5FBA8:
    ctx.gpr[31] = (0x08A5FBB0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FBB0u) goto L_08A5FBB0;
    return;
L_08A5FBB0:
    ctx.gpr[31] = (0x08A5FBB8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 14u, 0x08A58150u>(ctx, &aot_mem) && ctx.pc == 0x08A5FBB8u) goto L_08A5FBB8;
    return;
L_08A5FBB8:
    ctx.gpr[4] = (15395u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(616))))));
        goto L_08A5FD2C;
    }
    goto L_08A5FBD8;
L_08A5FBD8:
    ctx.gpr[31] = (0x08A5FBE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 6u, 0x08A58084u>(ctx, &aot_mem) && ctx.pc == 0x08A5FBE0u) goto L_08A5FBE0;
    return;
L_08A5FBE0:
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17658u << 16u);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5FC98;
      }
      goto L_08A5FC00;
    }
L_08A5FC00:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (17274u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[7] = (17096u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1696));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1700));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1696), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08A5FC3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1700), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem) && ctx.pc == 0x08A5FC3Cu) goto L_08A5FC3C;
    return;
L_08A5FC3C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A5FC4Cu);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FC4Cu) goto L_08A5FC4C;
    return;
L_08A5FC4C:
    ctx.gpr[4] = (18076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A5FC7Cu);
    ctx.gpr[17] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08A5FC7Cu) goto L_08A5FC7C;
    return;
L_08A5FC7C:
    ctx.gpr[5] = (ctx.gpr[17] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5FC90u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FC90u) goto L_08A5FC90;
    return;
L_08A5FC90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(616))))));
      if (branch_taken) {
          goto L_08A5FD2C;
      }
      goto L_08A5FC98;
    }
L_08A5FC98:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (17174u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[7] = (16928u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1704));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1708));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1704), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08A5FCD4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem) && ctx.pc == 0x08A5FCD4u) goto L_08A5FCD4;
    return;
L_08A5FCD4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A5FCE4u);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FCE4u) goto L_08A5FCE4;
    return;
L_08A5FCE4:
    ctx.gpr[4] = (17820u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A5FD14u);
    ctx.gpr[17] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08A5FD14u) goto L_08A5FD14;
    return;
L_08A5FD14:
    ctx.gpr[5] = (ctx.gpr[17] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5FD28u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FD28u) goto L_08A5FD28;
    return;
L_08A5FD28:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(616))))));
    goto L_08A5FD2C;
L_08A5FD2C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(614))))));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FD60;
      }
      goto L_08A5FD58;
    }
L_08A5FD58:
    ctx.gpr[31] = (0x08A5FD60u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 484u, 0x08B4652Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FD60u) goto L_08A5FD60;
    return;
L_08A5FD60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FDFC;
      }
      goto L_08A5FD70;
    }
L_08A5FD70:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5FD84u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FD84u) goto L_08A5FD84;
    return;
L_08A5FD84:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1712));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5FDA0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5FDA0u) goto L_08A5FDA0;
    return;
L_08A5FDA0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5FDACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5FDACu) goto L_08A5FDAC;
    return;
L_08A5FDAC:
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(128));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5FDC4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5FDC4u) goto L_08A5FDC4;
    return;
L_08A5FDC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5FDD0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5FDD0u) goto L_08A5FDD0;
    return;
L_08A5FDD0:
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(144));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5FDE8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5FDE8u) goto L_08A5FDE8;
    return;
L_08A5FDE8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5FDF4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem) && ctx.pc == 0x08A5FDF4u) goto L_08A5FDF4;
    return;
L_08A5FDF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FECC;
      }
      goto L_08A5FDFC;
    }
L_08A5FDFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2108)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FECC;
      }
      goto L_08A5FE08;
    }
L_08A5FE08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FE30;
      }
      goto L_08A5FE1C;
    }
L_08A5FE1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FE44;
      }
      goto L_08A5FE30;
    }
L_08A5FE30:
    ctx.gpr[31] = (0x08A5FE38u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5FE38u) goto L_08A5FE38;
    return;
L_08A5FE38:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5FECC;
      }
      goto L_08A5FE44;
    }
L_08A5FE44:
    ctx.gpr[31] = (0x08A5FE4Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FE4Cu) goto L_08A5FE4C;
    return;
L_08A5FE4C:
    ctx.gpr[31] = (0x08A5FE54u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5FE54u) goto L_08A5FE54;
    return;
L_08A5FE54:
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FECC;
      }
      goto L_08A5FE70;
    }
L_08A5FE70:
    ctx.gpr[31] = (0x08A5FE78u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FE78u) goto L_08A5FE78;
    return;
L_08A5FE78:
    ctx.gpr[31] = (0x08A5FE80u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5FE80u) goto L_08A5FE80;
    return;
L_08A5FE80:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FECC;
      }
      goto L_08A5FE90;
    }
L_08A5FE90:
    ctx.gpr[31] = (0x08A5FE98u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FE98u) goto L_08A5FE98;
    return;
L_08A5FE98:
    ctx.gpr[31] = (0x08A5FEA0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5FEA0u) goto L_08A5FEA0;
    return;
L_08A5FEA0:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FECC;
      }
      goto L_08A5FEB0;
    }
L_08A5FEB0:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5FEC8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FEC8u) goto L_08A5FEC8;
    return;
L_08A5FEC8:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A5FECC;
L_08A5FECC:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2092)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FEF8;
      }
      goto L_08A5FED8;
    }
L_08A5FED8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FEF8;
      }
      goto L_08A5FEE8;
    }
L_08A5FEE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 65u, 0x08A604A8u>(ctx, &aot_mem); return;
      }
      goto L_08A5FEF8;
    }
L_08A5FEF8:
    ctx.gpr[31] = (0x08A5FF00u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem) && ctx.pc == 0x08A5FF00u) goto L_08A5FF00;
    return;
L_08A5FF00:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08A5FF0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem) && ctx.pc == 0x08A5FF0Cu) goto L_08A5FF0C;
    return;
L_08A5FF0C:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(192));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1728));
      if (branch_taken) {
          goto L_08A5FF34;
      }
      goto L_08A5FF2C;
    }
L_08A5FF2C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08A5FF50;
      }
      goto L_08A5FF34;
    }
L_08A5FF34:
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FF50;
      }
      goto L_08A5FF4C;
    }
L_08A5FF4C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5FF50;
L_08A5FF50:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5FF60u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FF60u) goto L_08A5FF60;
    return;
L_08A5FF60:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (48665u << 16u);
      if (branch_taken) {
          goto L_08A5FFD8;
      }
      goto L_08A5FF68;
    }
L_08A5FF68:
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1744));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5FF8Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 34u, 0x08A582A4u>(ctx, &aot_mem) && ctx.pc == 0x08A5FF8Cu) goto L_08A5FF8C;
    return;
L_08A5FF8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5FF9Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem) && ctx.pc == 0x08A5FF9Cu) goto L_08A5FF9C;
    return;
L_08A5FF9C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1760));
    ctx.gpr[31] = (0x08A5FFA8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem) && ctx.pc == 0x08A5FFA8u) goto L_08A5FFA8;
    return;
L_08A5FFA8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5FFB8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem) && ctx.pc == 0x08A5FFB8u) goto L_08A5FFB8;
    return;
L_08A5FFB8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5FFC8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem) && ctx.pc == 0x08A5FFC8u) goto L_08A5FFC8;
    return;
L_08A5FFC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 5u, 0x08A60034u>(ctx, &aot_mem); return;
      }
      goto L_08A5FFD8;
    }
L_08A5FFD8:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1776));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5FFF8u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 34u, 0x08A582A4u>(ctx, &aot_mem) && ctx.pc == 0x08A5FFF8u) goto L_08A5FFF8;
    return;
L_08A5FFF8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08A60000u; return;
}

void recomp_unit_0150(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0150_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_150(Runtime &runtime) {
    runtime.register_generated_unit(150u, 0x08A5C000u, 16384u, &recomp_unit_0150, &recomp_unit_0150_entry);
    runtime.register_function(0x08A5C004u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C030u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C038u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C040u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C048u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C068u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C074u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C084u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C090u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C098u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C100u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C108u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C114u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C120u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C12Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C134u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C140u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C148u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C150u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C160u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C16Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C170u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C17Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C184u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C188u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C20Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C21Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C228u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C230u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C23Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C248u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C254u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C260u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C27Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C290u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C29Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C304u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C320u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C328u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C330u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C348u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C354u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C35Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C36Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C37Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C390u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C410u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C418u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C42Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C44Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C458u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C474u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C484u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C490u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C508u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C528u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C544u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C548u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C590u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C59Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C5A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C5B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C5E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C5F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C608u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C618u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C624u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C630u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C644u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C654u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C664u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C66Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C67Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C68Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C698u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C704u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C70Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C714u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C724u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C738u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C744u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C74Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C754u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C760u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C768u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C774u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C778u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C784u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C79Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C7A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C7B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C7C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C7D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C7DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C7F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C80Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C810u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C818u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C824u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C84Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C86Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C880u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C894u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C8B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C8BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C8CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C8DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C8E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C8F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C8F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C900u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C914u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C91Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C924u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C92Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C93Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C944u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C954u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C95Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C978u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C980u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C988u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C994u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C9A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C9A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C9B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C9C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C9C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C9E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C9F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA74u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CAA4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CAD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CADCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CAE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CAF4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CBA4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CBB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CBC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CBD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CBE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CCA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CCC0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CCD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CDA4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CDA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CDB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CDB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CDC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CDD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CDE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CEB4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CED4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CEDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CEF4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF10u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF84u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFCCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D004u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D00Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D030u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D040u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D04Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D058u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D060u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D06Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D07Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D12Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D150u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D15Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D16Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D174u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D17Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D188u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D194u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D19Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D218u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D228u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D234u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D244u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D250u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D264u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D274u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D284u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D294u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D310u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D318u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D320u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D32Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D330u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D338u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D34Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D35Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D36Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D390u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D39Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D404u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D410u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D41Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D424u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D42Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D438u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D440u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D444u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D44Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D458u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D468u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D474u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D494u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D500u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D514u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D52Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D544u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D55Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D564u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D570u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D57Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D584u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D58Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D598u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D600u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D60Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D614u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D61Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D628u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D634u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D648u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D658u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D664u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D67Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D694u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D708u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D718u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D724u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D73Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D744u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D750u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D75Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D764u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D76Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D778u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D784u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D798u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D808u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D810u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D838u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D84Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D868u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D878u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D884u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D890u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D924u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D934u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D940u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D95Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D964u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D96Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D978u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D984u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D98Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D990u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D99Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA64u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA74u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAB4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DABCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB74u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBC0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBFCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC74u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEA4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DED0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DED4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFFCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E014u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E028u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E03Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E054u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E05Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E068u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E070u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E078u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E088u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E094u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E09Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E138u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E14Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E154u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E164u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E170u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E188u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E19Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E200u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E208u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E210u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E21Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E22Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E238u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E240u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E250u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E258u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E278u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E280u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E288u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E294u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E29Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E300u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E308u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E31Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E328u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E32Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E348u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E354u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E398u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E400u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E414u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E428u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E438u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E444u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E450u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E45Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E474u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E480u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E48Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E49Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E504u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E50Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E514u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E51Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E524u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E52Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E534u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E53Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E548u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E550u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E558u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E560u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E57Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E59Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E60Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E61Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E624u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E644u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E660u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E698u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E704u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E720u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E728u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E730u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E73Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E744u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E750u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E760u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E768u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E774u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E77Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E784u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E78Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E794u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E798u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E848u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E854u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E860u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E86Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E878u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E880u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E888u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E890u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E898u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E914u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E928u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E938u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E944u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E954u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E95Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E980u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E988u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EADCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBCCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDCCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE64u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE74u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EEA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EEC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EED8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EEE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EEECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF64u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF84u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EFA4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EFB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EFCCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EFD8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EFE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EFF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F004u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F018u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F028u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F038u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F044u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F058u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F060u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F084u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F094u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F0A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F0ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F0D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F0E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F110u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F12Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F134u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F13Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F144u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F154u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F17Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F194u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F20Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F214u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F22Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F23Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F248u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F26Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F27Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F28Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F294u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F298u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F314u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F324u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F344u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F360u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F374u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F384u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F388u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F390u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F398u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F408u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F41Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F420u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F42Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F43Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F450u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F460u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F468u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F478u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F48Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F490u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F49Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F504u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F510u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F51Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F524u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F528u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F530u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F53Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F540u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F548u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F550u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F558u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F560u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F57Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F584u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F590u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F598u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F608u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F618u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F624u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F62Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F650u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F65Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F67Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F684u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F698u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F708u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F714u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F720u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F730u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F73Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F760u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F764u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F778u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F784u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F80Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F824u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F844u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F864u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F88Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F894u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F900u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F910u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F924u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F92Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F934u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F93Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F94Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F954u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F98Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAA4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FABCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FACCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB74u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBD8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD84u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDF4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDFCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FEA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FEB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FEC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FECCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FED8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FEE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FEF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFD8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFF8u, &recomp_unit_0150, "recomp_unit_0150");
}
} // namespace psprecomp
