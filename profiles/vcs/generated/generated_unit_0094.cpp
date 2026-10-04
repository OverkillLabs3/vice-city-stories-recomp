#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0094[4095] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 8, 9, 0, 0, 0, 0, 0, 10, 0,
    0, 11, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 17, 18, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25,
    0, 26, 0, 0, 0, 0, 27, 28, 0, 0, 29, 0, 30, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 34, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 42, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 49, 50, 0, 51, 0, 0, 52, 0,
    53, 54, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 58, 59, 60, 0, 61, 0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 0, 66, 0, 0, 67,
    0, 68, 69, 0, 70, 0, 71, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 76, 77, 0, 78, 0, 0, 79, 0, 80, 0, 81, 0, 82,
    0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0,
    97, 98, 0, 99, 0, 100, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111,
    0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 116, 117, 0, 118, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125,
    0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 0, 132, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0, 136, 137, 138, 0, 139, 0,
    0, 0, 140, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 145, 0, 146, 147, 0, 148, 0, 0, 149, 0, 150, 151, 0, 152, 0, 153, 0, 154,
    0, 0, 155, 0, 0, 156, 0, 157, 158, 0, 159, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 165, 166, 0, 0, 0, 167, 0, 0, 168, 0, 169, 170, 0, 0, 0,
    0, 0, 171, 0, 0, 172, 0, 173, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 180, 0, 181, 0,
    182, 0, 0, 183, 0, 184, 185, 0, 186, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 190, 0, 191, 0, 192, 0, 193, 194, 0, 0, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 201, 202, 0, 203, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208, 209, 0, 210, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 214, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0,
    224, 0, 0, 0, 225, 0, 0, 0, 0, 226, 227, 0, 0, 0, 0, 228, 0, 0, 0, 229, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0,
    234, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 238, 239, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 249, 0, 250, 0, 0, 251, 0, 252, 0, 0, 253, 0, 254, 0,
    255, 0, 0, 256, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 263, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 273, 0, 274, 275, 0, 0, 276, 0, 0, 0, 0, 277,
    0, 0, 0, 0, 278, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 288, 0, 289, 290, 0, 0, 291, 0, 0, 292, 0, 293, 294,
    0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0,
    298, 0, 0, 0, 299, 0, 300, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 305, 306, 0, 0, 0, 0,
    307, 0, 0, 0, 308, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0,
    0, 0, 0, 317, 318, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 327, 328, 0, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 0, 0, 0, 340, 341,
    0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 344, 0, 345, 0, 346, 0, 347, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 0, 0,
    0, 0, 0, 0, 354, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 365, 366, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375, 376, 0, 377, 0, 378, 0,
    379, 0, 380, 0, 0, 0, 0, 381, 382, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 385, 0, 386, 0, 387, 0, 388, 389, 0, 390, 0, 391, 0,
    392, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405,
    0, 406, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 415, 0, 416, 417, 0,
    418, 0, 419, 0, 420, 0, 421, 0, 0, 0, 0, 422, 423, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 426, 0, 427, 0, 428, 0, 429, 430,
    0, 431, 0, 432, 0, 433, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0,
    0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0,
    445, 0, 0, 0, 0, 0, 446, 0, 447, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 451, 0, 452, 0, 453, 0,
    454, 0, 455, 0, 456, 0, 457, 458, 0, 459, 0, 460, 0, 461, 0, 462, 0, 0, 0, 0, 463, 464, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0,
    467, 0, 468, 0, 469, 0, 470, 471, 0, 472, 0, 473, 0, 474, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 478, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0,
    0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 488, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 491,
    492, 0, 0, 493, 0, 494, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 498, 499, 0, 0, 0, 500, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 503,
    0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 506, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 510, 511, 0, 0,
    512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0,
    0, 515, 0, 0, 0, 0, 516, 0, 517, 0, 0, 518, 0, 0, 0, 0, 519, 0, 520, 0, 521, 0, 0, 522, 0, 523, 0, 524, 0, 0, 525, 0,
    526, 0, 0, 527, 528, 0, 529, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 535, 0, 536,
    0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 538, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0,
    0, 542, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 547, 0, 0,
    548, 0, 0, 549, 0, 550, 551, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 561,
    0, 562, 0, 0, 563, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0,
    0, 0, 572, 0, 0, 573, 0, 574, 0, 575, 0, 576, 0, 0, 577, 0, 578, 0, 579, 580, 0, 0, 0, 581, 0, 0, 582, 0, 0, 583, 0, 0,
    584, 0, 585, 586, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 590, 0, 591, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 596, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 601, 602, 0, 603, 0, 604, 0, 0, 605, 0, 606, 0, 0, 607, 0, 0, 608,
    0, 0, 609, 0, 610, 611, 0, 612, 0, 613, 0, 0, 614, 615, 0, 616, 0, 617, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0,
    0, 0, 627, 0, 0, 628, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0,
    632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 636, 0, 637, 0, 0, 638, 0, 0, 639, 0, 640, 641,
    0, 642, 0, 643, 0, 0, 0, 644, 0, 0, 645, 0, 646, 647, 0, 648, 0, 0, 649, 0, 650, 0, 0, 651, 0, 0, 652, 0, 653, 654, 655, 0,
    0, 656, 0, 0, 0, 657, 0, 658, 0, 659, 0, 0, 660, 0, 0, 661, 0, 662, 663, 0, 664, 0, 665, 0, 666, 667, 0, 668, 0, 0, 669, 0,
    670, 671, 0, 672, 0, 0, 0, 0, 673, 0, 0, 0, 674, 675, 0, 676, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 680, 681, 0, 682, 0, 0, 683, 0, 0, 684, 0, 685, 686, 0, 687, 0, 688, 0, 0, 0, 689, 0, 0, 690, 0, 691, 692, 0,
    693, 0, 694, 0, 695, 0, 0, 696, 0, 0, 697, 0, 698, 699, 0, 0, 700, 0, 701, 0, 0, 0, 702, 0, 703, 0, 704, 0, 0, 705, 0, 0,
    706, 0, 707, 708, 709, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 713, 0, 0,
    0, 0, 714, 0, 715, 0, 0, 716, 0, 717, 0, 718, 0, 719, 0, 720, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 724, 0, 0,
    0, 0, 725, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 729,
    0, 0, 730, 731, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0,
    0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 737, 738, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 740,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 744, 745, 0, 0,
    0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 750,
    0, 751, 0, 752, 0, 753, 0, 0, 754, 0, 755, 0, 0, 0, 756, 0, 0, 757, 758, 759, 0, 760, 0, 761, 0, 762, 0, 0, 0, 0, 763, 0,
    0, 764, 0, 765, 0, 766, 0, 767, 0, 768, 0, 769, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0, 0, 773, 0,
    774, 0, 0, 775, 0, 0, 776, 0, 777, 778, 0, 0, 779, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0,
    783, 0, 784, 785, 0, 786, 0, 0, 787, 0, 0, 788, 0, 789, 790, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 793,
    0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 796, 0, 0, 0,
    0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 799, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 803, 804, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 807, 0, 0, 808, 0, 809, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 811, 0, 0,
    0, 0, 812, 0, 0, 0, 813, 0, 0, 0, 814, 0, 815, 0, 0, 0, 0, 816, 0, 817, 0, 0, 0, 818, 0, 819, 0, 0, 0, 820, 0, 0,
    821, 0, 822, 0, 823, 0, 0, 0, 0, 824, 0, 825, 826, 0, 827, 0, 0, 0, 828, 0, 829, 0, 0, 0, 0, 830, 0, 831, 832, 0, 0, 0,
    833, 834, 0, 835, 0, 836, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 840, 0, 0, 841, 0, 0, 842, 0, 843, 844, 0, 845, 0, 846, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 848, 849, 0, 0, 0, 850, 851, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 853, 0, 854, 0, 0, 855, 0, 0, 856, 0, 857, 858, 0, 859, 0, 0, 860, 0, 0, 0, 0, 0, 0, 0, 861,
    0, 0, 862, 0, 0, 863, 0, 0, 864, 0, 865, 866, 0, 867, 0, 868, 0, 869, 0, 0, 0, 0, 0, 0, 870, 0, 871, 0, 872, 0, 873, 0,
    0, 874, 0, 0, 875, 0, 0, 876, 0, 877, 878, 879, 0, 0, 880, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0,
    0, 0, 883, 0, 0, 884, 0, 0, 885, 0, 886, 887, 888, 0, 0, 889, 0, 0, 0, 0, 890, 0, 891, 0, 0, 0, 0, 0, 892, 0, 0, 893,
    0, 0, 0, 0, 0, 0, 0, 894, 895, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0, 0, 0, 0, 0, 899, 900, 0, 0, 901, 902, 0, 903, 0, 0, 904, 0, 0, 905,
    0, 0, 0, 906, 0, 0, 907, 0, 0, 0, 0, 0, 0, 908, 0, 0, 0, 0, 909, 910, 0, 911, 0, 912, 0, 913, 0, 914, 0, 915, 916, 0,
    917, 0, 918, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 0, 920, 0, 0, 921, 0, 0, 0, 0, 922, 0, 0, 0, 0, 0, 0, 0, 923, 0,
    0, 0, 924, 0, 925, 0, 926, 0, 0, 927, 0, 0, 0, 0, 0, 928, 0, 0, 0, 929, 0, 0, 0, 0, 930, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 931, 0, 0, 0, 0, 0, 0, 0, 932, 0, 0, 0, 933, 0, 0, 0, 0, 934, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 935, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 936, 937, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 938, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 939,
    0, 0, 0, 0, 0, 0, 940, 0, 0, 0, 0, 941, 942, 0, 0, 0, 0, 0, 0, 0, 943, 0, 0, 944, 0, 0, 0, 945, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 946, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 947, 0, 948, 0, 949,
    0, 950, 0, 0, 0, 0, 951, 0, 0, 0, 0, 0, 0, 0, 0, 0, 952, 0, 0, 0, 953, 0, 0, 0, 0, 0, 0, 0, 954, 0, 955, 0,
    0, 0, 956, 0, 957, 0, 0, 0, 0, 0, 958, 0, 0, 959, 0, 960, 0, 0, 0, 0, 0, 961, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 962, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 963, 0, 0, 0, 0, 0, 964, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 965, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 966, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 967, 0, 0, 0, 0, 0, 0, 0, 968, 0, 0, 0, 0, 0, 0, 0, 0, 0, 969, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 970, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 971, 0, 0, 972, 0, 0, 0, 0, 0, 0, 973, 0, 0, 974, 0, 0,
    0, 975, 0, 0, 976, 0, 977, 0, 0, 978, 979, 0, 0, 0, 980, 0, 981, 0, 0, 0, 0, 982, 0, 0, 983, 0, 0, 0, 0, 0, 984, 0,
    0, 0, 0, 0, 985, 0, 0, 0, 0, 0, 986, 0, 0, 987, 0, 0, 0, 988, 0, 989, 0, 0, 0, 990, 0, 0, 0, 991, 0, 0, 992,
};
void recomp_unit_0094_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0897C000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0094[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0897C000;
    case 2u: goto L_0897C004;
    case 3u: goto L_0897C028;
    case 4u: goto L_0897C030;
    case 5u: goto L_0897C038;
    case 6u: goto L_0897C048;
    case 7u: goto L_0897C054;
    case 8u: goto L_0897C05C;
    case 9u: goto L_0897C060;
    case 10u: goto L_0897C078;
    case 11u: goto L_0897C084;
    case 12u: goto L_0897C08C;
    case 13u: goto L_0897C098;
    case 14u: goto L_0897C0A0;
    case 15u: goto L_0897C0C4;
    case 16u: goto L_0897C0D0;
    case 17u: goto L_0897C0D8;
    case 18u: goto L_0897C0DC;
    case 19u: goto L_0897C0E8;
    case 20u: goto L_0897C104;
    case 21u: goto L_0897C11C;
    case 22u: goto L_0897C148;
    case 23u: goto L_0897C154;
    case 24u: goto L_0897C168;
    case 25u: goto L_0897C17C;
    case 26u: goto L_0897C184;
    case 27u: goto L_0897C198;
    case 28u: goto L_0897C19C;
    case 29u: goto L_0897C1A8;
    case 30u: goto L_0897C1B0;
    case 31u: goto L_0897C1B4;
    case 32u: goto L_0897C218;
    case 33u: goto L_0897C224;
    case 34u: goto L_0897C22C;
    case 35u: goto L_0897C230;
    case 36u: goto L_0897C240;
    case 37u: goto L_0897C330;
    case 38u: goto L_0897C338;
    case 39u: goto L_0897C34C;
    case 40u: goto L_0897C358;
    case 41u: goto L_0897C360;
    case 42u: goto L_0897C364;
    case 43u: goto L_0897C370;
    case 44u: goto L_0897C434;
    case 45u: goto L_0897C43C;
    case 46u: goto L_0897C444;
    case 47u: goto L_0897C44C;
    case 48u: goto L_0897C458;
    case 49u: goto L_0897C460;
    case 50u: goto L_0897C464;
    case 51u: goto L_0897C46C;
    case 52u: goto L_0897C478;
    case 53u: goto L_0897C480;
    case 54u: goto L_0897C484;
    case 55u: goto L_0897C48C;
    case 56u: goto L_0897C494;
    case 57u: goto L_0897C4A4;
    case 58u: goto L_0897C4B0;
    case 59u: goto L_0897C4B4;
    case 60u: goto L_0897C4B8;
    case 61u: goto L_0897C4C0;
    case 62u: goto L_0897C4CC;
    case 63u: goto L_0897C4D4;
    case 64u: goto L_0897C4DC;
    case 65u: goto L_0897C4E4;
    case 66u: goto L_0897C4F0;
    case 67u: goto L_0897C4FC;
    case 68u: goto L_0897C504;
    case 69u: goto L_0897C508;
    case 70u: goto L_0897C510;
    case 71u: goto L_0897C518;
    case 72u: goto L_0897C520;
    case 73u: goto L_0897C530;
    case 74u: goto L_0897C538;
    case 75u: goto L_0897C544;
    case 76u: goto L_0897C54C;
    case 77u: goto L_0897C550;
    case 78u: goto L_0897C558;
    case 79u: goto L_0897C564;
    case 80u: goto L_0897C56C;
    case 81u: goto L_0897C574;
    case 82u: goto L_0897C57C;
    case 83u: goto L_0897C584;
    case 84u: goto L_0897C58C;
    case 85u: goto L_0897C594;
    case 86u: goto L_0897C59C;
    case 87u: goto L_0897C5A4;
    case 88u: goto L_0897C5AC;
    case 89u: goto L_0897C5B4;
    case 90u: goto L_0897C5BC;
    case 91u: goto L_0897C5C4;
    case 92u: goto L_0897C5CC;
    case 93u: goto L_0897C5D4;
    case 94u: goto L_0897C5DC;
    case 95u: goto L_0897C5EC;
    case 96u: goto L_0897C5F8;
    case 97u: goto L_0897C600;
    case 98u: goto L_0897C604;
    case 99u: goto L_0897C60C;
    case 100u: goto L_0897C614;
    case 101u: goto L_0897C61C;
    case 102u: goto L_0897C62C;
    case 103u: goto L_0897C634;
    case 104u: goto L_0897C640;
    case 105u: goto L_0897C648;
    case 106u: goto L_0897C650;
    case 107u: goto L_0897C65C;
    case 108u: goto L_0897C664;
    case 109u: goto L_0897C66C;
    case 110u: goto L_0897C674;
    case 111u: goto L_0897C67C;
    case 112u: goto L_0897C684;
    case 113u: goto L_0897C694;
    case 114u: goto L_0897C6A0;
    case 115u: goto L_0897C6AC;
    case 116u: goto L_0897C6B4;
    case 117u: goto L_0897C6B8;
    case 118u: goto L_0897C6C0;
    case 119u: goto L_0897C6CC;
    case 120u: goto L_0897C6D4;
    case 121u: goto L_0897C6DC;
    case 122u: goto L_0897C6E4;
    case 123u: goto L_0897C6EC;
    case 124u: goto L_0897C6F4;
    case 125u: goto L_0897C6FC;
    case 126u: goto L_0897C704;
    case 127u: goto L_0897C70C;
    case 128u: goto L_0897C714;
    case 129u: goto L_0897C71C;
    case 130u: goto L_0897C724;
    case 131u: goto L_0897C72C;
    case 132u: goto L_0897C73C;
    case 133u: goto L_0897C740;
    case 134u: goto L_0897C74C;
    case 135u: goto L_0897C75C;
    case 136u: goto L_0897C768;
    case 137u: goto L_0897C76C;
    case 138u: goto L_0897C770;
    case 139u: goto L_0897C778;
    case 140u: goto L_0897C788;
    case 141u: goto L_0897C794;
    case 142u: goto L_0897C79C;
    case 143u: goto L_0897C7A4;
    case 144u: goto L_0897C7AC;
    case 145u: goto L_0897C7B8;
    case 146u: goto L_0897C7C0;
    case 147u: goto L_0897C7C4;
    case 148u: goto L_0897C7CC;
    case 149u: goto L_0897C7D8;
    case 150u: goto L_0897C7E0;
    case 151u: goto L_0897C7E4;
    case 152u: goto L_0897C7EC;
    case 153u: goto L_0897C7F4;
    case 154u: goto L_0897C7FC;
    case 155u: goto L_0897C808;
    case 156u: goto L_0897C814;
    case 157u: goto L_0897C81C;
    case 158u: goto L_0897C820;
    case 159u: goto L_0897C828;
    case 160u: goto L_0897C830;
    case 161u: goto L_0897C840;
    case 162u: goto L_0897C848;
    case 163u: goto L_0897C8B0;
    case 164u: goto L_0897C8BC;
    case 165u: goto L_0897C8C4;
    case 166u: goto L_0897C8C8;
    case 167u: goto L_0897C8D8;
    case 168u: goto L_0897C8E4;
    case 169u: goto L_0897C8EC;
    case 170u: goto L_0897C8F0;
    case 171u: goto L_0897C908;
    case 172u: goto L_0897C914;
    case 173u: goto L_0897C91C;
    case 174u: goto L_0897C920;
    case 175u: goto L_0897C928;
    case 176u: goto L_0897C930;
    case 177u: goto L_0897C950;
    case 178u: goto L_0897C95C;
    case 179u: goto L_0897C968;
    case 180u: goto L_0897C970;
    case 181u: goto L_0897C978;
    case 182u: goto L_0897C980;
    case 183u: goto L_0897C98C;
    case 184u: goto L_0897C994;
    case 185u: goto L_0897C998;
    case 186u: goto L_0897C9A0;
    case 187u: goto L_0897C9AC;
    case 188u: goto L_0897C9B8;
    case 189u: goto L_0897C9C0;
    case 190u: goto L_0897C9CC;
    case 191u: goto L_0897C9D4;
    case 192u: goto L_0897C9DC;
    case 193u: goto L_0897C9E4;
    case 194u: goto L_0897C9E8;
    case 195u: goto L_0897CA04;
    case 196u: goto L_0897CA24;
    case 197u: goto L_0897CA2C;
    case 198u: goto L_0897CA94;
    case 199u: goto L_0897CACC;
    case 200u: goto L_0897CAE0;
    case 201u: goto L_0897CAE8;
    case 202u: goto L_0897CAEC;
    case 203u: goto L_0897CAF4;
    case 204u: goto L_0897CB08;
    case 205u: goto L_0897CB2C;
    case 206u: goto L_0897CB40;
    case 207u: goto L_0897CB54;
    case 208u: goto L_0897CB5C;
    case 209u: goto L_0897CB60;
    case 210u: goto L_0897CB68;
    case 211u: goto L_0897CB7C;
    case 212u: goto L_0897CBA0;
    case 213u: goto L_0897CBAC;
    case 214u: goto L_0897CBB4;
    case 215u: goto L_0897CBB8;
    case 216u: goto L_0897CBC4;
    case 217u: goto L_0897CC18;
    case 218u: goto L_0897CC28;
    case 219u: goto L_0897CC3C;
    case 220u: goto L_0897CC4C;
    case 221u: goto L_0897CC54;
    case 222u: goto L_0897CC5C;
    case 223u: goto L_0897CC6C;
    case 224u: goto L_0897CC80;
    case 225u: goto L_0897CC90;
    case 226u: goto L_0897CCA4;
    case 227u: goto L_0897CCA8;
    case 228u: goto L_0897CCBC;
    case 229u: goto L_0897CCCC;
    case 230u: goto L_0897CCD0;
    case 231u: goto L_0897CCE0;
    case 232u: goto L_0897CCF0;
    case 233u: goto L_0897CCF8;
    case 234u: goto L_0897CD00;
    case 235u: goto L_0897CD10;
    case 236u: goto L_0897CD24;
    case 237u: goto L_0897CD34;
    case 238u: goto L_0897CD48;
    case 239u: goto L_0897CD4C;
    case 240u: goto L_0897CD50;
    case 241u: goto L_0897CD80;
    case 242u: goto L_0897CD88;
    case 243u: goto L_0897CDBC;
    case 244u: goto L_0897CDC4;
    case 245u: goto L_0897CDFC;
    case 246u: goto L_0897CE04;
    case 247u: goto L_0897CE3C;
    case 248u: goto L_0897CE44;
    case 249u: goto L_0897CE48;
    case 250u: goto L_0897CE50;
    case 251u: goto L_0897CE5C;
    case 252u: goto L_0897CE64;
    case 253u: goto L_0897CE70;
    case 254u: goto L_0897CE78;
    case 255u: goto L_0897CE80;
    case 256u: goto L_0897CE8C;
    case 257u: goto L_0897CE90;
    case 258u: goto L_0897CEA8;
    case 259u: goto L_0897CEC8;
    case 260u: goto L_0897CED0;
    case 261u: goto L_0897CF38;
    case 262u: goto L_0897CF80;
    case 263u: goto L_0897CF94;
    case 264u: goto L_0897CFA0;
    case 265u: goto L_0897CFA8;
    case 266u: goto L_0897CFB0;
    case 267u: goto L_0897CFC4;
    case 268u: goto L_0897CFE8;
    case 269u: goto L_0897D000;
    case 270u: goto L_0897D018;
    case 271u: goto L_0897D030;
    case 272u: goto L_0897D038;
    case 273u: goto L_0897D050;
    case 274u: goto L_0897D058;
    case 275u: goto L_0897D05C;
    case 276u: goto L_0897D068;
    case 277u: goto L_0897D07C;
    case 278u: goto L_0897D090;
    case 279u: goto L_0897D09C;
    case 280u: goto L_0897D0A4;
    case 281u: goto L_0897D0AC;
    case 282u: goto L_0897D0C0;
    case 283u: goto L_0897D0E4;
    case 284u: goto L_0897D0FC;
    case 285u: goto L_0897D114;
    case 286u: goto L_0897D12C;
    case 287u: goto L_0897D134;
    case 288u: goto L_0897D14C;
    case 289u: goto L_0897D154;
    case 290u: goto L_0897D158;
    case 291u: goto L_0897D164;
    case 292u: goto L_0897D170;
    case 293u: goto L_0897D178;
    case 294u: goto L_0897D17C;
    case 295u: goto L_0897D188;
    case 296u: goto L_0897D1DC;
    case 297u: goto L_0897D1EC;
    case 298u: goto L_0897D200;
    case 299u: goto L_0897D210;
    case 300u: goto L_0897D218;
    case 301u: goto L_0897D220;
    case 302u: goto L_0897D230;
    case 303u: goto L_0897D244;
    case 304u: goto L_0897D254;
    case 305u: goto L_0897D268;
    case 306u: goto L_0897D26C;
    case 307u: goto L_0897D280;
    case 308u: goto L_0897D290;
    case 309u: goto L_0897D294;
    case 310u: goto L_0897D2A4;
    case 311u: goto L_0897D2B4;
    case 312u: goto L_0897D2BC;
    case 313u: goto L_0897D2C4;
    case 314u: goto L_0897D2D4;
    case 315u: goto L_0897D2E8;
    case 316u: goto L_0897D2F8;
    case 317u: goto L_0897D30C;
    case 318u: goto L_0897D310;
    case 319u: goto L_0897D314;
    case 320u: goto L_0897D344;
    case 321u: goto L_0897D34C;
    case 322u: goto L_0897D380;
    case 323u: goto L_0897D388;
    case 324u: goto L_0897D3C0;
    case 325u: goto L_0897D3C8;
    case 326u: goto L_0897D400;
    case 327u: goto L_0897D408;
    case 328u: goto L_0897D40C;
    case 329u: goto L_0897D418;
    case 330u: goto L_0897D420;
    case 331u: goto L_0897D428;
    case 332u: goto L_0897D430;
    case 333u: goto L_0897D438;
    case 334u: goto L_0897D440;
    case 335u: goto L_0897D444;
    case 336u: goto L_0897D44C;
    case 337u: goto L_0897D454;
    case 338u: goto L_0897D45C;
    case 339u: goto L_0897D464;
    case 340u: goto L_0897D478;
    case 341u: goto L_0897D47C;
    case 342u: goto L_0897D48C;
    case 343u: goto L_0897D4A0;
    case 344u: goto L_0897D4AC;
    case 345u: goto L_0897D4B4;
    case 346u: goto L_0897D4BC;
    case 347u: goto L_0897D4C4;
    case 348u: goto L_0897D4C8;
    case 349u: goto L_0897D4D0;
    case 350u: goto L_0897D4D8;
    case 351u: goto L_0897D4E0;
    case 352u: goto L_0897D4E8;
    case 353u: goto L_0897D4F0;
    case 354u: goto L_0897D510;
    case 355u: goto L_0897D514;
    case 356u: goto L_0897D53C;
    case 357u: goto L_0897D550;
    case 358u: goto L_0897D560;
    case 359u: goto L_0897D598;
    case 360u: goto L_0897D5A0;
    case 361u: goto L_0897D5A8;
    case 362u: goto L_0897D5BC;
    case 363u: goto L_0897D5CC;
    case 364u: goto L_0897D5E4;
    case 365u: goto L_0897D5EC;
    case 366u: goto L_0897D5F0;
    case 367u: goto L_0897D628;
    case 368u: goto L_0897D630;
    case 369u: goto L_0897D634;
    case 370u: goto L_0897D63C;
    case 371u: goto L_0897D644;
    case 372u: goto L_0897D64C;
    case 373u: goto L_0897D654;
    case 374u: goto L_0897D65C;
    case 375u: goto L_0897D664;
    case 376u: goto L_0897D668;
    case 377u: goto L_0897D670;
    case 378u: goto L_0897D678;
    case 379u: goto L_0897D680;
    case 380u: goto L_0897D688;
    case 381u: goto L_0897D69C;
    case 382u: goto L_0897D6A0;
    case 383u: goto L_0897D6B0;
    case 384u: goto L_0897D6C4;
    case 385u: goto L_0897D6CC;
    case 386u: goto L_0897D6D4;
    case 387u: goto L_0897D6DC;
    case 388u: goto L_0897D6E4;
    case 389u: goto L_0897D6E8;
    case 390u: goto L_0897D6F0;
    case 391u: goto L_0897D6F8;
    case 392u: goto L_0897D700;
    case 393u: goto L_0897D708;
    case 394u: goto L_0897D710;
    case 395u: goto L_0897D730;
    case 396u: goto L_0897D734;
    case 397u: goto L_0897D75C;
    case 398u: goto L_0897D770;
    case 399u: goto L_0897D780;
    case 400u: goto L_0897D7B0;
    case 401u: goto L_0897D7B8;
    case 402u: goto L_0897D7C0;
    case 403u: goto L_0897D7D4;
    case 404u: goto L_0897D7E4;
    case 405u: goto L_0897D7FC;
    case 406u: goto L_0897D804;
    case 407u: goto L_0897D808;
    case 408u: goto L_0897D838;
    case 409u: goto L_0897D840;
    case 410u: goto L_0897D844;
    case 411u: goto L_0897D84C;
    case 412u: goto L_0897D854;
    case 413u: goto L_0897D85C;
    case 414u: goto L_0897D864;
    case 415u: goto L_0897D86C;
    case 416u: goto L_0897D874;
    case 417u: goto L_0897D878;
    case 418u: goto L_0897D880;
    case 419u: goto L_0897D888;
    case 420u: goto L_0897D890;
    case 421u: goto L_0897D898;
    case 422u: goto L_0897D8AC;
    case 423u: goto L_0897D8B0;
    case 424u: goto L_0897D8C0;
    case 425u: goto L_0897D8D4;
    case 426u: goto L_0897D8E0;
    case 427u: goto L_0897D8E8;
    case 428u: goto L_0897D8F0;
    case 429u: goto L_0897D8F8;
    case 430u: goto L_0897D8FC;
    case 431u: goto L_0897D904;
    case 432u: goto L_0897D90C;
    case 433u: goto L_0897D914;
    case 434u: goto L_0897D91C;
    case 435u: goto L_0897D924;
    case 436u: goto L_0897D944;
    case 437u: goto L_0897D948;
    case 438u: goto L_0897D970;
    case 439u: goto L_0897D984;
    case 440u: goto L_0897D994;
    case 441u: goto L_0897D9CC;
    case 442u: goto L_0897D9D4;
    case 443u: goto L_0897D9DC;
    case 444u: goto L_0897D9F0;
    case 445u: goto L_0897DA00;
    case 446u: goto L_0897DA18;
    case 447u: goto L_0897DA20;
    case 448u: goto L_0897DA24;
    case 449u: goto L_0897DA5C;
    case 450u: goto L_0897DA64;
    case 451u: goto L_0897DA68;
    case 452u: goto L_0897DA70;
    case 453u: goto L_0897DA78;
    case 454u: goto L_0897DA80;
    case 455u: goto L_0897DA88;
    case 456u: goto L_0897DA90;
    case 457u: goto L_0897DA98;
    case 458u: goto L_0897DA9C;
    case 459u: goto L_0897DAA4;
    case 460u: goto L_0897DAAC;
    case 461u: goto L_0897DAB4;
    case 462u: goto L_0897DABC;
    case 463u: goto L_0897DAD0;
    case 464u: goto L_0897DAD4;
    case 465u: goto L_0897DAE4;
    case 466u: goto L_0897DAF8;
    case 467u: goto L_0897DB00;
    case 468u: goto L_0897DB08;
    case 469u: goto L_0897DB10;
    case 470u: goto L_0897DB18;
    case 471u: goto L_0897DB1C;
    case 472u: goto L_0897DB24;
    case 473u: goto L_0897DB2C;
    case 474u: goto L_0897DB34;
    case 475u: goto L_0897DB3C;
    case 476u: goto L_0897DB44;
    case 477u: goto L_0897DB64;
    case 478u: goto L_0897DB68;
    case 479u: goto L_0897DB90;
    case 480u: goto L_0897DBA4;
    case 481u: goto L_0897DBB4;
    case 482u: goto L_0897DBE8;
    case 483u: goto L_0897DBF0;
    case 484u: goto L_0897DBF8;
    case 485u: goto L_0897DC0C;
    case 486u: goto L_0897DC1C;
    case 487u: goto L_0897DC34;
    case 488u: goto L_0897DC3C;
    case 489u: goto L_0897DC40;
    case 490u: goto L_0897DC74;
    case 491u: goto L_0897DC7C;
    case 492u: goto L_0897DC80;
    case 493u: goto L_0897DC8C;
    case 494u: goto L_0897DC94;
    case 495u: goto L_0897DC98;
    case 496u: goto L_0897DCC4;
    case 497u: goto L_0897DCD0;
    case 498u: goto L_0897DCD8;
    case 499u: goto L_0897DCDC;
    case 500u: goto L_0897DCEC;
    case 501u: goto L_0897DD4C;
    case 502u: goto L_0897DD60;
    case 503u: goto L_0897DD7C;
    case 504u: goto L_0897DD90;
    case 505u: goto L_0897DDA0;
    case 506u: goto L_0897DDA8;
    case 507u: goto L_0897DDAC;
    case 508u: goto L_0897DDDC;
    case 509u: goto L_0897DDE8;
    case 510u: goto L_0897DDF0;
    case 511u: goto L_0897DDF4;
    case 512u: goto L_0897DE00;
    case 513u: goto L_0897DE58;
    case 514u: goto L_0897DE6C;
    case 515u: goto L_0897DE84;
    case 516u: goto L_0897DE98;
    case 517u: goto L_0897DEA0;
    case 518u: goto L_0897DEAC;
    case 519u: goto L_0897DEC0;
    case 520u: goto L_0897DEC8;
    case 521u: goto L_0897DED0;
    case 522u: goto L_0897DEDC;
    case 523u: goto L_0897DEE4;
    case 524u: goto L_0897DEEC;
    case 525u: goto L_0897DEF8;
    case 526u: goto L_0897DF00;
    case 527u: goto L_0897DF0C;
    case 528u: goto L_0897DF10;
    case 529u: goto L_0897DF18;
    case 530u: goto L_0897DF20;
    case 531u: goto L_0897DF34;
    case 532u: goto L_0897DF7C;
    case 533u: goto L_0897DFE0;
    case 534u: goto L_0897DFE8;
    case 535u: goto L_0897DFF4;
    case 536u: goto L_0897DFFC;
    case 537u: goto L_0897E020;
    case 538u: goto L_0897E028;
    case 539u: goto L_0897E02C;
    case 540u: goto L_0897E068;
    case 541u: goto L_0897E078;
    case 542u: goto L_0897E084;
    case 543u: goto L_0897E08C;
    case 544u: goto L_0897E09C;
    case 545u: goto L_0897E0E0;
    case 546u: goto L_0897E0E8;
    case 547u: goto L_0897E0F4;
    case 548u: goto L_0897E100;
    case 549u: goto L_0897E10C;
    case 550u: goto L_0897E114;
    case 551u: goto L_0897E118;
    case 552u: goto L_0897E11C;
    case 553u: goto L_0897E128;
    case 554u: goto L_0897E14C;
    case 555u: goto L_0897E160;
    case 556u: goto L_0897E1A0;
    case 557u: goto L_0897E1BC;
    case 558u: goto L_0897E1CC;
    case 559u: goto L_0897E1EC;
    case 560u: goto L_0897E1F4;
    case 561u: goto L_0897E1FC;
    case 562u: goto L_0897E204;
    case 563u: goto L_0897E210;
    case 564u: goto L_0897E218;
    case 565u: goto L_0897E220;
    case 566u: goto L_0897E228;
    case 567u: goto L_0897E230;
    case 568u: goto L_0897E238;
    case 569u: goto L_0897E23C;
    case 570u: goto L_0897E268;
    case 571u: goto L_0897E270;
    case 572u: goto L_0897E288;
    case 573u: goto L_0897E294;
    case 574u: goto L_0897E29C;
    case 575u: goto L_0897E2A4;
    case 576u: goto L_0897E2AC;
    case 577u: goto L_0897E2B8;
    case 578u: goto L_0897E2C0;
    case 579u: goto L_0897E2C8;
    case 580u: goto L_0897E2CC;
    case 581u: goto L_0897E2DC;
    case 582u: goto L_0897E2E8;
    case 583u: goto L_0897E2F4;
    case 584u: goto L_0897E300;
    case 585u: goto L_0897E308;
    case 586u: goto L_0897E30C;
    case 587u: goto L_0897E314;
    case 588u: goto L_0897E31C;
    case 589u: goto L_0897E33C;
    case 590u: goto L_0897E340;
    case 591u: goto L_0897E348;
    case 592u: goto L_0897E350;
    case 593u: goto L_0897E358;
    case 594u: goto L_0897E3C0;
    case 595u: goto L_0897E3CC;
    case 596u: goto L_0897E3D4;
    case 597u: goto L_0897E3DC;
    case 598u: goto L_0897E3EC;
    case 599u: goto L_0897E420;
    case 600u: goto L_0897E428;
    case 601u: goto L_0897E43C;
    case 602u: goto L_0897E440;
    case 603u: goto L_0897E448;
    case 604u: goto L_0897E450;
    case 605u: goto L_0897E45C;
    case 606u: goto L_0897E464;
    case 607u: goto L_0897E470;
    case 608u: goto L_0897E47C;
    case 609u: goto L_0897E488;
    case 610u: goto L_0897E490;
    case 611u: goto L_0897E494;
    case 612u: goto L_0897E49C;
    case 613u: goto L_0897E4A4;
    case 614u: goto L_0897E4B0;
    case 615u: goto L_0897E4B4;
    case 616u: goto L_0897E4BC;
    case 617u: goto L_0897E4C4;
    case 618u: goto L_0897E4CC;
    case 619u: goto L_0897E4D4;
    case 620u: goto L_0897E534;
    case 621u: goto L_0897E53C;
    case 622u: goto L_0897E568;
    case 623u: goto L_0897E598;
    case 624u: goto L_0897E5E0;
    case 625u: goto L_0897E65C;
    case 626u: goto L_0897E678;
    case 627u: goto L_0897E688;
    case 628u: goto L_0897E694;
    case 629u: goto L_0897E69C;
    case 630u: goto L_0897E6AC;
    case 631u: goto L_0897E6F0;
    case 632u: goto L_0897E700;
    case 633u: goto L_0897E760;
    case 634u: goto L_0897E768;
    case 635u: goto L_0897E7CC;
    case 636u: goto L_0897E7D0;
    case 637u: goto L_0897E7D8;
    case 638u: goto L_0897E7E4;
    case 639u: goto L_0897E7F0;
    case 640u: goto L_0897E7F8;
    case 641u: goto L_0897E7FC;
    case 642u: goto L_0897E804;
    case 643u: goto L_0897E80C;
    case 644u: goto L_0897E81C;
    case 645u: goto L_0897E828;
    case 646u: goto L_0897E830;
    case 647u: goto L_0897E834;
    case 648u: goto L_0897E83C;
    case 649u: goto L_0897E848;
    case 650u: goto L_0897E850;
    case 651u: goto L_0897E85C;
    case 652u: goto L_0897E868;
    case 653u: goto L_0897E870;
    case 654u: goto L_0897E874;
    case 655u: goto L_0897E878;
    case 656u: goto L_0897E884;
    case 657u: goto L_0897E894;
    case 658u: goto L_0897E89C;
    case 659u: goto L_0897E8A4;
    case 660u: goto L_0897E8B0;
    case 661u: goto L_0897E8BC;
    case 662u: goto L_0897E8C4;
    case 663u: goto L_0897E8C8;
    case 664u: goto L_0897E8D0;
    case 665u: goto L_0897E8D8;
    case 666u: goto L_0897E8E0;
    case 667u: goto L_0897E8E4;
    case 668u: goto L_0897E8EC;
    case 669u: goto L_0897E8F8;
    case 670u: goto L_0897E900;
    case 671u: goto L_0897E904;
    case 672u: goto L_0897E90C;
    case 673u: goto L_0897E920;
    case 674u: goto L_0897E930;
    case 675u: goto L_0897E934;
    case 676u: goto L_0897E93C;
    case 677u: goto L_0897E948;
    case 678u: goto L_0897E9A8;
    case 679u: goto L_0897E9B0;
    case 680u: goto L_0897EA10;
    case 681u: goto L_0897EA14;
    case 682u: goto L_0897EA1C;
    case 683u: goto L_0897EA28;
    case 684u: goto L_0897EA34;
    case 685u: goto L_0897EA3C;
    case 686u: goto L_0897EA40;
    case 687u: goto L_0897EA48;
    case 688u: goto L_0897EA50;
    case 689u: goto L_0897EA60;
    case 690u: goto L_0897EA6C;
    case 691u: goto L_0897EA74;
    case 692u: goto L_0897EA78;
    case 693u: goto L_0897EA80;
    case 694u: goto L_0897EA88;
    case 695u: goto L_0897EA90;
    case 696u: goto L_0897EA9C;
    case 697u: goto L_0897EAA8;
    case 698u: goto L_0897EAB0;
    case 699u: goto L_0897EAB4;
    case 700u: goto L_0897EAC0;
    case 701u: goto L_0897EAC8;
    case 702u: goto L_0897EAD8;
    case 703u: goto L_0897EAE0;
    case 704u: goto L_0897EAE8;
    case 705u: goto L_0897EAF4;
    case 706u: goto L_0897EB00;
    case 707u: goto L_0897EB08;
    case 708u: goto L_0897EB0C;
    case 709u: goto L_0897EB10;
    case 710u: goto L_0897EB1C;
    case 711u: goto L_0897EB2C;
    case 712u: goto L_0897EB58;
    case 713u: goto L_0897EB74;
    case 714u: goto L_0897EB88;
    case 715u: goto L_0897EB90;
    case 716u: goto L_0897EB9C;
    case 717u: goto L_0897EBA4;
    case 718u: goto L_0897EBAC;
    case 719u: goto L_0897EBB4;
    case 720u: goto L_0897EBBC;
    case 721u: goto L_0897EBC4;
    case 722u: goto L_0897EBD8;
    case 723u: goto L_0897EBE8;
    case 724u: goto L_0897EBF4;
    case 725u: goto L_0897EC08;
    case 726u: goto L_0897EC14;
    case 727u: goto L_0897EC44;
    case 728u: goto L_0897EC64;
    case 729u: goto L_0897EC7C;
    case 730u: goto L_0897EC88;
    case 731u: goto L_0897EC8C;
    case 732u: goto L_0897ECA8;
    case 733u: goto L_0897ECC8;
    case 734u: goto L_0897ECF8;
    case 735u: goto L_0897ED18;
    case 736u: goto L_0897ED30;
    case 737u: goto L_0897ED3C;
    case 738u: goto L_0897ED40;
    case 739u: goto L_0897ED5C;
    case 740u: goto L_0897ED7C;
    case 741u: goto L_0897EDAC;
    case 742u: goto L_0897EDCC;
    case 743u: goto L_0897EDE4;
    case 744u: goto L_0897EDF0;
    case 745u: goto L_0897EDF4;
    case 746u: goto L_0897EE10;
    case 747u: goto L_0897EE30;
    case 748u: goto L_0897EE5C;
    case 749u: goto L_0897EE6C;
    case 750u: goto L_0897EE7C;
    case 751u: goto L_0897EE84;
    case 752u: goto L_0897EE8C;
    case 753u: goto L_0897EE94;
    case 754u: goto L_0897EEA0;
    case 755u: goto L_0897EEA8;
    case 756u: goto L_0897EEB8;
    case 757u: goto L_0897EEC4;
    case 758u: goto L_0897EEC8;
    case 759u: goto L_0897EECC;
    case 760u: goto L_0897EED4;
    case 761u: goto L_0897EEDC;
    case 762u: goto L_0897EEE4;
    case 763u: goto L_0897EEF8;
    case 764u: goto L_0897EF04;
    case 765u: goto L_0897EF0C;
    case 766u: goto L_0897EF14;
    case 767u: goto L_0897EF1C;
    case 768u: goto L_0897EF24;
    case 769u: goto L_0897EF2C;
    case 770u: goto L_0897EF34;
    case 771u: goto L_0897EF58;
    case 772u: goto L_0897EF60;
    case 773u: goto L_0897EF78;
    case 774u: goto L_0897EF80;
    case 775u: goto L_0897EF8C;
    case 776u: goto L_0897EF98;
    case 777u: goto L_0897EFA0;
    case 778u: goto L_0897EFA4;
    case 779u: goto L_0897EFB0;
    case 780u: goto L_0897EFBC;
    case 781u: goto L_0897EFE4;
    case 782u: goto L_0897EFF4;
    case 783u: goto L_0897F000;
    case 784u: goto L_0897F008;
    case 785u: goto L_0897F00C;
    case 786u: goto L_0897F014;
    case 787u: goto L_0897F020;
    case 788u: goto L_0897F02C;
    case 789u: goto L_0897F034;
    case 790u: goto L_0897F038;
    case 791u: goto L_0897F044;
    case 792u: goto L_0897F074;
    case 793u: goto L_0897F07C;
    case 794u: goto L_0897F0A0;
    case 795u: goto L_0897F0E4;
    case 796u: goto L_0897F0F0;
    case 797u: goto L_0897F110;
    case 798u: goto L_0897F138;
    case 799u: goto L_0897F148;
    case 800u: goto L_0897F150;
    case 801u: goto L_0897F17C;
    case 802u: goto L_0897F1B0;
    case 803u: goto L_0897F1B8;
    case 804u: goto L_0897F1BC;
    case 805u: goto L_0897F1D8;
    case 806u: goto L_0897F224;
    case 807u: goto L_0897F230;
    case 808u: goto L_0897F23C;
    case 809u: goto L_0897F244;
    case 810u: goto L_0897F25C;
    case 811u: goto L_0897F274;
    case 812u: goto L_0897F288;
    case 813u: goto L_0897F298;
    case 814u: goto L_0897F2A8;
    case 815u: goto L_0897F2B0;
    case 816u: goto L_0897F2C4;
    case 817u: goto L_0897F2CC;
    case 818u: goto L_0897F2DC;
    case 819u: goto L_0897F2E4;
    case 820u: goto L_0897F2F4;
    case 821u: goto L_0897F300;
    case 822u: goto L_0897F308;
    case 823u: goto L_0897F310;
    case 824u: goto L_0897F324;
    case 825u: goto L_0897F32C;
    case 826u: goto L_0897F330;
    case 827u: goto L_0897F338;
    case 828u: goto L_0897F348;
    case 829u: goto L_0897F350;
    case 830u: goto L_0897F364;
    case 831u: goto L_0897F36C;
    case 832u: goto L_0897F370;
    case 833u: goto L_0897F380;
    case 834u: goto L_0897F384;
    case 835u: goto L_0897F38C;
    case 836u: goto L_0897F394;
    case 837u: goto L_0897F39C;
    case 838u: goto L_0897F3CC;
    case 839u: goto L_0897F420;
    case 840u: goto L_0897F42C;
    case 841u: goto L_0897F438;
    case 842u: goto L_0897F444;
    case 843u: goto L_0897F44C;
    case 844u: goto L_0897F450;
    case 845u: goto L_0897F458;
    case 846u: goto L_0897F460;
    case 847u: goto L_0897F49C;
    case 848u: goto L_0897F4BC;
    case 849u: goto L_0897F4C0;
    case 850u: goto L_0897F4D0;
    case 851u: goto L_0897F4D4;
    case 852u: goto L_0897F4DC;
    case 853u: goto L_0897F51C;
    case 854u: goto L_0897F524;
    case 855u: goto L_0897F530;
    case 856u: goto L_0897F53C;
    case 857u: goto L_0897F544;
    case 858u: goto L_0897F548;
    case 859u: goto L_0897F550;
    case 860u: goto L_0897F55C;
    case 861u: goto L_0897F57C;
    case 862u: goto L_0897F588;
    case 863u: goto L_0897F594;
    case 864u: goto L_0897F5A0;
    case 865u: goto L_0897F5A8;
    case 866u: goto L_0897F5AC;
    case 867u: goto L_0897F5B4;
    case 868u: goto L_0897F5BC;
    case 869u: goto L_0897F5C4;
    case 870u: goto L_0897F5E0;
    case 871u: goto L_0897F5E8;
    case 872u: goto L_0897F5F0;
    case 873u: goto L_0897F5F8;
    case 874u: goto L_0897F604;
    case 875u: goto L_0897F610;
    case 876u: goto L_0897F61C;
    case 877u: goto L_0897F624;
    case 878u: goto L_0897F628;
    case 879u: goto L_0897F62C;
    case 880u: goto L_0897F638;
    case 881u: goto L_0897F654;
    case 882u: goto L_0897F668;
    case 883u: goto L_0897F688;
    case 884u: goto L_0897F694;
    case 885u: goto L_0897F6A0;
    case 886u: goto L_0897F6A8;
    case 887u: goto L_0897F6AC;
    case 888u: goto L_0897F6B0;
    case 889u: goto L_0897F6BC;
    case 890u: goto L_0897F6D0;
    case 891u: goto L_0897F6D8;
    case 892u: goto L_0897F6F0;
    case 893u: goto L_0897F6FC;
    case 894u: goto L_0897F71C;
    case 895u: goto L_0897F720;
    case 896u: goto L_0897F730;
    case 897u: goto L_0897F774;
    case 898u: goto L_0897F7A8;
    case 899u: goto L_0897F7C8;
    case 900u: goto L_0897F7CC;
    case 901u: goto L_0897F7D8;
    case 902u: goto L_0897F7DC;
    case 903u: goto L_0897F7E4;
    case 904u: goto L_0897F7F0;
    case 905u: goto L_0897F7FC;
    case 906u: goto L_0897F80C;
    case 907u: goto L_0897F818;
    case 908u: goto L_0897F834;
    case 909u: goto L_0897F848;
    case 910u: goto L_0897F84C;
    case 911u: goto L_0897F854;
    case 912u: goto L_0897F85C;
    case 913u: goto L_0897F864;
    case 914u: goto L_0897F86C;
    case 915u: goto L_0897F874;
    case 916u: goto L_0897F878;
    case 917u: goto L_0897F880;
    case 918u: goto L_0897F888;
    case 919u: goto L_0897F89C;
    case 920u: goto L_0897F8B8;
    case 921u: goto L_0897F8C4;
    case 922u: goto L_0897F8D8;
    case 923u: goto L_0897F8F8;
    case 924u: goto L_0897F908;
    case 925u: goto L_0897F910;
    case 926u: goto L_0897F918;
    case 927u: goto L_0897F924;
    case 928u: goto L_0897F93C;
    case 929u: goto L_0897F94C;
    case 930u: goto L_0897F960;
    case 931u: goto L_0897F9B0;
    case 932u: goto L_0897F9D0;
    case 933u: goto L_0897F9E0;
    case 934u: goto L_0897F9F4;
    case 935u: goto L_0897FA30;
    case 936u: goto L_0897FA5C;
    case 937u: goto L_0897FA60;
    case 938u: goto L_0897FAA8;
    case 939u: goto L_0897FAFC;
    case 940u: goto L_0897FB18;
    case 941u: goto L_0897FB2C;
    case 942u: goto L_0897FB30;
    case 943u: goto L_0897FB50;
    case 944u: goto L_0897FB5C;
    case 945u: goto L_0897FB6C;
    case 946u: goto L_0897FB9C;
    case 947u: goto L_0897FBEC;
    case 948u: goto L_0897FBF4;
    case 949u: goto L_0897FBFC;
    case 950u: goto L_0897FC04;
    case 951u: goto L_0897FC18;
    case 952u: goto L_0897FC40;
    case 953u: goto L_0897FC50;
    case 954u: goto L_0897FC70;
    case 955u: goto L_0897FC78;
    case 956u: goto L_0897FC88;
    case 957u: goto L_0897FC90;
    case 958u: goto L_0897FCA8;
    case 959u: goto L_0897FCB4;
    case 960u: goto L_0897FCBC;
    case 961u: goto L_0897FCD4;
    case 962u: goto L_0897FD10;
    case 963u: goto L_0897FD4C;
    case 964u: goto L_0897FD64;
    case 965u: goto L_0897FD9C;
    case 966u: goto L_0897FDD4;
    case 967u: goto L_0897FE18;
    case 968u: goto L_0897FE38;
    case 969u: goto L_0897FE60;
    case 970u: goto L_0897FE90;
    case 971u: goto L_0897FEC0;
    case 972u: goto L_0897FECC;
    case 973u: goto L_0897FEE8;
    case 974u: goto L_0897FEF4;
    case 975u: goto L_0897FF04;
    case 976u: goto L_0897FF10;
    case 977u: goto L_0897FF18;
    case 978u: goto L_0897FF24;
    case 979u: goto L_0897FF28;
    case 980u: goto L_0897FF38;
    case 981u: goto L_0897FF40;
    case 982u: goto L_0897FF54;
    case 983u: goto L_0897FF60;
    case 984u: goto L_0897FF78;
    case 985u: goto L_0897FF90;
    case 986u: goto L_0897FFA8;
    case 987u: goto L_0897FFB4;
    case 988u: goto L_0897FFC4;
    case 989u: goto L_0897FFCC;
    case 990u: goto L_0897FFDC;
    case 991u: goto L_0897FFEC;
    case 992u: goto L_0897FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0897C000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897C004;
L_0897C004:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6864));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0897C028u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem) && ctx.pc == 0x0897C028u) goto L_0897C028;
    return;
L_0897C028:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C048;
      }
      goto L_0897C030;
    }
L_0897C030:
    ctx.gpr[31] = (0x0897C038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 58u, 0x089604E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C038u) goto L_0897C038;
    return;
L_0897C038:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C078;
      }
      goto L_0897C048;
    }
L_0897C048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0897C060;
    }
    goto L_0897C054;
L_0897C054:
    ctx.gpr[31] = (0x0897C05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897C05Cu) goto L_0897C05C;
    return;
L_0897C05C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897C060;
L_0897C060:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6864));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0897C078;
L_0897C078:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0897C084u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0897C084u) goto L_0897C084;
    return;
L_0897C084:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C0E8;
      }
      goto L_0897C08C;
    }
L_0897C08C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
      if (branch_taken) {
          goto L_0897C0A0;
      }
      goto L_0897C098;
    }
L_0897C098:
    ctx.gpr[31] = (0x0897C0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897C0A0u) goto L_0897C0A0;
    return;
L_0897C0A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x0897C0C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 606u, 0x0880EDB0u>(ctx, &aot_mem) && ctx.pc == 0x0897C0C4u) goto L_0897C0C4;
    return;
L_0897C0C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0897C0DC;
    }
    goto L_0897C0D0;
L_0897C0D0:
    ctx.gpr[31] = (0x0897C0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897C0D8u) goto L_0897C0D8;
    return;
L_0897C0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897C0DC;
L_0897C0DC:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0897C0E8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 577u, 0x0880EB64u>(ctx, &aot_mem) && ctx.pc == 0x0897C0E8u) goto L_0897C0E8;
    return;
L_0897C0E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0897C434;
      }
      goto L_0897C104;
    }
L_0897C104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1200));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C434;
      }
      goto L_0897C11C;
    }
L_0897C11C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[6] = (17352u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1200));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_0897C154;
      }
      goto L_0897C148;
    }
L_0897C148:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0897C154;
L_0897C154:
    ctx.gpr[4] = (17558u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[31] = (0x0897C168u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 573u, 0x0897BC88u>(ctx, &aot_mem) && ctx.pc == 0x0897C168u) goto L_0897C168;
    return;
L_0897C168:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = ctx.fpr[30] - ctx.fpr[0];
      if (branch_taken) {
          goto L_0897C184;
      }
      goto L_0897C17C;
    }
L_0897C17C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_0897C19C;
      }
      goto L_0897C184;
    }
L_0897C184:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897C19C;
      }
      goto L_0897C198;
    }
L_0897C198:
    ctx.gpr[21] = (0u | 1u);
    goto L_0897C19C;
L_0897C19C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_0897C1B4;
    }
    goto L_0897C1A8;
L_0897C1A8:
    ctx.gpr[31] = (0x0897C1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897C1B0u) goto L_0897C1B0;
    return;
L_0897C1B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0897C1B4;
L_0897C1B4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0897C218u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 605u, 0x0880ED24u>(ctx, &aot_mem) && ctx.pc == 0x0897C218u) goto L_0897C218;
    return;
L_0897C218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0897C230;
    }
    goto L_0897C224;
L_0897C224:
    ctx.gpr[31] = (0x0897C22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897C22Cu) goto L_0897C22C;
    return;
L_0897C22C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897C230;
L_0897C230:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x0897C240u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 610u, 0x0880EE6Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C240u) goto L_0897C240;
    return;
L_0897C240:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6612)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6616)));
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[15];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[5]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[18];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0897C338;
      }
      goto L_0897C330;
    }
L_0897C330:
    ctx.gpr[31] = (0x0897C338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897C338u) goto L_0897C338;
    return;
L_0897C338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.gpr[31] = (0x0897C34Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 606u, 0x0880EDB0u>(ctx, &aot_mem) && ctx.pc == 0x0897C34Cu) goto L_0897C34C;
    return;
L_0897C34C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0897C364;
    }
    goto L_0897C358;
L_0897C358:
    ctx.gpr[31] = (0x0897C360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897C360u) goto L_0897C360;
    return;
L_0897C360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897C364;
L_0897C364:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.gpr[31] = (0x0897C370u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 577u, 0x0880EB64u>(ctx, &aot_mem) && ctx.pc == 0x0897C370u) goto L_0897C370;
    return;
L_0897C370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[7] = (17297u << 16u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17116u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
    goto L_0897C434;
L_0897C434:
    ctx.gpr[31] = (0x0897C43Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897C43Cu) goto L_0897C43C;
    return;
L_0897C43C:
    ctx.gpr[31] = (0x0897C444u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 1028u, 0x0898BE2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C444u) goto L_0897C444;
    return;
L_0897C444:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C48C;
      }
      goto L_0897C44C;
    }
L_0897C44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897C464;
    }
    goto L_0897C458;
L_0897C458:
    ctx.gpr[31] = (0x0897C460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C460u) goto L_0897C460;
    return;
L_0897C460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897C464;
L_0897C464:
    ctx.gpr[31] = (0x0897C46Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 641u, 0x089C6DD4u>(ctx, &aot_mem) && ctx.pc == 0x0897C46Cu) goto L_0897C46C;
    return;
L_0897C46C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897C484;
    }
    goto L_0897C478;
L_0897C478:
    ctx.gpr[31] = (0x0897C480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C480u) goto L_0897C480;
    return;
L_0897C480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897C484;
L_0897C484:
    ctx.gpr[31] = (0x0897C48Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 643u, 0x089C6DE4u>(ctx, &aot_mem) && ctx.pc == 0x0897C48Cu) goto L_0897C48C;
    return;
L_0897C48C:
    ctx.gpr[31] = (0x0897C494u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897C494u) goto L_0897C494;
    return;
L_0897C494:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0897C4B4;
      }
      goto L_0897C4A4;
    }
L_0897C4A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0897C4B8;
      }
      goto L_0897C4B0;
    }
L_0897C4B0:
    ctx.gpr[5] = (0u | 1u);
    goto L_0897C4B4;
L_0897C4B4:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0897C4B8;
L_0897C4B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C558;
      }
      goto L_0897C4C0;
    }
L_0897C4C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C4D4;
      }
      goto L_0897C4CC;
    }
L_0897C4CC:
    ctx.gpr[31] = (0x0897C4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C4D4u) goto L_0897C4D4;
    return;
L_0897C4D4:
    ctx.gpr[31] = (0x0897C4DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 642u, 0x089C6DDCu>(ctx, &aot_mem) && ctx.pc == 0x0897C4DCu) goto L_0897C4DC;
    return;
L_0897C4DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C538;
      }
      goto L_0897C4E4;
    }
L_0897C4E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(234)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C538;
      }
      goto L_0897C4F0;
    }
L_0897C4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897C508;
    }
    goto L_0897C4FC;
L_0897C4FC:
    ctx.gpr[31] = (0x0897C504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C504u) goto L_0897C504;
    return;
L_0897C504:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897C508;
L_0897C508:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C518;
      }
      goto L_0897C510;
    }
L_0897C510:
    ctx.gpr[31] = (0x0897C518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C518u) goto L_0897C518;
    return;
L_0897C518:
    ctx.gpr[31] = (0x0897C520u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 640u, 0x089C6DCCu>(ctx, &aot_mem) && ctx.pc == 0x0897C520u) goto L_0897C520;
    return;
L_0897C520:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x0897C530u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 641u, 0x089C6DD4u>(ctx, &aot_mem) && ctx.pc == 0x0897C530u) goto L_0897C530;
    return;
L_0897C530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C558;
      }
      goto L_0897C538;
    }
L_0897C538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897C550;
    }
    goto L_0897C544;
L_0897C544:
    ctx.gpr[31] = (0x0897C54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C54Cu) goto L_0897C54C;
    return;
L_0897C54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897C550;
L_0897C550:
    ctx.gpr[31] = (0x0897C558u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 643u, 0x089C6DE4u>(ctx, &aot_mem) && ctx.pc == 0x0897C558u) goto L_0897C558;
    return;
L_0897C558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C56C;
      }
      goto L_0897C564;
    }
L_0897C564:
    ctx.gpr[31] = (0x0897C56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C56Cu) goto L_0897C56C;
    return;
L_0897C56C:
    ctx.gpr[31] = (0x0897C574u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 642u, 0x089C6DDCu>(ctx, &aot_mem) && ctx.pc == 0x0897C574u) goto L_0897C574;
    return;
L_0897C574:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C740;
      }
      goto L_0897C57C;
    }
L_0897C57C:
    ctx.gpr[31] = (0x0897C584u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897C584u) goto L_0897C584;
    return;
L_0897C584:
    ctx.gpr[31] = (0x0897C58Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 591u, 0x0898DA00u>(ctx, &aot_mem) && ctx.pc == 0x0897C58Cu) goto L_0897C58C;
    return;
L_0897C58C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C5DC;
      }
      goto L_0897C594;
    }
L_0897C594:
    ctx.gpr[31] = (0x0897C59Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897C59Cu) goto L_0897C59C;
    return;
L_0897C59C:
    ctx.gpr[31] = (0x0897C5A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 1008u, 0x0898BD7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C5A4u) goto L_0897C5A4;
    return;
L_0897C5A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C5DC;
      }
      goto L_0897C5AC;
    }
L_0897C5AC:
    ctx.gpr[31] = (0x0897C5B4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897C5B4u) goto L_0897C5B4;
    return;
L_0897C5B4:
    ctx.gpr[31] = (0x0897C5BCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 598u, 0x0898DA58u>(ctx, &aot_mem) && ctx.pc == 0x0897C5BCu) goto L_0897C5BC;
    return;
L_0897C5BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C5DC;
      }
      goto L_0897C5C4;
    }
L_0897C5C4:
    ctx.gpr[31] = (0x0897C5CCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897C5CCu) goto L_0897C5CC;
    return;
L_0897C5CC:
    ctx.gpr[31] = (0x0897C5D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 1018u, 0x0898BDD4u>(ctx, &aot_mem) && ctx.pc == 0x0897C5D4u) goto L_0897C5D4;
    return;
L_0897C5D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C6C0;
      }
      goto L_0897C5DC;
    }
L_0897C5DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897C634;
      }
      goto L_0897C5EC;
    }
L_0897C5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897C604;
    }
    goto L_0897C5F8;
L_0897C5F8:
    ctx.gpr[31] = (0x0897C600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C600u) goto L_0897C600;
    return;
L_0897C600:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897C604;
L_0897C604:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C614;
      }
      goto L_0897C60C;
    }
L_0897C60C:
    ctx.gpr[31] = (0x0897C614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C614u) goto L_0897C614;
    return;
L_0897C614:
    ctx.gpr[31] = (0x0897C61Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 730u, 0x089C7194u>(ctx, &aot_mem) && ctx.pc == 0x0897C61Cu) goto L_0897C61C;
    return;
L_0897C61C:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x0897C62Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 731u, 0x089C71A0u>(ctx, &aot_mem) && ctx.pc == 0x0897C62Cu) goto L_0897C62C;
    return;
L_0897C62C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C6C0;
      }
      goto L_0897C634;
    }
L_0897C634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C648;
      }
      goto L_0897C640;
    }
L_0897C640:
    ctx.gpr[31] = (0x0897C648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C648u) goto L_0897C648;
    return;
L_0897C648:
    ctx.gpr[31] = (0x0897C650u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 732u, 0x089C71A8u>(ctx, &aot_mem) && ctx.pc == 0x0897C650u) goto L_0897C650;
    return;
L_0897C650:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897C65Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897C65Cu) goto L_0897C65C;
    return;
L_0897C65C:
    ctx.gpr[31] = (0x0897C664u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 591u, 0x0898DA00u>(ctx, &aot_mem) && ctx.pc == 0x0897C664u) goto L_0897C664;
    return;
L_0897C664:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C684;
      }
      goto L_0897C66C;
    }
L_0897C66C:
    ctx.gpr[31] = (0x0897C674u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897C674u) goto L_0897C674;
    return;
L_0897C674:
    ctx.gpr[31] = (0x0897C67Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 1008u, 0x0898BD7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C67Cu) goto L_0897C67C;
    return;
L_0897C67C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C694;
      }
      goto L_0897C684;
    }
L_0897C684:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
      if (branch_taken) {
          goto L_0897C6A0;
      }
      goto L_0897C694;
    }
L_0897C694:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 24u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
    goto L_0897C6A0;
L_0897C6A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897C6B8;
    }
    goto L_0897C6AC;
L_0897C6AC:
    ctx.gpr[31] = (0x0897C6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C6B4u) goto L_0897C6B4;
    return;
L_0897C6B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897C6B8;
L_0897C6B8:
    ctx.gpr[31] = (0x0897C6C0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 733u, 0x089C71B0u>(ctx, &aot_mem) && ctx.pc == 0x0897C6C0u) goto L_0897C6C0;
    return;
L_0897C6C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-10001)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C73C;
      }
      goto L_0897C6CC;
    }
L_0897C6CC:
    ctx.gpr[31] = (0x0897C6D4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897C6D4u) goto L_0897C6D4;
    return;
L_0897C6D4:
    ctx.gpr[31] = (0x0897C6DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 584u, 0x0898D9A8u>(ctx, &aot_mem) && ctx.pc == 0x0897C6DCu) goto L_0897C6DC;
    return;
L_0897C6DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C72C;
      }
      goto L_0897C6E4;
    }
L_0897C6E4:
    ctx.gpr[31] = (0x0897C6ECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897C6ECu) goto L_0897C6EC;
    return;
L_0897C6EC:
    ctx.gpr[31] = (0x0897C6F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 998u, 0x0898BD24u>(ctx, &aot_mem) && ctx.pc == 0x0897C6F4u) goto L_0897C6F4;
    return;
L_0897C6F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C72C;
      }
      goto L_0897C6FC;
    }
L_0897C6FC:
    ctx.gpr[31] = (0x0897C704u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897C704u) goto L_0897C704;
    return;
L_0897C704:
    ctx.gpr[31] = (0x0897C70Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 577u, 0x0898D950u>(ctx, &aot_mem) && ctx.pc == 0x0897C70Cu) goto L_0897C70C;
    return;
L_0897C70C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C72C;
      }
      goto L_0897C714;
    }
L_0897C714:
    ctx.gpr[31] = (0x0897C71Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897C71Cu) goto L_0897C71C;
    return;
L_0897C71C:
    ctx.gpr[31] = (0x0897C724u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 988u, 0x0898BCCCu>(ctx, &aot_mem) && ctx.pc == 0x0897C724u) goto L_0897C724;
    return;
L_0897C724:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C740;
      }
      goto L_0897C72C;
    }
L_0897C72C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897C740;
      }
      goto L_0897C73C;
    }
L_0897C73C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(0u));
    goto L_0897C740;
L_0897C740:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0897C74Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897C74Cu) goto L_0897C74C;
    return;
L_0897C74C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0897C76C;
      }
      goto L_0897C75C;
    }
L_0897C75C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0897C770;
      }
      goto L_0897C768;
    }
L_0897C768:
    ctx.gpr[5] = (0u | 1u);
    goto L_0897C76C;
L_0897C76C:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0897C770;
L_0897C770:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C9A0;
      }
      goto L_0897C778;
    }
L_0897C778:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 170u);
    ctx.gpr[31] = (0x0897C788u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x0897C788u) goto L_0897C788;
    return;
L_0897C788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C79C;
      }
      goto L_0897C794;
    }
L_0897C794:
    ctx.gpr[31] = (0x0897C79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C79Cu) goto L_0897C79C;
    return;
L_0897C79C:
    ctx.gpr[31] = (0x0897C7A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 644u, 0x089C6DECu>(ctx, &aot_mem) && ctx.pc == 0x0897C7A4u) goto L_0897C7A4;
    return;
L_0897C7A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C830;
      }
      goto L_0897C7AC;
    }
L_0897C7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897C7C4;
    }
    goto L_0897C7B8;
L_0897C7B8:
    ctx.gpr[31] = (0x0897C7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C7C0u) goto L_0897C7C0;
    return;
L_0897C7C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897C7C4;
L_0897C7C4:
    ctx.gpr[31] = (0x0897C7CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 645u, 0x089C6DF4u>(ctx, &aot_mem) && ctx.pc == 0x0897C7CCu) goto L_0897C7CC;
    return;
L_0897C7CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897C7E4;
    }
    goto L_0897C7D8;
L_0897C7D8:
    ctx.gpr[31] = (0x0897C7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897C7E0u) goto L_0897C7E0;
    return;
L_0897C7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897C7E4;
L_0897C7E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
      if (branch_taken) {
          goto L_0897C7F4;
      }
      goto L_0897C7EC;
    }
L_0897C7EC:
    ctx.gpr[31] = (0x0897C7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C7F4u) goto L_0897C7F4;
    return;
L_0897C7F4:
    ctx.gpr[31] = (0x0897C7FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 724u, 0x089C7164u>(ctx, &aot_mem) && ctx.pc == 0x0897C7FCu) goto L_0897C7FC;
    return;
L_0897C7FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897C808u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 412u, 0x0880DC1Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C808u) goto L_0897C808;
    return;
L_0897C808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897C820;
    }
    goto L_0897C814;
L_0897C814:
    ctx.gpr[31] = (0x0897C81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C81Cu) goto L_0897C81C;
    return;
L_0897C81C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897C820;
L_0897C820:
    ctx.gpr[31] = (0x0897C828u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 725u, 0x089C716Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C828u) goto L_0897C828;
    return;
L_0897C828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C9A0;
      }
      goto L_0897C830;
    }
L_0897C830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_0897C848;
      }
      goto L_0897C840;
    }
L_0897C840:
    ctx.gpr[31] = (0x0897C848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897C848u) goto L_0897C848;
    return;
L_0897C848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0897C8B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 605u, 0x0880ED24u>(ctx, &aot_mem) && ctx.pc == 0x0897C8B0u) goto L_0897C8B0;
    return;
L_0897C8B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0897C8C8;
    }
    goto L_0897C8BC;
L_0897C8BC:
    ctx.gpr[31] = (0x0897C8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897C8C4u) goto L_0897C8C4;
    return;
L_0897C8C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897C8C8;
L_0897C8C8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.gpr[31] = (0x0897C8D8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 610u, 0x0880EE6Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C8D8u) goto L_0897C8D8;
    return;
L_0897C8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897C8F0;
    }
    goto L_0897C8E4;
L_0897C8E4:
    ctx.gpr[31] = (0x0897C8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C8ECu) goto L_0897C8EC;
    return;
L_0897C8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897C8F0;
L_0897C8F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0897C908u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 723u, 0x089C7150u>(ctx, &aot_mem) && ctx.pc == 0x0897C908u) goto L_0897C908;
    return;
L_0897C908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0897C920;
    }
    goto L_0897C914;
L_0897C914:
    ctx.gpr[31] = (0x0897C91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C91Cu) goto L_0897C91C;
    return;
L_0897C91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897C920;
L_0897C920:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
      if (branch_taken) {
          goto L_0897C930;
      }
      goto L_0897C928;
    }
L_0897C928:
    ctx.gpr[31] = (0x0897C930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897C930u) goto L_0897C930;
    return;
L_0897C930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0897C950u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 429u, 0x0880DE38u>(ctx, &aot_mem) && ctx.pc == 0x0897C950u) goto L_0897C950;
    return;
L_0897C950:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897C95Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 725u, 0x089C716Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C95Cu) goto L_0897C95C;
    return;
L_0897C95C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C970;
      }
      goto L_0897C968;
    }
L_0897C968:
    ctx.gpr[31] = (0x0897C970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C970u) goto L_0897C970;
    return;
L_0897C970:
    ctx.gpr[31] = (0x0897C978u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 724u, 0x089C7164u>(ctx, &aot_mem) && ctx.pc == 0x0897C978u) goto L_0897C978;
    return;
L_0897C978:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C9A0;
      }
      goto L_0897C980;
    }
L_0897C980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897C998;
    }
    goto L_0897C98C;
L_0897C98C:
    ctx.gpr[31] = (0x0897C994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897C994u) goto L_0897C994;
    return;
L_0897C994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897C998;
L_0897C998:
    ctx.gpr[31] = (0x0897C9A0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 645u, 0x089C6DF4u>(ctx, &aot_mem) && ctx.pc == 0x0897C9A0u) goto L_0897C9A0;
    return;
L_0897C9A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0897C9ACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897C9ACu) goto L_0897C9AC;
    return;
L_0897C9AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C9D4;
      }
      goto L_0897C9B8;
    }
L_0897C9B8:
    ctx.gpr[31] = (0x0897C9C0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897C9C0u) goto L_0897C9C0;
    return;
L_0897C9C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C9D4;
      }
      goto L_0897C9CC;
    }
L_0897C9CC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C9DC;
      }
      goto L_0897C9D4;
    }
L_0897C9D4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CE48;
      }
      goto L_0897C9DC;
    }
L_0897C9DC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
      if (branch_taken) {
          goto L_0897C9E8;
      }
      goto L_0897C9E4;
    }
L_0897C9E4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    goto L_0897C9E8;
L_0897C9E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CE48;
      }
      goto L_0897CA04;
    }
L_0897CA04:
    ctx.gpr[5] = (17264u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[5] = (17124u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(300));
      if (branch_taken) {
          goto L_0897CA2C;
      }
      goto L_0897CA24;
    }
L_0897CA24:
    ctx.gpr[31] = (0x0897CA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897CA2Cu) goto L_0897CA2C;
    return;
L_0897CA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0897CA94u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 605u, 0x0880ED24u>(ctx, &aot_mem) && ctx.pc == 0x0897CA94u) goto L_0897CA94;
    return;
L_0897CA94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[17] = (0u | 0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[26])) && ctx.fpr[14] == ctx.fpr[26]));
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[22];
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[24];
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[20];
      if (branch_taken) {
          goto L_0897CAF4;
      }
      goto L_0897CACC;
    }
L_0897CACC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CAE8;
      }
      goto L_0897CAE0;
    }
L_0897CAE0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0897CAEC;
      }
      goto L_0897CAE8;
    }
L_0897CAE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897CAEC;
L_0897CAEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0897CB2C;
      }
      goto L_0897CAF4;
    }
L_0897CAF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CB2C;
      }
      goto L_0897CB08;
    }
L_0897CB08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[20];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897CB2C;
L_0897CB2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CB68;
      }
      goto L_0897CB40;
    }
L_0897CB40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CB5C;
      }
      goto L_0897CB54;
    }
L_0897CB54:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0897CB60;
      }
      goto L_0897CB5C;
    }
L_0897CB5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0897CB60;
L_0897CB60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0897CBA0;
      }
      goto L_0897CB68;
    }
L_0897CB68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CBA0;
      }
      goto L_0897CB7C;
    }
L_0897CB7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[24];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897CBA0;
L_0897CBA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0897CBB8;
    }
    goto L_0897CBAC;
L_0897CBAC:
    ctx.gpr[31] = (0x0897CBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897CBB4u) goto L_0897CBB4;
    return;
L_0897CBB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897CBB8;
L_0897CBB8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.gpr[31] = (0x0897CBC4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 577u, 0x0880EB64u>(ctx, &aot_mem) && ctx.pc == 0x0897CBC4u) goto L_0897CBC4;
    return;
L_0897CBC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[26]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
      if (branch_taken) {
          goto L_0897CC28;
      }
      goto L_0897CC18;
    }
L_0897CC18:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CC4C;
      }
      goto L_0897CC28;
    }
L_0897CC28:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CC54;
      }
      goto L_0897CC3C;
    }
L_0897CC3C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CC54;
      }
      goto L_0897CC4C;
    }
L_0897CC4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0897CCA8;
      }
      goto L_0897CC54;
    }
L_0897CC54:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CCA8;
      }
      goto L_0897CC5C;
    }
L_0897CC5C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CC80;
      }
      goto L_0897CC6C;
    }
L_0897CC6C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CCA4;
      }
      goto L_0897CC80;
    }
L_0897CC80:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CCA8;
      }
      goto L_0897CC90;
    }
L_0897CC90:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CCA8;
      }
      goto L_0897CCA4;
    }
L_0897CCA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897CCA8;
L_0897CCA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
        goto L_0897CCD0;
    }
    goto L_0897CCBC;
L_0897CCBC:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CCF0;
      }
      goto L_0897CCCC;
    }
L_0897CCCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    goto L_0897CCD0;
L_0897CCD0:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CCF8;
      }
      goto L_0897CCE0;
    }
L_0897CCE0:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CCF8;
      }
      goto L_0897CCF0;
    }
L_0897CCF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0897CD4C;
      }
      goto L_0897CCF8;
    }
L_0897CCF8:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897CD50;
    }
    goto L_0897CD00;
L_0897CD00:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CD24;
      }
      goto L_0897CD10;
    }
L_0897CD10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CD48;
      }
      goto L_0897CD24;
    }
L_0897CD24:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897CD50;
    }
    goto L_0897CD34;
L_0897CD34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897CD50;
    }
    goto L_0897CD48;
L_0897CD48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0897CD4C;
L_0897CD4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0897CD50;
L_0897CD50:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CD88;
      }
      goto L_0897CD80;
    }
L_0897CD80:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_0897CD88;
      }
      goto L_0897CD88;
    }
L_0897CD88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CDC4;
      }
      goto L_0897CDBC;
    }
L_0897CDBC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_0897CDC4;
      }
      goto L_0897CDC4;
    }
L_0897CDC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CE04;
      }
      goto L_0897CDFC;
    }
L_0897CDFC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_0897CE04;
      }
      goto L_0897CE04;
    }
L_0897CE04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CE44;
      }
      goto L_0897CE3C;
    }
L_0897CE3C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_0897CE44;
      }
      goto L_0897CE44;
    }
L_0897CE44:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897CE48;
L_0897CE48:
    ctx.gpr[31] = (0x0897CE50u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897CE50u) goto L_0897CE50;
    return;
L_0897CE50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CE78;
      }
      goto L_0897CE5C;
    }
L_0897CE5C:
    ctx.gpr[31] = (0x0897CE64u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897CE64u) goto L_0897CE64;
    return;
L_0897CE64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897CE78;
      }
      goto L_0897CE70;
    }
L_0897CE70:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CE80;
      }
      goto L_0897CE78;
    }
L_0897CE78:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D40C;
      }
      goto L_0897CE80;
    }
L_0897CE80:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0897CE90;
      }
      goto L_0897CE8C;
    }
L_0897CE8C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    goto L_0897CE90;
L_0897CE90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D40C;
      }
      goto L_0897CEA8;
    }
L_0897CEA8:
    ctx.gpr[5] = (17264u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[5] = (17124u << 16u);
    ctx.gpr[17] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(328));
      if (branch_taken) {
          goto L_0897CED0;
      }
      goto L_0897CEC8;
    }
L_0897CEC8:
    ctx.gpr[31] = (0x0897CED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897CED0u) goto L_0897CED0;
    return;
L_0897CED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(316));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0897CF38u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 605u, 0x0880ED24u>(ctx, &aot_mem) && ctx.pc == 0x0897CF38u) goto L_0897CF38;
    return;
L_0897CF38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[24];
    ctx.fpr[16] = ctx.fpr[20] - ctx.fpr[13];
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0897CFB0;
      }
      goto L_0897CF80;
    }
L_0897CF80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CFA0;
      }
      goto L_0897CF94;
    }
L_0897CF94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897CFA8;
      }
      goto L_0897CFA0;
    }
L_0897CFA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897CFA8;
L_0897CFA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0897D068;
      }
      goto L_0897CFB0;
    }
L_0897CFB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CFE8;
      }
      goto L_0897CFC4;
    }
L_0897CFC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[20];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897CFE8;
L_0897CFE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D018;
      }
      goto L_0897D000;
    }
L_0897D000:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D068;
      }
      goto L_0897D018;
    }
L_0897D018:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_0897D038;
      }
      goto L_0897D030;
    }
L_0897D030:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
      if (branch_taken) {
          goto L_0897D038;
      }
      goto L_0897D038;
    }
L_0897D038:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897D058;
      }
      goto L_0897D050;
    }
L_0897D050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(356));
      if (branch_taken) {
          goto L_0897D05C;
      }
      goto L_0897D058;
    }
L_0897D058:
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(196));
    goto L_0897D05C;
L_0897D05C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897D068;
L_0897D068:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D0AC;
      }
      goto L_0897D07C;
    }
L_0897D07C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D09C;
      }
      goto L_0897D090;
    }
L_0897D090:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897D0A4;
      }
      goto L_0897D09C;
    }
L_0897D09C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897D0A4;
L_0897D0A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0897D164;
      }
      goto L_0897D0AC;
    }
L_0897D0AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D0E4;
      }
      goto L_0897D0C0;
    }
L_0897D0C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[24];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897D0E4;
L_0897D0E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D114;
      }
      goto L_0897D0FC;
    }
L_0897D0FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D164;
      }
      goto L_0897D114;
    }
L_0897D114:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_0897D134;
      }
      goto L_0897D12C;
    }
L_0897D12C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(344));
      if (branch_taken) {
          goto L_0897D134;
      }
      goto L_0897D134;
    }
L_0897D134:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897D154;
      }
      goto L_0897D14C;
    }
L_0897D14C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(348));
      if (branch_taken) {
          goto L_0897D158;
      }
      goto L_0897D154;
    }
L_0897D154:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    goto L_0897D158;
L_0897D158:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897D164;
L_0897D164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0897D17C;
    }
    goto L_0897D170;
L_0897D170:
    ctx.gpr[31] = (0x0897D178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897D178u) goto L_0897D178;
    return;
L_0897D178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897D17C;
L_0897D17C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[31] = (0x0897D188u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 577u, 0x0880EB64u>(ctx, &aot_mem) && ctx.pc == 0x0897D188u) goto L_0897D188;
    return;
L_0897D188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[26]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
      if (branch_taken) {
          goto L_0897D1EC;
      }
      goto L_0897D1DC;
    }
L_0897D1DC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D210;
      }
      goto L_0897D1EC;
    }
L_0897D1EC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D218;
      }
      goto L_0897D200;
    }
L_0897D200:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D218;
      }
      goto L_0897D210;
    }
L_0897D210:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0897D26C;
      }
      goto L_0897D218;
    }
L_0897D218:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D26C;
      }
      goto L_0897D220;
    }
L_0897D220:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D244;
      }
      goto L_0897D230;
    }
L_0897D230:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D268;
      }
      goto L_0897D244;
    }
L_0897D244:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D26C;
      }
      goto L_0897D254;
    }
L_0897D254:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D26C;
      }
      goto L_0897D268;
    }
L_0897D268:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897D26C;
L_0897D26C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
        goto L_0897D294;
    }
    goto L_0897D280;
L_0897D280:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D2B4;
      }
      goto L_0897D290;
    }
L_0897D290:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    goto L_0897D294;
L_0897D294:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D2BC;
      }
      goto L_0897D2A4;
    }
L_0897D2A4:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D2BC;
      }
      goto L_0897D2B4;
    }
L_0897D2B4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0897D310;
      }
      goto L_0897D2BC;
    }
L_0897D2BC:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897D314;
    }
    goto L_0897D2C4;
L_0897D2C4:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D2E8;
      }
      goto L_0897D2D4;
    }
L_0897D2D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D30C;
      }
      goto L_0897D2E8;
    }
L_0897D2E8:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897D314;
    }
    goto L_0897D2F8;
L_0897D2F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897D314;
    }
    goto L_0897D30C;
L_0897D30C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0897D310;
L_0897D310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0897D314;
L_0897D314:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D34C;
      }
      goto L_0897D344;
    }
L_0897D344:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_0897D34C;
      }
      goto L_0897D34C;
    }
L_0897D34C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D388;
      }
      goto L_0897D380;
    }
L_0897D380:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_0897D388;
      }
      goto L_0897D388;
    }
L_0897D388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D3C8;
      }
      goto L_0897D3C0;
    }
L_0897D3C0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_0897D3C8;
      }
      goto L_0897D3C8;
    }
L_0897D3C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D408;
      }
      goto L_0897D400;
    }
L_0897D400:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_0897D408;
      }
      goto L_0897D408;
    }
L_0897D408:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897D40C;
L_0897D40C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0897D418u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897D418u) goto L_0897D418;
    return;
L_0897D418:
    ctx.gpr[31] = (0x0897D420u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 972u, 0x0898BC4Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D420u) goto L_0897D420;
    return;
L_0897D420:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897D444;
    }
    goto L_0897D428;
L_0897D428:
    ctx.gpr[31] = (0x0897D430u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897D430u) goto L_0897D430;
    return;
L_0897D430:
    ctx.gpr[31] = (0x0897D438u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C604u>(ctx, &aot_mem) && ctx.pc == 0x0897D438u) goto L_0897D438;
    return;
L_0897D438:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_0897D47C;
    }
    goto L_0897D440;
L_0897D440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897D444;
L_0897D444:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D454;
      }
      goto L_0897D44C;
    }
L_0897D44C:
    ctx.gpr[31] = (0x0897D454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897D454u) goto L_0897D454;
    return;
L_0897D454:
    ctx.gpr[31] = (0x0897D45Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 642u, 0x089C6DDCu>(ctx, &aot_mem) && ctx.pc == 0x0897D45Cu) goto L_0897D45C;
    return;
L_0897D45C:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_0897D47C;
    }
    goto L_0897D464;
L_0897D464:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D48C;
      }
      goto L_0897D478;
    }
L_0897D478:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_0897D47C;
L_0897D47C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D634;
      }
      goto L_0897D48C;
    }
L_0897D48C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D4AC;
      }
      goto L_0897D4A0;
    }
L_0897D4A0:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0897D510;
      }
      goto L_0897D4AC;
    }
L_0897D4AC:
    ctx.gpr[31] = (0x0897D4B4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897D4B4u) goto L_0897D4B4;
    return;
L_0897D4B4:
    ctx.gpr[31] = (0x0897D4BCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 972u, 0x0898BC4Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D4BCu) goto L_0897D4BC;
    return;
L_0897D4BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D4C8;
      }
      goto L_0897D4C4;
    }
L_0897D4C4:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    goto L_0897D4C8;
L_0897D4C8:
    ctx.gpr[31] = (0x0897D4D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897D4D0u) goto L_0897D4D0;
    return;
L_0897D4D0:
    ctx.gpr[31] = (0x0897D4D8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C604u>(ctx, &aot_mem) && ctx.pc == 0x0897D4D8u) goto L_0897D4D8;
    return;
L_0897D4D8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
        goto L_0897D514;
    }
    goto L_0897D4E0;
L_0897D4E0:
    ctx.gpr[31] = (0x0897D4E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897D4E8u) goto L_0897D4E8;
    return;
L_0897D4E8:
    ctx.gpr[31] = (0x0897D4F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C604u>(ctx, &aot_mem) && ctx.pc == 0x0897D4F0u) goto L_0897D4F0;
    return;
L_0897D4F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    goto L_0897D510;
L_0897D510:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_0897D514;
L_0897D514:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (17124u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[26])) && ctx.fpr[15] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_0897D5A8;
      }
      goto L_0897D53C;
    }
L_0897D53C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897D560;
    }
    goto L_0897D550;
L_0897D550:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897D634;
      }
      goto L_0897D560;
    }
L_0897D560:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[28];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0897D5A0;
      }
      goto L_0897D598;
    }
L_0897D598:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_0897D5A0;
      }
      goto L_0897D5A0;
    }
L_0897D5A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897D634;
      }
      goto L_0897D5A8;
    }
L_0897D5A8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[28];
      if (branch_taken) {
          goto L_0897D5EC;
      }
      goto L_0897D5BC;
    }
L_0897D5BC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897D5F0;
    }
    goto L_0897D5CC;
L_0897D5CC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897D5F0;
    }
    goto L_0897D5E4;
L_0897D5E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0897D634;
      }
      goto L_0897D5EC;
    }
L_0897D5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0897D5F0;
L_0897D5F0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D630;
      }
      goto L_0897D628;
    }
L_0897D628:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_0897D630;
      }
      goto L_0897D630;
    }
L_0897D630:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897D634;
L_0897D634:
    ctx.gpr[31] = (0x0897D63Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897D63Cu) goto L_0897D63C;
    return;
L_0897D63C:
    ctx.gpr[31] = (0x0897D644u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 976u, 0x0898BC6Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D644u) goto L_0897D644;
    return;
L_0897D644:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897D668;
    }
    goto L_0897D64C;
L_0897D64C:
    ctx.gpr[31] = (0x0897D654u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897D654u) goto L_0897D654;
    return;
L_0897D654:
    ctx.gpr[31] = (0x0897D65Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C604u>(ctx, &aot_mem) && ctx.pc == 0x0897D65Cu) goto L_0897D65C;
    return;
L_0897D65C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_0897D6A0;
    }
    goto L_0897D664;
L_0897D664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897D668;
L_0897D668:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D678;
      }
      goto L_0897D670;
    }
L_0897D670:
    ctx.gpr[31] = (0x0897D678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897D678u) goto L_0897D678;
    return;
L_0897D678:
    ctx.gpr[31] = (0x0897D680u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 642u, 0x089C6DDCu>(ctx, &aot_mem) && ctx.pc == 0x0897D680u) goto L_0897D680;
    return;
L_0897D680:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_0897D6A0;
    }
    goto L_0897D688;
L_0897D688:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D6B0;
      }
      goto L_0897D69C;
    }
L_0897D69C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_0897D6A0;
L_0897D6A0:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D844;
      }
      goto L_0897D6B0;
    }
L_0897D6B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D6CC;
      }
      goto L_0897D6C4;
    }
L_0897D6C4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_0897D730;
      }
      goto L_0897D6CC;
    }
L_0897D6CC:
    ctx.gpr[31] = (0x0897D6D4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897D6D4u) goto L_0897D6D4;
    return;
L_0897D6D4:
    ctx.gpr[31] = (0x0897D6DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 976u, 0x0898BC6Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D6DCu) goto L_0897D6DC;
    return;
L_0897D6DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D6E8;
      }
      goto L_0897D6E4;
    }
L_0897D6E4:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    goto L_0897D6E8;
L_0897D6E8:
    ctx.gpr[31] = (0x0897D6F0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897D6F0u) goto L_0897D6F0;
    return;
L_0897D6F0:
    ctx.gpr[31] = (0x0897D6F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C604u>(ctx, &aot_mem) && ctx.pc == 0x0897D6F8u) goto L_0897D6F8;
    return;
L_0897D6F8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
        goto L_0897D734;
    }
    goto L_0897D700;
L_0897D700:
    ctx.gpr[31] = (0x0897D708u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897D708u) goto L_0897D708;
    return;
L_0897D708:
    ctx.gpr[31] = (0x0897D710u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C604u>(ctx, &aot_mem) && ctx.pc == 0x0897D710u) goto L_0897D710;
    return;
L_0897D710:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    goto L_0897D730;
L_0897D730:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_0897D734;
L_0897D734:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (17124u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[26])) && ctx.fpr[15] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0897D7C0;
      }
      goto L_0897D75C;
    }
L_0897D75C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897D780;
    }
    goto L_0897D770;
L_0897D770:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[28];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897D844;
      }
      goto L_0897D780;
    }
L_0897D780:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[28];
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0897D7B8;
      }
      goto L_0897D7B0;
    }
L_0897D7B0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_0897D7B8;
      }
      goto L_0897D7B8;
    }
L_0897D7B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897D844;
      }
      goto L_0897D7C0;
    }
L_0897D7C0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[28];
      if (branch_taken) {
          goto L_0897D804;
      }
      goto L_0897D7D4;
    }
L_0897D7D4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897D808;
    }
    goto L_0897D7E4;
L_0897D7E4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897D808;
    }
    goto L_0897D7FC;
L_0897D7FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0897D844;
      }
      goto L_0897D804;
    }
L_0897D804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0897D808;
L_0897D808:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D840;
      }
      goto L_0897D838;
    }
L_0897D838:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_0897D840;
      }
      goto L_0897D840;
    }
L_0897D840:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897D844;
L_0897D844:
    ctx.gpr[31] = (0x0897D84Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897D84Cu) goto L_0897D84C;
    return;
L_0897D84C:
    ctx.gpr[31] = (0x0897D854u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 980u, 0x0898BC8Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D854u) goto L_0897D854;
    return;
L_0897D854:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897D878;
    }
    goto L_0897D85C;
L_0897D85C:
    ctx.gpr[31] = (0x0897D864u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897D864u) goto L_0897D864;
    return;
L_0897D864:
    ctx.gpr[31] = (0x0897D86Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem) && ctx.pc == 0x0897D86Cu) goto L_0897D86C;
    return;
L_0897D86C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_0897D8B0;
    }
    goto L_0897D874;
L_0897D874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897D878;
L_0897D878:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D888;
      }
      goto L_0897D880;
    }
L_0897D880:
    ctx.gpr[31] = (0x0897D888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897D888u) goto L_0897D888;
    return;
L_0897D888:
    ctx.gpr[31] = (0x0897D890u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 642u, 0x089C6DDCu>(ctx, &aot_mem) && ctx.pc == 0x0897D890u) goto L_0897D890;
    return;
L_0897D890:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_0897D8B0;
    }
    goto L_0897D898;
L_0897D898:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D8C0;
      }
      goto L_0897D8AC;
    }
L_0897D8AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_0897D8B0;
L_0897D8B0:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897DA68;
      }
      goto L_0897D8C0;
    }
L_0897D8C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897D8E0;
      }
      goto L_0897D8D4;
    }
L_0897D8D4:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0897D944;
      }
      goto L_0897D8E0;
    }
L_0897D8E0:
    ctx.gpr[31] = (0x0897D8E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897D8E8u) goto L_0897D8E8;
    return;
L_0897D8E8:
    ctx.gpr[31] = (0x0897D8F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 980u, 0x0898BC8Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D8F0u) goto L_0897D8F0;
    return;
L_0897D8F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D8FC;
      }
      goto L_0897D8F8;
    }
L_0897D8F8:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    goto L_0897D8FC;
L_0897D8FC:
    ctx.gpr[31] = (0x0897D904u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897D904u) goto L_0897D904;
    return;
L_0897D904:
    ctx.gpr[31] = (0x0897D90Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem) && ctx.pc == 0x0897D90Cu) goto L_0897D90C;
    return;
L_0897D90C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
        goto L_0897D948;
    }
    goto L_0897D914;
L_0897D914:
    ctx.gpr[31] = (0x0897D91Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897D91Cu) goto L_0897D91C;
    return;
L_0897D91C:
    ctx.gpr[31] = (0x0897D924u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem) && ctx.pc == 0x0897D924u) goto L_0897D924;
    return;
L_0897D924:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    goto L_0897D944;
L_0897D944:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_0897D948;
L_0897D948:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[26])) && ctx.fpr[15] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_0897D9DC;
      }
      goto L_0897D970;
    }
L_0897D970:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_0897D994;
    }
    goto L_0897D984;
L_0897D984:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897DA68;
      }
      goto L_0897D994;
    }
L_0897D994:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[28];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0897D9D4;
      }
      goto L_0897D9CC;
    }
L_0897D9CC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_0897D9D4;
      }
      goto L_0897D9D4;
    }
L_0897D9D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897DA68;
      }
      goto L_0897D9DC;
    }
L_0897D9DC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[28];
      if (branch_taken) {
          goto L_0897DA20;
      }
      goto L_0897D9F0;
    }
L_0897D9F0:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_0897DA24;
    }
    goto L_0897DA00;
L_0897DA00:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_0897DA24;
    }
    goto L_0897DA18;
L_0897DA18:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0897DA68;
      }
      goto L_0897DA20;
    }
L_0897DA20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0897DA24;
L_0897DA24:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897DA64;
      }
      goto L_0897DA5C;
    }
L_0897DA5C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_0897DA64;
      }
      goto L_0897DA64;
    }
L_0897DA64:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897DA68;
L_0897DA68:
    ctx.gpr[31] = (0x0897DA70u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897DA70u) goto L_0897DA70;
    return;
L_0897DA70:
    ctx.gpr[31] = (0x0897DA78u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 984u, 0x0898BCACu>(ctx, &aot_mem) && ctx.pc == 0x0897DA78u) goto L_0897DA78;
    return;
L_0897DA78:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897DA9C;
    }
    goto L_0897DA80;
L_0897DA80:
    ctx.gpr[31] = (0x0897DA88u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897DA88u) goto L_0897DA88;
    return;
L_0897DA88:
    ctx.gpr[31] = (0x0897DA90u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem) && ctx.pc == 0x0897DA90u) goto L_0897DA90;
    return;
L_0897DA90:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_0897DAD4;
    }
    goto L_0897DA98;
L_0897DA98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897DA9C;
L_0897DA9C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DAAC;
      }
      goto L_0897DAA4;
    }
L_0897DAA4:
    ctx.gpr[31] = (0x0897DAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897DAACu) goto L_0897DAAC;
    return;
L_0897DAAC:
    ctx.gpr[31] = (0x0897DAB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 642u, 0x089C6DDCu>(ctx, &aot_mem) && ctx.pc == 0x0897DAB4u) goto L_0897DAB4;
    return;
L_0897DAB4:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_0897DAD4;
    }
    goto L_0897DABC;
L_0897DABC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897DAE4;
      }
      goto L_0897DAD0;
    }
L_0897DAD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_0897DAD4;
L_0897DAD4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897DC80;
      }
      goto L_0897DAE4;
    }
L_0897DAE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897DB00;
      }
      goto L_0897DAF8;
    }
L_0897DAF8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_0897DB64;
      }
      goto L_0897DB00;
    }
L_0897DB00:
    ctx.gpr[31] = (0x0897DB08u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897DB08u) goto L_0897DB08;
    return;
L_0897DB08:
    ctx.gpr[31] = (0x0897DB10u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 984u, 0x0898BCACu>(ctx, &aot_mem) && ctx.pc == 0x0897DB10u) goto L_0897DB10;
    return;
L_0897DB10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DB1C;
      }
      goto L_0897DB18;
    }
L_0897DB18:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    goto L_0897DB1C;
L_0897DB1C:
    ctx.gpr[31] = (0x0897DB24u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897DB24u) goto L_0897DB24;
    return;
L_0897DB24:
    ctx.gpr[31] = (0x0897DB2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem) && ctx.pc == 0x0897DB2Cu) goto L_0897DB2C;
    return;
L_0897DB2C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
        goto L_0897DB68;
    }
    goto L_0897DB34;
L_0897DB34:
    ctx.gpr[31] = (0x0897DB3Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897DB3Cu) goto L_0897DB3C;
    return;
L_0897DB3C:
    ctx.gpr[31] = (0x0897DB44u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem) && ctx.pc == 0x0897DB44u) goto L_0897DB44;
    return;
L_0897DB44:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    goto L_0897DB64;
L_0897DB64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_0897DB68;
L_0897DB68:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[26])) && ctx.fpr[15] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0897DBF8;
      }
      goto L_0897DB90;
    }
L_0897DB90:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
        goto L_0897DBB4;
    }
    goto L_0897DBA4;
L_0897DBA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[28];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897DC80;
      }
      goto L_0897DBB4;
    }
L_0897DBB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897DBF0;
      }
      goto L_0897DBE8;
    }
L_0897DBE8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_0897DBF0;
      }
      goto L_0897DBF0;
    }
L_0897DBF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_0897DC80;
      }
      goto L_0897DBF8;
    }
L_0897DBF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[28] = ctx.fpr[12] + ctx.fpr[28];
      if (branch_taken) {
          goto L_0897DC3C;
      }
      goto L_0897DC0C;
    }
L_0897DC0C:
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_0897DC40;
    }
    goto L_0897DC1C;
L_0897DC1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_0897DC40;
    }
    goto L_0897DC34;
L_0897DC34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0897DC80;
      }
      goto L_0897DC3C;
    }
L_0897DC3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0897DC40;
L_0897DC40:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897DC7C;
      }
      goto L_0897DC74;
    }
L_0897DC74:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_0897DC7C;
      }
      goto L_0897DC7C;
    }
L_0897DC7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_0897DC80;
L_0897DC80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (50413u << 16u);
      if (branch_taken) {
          goto L_0897DC98;
      }
      goto L_0897DC8C;
    }
L_0897DC8C:
    ctx.gpr[31] = (0x0897DC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897DC94u) goto L_0897DC94;
    return;
L_0897DC94:
    ctx.gpr[5] = (50413u << 16u);
    goto L_0897DC98;
L_0897DC98:
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (50411u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x0897DCC4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 606u, 0x0880EDB0u>(ctx, &aot_mem) && ctx.pc == 0x0897DCC4u) goto L_0897DCC4;
    return;
L_0897DCC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_0897DCDC;
      }
      goto L_0897DCD0;
    }
L_0897DCD0:
    ctx.gpr[31] = (0x0897DCD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897DCD8u) goto L_0897DCD8;
    return;
L_0897DCD8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    goto L_0897DCDC;
L_0897DCDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0897DCECu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 577u, 0x0880EB64u>(ctx, &aot_mem) && ctx.pc == 0x0897DCECu) goto L_0897DCEC;
    return;
L_0897DCEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_0897DD4C;
    }
    goto L_0897DD4C;
L_0897DD4C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
        goto L_0897DD60;
    }
    goto L_0897DD60;
L_0897DD60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_0897DD7C;
    }
    goto L_0897DD7C;
L_0897DD7C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
        goto L_0897DD90;
    }
    goto L_0897DD90;
L_0897DD90:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (17551u << 16u);
      if (branch_taken) {
          goto L_0897DDAC;
      }
      goto L_0897DDA0;
    }
L_0897DDA0:
    ctx.gpr[31] = (0x0897DDA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897DDA8u) goto L_0897DDA8;
    return;
L_0897DDA8:
    ctx.gpr[5] = (17551u << 16u);
    goto L_0897DDAC;
L_0897DDAC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] | 49152u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[5] = (17645u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0897DDDCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 606u, 0x0880EDB0u>(ctx, &aot_mem) && ctx.pc == 0x0897DDDCu) goto L_0897DDDC;
    return;
L_0897DDDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0897DDF4;
    }
    goto L_0897DDE8;
L_0897DDE8:
    ctx.gpr[31] = (0x0897DDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897DDF0u) goto L_0897DDF0;
    return;
L_0897DDF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897DDF4;
L_0897DDF4:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0897DE00u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 577u, 0x0880EB64u>(ctx, &aot_mem) && ctx.pc == 0x0897DE00u) goto L_0897DE00;
    return;
L_0897DE00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_0897DE58;
    }
    goto L_0897DE58;
L_0897DE58:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
        goto L_0897DE6C;
    }
    goto L_0897DE6C;
L_0897DE6C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_0897DE84;
    }
    goto L_0897DE84;
L_0897DE84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
        goto L_0897DE98;
    }
    goto L_0897DE98;
L_0897DE98:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0897DEC8;
      }
      goto L_0897DEA0;
    }
L_0897DEA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DED0;
      }
      goto L_0897DEAC;
    }
L_0897DEAC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[31] = (0x0897DEC0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x0897DEC0u) goto L_0897DEC0;
    return;
L_0897DEC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DED0;
      }
      goto L_0897DEC8;
    }
L_0897DEC8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897DED0;
L_0897DED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DEE4;
      }
      goto L_0897DEDC;
    }
L_0897DEDC:
    ctx.gpr[31] = (0x0897DEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897DEE4u) goto L_0897DEE4;
    return;
L_0897DEE4:
    ctx.gpr[31] = (0x0897DEECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 299u, 0x0880D228u>(ctx, &aot_mem) && ctx.pc == 0x0897DEECu) goto L_0897DEEC;
    return;
L_0897DEEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(234)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DF10;
      }
      goto L_0897DEF8;
    }
L_0897DEF8:
    ctx.gpr[31] = (0x0897DF00u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897DF00u) goto L_0897DF00;
    return;
L_0897DF00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DF10;
      }
      goto L_0897DF0C;
    }
L_0897DF0C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(0u));
    goto L_0897DF10;
L_0897DF10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DF20;
      }
      goto L_0897DF18;
    }
L_0897DF18:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897DF20;
L_0897DF20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0897DF34u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 230u, 0x08861824u>(ctx, &aot_mem) && ctx.pc == 0x0897DF34u) goto L_0897DF34;
    return;
L_0897DF34:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897DF7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-720));
    ctx.gpr[6] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[19]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897DFE8;
      }
      goto L_0897DFE0;
    }
L_0897DFE0:
    ctx.gpr[31] = (0x0897DFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897DFE8u) goto L_0897DFE8;
    return;
L_0897DFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[31] = (0x0897DFF4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 640u, 0x089C6DCCu>(ctx, &aot_mem) && ctx.pc == 0x0897DFF4u) goto L_0897DFF4;
    return;
L_0897DFF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
      if (branch_taken) {
          goto L_0897E340;
      }
      goto L_0897DFFC;
    }
L_0897DFFC:
    ctx.gpr[5] = (16816u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16836));
    ctx.gpr[5] = (16768u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[4]);
    ctx.gpr[5] = (16640u << 16u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897E02C;
      }
      goto L_0897E020;
    }
L_0897E020:
    ctx.gpr[31] = (0x0897E028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897E028u) goto L_0897E028;
    return;
L_0897E028:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897E02C;
L_0897E02C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(612)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E078;
      }
      goto L_0897E068;
    }
L_0897E068:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_0897E068;
      }
      goto L_0897E078;
    }
L_0897E078:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[17]);
    ctx.gpr[31] = (0x0897E084u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x0897E084u) goto L_0897E084;
    return;
L_0897E084:
    ctx.gpr[31] = (0x0897E08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E08Cu) goto L_0897E08C;
    return;
L_0897E08C:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x0897E09Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem) && ctx.pc == 0x0897E09Cu) goto L_0897E09C;
    return;
L_0897E09C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(621)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(622)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(623)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(580), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(581), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(582), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(583), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x0897E0E0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(580));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x0897E0E0u) goto L_0897E0E0;
    return;
L_0897E0E0:
    ctx.gpr[31] = (0x0897E0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem) && ctx.pc == 0x0897E0E8u) goto L_0897E0E8;
    return;
L_0897E0E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0897E11C;
      }
      goto L_0897E0F4;
    }
L_0897E0F4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0897E100u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897E100u) goto L_0897E100;
    return;
L_0897E100:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E118;
      }
      goto L_0897E10C;
    }
L_0897E10C:
    ctx.gpr[31] = (0x0897E114u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E114u) goto L_0897E114;
    return;
L_0897E114:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0897E118;
L_0897E118:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_0897E11C;
L_0897E11C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[31] = (0x0897E128u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0897E128u) goto L_0897E128;
    return;
L_0897E128:
    ctx.gpr[5] = (17391u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (17287u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(584));
    ctx.gpr[31] = (0x0897E14Cu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x0897E14Cu) goto L_0897E14C;
    return;
L_0897E14C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897E160u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 93u, 0x08B0C6DCu>(ctx, &aot_mem) && ctx.pc == 0x0897E160u) goto L_0897E160;
    return;
L_0897E160:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16948u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (16720u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[5] = (17385u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(600));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[20] = ctx.fpr[24] + ctx.fpr[20];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[15];
    ctx.gpr[31] = (0x0897E1A0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E1A0u) goto L_0897E1A0;
    return;
L_0897E1A0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(616));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0897E1BCu);
    ctx.gpr[8] = (0u | 190u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E1BCu) goto L_0897E1BC;
    return;
L_0897E1BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897E1CCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x0897E1CCu) goto L_0897E1CC;
    return;
L_0897E1CC:
    ctx.gpr[22] = (0u | 43u);
    ctx.gpr[19] = (0u | 59u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[23] = (0u | 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[20] = (0u | 8u);
    goto L_0897E1EC;
L_0897E1EC:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
        goto L_0897E204;
    }
    goto L_0897E1F4;
L_0897E1F4:
    ctx.gpr[31] = (0x0897E1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897E1FCu) goto L_0897E1FC;
    return;
L_0897E1FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    goto L_0897E204;
L_0897E204:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E2B8;
      }
      goto L_0897E210;
    }
L_0897E210:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0897E228;
    }
    goto L_0897E218;
L_0897E218:
    ctx.gpr[31] = (0x0897E220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897E220u) goto L_0897E220;
    return;
L_0897E220:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897E228;
L_0897E228:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0897E23C;
    }
    goto L_0897E230;
L_0897E230:
    ctx.gpr[31] = (0x0897E238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897E238u) goto L_0897E238;
    return;
L_0897E238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897E23C;
L_0897E23C:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0897E268u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 334u, 0x088115B4u>(ctx, &aot_mem) && ctx.pc == 0x0897E268u) goto L_0897E268;
    return;
L_0897E268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
      if (branch_taken) {
          goto L_0897E288;
      }
      goto L_0897E270;
    }
L_0897E270:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897E29C;
      }
      goto L_0897E288;
    }
L_0897E288:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0897E29C;
      }
      goto L_0897E294;
    }
L_0897E294:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (0u | 0u);
    goto L_0897E29C;
L_0897E29C:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0897E2AC;
      }
      goto L_0897E2A4;
    }
L_0897E2A4:
    ctx.gpr[22] = (0u | 240u);
    ctx.gpr[19] = (0u | 59u);
    goto L_0897E2AC;
L_0897E2AC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0897E1EC;
      }
      goto L_0897E2B8;
    }
L_0897E2B8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0897E2CC;
      }
      goto L_0897E2C0;
    }
L_0897E2C0:
    ctx.gpr[31] = (0x0897E2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897E2C8u) goto L_0897E2C8;
    return;
L_0897E2C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897E2CC;
L_0897E2CC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0897E2DCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E2DCu) goto L_0897E2DC;
    return;
L_0897E2DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
        goto L_0897E314;
    }
    goto L_0897E2E8;
L_0897E2E8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0897E2F4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897E2F4u) goto L_0897E2F4;
    return;
L_0897E2F4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E30C;
      }
      goto L_0897E300;
    }
L_0897E300:
    ctx.gpr[31] = (0x0897E308u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E308u) goto L_0897E308;
    return;
L_0897E308:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0897E30C;
L_0897E30C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    goto L_0897E314;
L_0897E314:
    ctx.gpr[31] = (0x0897E31Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0897E31Cu) goto L_0897E31C;
    return;
L_0897E31C:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 43u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0897E33Cu);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0897E33Cu) goto L_0897E33C;
    return;
L_0897E33C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0897E340;
L_0897E340:
    if (ctx.gpr[21] != 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
        goto L_0897E358;
    }
    goto L_0897E348;
L_0897E348:
    ctx.gpr[31] = (0x0897E350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897E350u) goto L_0897E350;
    return;
L_0897E350:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    goto L_0897E358;
L_0897E358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0897E3C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 605u, 0x0880ED24u>(ctx, &aot_mem) && ctx.pc == 0x0897E3C0u) goto L_0897E3C0;
    return;
L_0897E3C0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0897E3DC;
      }
      goto L_0897E3CC;
    }
L_0897E3CC:
    ctx.gpr[31] = (0x0897E3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0897E3D4u) goto L_0897E3D4;
    return;
L_0897E3D4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0897E3DC;
L_0897E3DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0897E3ECu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 610u, 0x0880EE6Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E3ECu) goto L_0897E3EC;
    return;
L_0897E3EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16840u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0897E420u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 313u, 0x08A8DAA0u>(ctx, &aot_mem) && ctx.pc == 0x0897E420u) goto L_0897E420;
    return;
L_0897E420:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E440;
      }
      goto L_0897E428;
    }
L_0897E428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897E43Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 445u, 0x08A8E3D0u>(ctx, &aot_mem) && ctx.pc == 0x0897E43Cu) goto L_0897E43C;
    return;
L_0897E43C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_0897E440;
L_0897E440:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E464;
      }
      goto L_0897E448;
    }
L_0897E448:
    ctx.gpr[31] = (0x0897E450u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 292u, 0x08A8D904u>(ctx, &aot_mem) && ctx.pc == 0x0897E450u) goto L_0897E450;
    return;
L_0897E450:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0897E45Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x0897E45Cu) goto L_0897E45C;
    return;
L_0897E45C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_0897E4B4;
      }
      goto L_0897E464;
    }
L_0897E464:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16828));
      if (branch_taken) {
          goto L_0897E49C;
      }
      goto L_0897E470;
    }
L_0897E470:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0897E47Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897E47Cu) goto L_0897E47C;
    return;
L_0897E47C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E494;
      }
      goto L_0897E488;
    }
L_0897E488:
    ctx.gpr[31] = (0x0897E490u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E490u) goto L_0897E490;
    return;
L_0897E490:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0897E494;
L_0897E494:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16828));
    goto L_0897E49C;
L_0897E49C:
    ctx.gpr[31] = (0x0897E4A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0897E4A4u) goto L_0897E4A4;
    return;
L_0897E4A4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0897E4B0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x0897E4B0u) goto L_0897E4B0;
    return;
L_0897E4B0:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_0897E4B4;
L_0897E4B4:
    ctx.gpr[31] = (0x0897E4BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x0897E4BCu) goto L_0897E4BC;
    return;
L_0897E4BC:
    ctx.gpr[31] = (0x0897E4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E4C4u) goto L_0897E4C4;
    return;
L_0897E4C4:
    ctx.gpr[31] = (0x0897E4CCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem) && ctx.pc == 0x0897E4CCu) goto L_0897E4CC;
    return;
L_0897E4CC:
    ctx.gpr[31] = (0x0897E4D4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x0897E4D4u) goto L_0897E4D4;
    return;
L_0897E4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (16672u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[31] = (0x0897E534u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x0897E534u) goto L_0897E534;
    return;
L_0897E534:
    ctx.gpr[31] = (0x0897E53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 63u, 0x08B0C4CCu>(ctx, &aot_mem) && ctx.pc == 0x0897E53Cu) goto L_0897E53C;
    return;
L_0897E53C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(576), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(577), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(578), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[31] = (0x0897E568u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(579), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 72u, 0x08B0C55Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E568u) goto L_0897E568;
    return;
L_0897E568:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0897E598u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem) && ctx.pc == 0x0897E598u) goto L_0897E598;
    return;
L_0897E598:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897E5E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-10001)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17385u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (16720u << 16u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897E65Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E65Cu) goto L_0897E65C;
    return;
L_0897E65C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0897E678u);
    ctx.gpr[8] = (0u | 190u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E678u) goto L_0897E678;
    return;
L_0897E678:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897E688u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x0897E688u) goto L_0897E688;
    return;
L_0897E688:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x0897E694u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x0897E694u) goto L_0897E694;
    return;
L_0897E694:
    ctx.gpr[31] = (0x0897E69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E69Cu) goto L_0897E69C;
    return;
L_0897E69C:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x0897E6ACu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem) && ctx.pc == 0x0897E6ACu) goto L_0897E6AC;
    return;
L_0897E6AC:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x0897E6F0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x0897E6F0u) goto L_0897E6F0;
    return;
L_0897E6F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (0u | 59u);
      if (branch_taken) {
          goto L_0897E768;
      }
      goto L_0897E700;
    }
L_0897E700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x0897E760u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x0897E760u) goto L_0897E760;
    return;
L_0897E760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_0897E7D0;
      }
      goto L_0897E768;
    }
L_0897E768:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x0897E7CCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x0897E7CCu) goto L_0897E7CC;
    return;
L_0897E7CC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0897E7D0;
L_0897E7D0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16820));
      if (branch_taken) {
          goto L_0897E804;
      }
      goto L_0897E7D8;
    }
L_0897E7D8:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x0897E7E4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897E7E4u) goto L_0897E7E4;
    return;
L_0897E7E4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E7FC;
      }
      goto L_0897E7F0;
    }
L_0897E7F0:
    ctx.gpr[31] = (0x0897E7F8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E7F8u) goto L_0897E7F8;
    return;
L_0897E7F8:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_0897E7FC;
L_0897E7FC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16820));
    goto L_0897E804;
L_0897E804:
    ctx.gpr[31] = (0x0897E80Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0897E80Cu) goto L_0897E80C;
    return;
L_0897E80C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0897E81Cu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0897E81Cu) goto L_0897E81C;
    return;
L_0897E81C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E834;
      }
      goto L_0897E828;
    }
L_0897E828:
    ctx.gpr[31] = (0x0897E830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897E830u) goto L_0897E830;
    return;
L_0897E830:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897E834;
L_0897E834:
    ctx.gpr[31] = (0x0897E83Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 732u, 0x089C71A8u>(ctx, &aot_mem) && ctx.pc == 0x0897E83Cu) goto L_0897E83C;
    return;
L_0897E83C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_0897E89C;
      }
      goto L_0897E848;
    }
L_0897E848:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16812));
      if (branch_taken) {
          goto L_0897E878;
      }
      goto L_0897E850;
    }
L_0897E850:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x0897E85Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897E85Cu) goto L_0897E85C;
    return;
L_0897E85C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E874;
      }
      goto L_0897E868;
    }
L_0897E868:
    ctx.gpr[31] = (0x0897E870u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E870u) goto L_0897E870;
    return;
L_0897E870:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_0897E874;
L_0897E874:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    goto L_0897E878;
L_0897E878:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0897E884u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0897E884u) goto L_0897E884;
    return;
L_0897E884:
    ctx.gpr[5] = (0u | 313u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897E894u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0897E894u) goto L_0897E894;
    return;
L_0897E894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-10001)));
      if (branch_taken) {
          goto L_0897E934;
      }
      goto L_0897E89C;
    }
L_0897E89C:
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_0897E8D0;
    }
    goto L_0897E8A4;
L_0897E8A4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x0897E8B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897E8B0u) goto L_0897E8B0;
    return;
L_0897E8B0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E8C8;
      }
      goto L_0897E8BC;
    }
L_0897E8BC:
    ctx.gpr[31] = (0x0897E8C4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E8C4u) goto L_0897E8C4;
    return;
L_0897E8C4:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_0897E8C8;
L_0897E8C8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897E8D0;
L_0897E8D0:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E8E4;
      }
      goto L_0897E8D8;
    }
L_0897E8D8:
    ctx.gpr[31] = (0x0897E8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897E8E0u) goto L_0897E8E0;
    return;
L_0897E8E0:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897E8E4;
L_0897E8E4:
    ctx.gpr[31] = (0x0897E8ECu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 729u, 0x089C718Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E8ECu) goto L_0897E8EC;
    return;
L_0897E8EC:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897E904;
      }
      goto L_0897E8F8;
    }
L_0897E8F8:
    ctx.gpr[31] = (0x0897E900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897E900u) goto L_0897E900;
    return;
L_0897E900:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897E904;
L_0897E904:
    ctx.gpr[31] = (0x0897E90Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 732u, 0x089C71A8u>(ctx, &aot_mem) && ctx.pc == 0x0897E90Cu) goto L_0897E90C;
    return;
L_0897E90C:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0897E920u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0897E920u) goto L_0897E920;
    return;
L_0897E920:
    ctx.gpr[5] = (0u | 313u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897E930u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0897E930u) goto L_0897E930;
    return;
L_0897E930:
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-10001)));
    goto L_0897E934;
L_0897E934:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[20] = (0u | 75u);
      if (branch_taken) {
          goto L_0897EB2C;
      }
      goto L_0897E93C;
    }
L_0897E93C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_0897E9B0;
      }
      goto L_0897E948;
    }
L_0897E948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(47)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x0897E9A8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x0897E9A8u) goto L_0897E9A8;
    return;
L_0897E9A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_0897EA14;
      }
      goto L_0897E9B0;
    }
L_0897E9B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(53)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(54)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(55)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x0897EA10u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x0897EA10u) goto L_0897EA10;
    return;
L_0897EA10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0897EA14;
L_0897EA14:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16804));
      if (branch_taken) {
          goto L_0897EA48;
      }
      goto L_0897EA1C;
    }
L_0897EA1C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0897EA28u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897EA28u) goto L_0897EA28;
    return;
L_0897EA28:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EA40;
      }
      goto L_0897EA34;
    }
L_0897EA34:
    ctx.gpr[31] = (0x0897EA3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EA3Cu) goto L_0897EA3C;
    return;
L_0897EA3C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0897EA40;
L_0897EA40:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16804));
    goto L_0897EA48;
L_0897EA48:
    ctx.gpr[31] = (0x0897EA50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0897EA50u) goto L_0897EA50;
    return;
L_0897EA50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0897EA60u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0897EA60u) goto L_0897EA60;
    return;
L_0897EA60:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897EA78;
      }
      goto L_0897EA6C;
    }
L_0897EA6C:
    ctx.gpr[31] = (0x0897EA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0897EA74u) goto L_0897EA74;
    return;
L_0897EA74:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0897EA78;
L_0897EA78:
    ctx.gpr[31] = (0x0897EA80u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 730u, 0x089C7194u>(ctx, &aot_mem) && ctx.pc == 0x0897EA80u) goto L_0897EA80;
    return;
L_0897EA80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_0897EAE0;
      }
      goto L_0897EA88;
    }
L_0897EA88:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16796));
      if (branch_taken) {
          goto L_0897EAC0;
      }
      goto L_0897EA90;
    }
L_0897EA90:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0897EA9Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897EA9Cu) goto L_0897EA9C;
    return;
L_0897EA9C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EAB4;
      }
      goto L_0897EAA8;
    }
L_0897EAA8:
    ctx.gpr[31] = (0x0897EAB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EAB0u) goto L_0897EAB0;
    return;
L_0897EAB0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0897EAB4;
L_0897EAB4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16796));
    goto L_0897EAC0;
L_0897EAC0:
    ctx.gpr[31] = (0x0897EAC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0897EAC8u) goto L_0897EAC8;
    return;
L_0897EAC8:
    ctx.gpr[5] = (0u | 313u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897EAD8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0897EAD8u) goto L_0897EAD8;
    return;
L_0897EAD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EB2C;
      }
      goto L_0897EAE0;
    }
L_0897EAE0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16812));
      if (branch_taken) {
          goto L_0897EB10;
      }
      goto L_0897EAE8;
    }
L_0897EAE8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0897EAF4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897EAF4u) goto L_0897EAF4;
    return;
L_0897EAF4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EB0C;
      }
      goto L_0897EB00;
    }
L_0897EB00:
    ctx.gpr[31] = (0x0897EB08u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EB08u) goto L_0897EB08;
    return;
L_0897EB08:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0897EB0C;
L_0897EB0C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0897EB10;
L_0897EB10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897EB1Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0897EB1Cu) goto L_0897EB1C;
    return;
L_0897EB1C:
    ctx.gpr[5] = (0u | 313u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897EB2Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0897EB2Cu) goto L_0897EB2C;
    return;
L_0897EB2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EB58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897EBC4;
      }
      goto L_0897EB74;
    }
L_0897EB74:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0897EB90;
      }
      goto L_0897EB88;
    }
L_0897EB88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_0897EB90;
L_0897EB90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EBA4;
      }
      goto L_0897EB9C;
    }
L_0897EB9C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_0897EBA4;
L_0897EBA4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EBB4;
      }
      goto L_0897EBAC;
    }
L_0897EBAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_0897EBB4;
L_0897EBB4:
    ctx.gpr[31] = (0x0897EBBCu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_0897EBF4;
L_0897EBBC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897EB74;
      }
      goto L_0897EBC4;
    }
L_0897EBC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EBD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897EBE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15980)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 162u, 0x08B6CE28u>(ctx, &aot_mem) && ctx.pc == 0x0897EBE8u) goto L_0897EBE8;
    return;
L_0897EBE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EBF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897EC08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15980)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 170u, 0x08B6CEE4u>(ctx, &aot_mem) && ctx.pc == 0x0897EC08u) goto L_0897EC08;
    return;
L_0897EC08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EC14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897EC44u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EC44u) goto L_0897EC44;
    return;
L_0897EC44:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0897EC7C;
      }
      goto L_0897EC64;
    }
L_0897EC64:
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897EC8C;
      }
      goto L_0897EC7C;
    }
L_0897EC7C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0897EC88u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x0897EC88u) goto L_0897EC88;
    return;
L_0897EC88:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0897EC8C;
L_0897EC8C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0897ECA8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 39u, 0x08A94308u>(ctx, &aot_mem) && ctx.pc == 0x0897ECA8u) goto L_0897ECA8;
    return;
L_0897ECA8:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897ECC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897ECF8u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0897ECF8u) goto L_0897ECF8;
    return;
L_0897ECF8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0897ED30;
      }
      goto L_0897ED18;
    }
L_0897ED18:
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897ED40;
      }
      goto L_0897ED30;
    }
L_0897ED30:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0897ED3Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x0897ED3Cu) goto L_0897ED3C;
    return;
L_0897ED3C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0897ED40;
L_0897ED40:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0897ED5Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 40u, 0x08A94348u>(ctx, &aot_mem) && ctx.pc == 0x0897ED5Cu) goto L_0897ED5C;
    return;
L_0897ED5C:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897ED7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897EDACu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EDACu) goto L_0897EDAC;
    return;
L_0897EDAC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0897EDE4;
      }
      goto L_0897EDCC;
    }
L_0897EDCC:
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897EDF4;
      }
      goto L_0897EDE4;
    }
L_0897EDE4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0897EDF0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x0897EDF0u) goto L_0897EDF0;
    return;
L_0897EDF0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0897EDF4;
L_0897EDF4:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0897EE10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 99u, 0x08A94984u>(ctx, &aot_mem) && ctx.pc == 0x0897EE10u) goto L_0897EE10;
    return;
L_0897EE10:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EE30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F07C;
      }
      goto L_0897EE5C;
    }
L_0897EE5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_0897EE84;
      }
      goto L_0897EE6C;
    }
L_0897EE6C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x0897EE7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x0897EE7Cu) goto L_0897EE7C;
    return;
L_0897EE7C:
    ctx.gpr[31] = (0x0897EE84u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16744));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0897EE84u) goto L_0897EE84;
    return;
L_0897EE84:
    ctx.gpr[31] = (0x0897EE8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem) && ctx.pc == 0x0897EE8Cu) goto L_0897EE8C;
    return;
L_0897EE8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F07C;
      }
      goto L_0897EE94;
    }
L_0897EE94:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0897EEA0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8752), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 829u, 0x0898B448u>(ctx, &aot_mem) && ctx.pc == 0x0897EEA0u) goto L_0897EEA0;
    return;
L_0897EEA0:
    ctx.gpr[31] = (0x0897EEA8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897EEA8u) goto L_0897EEA8;
    return;
L_0897EEA8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0897EEC8;
      }
      goto L_0897EEB8;
    }
L_0897EEB8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(84))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0897EECC;
      }
      goto L_0897EEC4;
    }
L_0897EEC4:
    ctx.gpr[4] = (0u | 1u);
    goto L_0897EEC8;
L_0897EEC8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0897EECC;
L_0897EECC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897EF04;
      }
      goto L_0897EED4;
    }
L_0897EED4:
    ctx.gpr[31] = (0x0897EEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem) && ctx.pc == 0x0897EEDCu) goto L_0897EEDC;
    return;
L_0897EEDC:
    ctx.gpr[31] = (0x0897EEE4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0897EEE4u) goto L_0897EEE4;
    return;
L_0897EEE4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16748)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_0897EF14;
      }
      goto L_0897EEF8;
    }
L_0897EEF8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16748), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897EF1C;
      }
      goto L_0897EF04;
    }
L_0897EF04:
    ctx.gpr[31] = (0x0897EF0Cu);
    // nop
    goto L_0897F774;
L_0897EF0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F07C;
      }
      goto L_0897EF14;
    }
L_0897EF14:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16748), ctx.gpr[4]);
    goto L_0897EF1C;
L_0897EF1C:
    ctx.gpr[31] = (0x0897EF24u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x0897EF24u) goto L_0897EF24;
    return;
L_0897EF24:
    ctx.gpr[31] = (0x0897EF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EF2Cu) goto L_0897EF2C;
    return;
L_0897EF2C:
    ctx.gpr[31] = (0x0897EF34u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x0897EF34u) goto L_0897EF34;
    return;
L_0897EF34:
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (17372u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[31] = (0x0897EF58u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x0897EF58u) goto L_0897EF58;
    return;
L_0897EF58:
    ctx.gpr[31] = (0x0897EF60u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem) && ctx.pc == 0x0897EF60u) goto L_0897EF60;
    return;
L_0897EF60:
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[17] = (0u | 0u);
    goto L_0897EF78;
L_0897EF78:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_0897EFB0;
    }
    goto L_0897EF80;
L_0897EF80:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0897EF8Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897EF8Cu) goto L_0897EF8C;
    return;
L_0897EF8C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EFA4;
      }
      goto L_0897EF98;
    }
L_0897EF98:
    ctx.gpr[31] = (0x0897EFA0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EFA0u) goto L_0897EFA0;
    return;
L_0897EFA0:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    goto L_0897EFA4;
L_0897EFA4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_0897EFB0;
L_0897EFB0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EFF4;
      }
      goto L_0897EFBC;
    }
L_0897EFBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9232)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16748)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[31] = (0x0897EFE4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_0897F0A0;
L_0897EFE4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_0897EF78;
      }
      goto L_0897EFF4;
    }
L_0897EFF4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F00C;
      }
      goto L_0897F000;
    }
L_0897F000:
    ctx.gpr[31] = (0x0897F008u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 616u, 0x08A1BF34u>(ctx, &aot_mem) && ctx.pc == 0x0897F008u) goto L_0897F008;
    return;
L_0897F008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0897F00C;
L_0897F00C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_0897F044;
    }
    goto L_0897F014;
L_0897F014:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0897F020u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897F020u) goto L_0897F020;
    return;
L_0897F020:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F038;
      }
      goto L_0897F02C;
    }
L_0897F02C:
    ctx.gpr[31] = (0x0897F034u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F034u) goto L_0897F034;
    return;
L_0897F034:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0897F038;
L_0897F038:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_0897F044;
L_0897F044:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9232)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16748)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F07C;
      }
      goto L_0897F074;
    }
L_0897F074:
    ctx.gpr[31] = (0x0897F07Cu);
    // nop
    goto L_0897F774;
L_0897F07C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F0A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
      if (branch_taken) {
          goto L_0897F0F0;
      }
      goto L_0897F0E4;
    }
L_0897F0E4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[14];
    goto L_0897F0F0;
L_0897F0F0:
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[22];
    ctx.gpr[4] = (49998u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897F1B8;
      }
      goto L_0897F110;
    }
L_0897F110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897F1B8;
      }
      goto L_0897F138;
    }
L_0897F138:
    ctx.gpr[5] = (17279u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0897F148u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x0897F148u) goto L_0897F148;
    return;
L_0897F148:
    ctx.gpr[31] = (0x0897F150u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem) && ctx.pc == 0x0897F150u) goto L_0897F150;
    return;
L_0897F150:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.gpr[4] = (0u | 220u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0897F17Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x0897F17Cu) goto L_0897F17C;
    return;
L_0897F17C:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[13];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897F1B0u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0897F1B0u) goto L_0897F1B0;
    return;
L_0897F1B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0897F1BC;
      }
      goto L_0897F1B8;
    }
L_0897F1B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_0897F1BC;
L_0897F1BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F1D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0897F230;
      }
      goto L_0897F224;
    }
L_0897F224:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0897F23C;
      }
      goto L_0897F230;
    }
L_0897F230:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_0897F23C;
L_0897F23C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F298;
      }
      goto L_0897F244;
    }
L_0897F244:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x0897F25Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x0897F25Cu) goto L_0897F25C;
    return;
L_0897F25C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0897F298;
      }
      goto L_0897F274;
    }
L_0897F274:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x0897F288u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x0897F288u) goto L_0897F288;
    return;
L_0897F288:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0897F298;
L_0897F298:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0897F2CC;
      }
      goto L_0897F2A8;
    }
L_0897F2A8:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
        goto L_0897F2C4;
    }
    goto L_0897F2B0;
L_0897F2B0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    goto L_0897F2C4;
L_0897F2C4:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0897F2A8;
      }
      goto L_0897F2CC;
    }
L_0897F2CC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0897F300;
      }
      goto L_0897F2DC;
    }
L_0897F2DC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F2F4;
      }
      goto L_0897F2E4;
    }
L_0897F2E4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_0897F2F4;
L_0897F2F4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0897F330;
      }
      goto L_0897F300;
    }
L_0897F300:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0897F32C;
      }
      goto L_0897F308;
    }
L_0897F308:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_0897F324;
    }
    goto L_0897F310;
L_0897F310:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_0897F324;
L_0897F324:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0897F308;
      }
      goto L_0897F32C;
    }
L_0897F32C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0897F330;
L_0897F330:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F370;
      }
      goto L_0897F338;
    }
L_0897F338:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0897F370;
      }
      goto L_0897F348;
    }
L_0897F348:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
        goto L_0897F364;
    }
    goto L_0897F350;
L_0897F350:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_0897F364;
L_0897F364:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0897F348;
      }
      goto L_0897F36C;
    }
L_0897F36C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0897F370;
L_0897F370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0897F38C;
      }
      goto L_0897F380;
    }
L_0897F380:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_0897F384;
L_0897F384:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0897F384;
      }
      goto L_0897F38C;
    }
L_0897F38C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F39C;
      }
      goto L_0897F394;
    }
L_0897F394:
    ctx.gpr[31] = (0x0897F39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0897F39Cu) goto L_0897F39C;
    return;
L_0897F39C:
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
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
L_0897F3CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16732));
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897F420u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x0897F420u) goto L_0897F420;
    return;
L_0897F420:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0897F458;
      }
      goto L_0897F42C;
    }
L_0897F42C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0897F438u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897F438u) goto L_0897F438;
    return;
L_0897F438:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F450;
      }
      goto L_0897F444;
    }
L_0897F444:
    ctx.gpr[31] = (0x0897F44Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F44Cu) goto L_0897F44C;
    return;
L_0897F44C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0897F450;
L_0897F450:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897F458;
L_0897F458:
    ctx.gpr[31] = (0x0897F460u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 492u, 0x089F6818u>(ctx, &aot_mem) && ctx.pc == 0x0897F460u) goto L_0897F460;
    return;
L_0897F460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9236)));
    ctx.gpr[5] = (0u | 48u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16748), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9232)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16752), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[16]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] >> 29u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0897F4C0;
      }
      goto L_0897F49C;
    }
L_0897F49C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0897F49C;
      }
      goto L_0897F4BC;
    }
L_0897F4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9236)));
    goto L_0897F4C0;
L_0897F4C0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_0897F4DC;
      }
      goto L_0897F4D0;
    }
L_0897F4D0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_0897F4D4;
L_0897F4D4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0897F4D4;
      }
      goto L_0897F4DC;
    }
L_0897F4DC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9236), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9232));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (17391u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (17287u << 16u);
    ctx.gpr[21] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16720));
    goto L_0897F51C;
L_0897F51C:
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_0897F550;
    }
    goto L_0897F524;
L_0897F524:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0897F530u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897F530u) goto L_0897F530;
    return;
L_0897F530:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F548;
      }
      goto L_0897F53C;
    }
L_0897F53C:
    ctx.gpr[31] = (0x0897F544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F544u) goto L_0897F544;
    return;
L_0897F544:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0897F548;
L_0897F548:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_0897F550;
L_0897F550:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F730;
      }
      goto L_0897F55C;
    }
L_0897F55C:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0897F57Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x0897F57Cu) goto L_0897F57C;
    return;
L_0897F57C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0897F5B4;
      }
      goto L_0897F588;
    }
L_0897F588:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0897F594u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897F594u) goto L_0897F594;
    return;
L_0897F594:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F5AC;
      }
      goto L_0897F5A0;
    }
L_0897F5A0:
    ctx.gpr[31] = (0x0897F5A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F5A8u) goto L_0897F5A8;
    return;
L_0897F5A8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0897F5AC;
L_0897F5AC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0897F5B4;
L_0897F5B4:
    ctx.gpr[31] = (0x0897F5BCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 441u, 0x089F64FCu>(ctx, &aot_mem) && ctx.pc == 0x0897F5BCu) goto L_0897F5BC;
    return;
L_0897F5BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F5E0;
      }
      goto L_0897F5C4;
    }
L_0897F5C4:
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0897F5E0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x0897F5E0u) goto L_0897F5E0;
    return;
L_0897F5E0:
    ctx.gpr[31] = (0x0897F5E8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x0897F5E8u) goto L_0897F5E8;
    return;
L_0897F5E8:
    ctx.gpr[31] = (0x0897F5F0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem) && ctx.pc == 0x0897F5F0u) goto L_0897F5F0;
    return;
L_0897F5F0:
    ctx.gpr[31] = (0x0897F5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem) && ctx.pc == 0x0897F5F8u) goto L_0897F5F8;
    return;
L_0897F5F8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0897F62C;
      }
      goto L_0897F604;
    }
L_0897F604:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0897F610u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897F610u) goto L_0897F610;
    return;
L_0897F610:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F628;
      }
      goto L_0897F61C;
    }
L_0897F61C:
    ctx.gpr[31] = (0x0897F624u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F624u) goto L_0897F624;
    return;
L_0897F624:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0897F628;
L_0897F628:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0897F62C;
L_0897F62C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897F638u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0897F638u) goto L_0897F638;
    return;
L_0897F638:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0897F654u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x0897F654u) goto L_0897F654;
    return;
L_0897F654:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897F668u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 93u, 0x08B0C6DCu>(ctx, &aot_mem) && ctx.pc == 0x0897F668u) goto L_0897F668;
    return;
L_0897F668:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F688;
    }
L_0897F688:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0897F694u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0897F694u) goto L_0897F694;
    return;
L_0897F694:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F6AC;
      }
      goto L_0897F6A0;
    }
L_0897F6A0:
    ctx.gpr[31] = (0x0897F6A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F6A8u) goto L_0897F6A8;
    return;
L_0897F6A8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0897F6AC;
L_0897F6AC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0897F6B0;
L_0897F6B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897F6BCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0897F6BCu) goto L_0897F6BC;
    return;
L_0897F6BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9236)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9240)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897F6FC;
      }
      goto L_0897F6D0;
    }
L_0897F6D0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0897F6F0;
      }
      goto L_0897F6D8;
    }
L_0897F6D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9236)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_0897F6F0;
L_0897F6F0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9236), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_0897F720;
      }
      goto L_0897F6FC;
    }
L_0897F6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0897F71Cu);
    ctx.gpr[9] = (0u | 1u);
    goto L_0897F1D8;
L_0897F71C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0897F720;
L_0897F720:
    ctx.gpr[22] = (ctx.gpr[18] + ctx.gpr[22]);
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0897F51C;
      }
      goto L_0897F730;
    }
L_0897F730:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
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
L_0897F774:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9236)));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9232)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16752), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (ctx.gpr[8] >> 29u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0897F7CC;
      }
      goto L_0897F7A8;
    }
L_0897F7A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0897F7A8;
      }
      goto L_0897F7C8;
    }
L_0897F7C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9236)));
    goto L_0897F7CC;
L_0897F7CC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0897F7E4;
      }
      goto L_0897F7D8;
    }
L_0897F7D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_0897F7DC;
L_0897F7DC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0897F7DC;
      }
      goto L_0897F7E4;
    }
L_0897F7E4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9236), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F7F0:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16752)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F7FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897F80Cu);
    // nop
    goto L_0897F774;
L_0897F80C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897F888;
      }
      goto L_0897F834;
    }
L_0897F834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0897F854;
      }
      goto L_0897F848;
    }
L_0897F848:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_0897F84C;
L_0897F84C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0897F84C;
      }
      goto L_0897F854;
    }
L_0897F854:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_0897F878;
    }
    goto L_0897F85C;
L_0897F85C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_0897F878;
    }
    goto L_0897F864;
L_0897F864:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_0897F878;
    }
    goto L_0897F86C;
L_0897F86C:
    ctx.gpr[31] = (0x0897F874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0897F874u) goto L_0897F874;
    return;
L_0897F874:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_0897F878;
L_0897F878:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F888;
      }
      goto L_0897F880;
    }
L_0897F880:
    ctx.gpr[31] = (0x0897F888u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0897F888u) goto L_0897F888;
    return;
L_0897F888:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F89C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9232), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9236), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9240), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897F8B8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16692));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0897F8B8u) goto L_0897F8B8;
    return;
L_0897F8B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F8C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897F8D8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0897F924;
L_0897F8D8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F8F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_0897F918;
      }
      goto L_0897F908;
    }
L_0897F908:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F918;
      }
      goto L_0897F910;
    }
L_0897F910:
    ctx.gpr[31] = (0x0897F918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0897F918u) goto L_0897F918;
    return;
L_0897F918:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897F93Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B73434u;
    return;
L_0897F93C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x0897F94Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B7352Cu;
    return;
L_0897F94C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16676)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16680)));
    ctx.gpr[31] = (0x0897F960u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F960u) goto L_0897F960;
    return;
L_0897F960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F9B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897F9D0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B73434u;
    return;
L_0897F9D0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x0897F9E0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B7352Cu;
    return;
L_0897F9E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16676)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16680)));
    ctx.gpr[31] = (0x0897F9F4u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F9F4u) goto L_0897F9F4;
    return;
L_0897F9F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    ctx.gpr[19] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[19] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[31] = (0x0897FA30u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 183u, 0x08B60EC8u>(ctx, &aot_mem) && ctx.pc == 0x0897FA30u) goto L_0897FA30;
    return;
L_0897FA30:
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0897FA60;
      }
      goto L_0897FA5C;
    }
L_0897FA5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897FA60;
L_0897FA60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FAA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 1920u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897FAFCu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x0897FAFCu) goto L_0897FAFC;
    return;
L_0897FAFC:
    ctx.gpr[20] = (2238u << 16u);
    ctx.gpr[21] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-6992));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_0897FB30;
      }
      goto L_0897FB18;
    }
L_0897FB18:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897FB2Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem) && ctx.pc == 0x0897FB2Cu) goto L_0897FB2C;
    return;
L_0897FB2C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0897FB30;
L_0897FB30:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0897FB50u);
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem) && ctx.pc == 0x0897FB50u) goto L_0897FB50;
    return;
L_0897FB50:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0897FB5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 160u, 0x08AD0AE4u>(ctx, &aot_mem) && ctx.pc == 0x0897FB5Cu) goto L_0897FB5C;
    return;
L_0897FB5C:
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897FB6Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 916u, 0x0885F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0897FB6Cu) goto L_0897FB6C;
    return;
L_0897FB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | 192u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0897FB9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem) && ctx.pc == 0x0897FB9Cu) goto L_0897FB9C;
    return;
L_0897FB9C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(439), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(433), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(427), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0897FBECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897FBECu) goto L_0897FBEC;
    return;
L_0897FBEC:
    ctx.gpr[31] = (0x0897FBF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0897FBF4u) goto L_0897FBF4;
    return;
L_0897FBF4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_0897FC18;
    }
    goto L_0897FBFC;
L_0897FBFC:
    ctx.gpr[31] = (0x0897FC04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0897FC04u) goto L_0897FC04;
    return;
L_0897FC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | 208u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_0897FC18;
L_0897FC18:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0897FC70;
      }
      goto L_0897FC40;
    }
L_0897FC40:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0897FC50u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x0897FC50u) goto L_0897FC50;
    return;
L_0897FC50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_0897FC70;
L_0897FC70:
    ctx.gpr[31] = (0x0897FC78u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x0897FC78u) goto L_0897FC78;
    return;
L_0897FC78:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0897FC90;
      }
      goto L_0897FC88;
    }
L_0897FC88:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897FCBC;
      }
      goto L_0897FC90;
    }
L_0897FC90:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x0897FCA8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x0897FCA8u) goto L_0897FCA8;
    return;
L_0897FCA8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0897FCB4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 223u, 0x08A1D2D8u>(ctx, &aot_mem) && ctx.pc == 0x0897FCB4u) goto L_0897FCB4;
    return;
L_0897FCB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FCD4;
      }
      goto L_0897FCBC;
    }
L_0897FCBC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x0897FCD4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x0897FCD4u) goto L_0897FCD4;
    return;
L_0897FCD4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FD10:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (2238u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] & 255u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(612)));
    ctx.gpr[8] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0897FDD4;
      }
      goto L_0897FD4C;
    }
L_0897FD4C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (0u | 5u);
    ctx.gpr[8] = (ctx.gpr[8] & 496u);
    ctx.gpr[8] = (ctx.gpr[8] >> 4u);
    if (ctx.gpr[8] == ctx.gpr[9]) {
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(ctx.gpr[4]));
        goto L_0897FD9C;
    }
    goto L_0897FD64;
L_0897FD64:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] | 64u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897FD9C;
L_0897FD9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5444)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5444), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] << 8u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5436), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] << 5u);
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_0897FDD4;
L_0897FDD4:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(220), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(ctx.gpr[7]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FE18:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FE38:
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
L_0897FE60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3872));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    goto L_0897FE90;
L_0897FE90:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0897FE90;
      }
      goto L_0897FEC0;
    }
L_0897FEC0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9264), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FECC:
    ctx.gpr[7] = (2247u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-3872));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9264), 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (0u | 2u);
    goto L_0897FEE8;
L_0897FEE8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FF28;
      }
      goto L_0897FEF4;
    }
L_0897FEF4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (ctx.gpr[9] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FF10;
      }
      goto L_0897FF04;
    }
L_0897FF04:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FF18;
      }
      goto L_0897FF10;
    }
L_0897FF10:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), 0u);
    goto L_0897FF18;
L_0897FF18:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897FF28;
      }
      goto L_0897FF24;
    }
L_0897FF24:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_0897FF28;
L_0897FF28:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0897FEE8;
      }
      goto L_0897FF38;
    }
L_0897FF38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FF40:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2247u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3872));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    goto L_0897FF54;
L_0897FF54:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897FFB4;
      }
      goto L_0897FF60;
    }
L_0897FF60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897FFB4;
      }
      goto L_0897FF78;
    }
L_0897FF78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897FFB4;
      }
      goto L_0897FF90;
    }
L_0897FF90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897FFB4;
      }
      goto L_0897FFA8;
    }
L_0897FFA8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FFCC;
      }
      goto L_0897FFB4;
    }
L_0897FFB4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0897FF54;
      }
      goto L_0897FFC4;
    }
L_0897FFC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FFDC;
      }
      goto L_0897FFCC;
    }
L_0897FFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 8u, 0x08980078u>(ctx, &aot_mem); return;
      }
      goto L_0897FFDC;
    }
L_0897FFDC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9264)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 4u, 0x0898001Cu>(ctx, &aot_mem); return;
      }
      goto L_0897FFEC;
    }
L_0897FFEC:
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    goto L_0897FFF8;
L_0897FFF8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 3u, 0x0898000Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 2u, 0x08980004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0094(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0094_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_94(Runtime &runtime) {
    runtime.register_generated_unit(94u, 0x0897C000u, 16384u, &recomp_unit_0094, &recomp_unit_0094_entry);
    runtime.register_function(0x0897C000u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C004u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C028u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C030u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C038u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C048u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C054u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C05Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C060u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C078u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C084u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C08Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C098u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C0A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C0C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C0D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C0D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C0DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C0E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C104u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C11Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C148u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C154u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C168u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C17Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C184u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C198u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C19Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C1A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C1B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C1B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C218u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C224u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C22Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C230u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C240u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C330u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C338u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C34Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C358u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C360u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C364u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C370u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C434u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C43Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C444u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C44Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C458u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C460u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C464u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C46Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C478u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C480u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C484u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C48Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C494u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C504u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C508u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C510u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C518u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C520u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C530u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C538u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C544u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C54Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C550u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C558u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C564u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C56Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C574u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C57Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C584u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C58Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C594u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C59Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C600u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C604u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C60Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C614u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C61Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C62Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C634u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C640u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C648u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C650u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C65Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C664u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C66Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C674u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C67Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C684u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C694u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C704u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C70Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C714u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C71Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C724u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C72Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C73Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C740u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C74Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C75Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C768u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C76Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C770u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C778u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C788u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C794u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C79Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C808u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C814u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C81Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C820u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C828u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C830u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C840u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C848u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C908u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C914u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C91Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C920u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C928u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C930u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C950u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C95Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C968u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C970u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C978u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C980u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C98Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C994u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C998u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CACCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB40u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC4Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCBCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCD0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD48u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD4Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDBCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE48u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE8Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CED0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D000u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D018u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D030u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D038u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D050u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D058u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D05Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D068u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D07Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D090u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D09Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D114u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D12Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D134u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D14Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D154u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D158u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D164u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D170u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D178u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D17Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D188u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D200u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D210u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D218u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D220u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D230u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D244u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D254u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D268u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D26Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D280u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D290u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D294u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D30Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D310u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D314u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D344u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D34Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D380u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D388u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D400u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D408u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D40Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D418u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D420u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D428u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D430u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D438u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D440u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D444u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D44Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D454u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D45Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D464u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D478u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D47Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D48Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D510u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D514u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D53Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D550u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D560u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D598u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D628u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D630u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D634u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D63Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D644u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D64Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D654u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D65Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D664u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D668u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D670u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D678u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D680u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D688u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D69Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D700u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D708u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D710u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D730u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D734u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D75Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D770u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D780u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D804u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D808u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D838u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D840u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D844u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D84Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D854u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D85Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D864u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D86Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D874u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D878u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D880u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D888u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D890u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D898u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D904u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D90Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D914u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D91Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D924u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D944u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D948u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D970u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D984u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D994u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DABCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAD0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAE4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC40u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC8Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCD0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCD8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD4Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DED0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEE4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E020u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E028u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E02Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E068u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E078u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E084u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E08Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E09Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E0E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E0E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E0F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E100u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E10Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E114u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E118u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E11Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E128u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E14Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E160u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E204u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E210u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E218u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E220u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E228u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E230u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E238u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E23Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E268u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E270u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E288u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E294u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E29Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E300u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E308u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E30Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E314u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E31Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E33Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E340u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E348u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E350u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E358u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E420u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E428u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E43Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E440u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E448u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E450u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E45Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E464u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E470u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E47Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E488u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E490u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E494u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E49Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E534u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E53Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E568u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E598u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E65Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E678u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E688u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E694u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E69Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E700u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E760u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E768u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E804u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E80Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E81Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E828u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E830u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E834u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E83Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E848u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E850u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E85Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E868u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E870u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E874u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E878u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E884u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E894u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E89Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E900u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E904u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E90Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E920u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E930u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E934u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E93Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E948u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA40u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA48u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAD8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBBCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBD8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC8Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED40u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDE4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE8Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EECCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EED4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEE4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF8Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFBCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFE4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F000u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F008u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F00Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F014u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F020u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F02Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F034u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F038u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F044u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F074u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F07Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F110u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F138u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F148u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F150u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F17Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F224u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F230u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F23Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F244u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F25Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F274u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F288u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F298u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F300u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F308u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F310u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F324u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F32Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F330u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F338u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F348u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F350u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F364u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F36Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F370u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F380u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F384u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F38Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F394u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F39Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F420u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F42Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F438u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F444u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F44Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F450u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F458u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F460u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F49Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F51Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F524u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F530u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F53Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F544u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F548u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F550u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F55Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F57Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F588u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F594u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F604u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F610u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F61Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F624u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F628u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F62Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F638u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F654u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F668u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F688u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F694u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F71Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F720u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F730u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F774u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F80Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F818u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F834u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F848u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F84Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F854u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F85Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F864u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F86Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F874u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F878u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F880u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F888u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F89Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F908u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F910u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F918u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F924u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F93Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F94Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F960u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FAA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FAFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC40u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCBCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD4Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FDD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FECCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF40u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFF8u, &recomp_unit_0094, "recomp_unit_0094");
}
} // namespace psprecomp
